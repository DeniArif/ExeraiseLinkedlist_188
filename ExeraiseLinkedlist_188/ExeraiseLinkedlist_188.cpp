#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int rollNumber;
	string name;
	Node* next;
};
class CircularLinkedList {
private:
	Node* LAST;
public:
	CircularLinkedList() {
		LAST = NULL;
	}void addNode();
	bool search(int rollno, Node** Dio, Node** Arya);
	bool listEmpty();
	bool delNode();
	void traverse();
};

void CircularLinkedList::addNode() {
	int nim;
	string na;
	cout << "\nEnter the rollnumber of the student: ";
	cin >> nim;
	cout << "\nEnter the name of the student: ";
	cin >> na;
	Node* newNode = new Node();
	newNode->rollNumber = nim;
	newNode->name = na;


	if (LAST == NULL || nim <= LAST->rollNumber) {
		if (LAST != NULL && nim == LAST->rollNumber) {
			cout << "\nDuplicate number not allowed" << endl;
			return;
		}
		newNode->next = LAST;
		if (LAST != NULL)
			LAST->rollNumber = newNode;
		newNode->rollNumber = NULL;
		LAST = newNode;
		return;
	}
	bool CircularLinkedList::search(int roolno, Node * *previous, Node * *currentO) {
		*previous = LAST->next;
		*current = LAST->next;

		while (current != LAST) {
			if (rollno == (*current)->rollNumber) {
				return true;
			}
		}

	}