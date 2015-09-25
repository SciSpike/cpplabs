/*
 * Copyright SciSpike
 *
 * This defines a memory block which is used by EagerAlloc
 */

#ifndef MEMBLOCK_H
#define MEMBLOCK_H

class MemBlock {

public:
    MemBlock(unsigned int blockSize) {

        beginAddr = (unsigned long)new char[blockSize];

        valid = 0;
        
        if (beginAddr) {
            currentAddr = beginAddr;
            endAddr = beginAddr +  blockSize;

            refCount = 0;
            valid = 1;
            next = 0;
        }
    }

    ~MemBlock() {
        if (beginAddr != 0)
            delete (void*)beginAddr;
    }

    int isValid() {
        return valid;
    }
        
    int allocatedInThisBlockP(void *ptr) {
        return (((unsigned long)ptr) >= beginAddr &&
                ((unsigned long)ptr) < endAddr);
    }

    unsigned int remainingSize() {
        return (endAddr - currentAddr);
    }

    void *allocate(unsigned int sizeWanted) {
        void *rslt = 0;
        
        if (sizeWanted <= this->remainingSize()) {
            rslt = (void*)currentAddr;
            currentAddr += sizeWanted;
            refCount++;
        }

        return rslt;
    }

    void deallocate() {
        refCount--;

        if (refCount <= 0) {
            delete (void*)beginAddr;
            beginAddr = 0;
        }

        valid = 0;
    }                 
        
private:
    unsigned long       beginAddr;
    unsigned long       endAddr;
    unsigned long       currentAddr;
    
    unsigned int        refCount;
    int                 valid;
    MemBlock            *next;
};
    
    
#endif
