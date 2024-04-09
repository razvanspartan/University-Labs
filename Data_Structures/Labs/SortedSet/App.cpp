#include "ShortTest.h"
#include "ExtendedTest.h"
#include "SortedSet.h"
#include "SortedSetIterator.h"
#include <iostream>
//SortedSet represented on a SLL
using namespace std;

int main() {
	testAll();
	testAllExtended();

	cout << "Test end" << endl;
	system("pause");
}