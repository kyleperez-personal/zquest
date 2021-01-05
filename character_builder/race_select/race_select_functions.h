#ifndef RACE_SELECT_FUNCTIONS_H
#define RACE_SELECT_FUNCTIONS_H

#include <iostream>
#include <string>

//Displays a list of the availible races
void race_list();

//Asks whether or not you want info on the availible races
void race_info_question(bool& i_want_race_info);

//Provides information of the various playable races
void race_info();

//Block of code in which you get to pick your race from the list
void race_selection(bool& race_is_picked, string& player_race);

//Structure that contains race_info_question, race_info, and race_selection
void race_pick(bool& race_is_picked, string& player_race);

//Confirms that your race selection is correct
void race_confirm(
	bool& race_is_confirmed,
	bool& race_is_picked,
	string player_race
);

#endif
