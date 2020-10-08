#include<iostream>
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
			cout << "Enter first number: ";
			cin >> n1;
			cout << "\n";
			cout << s3;
			char s;
			cin >> s;
			switch (s) {
			case '+':
				cout << "Enter second number: ";
			    cin >> n2;
				cout << "\n";
			    cout << s1;
				cout << n1 + n2 << "\n";
				continue;
			case '-':
				cout << "Enter second number: ";
				cin >> n2; 
				cout << "\n";
				cout << s1;
				cout << n1 - n2 << "\n";
				cout << "\n";
				continue;
			case '/':
				cout << "Enter second number: ";
				cin >> n2; 
				cout << "\n";
				cout << s1;
				cout << n1 / n2 << "\n";
				continue;
			case '*':
				cout << "Enter second number: ";
				cin >> n2; 
				cout << "\n";
				cout << s1;
				cout << n1 * n2 << "\n";
				continue;
			default:
				cout << "Wrong action. Try again\n";
				continue;
			}
		}
}
