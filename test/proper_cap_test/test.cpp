#include <iostream>
#include <string>
#include <time.h>
#include "proper_cap.h"

using namespace std;

int main() {

	

	
	//For testing the 'the' and 'of' capitalizations
	string my_string = "a the thE tHe tHE The ThE THe THE end";
	string my_other_string = "a of oF Of of end";
	
	cout << my_string << endl;
	cout << my_other_string << endl;
	
	
	//For testing strings
	/*
	int rand_num;
	
	srand(time(NULL));
	
	//string my_string = "I am often of the opinion that the offering should be the only thing given";
	
	for (int i = 0; i < my_string.length(); ++ i) {
		
		rand_num = rand() % 2;
		
		if (rand_num == 0) {
			my_string[i] = toupper(my_string[i]);
		}
		else {
			my_string[i] = tolower(my_string[i]);
		}//end for
	
	}//end for
	
	
	cout << my_string << endl;
	*/
	
	fixformat(my_string);
	fixformat(my_other_string);
	
	cout << my_string << endl;
	cout << my_other_string << endl;
	
	return 0;


}//end main
