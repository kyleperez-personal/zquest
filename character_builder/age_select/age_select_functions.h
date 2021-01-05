#ifndef AGE_SELECT_FUNCTIONS_H
#define AGE_SELECT_FUNCTIONS_H

#include <iostream>
#include <string>

//Function to pick your age
void age_pick(int& player_age);

//Function to confirm your age
void age_confirm(
	bool& age_is_confirmed,
	int player_age
);

#endif
