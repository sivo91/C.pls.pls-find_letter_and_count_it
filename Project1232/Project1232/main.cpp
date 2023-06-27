 
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
	getline(cin, name);    //  amazona na da pa ta
	cout << endl;

	cout << "length of word is: " << name.length() << endl;
	//  length of word is: 19
	cout << " letter 'a' is " << findLetterA(name) << " times in your word " << endl;
	//  letter 'a' is 7 times in your line
	

	return 0;
}
