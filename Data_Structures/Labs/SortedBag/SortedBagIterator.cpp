#include "SortedBagIterator.h"
#include "SortedBag.h"
#include <exception>
#include <algorithm>
using namespace std;

SortedBagIterator::SortedBagIterator(const SortedBag& b) : bag(b), current_index(0) {}

//Complexity O(1)
TComp SortedBagIterator::getCurrent() {
	if(!valid()){
        throw exception();
        return NULL_TCOMP
    }

    else {
        return bag.elements[current_index];
    }

	
}
//Complexity O(1)
bool SortedBagIterator::valid() {
    return current_index<bag.size();
}
//Complexity O(1)
void SortedBagIterator::next() {
    if (bag.size()>current_index){
        current_index++;
        return;
    }
    else{
        throw exception();
    }

}
//Complexity O(1)
void SortedBagIterator::first() {
	current_index = 0;
    return;
}

