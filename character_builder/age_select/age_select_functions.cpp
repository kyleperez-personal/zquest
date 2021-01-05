#include <iostream>
#include <string>
#include "global_variables.h"
#include "output_format.h"
#include "proper_cap.h"

using namespace std;

/*
TABLE OF CONTENTS
	1. age_pick
		called: age_select.cpp
			line 22
			
	2. age_confirm
		called: age_select.cpp
			line 25
*/

//1.
//Asks your age. Accepts a string, which must be an integer between MIN_PLAYER_AGE and MAX_PLAYER_AGE
void age_pick(
	int& player_age
) {

	string player_age_string;

	while (true) {
	
		
		while (true) {
		
		
			cout << question << "How old are you?" << endf << endl;
			cout << '\t' << "Enter a number between " << MIN_PLAYER_AGE << " and " << MAX_PLAYER_AGE << "." << endl;
			cout << "Your age: ";
			getline(cin, player_age_string);
			
			
			//We need to be a bit creative when checking to see if the string
			//provided is correct.
			//We make sure that it is of length 2, and that both elements are numbers
			//between 00 and 99.
			if (player_age_string.length() == 2) {
			
				if (
				(player_age_string[0] >= '0' and player_age_string[0] <= '9')
				and
				(player_age_string[1] >= '0' and player_age_string[1] <= '9')
				) {
				
					//stoi converts the string into a number
					player_age = stoi(player_age_string);
					break;
				
				}
				else {
				
					cout << notice << "You have an improper input. Try again." << endf << endl;
				
				}//end if
			
			}
			else {
			
				cout << notice << "Your input is not the correct length. Try again." << endf << endl;
			
			}//end if
		
		
		}//end while
		
		
		//If you are between the ages MIN_PLAYER_AGE and MAX_PLAYER_AGE, your age is valid
		if (player_age >= MIN_PLAYER_AGE and player_age <= MAX_PLAYER_AGE) {
		
			return;
		
		}
		else {
		
			cout << notice << "Please enter a valid age." << endf << endl;
		
		}//end if
	
	
	}//end while
	

}//end age_picker




//2.
//Asks you to confirm your age
void age_confirm(
	bool& age_is_confirmed,
	int player_age
) {

	string is_my_age_correct;

	while (age_is_confirmed == false) {
	
	
		cout << "You are " << player_age << " years old." << endl;
		cout << question << "Is this alright? " << endf << "Yes or No. ";
		getline(cin, is_my_age_correct);
		fixformat(is_my_age_correct);
		
		
		if (is_my_age_correct == "Yes") {
		
			cout << "Alright." << endl;
			age_is_confirmed = true;
		
		}
		else if (is_my_age_correct == "No") {
		
			cout << "Let's try again then." << endl;
			return;
		
		}
		else {
		
			try_again();
		
		}//end if
	
	
	}//end while


}//end gender_confirmer
