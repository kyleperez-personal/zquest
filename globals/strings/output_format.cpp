#include <iostream>
#include <string>
using namespace std;

//Highlighting for dialogue options that have already been picked
const string picked = "\033[1;90m";

//Highlighting for questions that should be asked
const string question = "\033[1;36m";

//Highlighting for notices that are important to the player
const string notice = "\033[1;31m";

//Highlighting for information to the player
const string info = "\033[1;34m";

//Command to end formatting
const string endf = "\033[0m";

//Function that prints the given code
//Useful as an example of how to use the commands
void try_again() {

	cout << notice << "Try again." << endf << endl;
	
	return;

}//end try_again
