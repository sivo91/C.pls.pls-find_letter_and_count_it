 
#include <iostream>
#include <string>
#include <cmath> 
#include <vector>
#include <iomanip>
#include <cstdlib> 
#include <ctime> 
#include <cmath> 

using namespace std;

int findLetterA(string x) {
	
	int counter = 0;

	for (int i = 0; i < x.length(); i++) {
		if (x[i] == 'a' || x[i] == 'A') {
			counter++;
		}
	}

	return counter;
}

int main() 
{
	string name;
	
	cout << "enter string " << endl;
	getline(cin, name);
	cout << endl;

	cout << "length of word is: " << name.length() << endl;
	cout << " letter 'a' is " << findLetterA(name) << " times in your word " << endl;
	

	return 0;
}
