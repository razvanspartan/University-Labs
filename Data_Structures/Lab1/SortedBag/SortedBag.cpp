#include "SortedBag.h"
#include "SortedBagIterator.h"

SortedBag::SortedBag(Relation r)  {
	//TODO - Implementation
}

void SortedBag::add(TComp e) {
	for(int i=0; i<elements.size(); i++){
		if(elements[i] >= e){
			for(int j=i+1; j<elements.size(); j++){
				elements[j] = elements[j-1];
			elements[i] = e;
			return;
			}
		}
	}
}


bool SortedBag::remove(TComp e) {
	if (elements.search(e) == true) {
		for(int i=0; i<elements.size(); i++){
			if(elements[i] == e){
				for(int j=i; j<elements.size()- 1; j++){
					elements[j] = elements[j+1];
				}
				return true;
			}
		}
	}
	return false;
}


bool SortedBag::search(TComp elem) const {
	for(int i=0; i<elements.size(); i++){
		if(elements[i] == elem){
			return true;
		}
	}
	return false;
}


int SortedBag::nrOccurrences(TComp elem) const {
	int nr = 0;
	for (int i = 0; i < elements.size(); i++) {
		if (elements[i] == elem) {
			nr++;
		}
	}
	return nr;
}



int SortedBag::size() const {
	//TODO - Implementation
	return elements.size();
}


bool SortedBag::isEmpty() const {
	if(elements.size() == 0){
		return true;
	}
	return false;
}


SortedBagIterator SortedBag::iterator() const {
	return SortedBagIterator(*this);
}


SortedBag::~SortedBag() {
	//TODO - Implementation
}
