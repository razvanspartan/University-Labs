#include "SortedSet.h"
#include "SortedSetIterator.h"
//n represents the number of nodes in the list
SortedSet::SortedSet(Relation r) {
	head = nullptr;
    relation=r;
}

//average O(n) best case theta(1) worst case O(n)
bool SortedSet::add(TComp elem) {
    Node* newNode = new Node{elem, nullptr};
    Node* temp = head;

    if(head == nullptr){
        head = newNode;
        return true;
    }
    if(search(elem))
        return false;

    if(size()==1) {

        if (relation(elem, temp->value)){
            newNode->next = head;
            head = newNode;
            return true;
        }
        else{
            head->next=newNode;
            return true;
        }
    }
    else{

        Node* behind=temp;
        temp=temp->next;

        if(relation(elem,head->value)){
            newNode->next=head;
            head=newNode;
            return true;
        }


        while(temp != nullptr){
            if(relation(elem, temp->value)){
                behind->next = newNode;
                newNode->next = temp;
                return true;
            }
            behind = temp;
            temp = temp->next;
        }

            behind->next = newNode;
            return true;
        }

}


//Average O(n), best case theta(1), worst case theta(n)
bool SortedSet::remove(TComp elem) {
    if (isEmpty())
        return false;

    Node *temp = head;
    Node *behind = nullptr;

    while (temp != nullptr) {
        if (temp->value == elem) {
            if (behind == nullptr) {
                head = temp->next;
            } else {
                behind->next = temp->next;
            }
            return true;
        }
        behind = temp;
        temp = temp->next;
    }

    return false;
}

//Average O(n), best case theta(1), worst theta(n)
bool SortedSet::search(TComp elem) const {
	Node* temp = head;
    if(head != nullptr) {

        while (temp->next != nullptr) {
            if (temp->value == elem)
                return true;
            temp = temp->next;

        }

        if (temp->value == elem)
            return true;
    }

    return false;
}

//Average O(n) best case theta(1), worst case O(n)
int SortedSet::size() const {
    Node* temp = head;
    if(isEmpty())
        return 0;
    int size=0;
    while(temp != nullptr){
        temp=temp->next;
        size++;
    }
    return size;
}


//Always O(1)
bool SortedSet::isEmpty() const {
	if(head==nullptr)
        return true;
	return false;
}

SortedSetIterator SortedSet::iterator() const {
	return SortedSetIterator(*this);
}

//Average O(n), best theta(1), worst theta(n)
SortedSet::~SortedSet() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
}


