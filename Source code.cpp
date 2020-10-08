#include <iostream>
#include<string>
int main()
{
	using namespace std;
	int n1;
	int n2;
	cout << "Welcome to minimal cli calculator. first enter 2 numbers in the Enter first number and Enter second number fields\n";
	cout << "and then enter the math action sign in the action: line\n";
	cout << "(+ -- complexity; - -- subtraction; * -- multiplication; / -- division;)\n";
	cout << "\n";
		for (; ; ) {
			string s1 = "Result is = ";
			string s3 = "action: ";
			cout << "Enter first number \n";
			cin >> n1;
			cout << "Enter second number \n";
			cin >> n2;
			cout << s3;
			char s;
			cin >> s;
			switch (s) {
			case '+':
				cout << s1;
				cout << n1 + n2 << "\n";
				continue;
			case '-':
				cout << s1;	
				cout << n1 - n2 << "\n";
				continue;
			case '/':
				cout << s1;
				cout << n1 / n2 << "\n";
				continue;
			case '*':
				cout << s1;
				cout << n1 * n2 << "\n";
				continue;
			default:
				cout << "Wrong action. Try again";
			}
		}
}
