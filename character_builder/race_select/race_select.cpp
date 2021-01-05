#include <iostream>
#include <string>
#include "output_format.h"
#include "proper_cap.h"
#include "race_select_functions.h"

using namespace std;

int main() {


	//Output
	string player_race;
	
	//Temporary
	bool race_is_picked = false;
	bool race_is_confirmed = false;
	bool i_want_race_info = false;
	
	
	cout << "Select a race." << endl;
	
	
	while (race_is_confirmed == false) {
	
	
		//Pick race
			//Prints initial race list
			//Asking if you want info on the races
			//Program about race info (if wanted)
			//Selecting race
		race_pick(race_is_picked, player_race);
		
		//Confirming race
		race_confirm(race_is_confirmed, race_is_picked, player_race);
	
	
	}//end while


}//end main
