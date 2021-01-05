#include <iostream>
#include <string>
#include "global_variables.h"
#include "output_format.h" // lets you use the highlighting strings and try_again();
#include "proper_cap.h" // lets you use the fix_format function
#include "age_select_functions.h"

using namespace std;

int main() {

	// Output
	int player_age;
	
	// Temporary
	bool age_is_confirmed = false;
	
	// Note: Program should be safe from crash if a non-integer is entered
	while (age_is_confirmed == false) {
	
	
		// Get player age
		age_pick(player_age);
		
		// Confirm player age
		age_confirm(age_is_confirmed, player_age);
		
		
	} // end while
	
	return 0;
	
}//end main
