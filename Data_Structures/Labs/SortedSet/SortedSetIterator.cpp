#include "SortedSetIterator.h"
#include <exception>

using namespace std;
//n represents the number of nodes in the list
SortedSetIterator::SortedSetIterator(const SortedSet& m) : multime(m), index(0)
{
}

//Always O(1)
void SortedSetIterator::first() {
	index = 0;
}

//Always O(1)
void SortedSetIterator::next() {
	if(multime.isEmpty() or multime.size()<=index)
        throw exception();
    else
        index++;
}

//Average O(n), best case theta(1) worst case theta(n)
TElem SortedSetIterator::getCurrent()
{
    if(!valid())
        throw exception();
	Node* temp = multime.head;
    int newIndex=0;
    if(temp== nullptr)
        throw exception();
    if(index==0)
        return temp->value;
    while(temp->next != nullptr) {
        if (newIndex == index)
            return temp->value;
        temp=temp->next;
        newIndex++;
    }
    if (newIndex == index)
        return temp->value;


	return NULL_TELEM;
}
//Always O(1)
bool SortedSetIterator::valid() const {
    return !(multime.isEmpty() or multime.size()<=index);
}

