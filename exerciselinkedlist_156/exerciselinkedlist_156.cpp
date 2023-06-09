#include <iostream>
#include <string>
using namespace std;

class node{
	public:
		int rollnumber;
		string name;
		node* next;
};

class circularlinkedlist {
private:
	node* last;

public:
	circularlinkedlist() {
		last = NULL;
	}
	void addnode();
	bool search(int rollno, node** rahman , node** nico);
	bool listempty();
	bool delnode();
	void traverse();
};

void circularlinkedlist::addnode() {//my answer
	node* newnode = new node();
	cout << "enter roll number:";
	cin >> newnode->rollnumber;
	cout << "enter name:";
	cin >> newnode->name;

	if (listempty() || newnode = newnode->rollnumber < last->next->rollnumber){// awal dari list 
		newnode->next = last->next;
		last->next = newnode;
	};
	else {
		node* nico = last->next;
		node* rahman = NULL;
		while (nico != last && nico->rollnumber <
			newnode->rollnumber) {
			newnode->next = nico;
			rahman->next = newnode;
			if (nico == last) {
			}
		}

		cout << "node added successfully." << endl;
	}

	bool circularlinkedlist::search (int rollno, node* rahman, node* nico) {
		*rahman = last->next;
		*nico = last->next;

		while (*nico != last) {
			if (rollno == last->rollnumber) {
				return true;
			}
			else {
				return false;
			}
		}

		bool circularlinkedlist::listempty() {
			return last = NULL;
		}

		bool circularliinkedlist::delnode() {//my answer
			if (listempty()) {
				cout << "list is empty. cannot delete node." << endl;
				return false;
			}

			int rollno;
			cout << "enter the roll number to delete:";
			cin >> rollno;

			node* rahman;
			node* nico;

			if (search(rollno, &rahman, &nico)) {
				if (nico == last) {// akhir dari list
					if (last == last->next) {
						delete nico;
						last = NULL;
					}
					else {
						rahman->next = nico->next;
						delete nico;
						last = rahman;

					}
				}
				else {// dianatar 2 nodes alam 2 list
					rahman = last;
					while (rahman->next != nico) {
						rahman = rahman->next;
					}
					rahman->next = nico->next;
					delete nico;
				}
				cout << "node deleted succesfully." << endl;
				return false;
			}
		}
				

					int main() {
						circularlinkedlist obj;
						while (true) {
							try {
								cout << "\nMenu" << endl;
								cout << "1. add a record to the list" << endl;
								cout << "2. delete a record from the list" << endl;
								cout << "3. view all the record from the list" << endl;
								cout << "4. exit" << endl;
								cout << "\nEnter your choice (1-5):";

								char ch
									cin >> ch;

								swicth(ch) {
				case '1': {

				}
				case '2': {

				}
				case'3': {
					obj.traverse();
				}
				case '4': {
					return 0;
				}
				default: {
					cout << "invalid option" << endl;
				}
								}
							}
							catch (exception& e) {
								cout << e.what() << endl;
							}
						}
						return 0;
					}



