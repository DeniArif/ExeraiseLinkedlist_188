#include <iostream>
#include <string>
using namespace std;

class Node {
public: 
	string rollNumber;
	string name;
	Node* next;
};

class CircularLinkedList {
private:
	Node* LAST;

public:
	CircularLinkedList() {
		LAST = NULL;
	}

	void addNode();
	bool search(int rollno, Node** previous, Node** current);
	bool listEmpty();
	bool delNode();
	void traverse();
};

void CircularLinkedList::addNode() {
	int nim;
	string na;
	cout << "\nEnter thr rollnumber of the student: ";
	cin >> nim;
	cout << "\nEnter the name of the student: ";
	cin >> na;
	Node* newNode = new Node();
	newNode->rollNumber = nim;
	newNode->name = na;

}

bool CircularLinkedList::search(int roolno, Node** previous, Node** currentO) {
	*previous = LAST->next;
	*current = LAST->next;

	while (current != LAST) {
		if (rollno == (*current)->rollNumber) {
			return true;
		}
	}
}
