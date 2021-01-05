#include <iostream>
#include <string>
#include "output_format.h"
#include "proper_cap.h"

using namespace std;

/*
TABLE OF CONTENTS
	1. race_list()
		called: HERE
			line 154
			line 545
			
	2. race_info_question()
		called: HERE
			line 553
			
	3. race_info()
		DEPENDS ON race_select()
		
		called: HERE
			line 558
			
	4. race_selection()
		called: HERE
			line 567
	
	5. race_pick()
		DEPENDS ON entries 2. - 4.
		
		called: race_select.cpp
			line 32
	
	6. race_confirm()
		called: race_select.cpp
			line 35
	
*/




//1.
//Simply prints out the races that are availible to the player
void race_list() {


	cout << '\t' << "Foyerian" << endl;
	cout << '\t' << "Vitalian" << endl;
	cout << '\t' << "Orieni Highlander" << endl;
	cout << '\t' << "Imperial" << endl;
	cout << '\t' << "Kathaic" << endl;
	cout << '\t' << "Thurop" << endl;
	cout << '\t' << "Cstphene" << endl;
	cout << '\t' << "Entranan" << endl;
	cout << '\t' << "Fetan" << endl;
	cout << '\t' << "Ralois" << endl;
	cout << '\t' << "Hanoir" << endl;
	cout << '\t' << "Nerhest" << endl;
	cout << '\t' << "Aryan" << endl;
	cout << '\t' << "Tiblan" << endl;
	cout << '\t' << "Sophene" << endl;
	cout << '\t' << "Algus" << endl;
	cout << '\t' << "Anoch" << endl;
	cout << '\t' << "Dessan" << endl;
	cout << '\t' << "Rihden" << endl;
	cout << '\t' << "Inden" << endl;
	cout << '\t' << "Sinias" << endl;
	cout << '\t' << "Mokven" << endl;
	cout << '\t' << "Vanois" << endl;
	//MORE RACES
	//cout << '\t' << "My Race" << endl;


}//end race_list




//2.
//Asks if you want info on the various races
void race_info_question(bool& i_want_race_info) {

	string do_i_want_race_info;


	while (i_want_race_info == false) {
	
	
		cout << question << "Do you want to know any information about the races? " << endf << "Yes or No. ";
		getline(cin, do_i_want_race_info);
		fixformat(do_i_want_race_info);
		
		
		if (do_i_want_race_info == "Yes") {
		
			i_want_race_info = true;
			return;
		
		}
		else if (do_i_want_race_info == "No") {
		
			i_want_race_info = false;
			return;
			
		}
		else {
		
			try_again();
			
		}//end if
	
	
	}//end while


}//end race_info_question




//3.
//Subprogram that tells you about the info of the races; triggers if you want race info in the first place
void race_info() {

	string race_i_want_to_know_about;


	while (true) {
	
	
		cout << question << "What race do you want to know about?" << endf << endl;
		cout << '\t' << "Type a race's name to see information about them." << endl;
		cout << '\t' << "Type 'Races' to see a list of races again." << endl;
		cout << '\t' << "Type 'Exit' to end the information session." << endl;
	
		cout << "I want to know about: ";
		getline(cin, race_i_want_to_know_about);
		fixformat(race_i_want_to_know_about);
		
		
		if (race_i_want_to_know_about == "Exit") {
		
			return;
		
		}
		else if (race_i_want_to_know_about == "Races") {
		
			cout << info << "Race list:" << endf << endl;
			race_list();
		
		}
		else if (race_i_want_to_know_about == "Foyerian") {
		
			cout << '\t' << info;
			cout << "The Foyerians are large grouping of the standard fair-skinned Highlanders. Found all across the Highlands in large amounts, with a notable diaspora scattered about the Empire. This is a proud, martial people that is well recognized for their stature, spiritualism and work ethic.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Vitalian") {
		
			cout << '\t' << info;
			cout << "The Vitalians are a major ethnic group in the Highlands notably with pale skin and hair that comes in blonde, black, and red aside from the standard brown. Vitalians can be found all across the Highlands, even in areas in which they are not the dominant ethnic group. They are very much a reflection of their Foyerian counterparts, sharing much in common.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Orieni Highlander") {
		
			cout << '\t' << info;
			cout << "The third traditional Highlander ethnic group, the Orieni Highlanders are particularly noted for their Orieni admixture. Despite this unique trait, they are grouped in with the general Highlander ethnicities and are not subject to discrimination or special treatment. Importantly, they have a wide rage of phenotypes.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Convent Auroran") {
		
			cout << '\t' << info;
			cout << "The Convent Auroran ethnic group is a closed-off, largely urban population that is ethnically Auroran. These pale-skinned, fair-haired people used to be found practically everywhere on the Continent. Nowadays, most live in the urban cities of the Southern Empire, where they dominate the capitals. Many assist in propping up the Imperial regime, as the Empire has allowed them to be disproportionally powerful. Many also serve in the military or become highly educated. Indeed, Convent Aurorans are often seen as particularly ambitious and are among the richest and most educated races on the Continent.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Imperial") {
		
			cout << '\t' << info;
			cout << "The premier race of the Empire, this race heavily resembles that of other true Foyerian Auroran races, such as Foyerians and Vitalians. Imperials are often split between coming form the rich Provinces and the more humble Governorates. Provincial Imperials are among the best educated and prestigous groups of the world while ones from the governorates tend to be in great positions of power and form the core of their local militaries.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Kathaic") {
		
			cout << '\t' << info;
			cout << "A broad classification for people from the Governorate of Kathay. Often looked down upon by their Convent Auroran and Imperial overlords, the Kathaic appear to be quite rugged, and many have claimed that they have a great martial potential. Regardless, the Kathaic now have major expectations, and are expected to become one of the major ethnic groups in the world. Most Kathaic are of average stature and have both brown hair and brown eyes.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Thurop") {
		
			cout << '\t' << info;
			cout << "Thurops are one of the few examples of an ethnic group in the Empire that manages to dominate affairs in its own governorate. Quite numerous, this coastal people maintains a powerful naval tradition in addition to being one of the most influential diaspora groups in the Empire.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Cstphene") {
		
			cout << '\t' << info;
			cout << "The people of Cstphon are proud of their martial backgrounds, and indeed, this race is often used for its military potential. They are another example of an ethnic group that rises above many others in the Empire. The Cstphene can often be ambitious and powerful, and those who do not take up military careers abroad often obtain formal education and serve governments otherwise.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Entranan") {
		
			cout << '\t' << info;
			cout << "A supposed close relative of Thurops, Entranans come from quite a similar environment to the Thurops. Entranans do have the common conception of being less civilized and more servile. Indeed, Entrana has been looked down upon for centuries while under the Imperial yoke, and its people are often seen as inferior Thurops.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Fetan") {
		
			cout << '\t' << info;
			cout << "The Fetan come from a harsh, volcanic environment with a long history of spiritualism and civilization. Indeed, the Imperial rule is seen as morally wrong to many Fetan, and they wish to see their constitutional theocracy restored to absolutism.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Ralois") {
		
			cout << '\t' << info;
			cout << "The Ralois are often split by their origins. Most 	live in rural, agricultural areas, but there is a notable amount who live in the capital of Ralaer: Novglatier, where the local Raloir maintain a strong tradition of legalism and philosophy.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Hanoir") {
		
			cout << '\t' << info;
			cout << "The Hanoir hail from a land that is all too used to military occupation. Their land is otherwise h arsh and not usable for large-scale farming or resource extraction. The Hanoir, however, remain close to the border with Oriena and thus there are a notable few who are well educated in Orieni topics. Otherise, many take up military careers elsewhere.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Nerhest") {
		
			cout << '\t' << info;
			cout << "The Nerhest are a largely poor, agrarian people. Largely seen as backwards, most that leave their governorate find work in the urban areas of the Empire, where they toil as unskilled laborers.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Aryan") {
		
			cout << '\t' << info;
			cout << "Aryans are a desert people, composed of recently settled tribesmen, they still retain vague tribal structures, a stark contrast to the barriers that have been otherwise broken by Imperial colonization.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Tiblan") {
		
			cout << '\t' << info;
			cout << "The Tiblan are mountainous people that do their best to not be subjected to Imperial authority, this group does their best to keep isolated and alone from others. Very few leave their governorate, and those that do often have motives of furthering the cause of independence.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Sophene") {
		
			cout << '\t' << info;
			cout << "The Sophene are a coastal people, but unlike the Thurop or Entranans, the Sophene are used to jagged, rocky terrain on their coast. Indeed, this makes the Sophene notably backwards compared to others. Many move to the parts of the Empire to serve in the military.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Algus") {
		
			cout << '\t' << info;
			cout << "The Algus are seen as a forested people, where many live in isolated villages deep in the endless forests. This often brings them into conflict with their Imperial overlords, who look to exploit the material wealth of the area.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Anoch") {
		
			cout << '\t' << info;
			cout << "The vast majority of Anoch live in rural areas, and indeed, they are one of the least mixed populations on the continent. Unlike most other races, the Anoch have red hair as a common trait, and this curiosity causes many Anoch women to leave and find nobles to marry. The rural populations do their best to survive off of farming, surviving disease, and overcoming poor education.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Dessan") {
		
			cout << '\t' << info;
			cout << "Hardly notable, the Dessans are seen as quite average. Not troublesome, but hardly collaborators to the Empire. They remain mostly rural.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Rihden") {
		
			cout << '\t' << info;
			cout << "In the recent past, the Rihden were nomadic, and indeed, they have only recently settled. Now most are subsistence farmers, and there are often tensions between them and the local Imperials and Convent Aurorans.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Inden") {
		
			cout << '\t' << info;
			cout << "The Inden are adept at navigating the lake-filled governorate they live in. But otherwise, they are hardly notable, as they live in a rural area and very few leave to go elsewhere.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Sinias") {
		
			cout << '\t' << info;
			cout << "The last coastal people, the Sinias are only notable in that most refuse to eat fish, a holdover form the previous religion that occupied the area.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Mokven") {
		
			cout << '\t' << info;
			cout << "There are very few Mokven. Many leave their governorate to perform a wide variety of unskilled services in the Empire, including military service and labor.";
			cout << endf << endl;
		
		}
		else if (race_i_want_to_know_about == "Vanois") {
		
			cout << '\t' << info;
			cout << "The Vanois share a border with Oriena, and thus they are quite used to this strange ethnic group. Indeed, there is a small population of Vanois scholars who specialize in Orieni Studies.";
			cout << endf << endl;
		
		}
		//MORE RACES
		//else if (race_i_want_to_know_about == "My race") {
		//
		//	cout << '\t' << info;
		//	cout << "My info";
		//	cout << endf << endl;
		//
		//}
		else {
		
			try_again();
		
		}//end if
	
	
	}//end while


}//end race_info



//4.
//Function where you actually input your selection for your race
void race_selection(bool& race_is_picked, string& player_race) {


	while (true) {
	
		cout << question << "What is your race?" << endf << endl;
		cout << "Your race: ";
		getline(cin, player_race);
		fixformat(player_race);
		
		
		//NOTE: COULD PROBABLY SIMPLIFY THIS CODE
		//Could try to declare an array:
		//
		//string races [number] = {race1, race2, ...};
		//
		//for (int i = 0; i < races.size(); ++i) {
		//
		//	if (player_race == races[i]) {
		//		race_is_picked = true;
		//		return;
		//	}//end if
		//
		//}//end for
		//
		//cout << notice << "Invalid race." << endf << endl;
		if (player_race == "Foyerian") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Vitalian") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Orieni Highlander") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Convent Auroran") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Imperial") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Kathaic") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Thurop") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Cstphene") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Entranan") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Fetan") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Ralois") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Hanoir") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Nerhest") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Aryan") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Tiblan") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Sophene") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Algus") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Anoch") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Dessan") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Rihden") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Inden") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Sinias") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Mokven") {
		
			race_is_picked = true;
			return;
		
		}
		else if (player_race == "Vanois") {
		
			race_is_picked = true;
			return;
		
		}
		//MORE RACES
		//else if (player_race == "My Race") {
		//
		//	return;
		//
		//}
		else {
		
			cout << notice << "Invalid race." << endf << endl;
		
		}//end if
	
	
	
	}//end while


}//end race_selection




//5.
//Actually typing in and picking your race from the list
void race_pick(bool& race_is_picked, string& player_race) {
	
	bool i_want_race_info = false;
		
	
	while (race_is_picked == false) {
	
	
		cout << "Pick from the following races:" << endl;
		race_list();
		
		
		race_info_question(i_want_race_info);
		
		//If i_want_race_info is true, this triggers
		if (i_want_race_info == true) {
		
			race_info();
			
			//Resets the race_info variable in case you want
			//to view info again
			i_want_race_info = false;
		
		}//end if
		
		//Actually picking the race
		race_selection(race_is_picked, player_race);
	
	
	}//end while


}//end race_pick



//6.
//Confirming that the race you selected is the one you wanted
void race_confirm(bool& race_is_confirmed, bool& race_is_picked, string player_race) {

	string is_my_race_correct;

	while (true) {
	
	
		if (player_race == "Orieni Highlander") {
	
			cout << "You are an Orieni Highlander." << endl;
	
		}
		else if (player_race == "Convent Auroran") {
		
			cout << "You are a Convent Auroran." << endl;
	
		}
		else if (player_race == "Imperial") {
	
			cout << "You are an Imperial." << endl;
	
		}
		//MORE RACES
		//Add this blocks of code appropriately on how you reference your race
		else {
		
			cout << "You are " << player_race << "." << endl;
		
		}//end if
	
	
		cout << question << "Is this alright? " << endf << "Yes or No. ";
		getline(cin, is_my_race_correct);
		fixformat(is_my_race_correct);
	
	
		if (is_my_race_correct == "Yes") {
		
			cout << "Excellent." << endl;
			race_is_confirmed = true;
			return;
		
		}
		else if (is_my_race_correct == "No") {
		
			cout << "Then let's do it over again." << endl;
			race_is_picked = false;
			return;
		
		}
		else {
		
			try_again();
		
		}//end if
	
	}//end while


}//end race_confirm
