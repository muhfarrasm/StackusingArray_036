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
		
	}
	

};