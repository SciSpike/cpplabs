/*
 * Copyright SciSpike
 *
 * This files an eager allocator EagerAlloc
 */

#ifndef EAGERALLOC_H
#define EAGERALLOC_H

#include <memory>
#include <list>
#include "memblock.h"

using namespace std;

typedef list<MemBlock*, allocator<MemBlock*> > MemBlockList;

template<class T>
class EagerAlloc: public allocator<T> {

private:
    MemBlock            *currentBlock;
    MemBlockList        blockList;
    
public:
    EagerAlloc() {currentBlock = 0; }

    pointer allocate(size_type n, const void *) {

        const unsigned int eagerness = 1024;
        
        if (currentBlock == 0 ||
            currentBlock->remainingSize() < n * sizeof(T)) {

                // pointer currentBlock is saved in the list, so no leak here
            currentBlock = new MemBlock(sizeof(T) * n * eagerness);

            if (currentBlock->isValid())
                blockList.push_front(currentBlock);
            else
                return 0;
        }

        return (pointer)currentBlock->allocate(n * sizeof(T));
    }

    void construct(pointer p, const T& v) {
        new(p) T(v);
    }
        
    void deallocate(pointer p, size_type) {
        MemBlockList::iterator      iter;

        for (iter = blockList.begin(); iter != blockList.end(); iter++) {
            if ((*iter)->allocatedInThisBlockP(p)) {
                (*iter)->deallocate();
                if (!(*iter)->isValid()) {
                    blockList.remove(*iter);
                    if (currentBlock == *iter)
                        currentBlock = 0;
                }
                break;
            }
        }
    }

    void destroy(pointer p) {
        p->~T();
    }
};
#endif
