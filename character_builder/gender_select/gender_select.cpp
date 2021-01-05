#include <iostream>
#include <string>
#include "output_format.h" //Includes text formatting and try_again()
#include "proper_cap.h" // can use the fixformat function
#include "gender_select_functions.h"//All the functions needed to run the program

using namespace std;

int main() {
	
	// Output
	string player_gender;
	bool player_is_male;
	bool player_is_female;
	
	// Temporary
	bool gender_is_confirmed = false;
	
	//Program
	cout << "Select a gender." << endl;
	
	while (gender_is_confirmed == false) {
	
	
		//Pick the gender
		gender_pick(player_gender, player_is_male, player_is_female);
		
		//Then confirm it
		gender_confirm(gender_is_confirmed, player_gender);
		
		
		
	}//end while

	return 0;
	
}//end main
