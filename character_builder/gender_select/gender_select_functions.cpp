#include <iostream>
#include <string>
#include "output_format.h"
#include "proper_cap.h"

using namespace std;

/*
TABLE OF CONTENTS
	1. gender_pick
		called: gender_select.cpp
			line 26
			
	2. gender_confirm
		called: gender_confirm.cpp
			line 29
*/

//1.
//Pick your gender: male or female, assign string and booleans to it
void gender_pick(
	string& player_gender,
	bool& player_is_male,
	bool& player_is_female
) {

	while (true) {
	
		
		cout << question << "Is your character male or female?" << endf << endl;
		cout << "My gender: ";
		getline(cin, player_gender);
		fixformat(player_gender);
		
		
		if (player_gender == "Male") {
		
			player_is_male = true;
			player_is_female = false;
			return;
			
		}
		else if (player_gender == "Female") {
		
			player_is_male = false;
			player_is_female = true;
			return;
			
		}
		else {
		
			try_again();
		
		}//end if
	
	
	}//end while

}//end gender_picker




//2.
//Confirm your gender
void gender_confirm(
	bool& gender_is_confirmed,
	string player_gender
) {

	string is_my_gender_correct;

	while (true) {
	
	
		cout << "You are " << player_gender << "." << endl;
		cout << question << "Is this correct? " << endf << "Yes or No. ";
		getline(cin, is_my_gender_correct);
		fixformat(is_my_gender_correct);
		
		if (is_my_gender_correct == "Yes") {
		
			cout << "Excellent." << endl;
			gender_is_confirmed = true;
			return;
		
		}
		else if (is_my_gender_correct == "No") {
		
			cout << "Then let's pick it again." << endl;
			return;
		
		}
		else {
		
			try_again();
		
		}//end if
	
	
	}//end while


}//end gender_confirmer
