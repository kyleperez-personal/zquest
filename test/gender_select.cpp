#include <iostream>
#include "global_strings.h" //Include global variables for text formatting
#include "proper_cap.h" // can use the fixformat function
using namespace std;

int main() {
	
	// Output
	string player_gender;
	bool player_is_male;
	bool player_is_female;
	
	// Temporary
	string is_my_gender_correct;
	bool gender_is_confirmed = false;
	bool gender_is_selected = false;
	
	// Code
	cout << "Select a gender." << endl;
	while (gender_is_confirmed == false) {
		// Gender picker
		while (gender_is_confirmed == false) {
			cout << question << "Is your character male or female?" << endf << endl;
			cout << "My gender: ";
			getline(cin, player_gender);
			player_gender = fixformat(player_gender);
			if (player_gender == "Male") {
				player_is_male = true;
				player_is_female = false;
				break;
			}
			else if (player_gender == "Female") {
				player_is_male = false;
				player_is_female = true;
				break;
			}
			else {
				//cout << notice << "Try again." << endf << endl;
				try_again();
			}// end if
		}//end while
		// Gender confirmer
		while (gender_is_confirmed == false) {
			cout << "You are " << player_gender << "." << endl;
			cout << question << "Is this correct? " << endf << "Yes or No. ";
			getline(cin, is_my_gender_correct);
			is_my_gender_correct = fixformat(is_my_gender_correct);
			if (is_my_gender_correct == "Yes") {
				cout << "Excellent." << endl;
				gender_is_confirmed = true;
			}
			else if (is_my_gender_correct == "No") {
				cout << "Then let's pick it again." << endl;
				break;
			}
			else {
				//cout << notice << "Try again." << endf << endl;
				try_again();
			}//end if
		}//end while
	}//end while

	return 0;
}//end main
