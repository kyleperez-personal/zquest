#ifndef GENDER_SELECT_FUNCTIONS_H
#define GENDER_SELECT_FUNCTIONS_H

#include <iostream>
#include <string>

//Pick your gender
void gender_pick(
	string& player_gender,
	bool& player_is_male,
	bool& player_is_female
);

//Confirm your gender
void gender_confirm(
	bool& gender_is_confirmed,
	string player_gender
);

#endif
