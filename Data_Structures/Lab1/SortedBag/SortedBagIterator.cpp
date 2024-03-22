#include "SortedBagIterator.h"
#include "SortedBag.h"
#include <exception>

using namespace std;

SortedBagIterator::SortedBagIterator(const SortedBag& b) : bag(b), current_index(0) {}

TComp SortedBagIterator::getCurrent() {
	if(!valid()){
		return NULL_TCOMP;
	}

	
}

bool SortedBagIterator::valid() {
	//TODO - Implementation
	return false;
}

void SortedBagIterator::next() {
	current_index++;
}

void SortedBagIterator::first() {
	current_index = 0;
}

