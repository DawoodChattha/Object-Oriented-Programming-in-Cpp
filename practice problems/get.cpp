#include <iostream>
using namespace std;
int main(){
	char ch;
	cout <<"Line 1: Enter a string: ";
	cin.get(ch);
	cout << endl;
	cout << "Line 4: After First cin.get(ch) "
	<< "ch = "<< ch << endl;
	cin.get(ch);
	cout << "Line 6: After First cin.get(ch) "
	<< "ch = "<< ch << endl;
	cin.putback(ch);
	cin.get(ch);
	cout << "Line 9: After putback and than " 
	<< "cin.get(ch); ch = "<< ch << endl;
	ch = cin.peek();
	cout << "Line 11: After First cin.peek(); ch = "
	<< ch << endl;
	cin.get(ch);
	cout << "Line 14 After First cin.get(ch); ch = "
	<< ch << endl;
	return 0;
}