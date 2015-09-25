strList::strList()
{
    head = NULL;
    tail = NULL;
    listSize = 0;
}

strList::strList(const char* s) {
    head = new strListNode;
    head->data = s;
    head->nextNode = NULL;
    tail = head;
    listSize = 1;
}

strList::strList(cString& s) {
    head = new strListNode;
    head->data = s;
    head->nextNode = NULL;
    tail = head;
    listSize = 1;
}

strList::strList(strList& sl) {
    head = NULL;
    tail = NULL;
    listSize = 0;
    // make a copy of list sl
    copyList(sl);
}

strList::~strList() {
    clear();
}

void strList::copyList(strList& sl) {
    cString s;

    for (unsigned i = 1; i <= sl.listSize; i++) {
        sl.get(s, i, 1);
        insert(s);
    }
}

void strList::clear() {
    strListNode* p = head;

    // loop to delete the nodes
    while (head) {
        head = p->nextNode;
        delete p;
        p = head;
    }
    tail = NULL;
    listSize = 0;
}

void strList::insert(const cString& s, unsigned after) {
    strListNode *p, *q, *r;

    if (head) {
        if (after > listSize) { // new tail
            // allocate new list node
            r = new strListNode;
            r->data = s;
            r->nextNode = NULL;
            // link old tail node to new one
            tail->nextNode = r;
            tail = r; // update tail pointer
        }
        else if (after > 0) { // insert inside the list
            p = head;
            q = NULL;
            // find the correct node node
            while (after-- > 0 && p) {
                q = p;
                p = p->nextNode;
            }
            r = new strListNode;
            r->data = s;
            r->nextNode = p;
            q->nextNode = r;
        }
        else { // new head
            p = new strListNode;
            p->data = s;
            p->nextNode = head;
            head = p;
        }
    }
    else { // insert the first node in the list
        head = new strListNode;
        head->data = s;
        head->nextNode = NULL;
        tail = head;
    }
    listSize++;
}

void strList::remove(unsigned start, unsigned count) {
    strListNode *p, *q, *r;

    if (start > 0 && start <= listSize) {
        if (start > 1) {
            p = head;
            r = NULL;
            while (start-- > 1 && p) {
                r = p;
                p = p->nextNode;
            }
            while (count-- > 0 && p) {
                q = p;
                p = p->nextNode;
                delete q;
                listSize--;
            }
            r->nextNode = p;
            if (!p)
                tail = q; // update tail pointer
        }
        else {
            while (count-- > 0 && head) {
                p = head;
                head = head->nextNode;
                delete p;
                listSize--;
            }
            if (!head) // is the entire list deleted?
                tail = NULL; // make tail point to NULL
        }
    }
}

///////////////////////////////////////////////////////////////////
//
void strList::get(cString& s,
                  unsigned start,
                  unsigned count,
                  const char delim)
//
// Purpose: obtains one or more string objects from the list.  The
// argument for parameter s returns the extracted strings delimited
// by character delim.
//
//
// Parameters:
//
//    input: start - the index of the first node whose string
//             is obtained.
//           count - the number of string objects to retrieve.
//           delim - the character that delimits the extracted
//             strings.
//
//    output: s - the string that contains the extracted characters.
//
{
    strListNode *p;

    if (start > 0 && start <= listSize) {
        p = head;
        // find the start'th node
        while (start-- > 1)
            p = p->nextNode;
        s = "";
        while (count-- > 0 && p) {
            s = s + p->data + delim;
            p = p->nextNode;
        }
        s.trimright(delim); // delete the tail "delim" character
    }
    else
        s = ""; // return empty cString s
}

///////////////////////////////////////////////////////////////////
//
void strList::sort(strList& sl)
//
// Purpose: sorts the nodes of list sl using an local array and
// the new Combsort method.  The sorted list is assigned to this
// list.
//
// Parameters:
//
//    input: sl - the source list object.
//
{
    cString *p;
    cString s;
    unsigned i, j, offset, n = sl.listSize;
    boolean inorder;

    // there are "n" elements in the array of "cString".
    // element 0 is used to swap strings, while elements
    // 1..n are used to store the words
    p = new cString[n+1];
    for (i = 1; i <= n; i++) {
        sl.get(s, i, 1);
        *(p+i) = s;
    }
    // start Combsort method
    offset = n;
    do {
      offset = (8 * offset) / 11;
      offset = (offset == 0) ? 1 : offset;
      inorder = true;
      for (i = 1; i <= (n - offset); i++) {
        j = i + offset;
        if (*(p + i) > *(p + j)) {
          inorder = false;
          *p = *(p + i);
          *(p + i) = *(p + j);
          *(p + j) = *p;
        }
      }
    } while (!(inorder == true && offset == 1));
    clear(); // clear the current object
    // insert the sorted words
    for (i = 1; i <= n; i++)
        insert(*(p+i));
    delete [] p; // delete array of cStrings
}

///////////////////////////////////////////////////////////////////
//
void strList::reverse(strList& sl)
//
// Purpose: reverses the order of the nodes of list sl and stores
// the reversed nodes in this list.
//
// Parameters:
//
//    input: sl - the source list object.
//
{
    cString s;

    clear(); // clear this list
    for (unsigned i = 1; i <= sl.listSize; i++) {
        sl.get(s, i, 1);
        insert(s, 0); // insert as the new head
    }
}

///////////////////////////////////////////////////////////////////
//
strList& strList::operator =(strList& sl)
//
// Purpose: copies the list sl to this list.
//
// Parameters:
//
//    input: sl - the source list object.
//
{
    if (head)
        clear();
    copyList(sl);
    return *this;
}

///////////////////////////////////////////////////////////////////
//
strList operator +(strList& sl1, strList& sl2)
//
// Purpose: adds the lists sl1 and sl2.
//
// Parameters:
//
//    input: sl1 - the first operand.
//           sl2 - the second operand.
//
{
    strList result;

    result.copyList(sl1);
    result.copyList(sl2);
    return result;
}

///////////////////////////////////////////////////////////////////
//
strList& strList::operator +=(strList& sl)
//
// Purpose: appends the list sl to this list.
//
// Parameters:
//
//    input: sl - the appended list object.
//
{
    copyList(sl);
    return *this;
}

///////////////////////////////////////////////////////////////////
//
int operator ==(strList& sl1, strList& sl2)
//
// Purpose: compares the lists sl1 and sl2.  The function returns
// 1 if the two lists are equivalent.  Otehrwise, the function
// yields 0.
//
// Parameters:
//
//    input: sl1, sl2 - the compared list objects.
//
{
    strListNode* p1;
    strListNode* p2;

    if (sl1.listSize != sl2.listSize)
        return 0;
    p1 = sl1.head;
    p2 = sl2.head;
    // compare each node
    while (p1 && p2) {
        if (p1->data != p2->data)
            return 0;
        p1 = p1->nextNode;
        p2 = p2->nextNode;
    }
    // lists are equivalent
    return 1;
}
