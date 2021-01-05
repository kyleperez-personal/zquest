#include <iostream>
#include "output_format.h" // lets you use the question function
#include "proper_cap.h" // lets you use the fixformat function
using namespace std;

int main() {

	// Output
	string player_race;
	
	// Temporary Variables
	string do_i_want_race_info;
	string race_i_want_to_know_about;
	string is_my_race_correct;

	bool race_is_picked = false;
	bool i_want_race_info = false;
	bool race_is_confirmed = false;
	
	cout << "Select a race." << endl;
	
	
	while (race_is_confirmed == false) {//outer
	
	
		// Getting information about the races
		while (race_is_picked == false) {//picking race
		
		
			cout << "Pick from the following races:" << endl;
			race_list();
			
			// Asking about race info
			while (i_want_race_info == false) {
			
			
				cout << question << "Do you want to know any information about the races? " << endf << "Yes or No. ";
				getline(cin, do_i_want_race_info);
				fixformat(do_i_want_race_info);
				if (do_i_want_race_info == "Yes") {
					i_want_race_info = true;
				}
				else if (do_i_want_race_info == "No") {
					i_want_race_info = false;
					break;
				}
				else {
					cout << notice("Try again.") << endl;
				}//end if
				
				
			}//end while
			
			// if i_want_race_info == true, then give information
			while (i_want_race_info == true) {//race info
			
			
				cout << question("What race do you want to know about?") << endl;
				cout << tab << "Type a race's name to see information about them." << endl;
				cout << tab << "Type 'Races' to see a list of races again." << endl;
				cout << tab << "Type 'Exit' to end the information session." << endl;
				cout << "I want to know about: ";
				getline(cin, race_i_want_to_know_about);
				race_i_want_to_know_about = fixformat(race_i_want_to_know_about);
				if (race_i_want_to_know_about == "Exit") {
					i_want_race_info = false;
				}
				else if (race_i_want_to_know_about == "Races") {
					cout << info("Race list:") << endl;
					// Race list
					cout << tab << "Foyerian" << endl;
					cout << tab << "Vitalian" << endl;
					cout << tab << "Orieni Highlander" << endl;
					cout << tab << "Imperial" << endl;
					cout << tab << "Kathaic" << endl;
					cout << tab << "Thurop" << endl;
					cout << tab << "Cstphene" << endl;
					cout << tab << "Entranan" << endl;
					cout << tab << "Fetan" << endl;
					cout << tab << "Ralois" << endl;
					cout << tab << "Hanoir" << endl;
					cout << tab << "Nerhest" << endl;
					cout << tab << "Aryan" << endl;
					cout << tab << "Tiblan" << endl;
					cout << tab << "Sophene" << endl;
					cout << tab << "Algus" << endl;
					cout << tab << "Anoch" << endl;
					cout << tab << "Dessan" << endl;
					cout << tab << "Rihden" << endl;
					cout << tab << "Inden" << endl;
					cout << tab << "Sinias" << endl;
					cout << tab << "Mokven" << endl;
					cout << tab << "Vanois" << endl;
					// End race list
				}
				else if (race_i_want_to_know_about == "Foyerian") {
					cout << tab << info("The Foyerians are large grouping of the standard fair-skinned Highlanders. Found all across the Highlands in large amounts, with a notable diaspora scattered about the Empire. This is a proud, martial people that is well recognized for their stature, spiritualism and work ethic.") << endl;
				}
				else if (race_i_want_to_know_about == "Vitalian") {
					cout << tab << info("The Vitalians are a major ethnic group in the Highlands notably with pale skin and hair that comes in blonde, black, and red aside from the standard brown. Vitalians can be found all across the Highlands, even in areas in which they are not the dominant ethnic group. They are very much a reflection of their Foyerian counterparts, sharing much in common.") << endl;
				}
				else if (race_i_want_to_know_about == "Orieni Highlander") {
					cout << tab << info("The third traditional Highlander ethnic group, the Orieni Highlanders are particularly noted for their Orieni admixture. Despite this unique trait, they are grouped in with the general Highlander ethnicities and are not subject to discrimination or special treatment. Importantly, they have a wide rage of phenotypes.") << endl;
				}
				else if (race_i_want_to_know_about == "Convent Auroran") {
				cout << tab << info("The Convent Auroran ethnic group is a closed-off, largely urban population that is ethnically Auroran. These pale-skinned, fair-haired people used to be found practically everywhere on the Continent. Nowadays, most live in the urban cities of the Southern Empire, where they dominate the capitals. Many assist in propping up the Imperial regime, as the Empire has allowed them to be disproportionally powerful. Many also serve in the military or become highly educated. Indeed, Convent Aurorans are often seen as particularly ambitious and are among the richest and most educated races on the Continent.") << endl;
				}
				
				else if (race_i_want_to_know_about == "Imperial") {
					cout << tab << info("The premier race of the Empire, this race heavily resembles that of other true Foyerian Auroran races, such as Foyerians and Vitalians. Imperials are often split between coming form the rich Provinces and the more humble Governorates. Provincial Imperials are among the best educated and prestigous groups of the world while ones from the governorates tend to be in great positions of power and form the core of their local militaries.") << endl;
				}
				else if (race_i_want_to_know_about == "Kathaic") {
					cout << tab << info("A broad classification for people from the Governorate of Kathay. Often looked down upon by their Convent Auroran and Imperial overlords, the Kathaic appear to be quite rugged, and many have claimed that they have a great martial potential. Regardless, the Kathaic now have major expectations, and are expected to become one of the major ethnic groups in the world. Most Kathaic are of average stature and have both brown hair and brown eyes.") << endl;
				}
				else if (race_i_want_to_know_about == "Thurop") {
					cout << tab << info("Thurops are one of the few examples of an ethnic group in the Empire that manages to dominate affairs in its own governorate. Quite numerous, this coastal people maintains a powerful naval tradition in addition to being one of the most influential diaspora groups in the Empire.") << endl;
				}
				else if (race_i_want_to_know_about == "Cstphene") {
					cout << tab << info("The people of Cstphon are proud of their martial backgrounds, and indeed, this race is often used for its military potential. They are another example of an ethnic group that rises above many others in the Empire. The Cstphene can often be ambitious and powerful, and those who do not take up military careers abroad often obtain formal education and serve governments otherwise." )<< endl;
				}
				else if (race_i_want_to_know_about == "Entranan") {
					cout << tab << info("A supposed close relative of Thurops, Entranans come from quite a similar environment to the Thurops. Entranans do have the common conception of being less civilized and more servile. Indeed, Entrana has been looked down upon for centuries while under the Imperial yoke, and its people are often seen as inferior Thurops.") << endl;
				}
				else if (race_i_want_to_know_about == "Fetan") {
					cout << tab << info("The Fetan come from a harsh, volcanic environment with a long history of spiritualism and civilization. Indeed, the Imperial rule is seen as morally wrong to many Fetan, and they wish to see their constitutional theocracy restored to absolutism.") << endl;
				}
				else if (race_i_want_to_know_about == "Ralois") {
					cout << tab << info("The Ralois are often split by their origins. Most 	live in rural, agricultural areas, but there is a notable amount who live in the capital of Ralaer: Novglatier, where the local Raloir maintain a strong tradition of legalism and philosophy.") << endl;
				}
				else if (race_i_want_to_know_about == "Hanoir") {
					cout << tab << info("The Hanoir hail from a land that is all too used to military occupation. Their land is otherwise h arsh and not usable for large-scale farming or resource extraction. The Hanoir, however, remain close to the border with Oriena and thus there are a notable few who are well educated in Orieni topics. Otherise, many take up military careers elsewhere.") << endl;
				}
				else if (race_i_want_to_know_about == "Nerhest") {
					cout << tab << info("The Nerhest are a largely poor, agrarian people. Largely seen as backwards, most that leave their governorate find work in the urban areas of the Empire, where they toil as unskilled laborers.") << endl;
				}
				else if (race_i_want_to_know_about == "Aryan") {
					cout << tab << info("Aryans are a desert people, composed of recently settled tribesmen, they still retain vague tribal structures, a stark contrast to the barriers that have been otherwise broken by Imperial colonization.") << endl;
				}
				else if (race_i_want_to_know_about == "Tiblan") {
					cout << tab << info("The Tiblan are mountainous people that do their best to not be subjected to Imperial authority, this group does their best to keep isolated and alone from others. Very few leave their governorate, and those that do often have motives of furthering the cause of independence.") << endl;
				}
				else if (race_i_want_to_know_about == "Sophene") {
					cout << tab << info("The Sophene are a coastal people, but unlike the Thurop or Entranans, the Sophene are used to jagged, rocky terrain on their coast. Indeed, this makes the Sophene notably backwards compared to others. Many move to the parts of the Empire to serve in the military.") << endl;
				}
				else if (race_i_want_to_know_about == "Algus") {
					cout << tab << info("The Algus are seen as a forested people, where many live in isolated villages deep in the endless forests. This often brings them into conflict with their Imperial overlords, who look to exploit the material wealth of the area.") << endl;
				}
				else if (race_i_want_to_know_about == "Anoch") {
					cout << tab << info("The vast majority of Anoch live in rural areas, and indeed, they are one of the least mixed populations on the continent. Unlike most other races, the Anoch have red hair as a common trait, and this curiosity causes many Anoch women to leave and find nobles to marry. The rural populations do their best to survive off of farming, surviving disease, and overcoming poor education.") << endl;
				}
				else if (race_i_want_to_know_about == "Dessan") {
					cout << tab << info("Hardly notable, the Dessans are seen as quite average. Not troublesome, but hardly collaborators to the Empire. They remain mostly rural.") << endl;
				}
				else if (race_i_want_to_know_about == "Rihden") {
					cout << tab << info("In the recent past, the Rihden were nomadic, and indeed, they have only recently settled. Now most are subsistence farmers, and there are often tensions between them and the local Imperials and Convent Aurorans.") << endl;
				}
				else if (race_i_want_to_know_about == "Inden") {
					cout << tab << info("The Inden are adept at navigating the lake-filled governorate they live in. But otherwise, they are hardly notable, as they live in a rural area and very few leave to go elsewhere.") << endl;
				}
				else if (race_i_want_to_know_about == "Sinias") {
					cout << tab << info("The last coastal people, the Sinias are only notable in that most refuse to eat fish, a holdover form the previous religion that occupied the area.") << endl;
				}
				else if (race_i_want_to_know_about == "Mokven") {
					cout << tab << info("There are very few Mokven. Many leave their governorate to perform a wide variety of unskilled services in the Empire, including military service and labor.") << endl;
				}
				else if (race_i_want_to_know_about == "Vanois") {
					cout << tab << info("The Vanois share a border with Oriena, and thus they are quite used to this strange ethnic group. Indeed, there is a small population of Vanois scholars who specialize in Orieni Studies.") << endl;
				}
				else {
					cout << notice("Try again.") << endl;
				}//end if
				
				
			}//end while race info
			
			// Actually picking race
			while (race_is_picked == false) {//player race
			
			
				cout << question("What is your race?") << endl;
				cout << "I am ";
				getline(cin, player_race);
				player_race = fixformat(player_race);
				if (player_race == "Foyerian") {
					race_is_picked = true;
				}
				else if (player_race == "Vitalian") {
					race_is_picked = true;
				}
				else if (player_race == "Orieni Highlander") {
					race_is_picked = true;
				}
				else if (player_race == "Convent Auroran") {
					race_is_picked = true;
				}
				else if (player_race == "Imperial") {
					race_is_picked = true;
				}
				else if (player_race == "Kathaic") {
					race_is_picked = true;
				}
				else if (player_race == "Thurop") {
					race_is_picked = true;
				}
				else if (player_race == "Cstphene") {
					race_is_picked = true;
				}
				else if (player_race == "Entranan") {
					race_is_picked = true;
				}
				else if (player_race == "Fetan") {
					race_is_picked = true;
				}
				else if (player_race == "Ralois") {
					race_is_picked = true;
				}
				else if (player_race == "Hanoir") {
					race_is_picked = true;
				}
				else if (player_race == "Nerhest") {
					race_is_picked = true;
				}
				else if (player_race == "Aryan") {
					race_is_picked = true;
				}
				else if (player_race == "Tiblan") {
					race_is_picked = true;
				}
				else if (player_race == "Sophene") {
					race_is_picked = true;
				}
				else if (player_race == "Algus") {
					race_is_picked = true;
				}
				else if (player_race == "Anoch") {
					race_is_picked = true;
				}
				else if (player_race == "Dessan") {
					race_is_picked = true;
				}
				else if (player_race == "Rihden") {
					race_is_picked = true;
				}
				else if (player_race == "Inden") {
					race_is_picked = true;
				}
				else if (player_race == "Sinias") {
					race_is_picked = true;
				}
				else if (player_race == "Mokven") {
					race_is_picked = true;
				}
				else if (player_race == "Vanois") {
					race_is_picked = true;
				}
				else {
					cout << notice("Invalid race.") << endl;
				}//end if
			}//end while player race
			
			
		}//end while picking race
		
		
		// Confirm your race
		while (race_is_confirmed == false) {//2
		
		
			// Following statements print the correct way to reference the race
			if (player_race == "Orieni Highlander") {
				cout << "You are an " << player_race << "." << endl;
			}
			else if (player_race == "Convent Auroran") {
				cout << "You are a " << player_race << "." << endl;
			}
			else if (player_race == "Imperial") {
				cout << "You are an " << player_race << "." << endl;
			}
			else {
				cout << "You are " << player_race << "." << endl;
			}//end if
			
			// From here, ask to confirm the race.
			cout << question("Is this alright? ") << "Yes or No. ";
			getline(cin, is_my_race_correct);
			is_my_race_correct = fixformat(is_my_race_correct);
			if (is_my_race_correct == "Yes") {
				cout << "Excellent." << endl;
				race_is_confirmed = true;
			}
			else if (is_my_race_correct == "No") {
				cout << "Then let's do it over again." << endl;
				race_is_picked = false;
				break;
			}
			else {
				cout << notice("Yes or No please.") << endl;
			}//end if
			
			
		}//end while 2
	
	
	}// end while outer

	return 0;
	
}//end main
