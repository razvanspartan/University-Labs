#include "SortedBag.h"
#include "SortedBagIterator.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
SortedBag::SortedBag(Relation r)  {
    sizea=0;
    capacity = 10;
    relation = r;
    elements = (TComp*)malloc(capacity*sizeof(TComp));

}

//Complexity O(n), best case O(1) and worst O(n)
void SortedBag::add(TComp e) {
        if (sizea == capacity) {
            capacity *= 2;
            elements = (TComp*)realloc(elements, capacity * sizeof(TComp));
            if (elements == nullptr) {
                std::cerr << "Failed to resize the dynamic array." << std::endl;
                return;
            }
        }

        int i;
        for (i = sizea - 1; i >= 0; i--) {
            if (this->relation(elements[i],e)) {
                break;
            }
            elements[i + 1] = elements[i];
        }


        elements[i + 1] = e;
        sizea++;
    }

//Complexity O(n), worst case O(n)
bool SortedBag::remove(TComp e) {

    for(int i = 0; i < sizea; i++){
        if (elements[i]==e) {
            for(int j = i; j < sizea-1; j++)
                elements[j]=elements[j+1];
            sizea--;
            return true;
        }
    }
    return false;

}

//Best case Theta(1), worst case Theta(log2n)
bool SortedBag::search(TComp elem) const {

    for(int i = 0; i < sizea; i++){
        if (elements[i]==elem) return true;
    }
    return false;

}

//Complexity O(n) always
int SortedBag::nrOccurrences(TComp elem) const {
	int nr = 0;
	for (int i = 0; i < sizea; i++) {
		if (elements[i] == elem) {
			nr++;
		}
	}
	return nr;
}


//Complexity O(1)
int SortedBag::size() const {
	return sizea;
}

//Complexity O(1)
bool SortedBag::isEmpty() const {
	if(sizea == 0){
		return true;
	}
	return false;
}

//Complexity O(1)
SortedBagIterator SortedBag::iterator() const {
	return SortedBagIterator(*this);
}

//Complexity O(1)
SortedBag::~SortedBag() {
    free(elements);
}
