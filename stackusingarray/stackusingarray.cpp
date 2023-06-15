#include <iostream>
#include <string>

using namespace std;   

class Program {
private:
	string stack_array[5];
	int top;


public:
	Program() {
		top = -1;
	}

	string push(string element) {
		if (top == 4) {
			cout << "Stack Full" << endl;
			return "";
		}
	
		top++;
		stack_array[top] = element;

		cout << endl;
		cout << element << " ditambahkan(pushed)." << endl;

		return element;
	}
	


	void pop() {
		if (empty()) {
			cout << "\nStack is empty. cannot pop." << endl;
			return;
		}

		cout << "\nThe poped element is: " << stack_array[top] << endl;
		top--;
	}

	bool empty() {
		return (top == -1);

	}


	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int temp = top; temp >= 0; temp--) {
				cout << stack_array[temp] << endl;
			}
		}
	}
};

int main() {
	Program skom;

	while (true) {
		cout << endl;
		cout << "\n---Stack Menu---\n";
		cout << "1. Push";
		cout << "\n2. POP";
		cout << "\n3. Display";
		cout << "\n4. Exit";
		cout << "\nMasukan pilihan kamuuu:";
		string input;
		getline(cin, input);
		char ch = (input.empty() ? '0' : input[0]);
		switch (ch) {

		case '1': {
			cout << "\nMasukan Element : ";
			string element;
			getline(cin, element);
			skom.push(element);
			break;
		}
		case '2':
			if (skom.empty()) {
				cout << "\nStack empty : ";
				break;
			}
			skom.pop();
			break;

		case '3':
			skom.display();
			break;

		case '4':
			return 0;
		default:
			cout << "\nInvalid Choice. " << endl;
			break;


		}
	}
}