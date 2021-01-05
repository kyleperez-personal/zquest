#include <iostream>
#include "color_functions.h"// Lets you use the notice, info, picked, and question functions
#include "proper_cap.h" // Lets you use the fixformat function
#include "lower_cap.h" // Lets you use the lowerfixformat function
using namespace std;

int main() {

	//TABLE OF CONTENTS:
		// 1. Determining Player Background (Urban, Rural, etc)
		// 2. Determining if player is a diasporic/settler
		// 3. Determining if player is a Convent Auroran
		// 4. Convent Auroran Exile status
		// 5. Cstphene Guardsman status
		// 6. Banact War Veteran status

	//Formatting
	string tab = "   ";
	string double_tab = "      ";
	
	//Input variables
	string player_race = "Imperial";
	string player_career = "Infantry";
	
	string player_citizenship = "The Empire";
	string player_region = "Kathay";
	
	string player_holy_order = "None";
	
	bool player_is_in_holy_order = false;
	bool player_is_military = true;
	
	int player_age = 38;
	
	// Output variables
	string player_background;
	string player_imperial_class;
	
	bool player_is_convent_auroran;
	bool player_is_convent_exile;
	
	bool player_is_diasporic;
	bool player_is_settler;
	bool player_is_nobility;
	
	bool player_is_cstphene_guardsman = false;
	bool player_served_in_banact_war = false;
	
	//Inner function variables
	int age_cap = 37;//Sets the minimum age in order to serve in the Banact War (game takes place ~20 years before the war)
	
	// Temporary variables
	string do_i_want_background_info;
	string is_my_background_okay;
	string do_i_want_to_be_convent_exile;
	
	string do_i_want_to_be_cstphene_guardsman;
	string did_i_serve_in_banact_war;
	
	string bckgrnd_i_want_to_know_about;
	
	bool background_is_picked = false;
	bool i_want_background_info = false;
	bool i_have_decided_my_exile_status = false;
	
	
	//Program
	while (background_is_picked == false) {
		cout << info("Pick a background:") << endl;
		cout << tab << "Rural" << endl;
		cout << tab << "Urban" << endl;
		cout << tab << "Lowborn" << endl;
		cout << tab << "Spiritual" << endl;
		cout << tab << "Militarist" << endl;
		//Players from the Empire, but not from Kathay, can be nobility
		if (player_citizenship == "The Empire" and player_region != "Kathay") {
			cout << tab << "Minor Nobility" << endl;
			cout << tab << "Nobility" << endl;
			cout << tab << "High Nobility" << endl;
		}//end if
		
		//Asking if you want background info
		while (i_want_background_info == false) {
			cout << question("Do you want to know about any of these backgrounds? ") << "Yes or No. ";
			getline(cin, do_i_want_background_info);
			do_i_want_background_info = fixformat(do_i_want_background_info);
			
			if (do_i_want_background_info == "Yes") {
				cout << "Excellent." << endl;
				i_want_background_info = true;
			}
			else if (do_i_want_background_info == "No") {
				cout << "Alright." << endl;
				break;
			}
			else {
				cout << notice("Try again.") << endl;
			}//end if
		}//end while
		
		//If you want background info, this loop triggers
		while (i_want_background_info == true) {
			cout << question("Which background do you want to know about?") << endl;
			cout << tab << "Type 'Backgrounds' to see the list of backgrounds." << endl;
			cout << tab << "Type 'Exit' to stop learning." << endl;
			cout << "I want to know about being born ";
			getline(cin, bckgrnd_i_want_to_know_about);
			bckgrnd_i_want_to_know_about = fixformat(bckgrnd_i_want_to_know_about);
			
			if (bckgrnd_i_want_to_know_about == "Exit") {
				cout << "Let's move on then." << endl;
				i_want_background_info = false;
			}
			else if (bckgrnd_i_want_to_know_about == "Backgrounds") {
				cout << info("List of Backgrounds:") << endl;
				cout << tab << "Rural" << endl;
				cout << tab << "Urban" << endl;
				cout << tab << "Lowborn" << endl;
				cout << tab << "Spiritual" << endl;
				cout << tab << "Militarist" << endl;
				//Players from the Empire, but not from Kathay, can be nobility
				if (player_citizenship == "The Empire" and player_region != "Kathay") {
					cout << tab << "Minor Nobility" << endl;
					cout << tab << "Nobility" << endl;
					cout << tab << "High Nobility" << endl;
				}//end if
			}
			else if (bckgrnd_i_want_to_know_about == "Rural") {
				cout << tab << info("You were born and raised in a rural area, far from the urban centers of civilization. You have likely lived in a small village, isolated for most of your life, and may have a limited formal education. Many leave rural life to pursue careers in the cities, and many who remain behind have little opportunity in life.") << endl;
			}
			else if (bckgrnd_i_want_to_know_about == "Urban") {
				cout << tab << info("You were born and raised in one of the large urban areas of the Continent, in a city of a size anywhere between a few hundred thousand to in the tens of millions. Urbanites can be poor, rich, or anything in between, and of a variety of education levels. Urban citizens tend to be the primary pool of manpower for most of the governorate militaries in the Empire.") << endl;
			}
			else if (bckgrnd_i_want_to_know_about == "Lowborn") {
				cout << tab << info("You are a distinctly successful individual that was not born into wealth or status. These lowborn members of society are noted for their ambition and their distinct differences from the standard elite. Some hail the presence of the Lowborn as a success of the Empire, but many counter that. Most Lowborn are Imperial, but there are some of all races.") << endl;
			}
			else if (bckgrnd_i_want_to_know_about == "Spiritual") {
				cout << tab << info("You were born and raised in a heavily spiritual environment. Children of this background were often raised by parents who were active members of a Holy Order, or just pious individuals. While Highlanders have the highest rate of spirituality, there are broad pockets of the spiritual found everywhere. These Spiritual people tend to be well educated and often serve in Holy Orders themselves, and a select few from the Empire and beyond even immigrate to the Highlands to serve the spirits more directly.") << endl;
			}
			else if (bckgrnd_i_want_to_know_about == "Militarist") {
				cout << tab << info("You were raised by a family who served in secular military forces for most of their life. These Milistarist people have often been groomed for military service and often pursue careers in the officer corps of their local militaries. People with a martial background are highly valued by the societies in the Highlands and Cstphon, with an increasing following in Kathay.") << endl;
			}
			else if (bckgrnd_i_want_to_know_about == "Minor Nobility") {
				if (player_citizenship == "The Empire" and player_region != "Kathay") {
					cout << tab << info("You are from a minor noble family, right on the lowest rung of the feudal system in the Empire. Families of minor nobility are often either poor or middle class, but are noted for their staunch loyalty to the Empire, even those who are not Imperial themselves. Many leave their minor noble roots behind to pursue something more. Many in the minor nobility provide the backbone of the enlisted personnel for the governorate militaries in the Empire.") << endl;
				}
				else if (player_region == "Kathay") {
					cout << tab << info("Minor Nobility were on the lowest rung of the Empire's feudal system. Many of them were poor and middle class, yet strangely loyal to the Empire that seemed to abandon them to their own devices. As a result of their often poor prospects, many left landowning to pursue true public service. Before the governorship of Victor Altec, much of the local Imperial forces in Kathay were sourced from the local minor nobility.") << endl;
					cout << tab << info("Kathay expelled its nobility following its Revolution. You cannot be of a proper noble status.") << endl;
				}
				else {
					cout << tab << info("Minor Nobility are the lowest rung on the Empire's feudal system. Many of them are mid-sized landowners who vary in wealth from the high end of poverty to the status of upper middle class. Still, this large cast is noted for staunch loyalty to the Empire, even among those who are not ethnically Imperial. The minor nobility often form the backbone of enlisted men in the local Imperial militaries.") << endl;
					cout << tab << info("The Highlands' theocracy does not practice feudalism. Moreover, Foyer does not recognize noble titles in the Highlands.") << endl;
				}//end if
			}
			else if (bckgrnd_i_want_to_know_about == "Nobility") {
				if (player_citizenship == "The Empire" and player_region != "Kathay") {
					cout << tab << info("You were born to an upper class noble family, mediating between the lowest nobles and the high nobility. People from such a status tend to be well educated and many serve in the military as officers before returning to rule their holdings. Most tend to be Imperials, but there are exceptions, with most exceptions being foreign to the area they rule over.") << endl;
				}
				else if (player_region == "Kathay") {
					cout << tab << info("The proper upper class nobility tends to be well-educated, and many of them served in the local military, which saw heavy restrictions local Kathaic being allowed to serve; the officer ranks, dominated by the nobility, was almost exclusively Imperial.") << endl;
					cout << tab << info("Kathay expelled its nobility following its Revolution. You cannot be of a proper noble status.") << endl;
				}
				else {
					cout << tab << info("The Empire is home to a feudal system that sees landowners given significant authority over their holdings. The nobility that dominates the system comes in many shapes and sizes. The proper upper class nobility tends to be remarkably well educated and civilized, and many of them pursue officer careers in their militaries before returning to their holdings.") << endl;
					cout << tab << info("The Highlands' theocracy does not practice feudalism. Moreover, Foyer does not recognize noble titles in the Highlands.") << endl;
				}//end if
			}
			else if (bckgrnd_i_want_to_know_about == "High Nobility") {
				if (player_citizenship == "The Empire" and player_region != "Kathay") {
					cout << tab << info("You were born to a family in the High Nobility, at the very top of the Imperial feudal system. Such individuals tend to be incredibly wealthy, very well educated, and most serve at the top of the Imperial government and military. They are often criticized as decadent, but they have remained competent at the top of the Empire for hundreds of years. They are often disliked by their many non-Imperial subjects. While the majority of the high nobililty is Imperial in nature, there are several notable exceptions to this rule.") << endl;
				}
				else if (player_region == "Kathay") {
					cout << tab << info("The High Nobility were at the very top of the feudal system, during its implementation during Imperial rule. These elite members were fabulously wealthy and had partitioned the land into numerous holdings under their administration. The only impressive thing to note of these people is how long they were able to hold onto their power, through controlling the education that non-Imperials could access before their efforts stopped bearing fruit.") << endl;
					cout << tab << info("Kathay expelled its nobility following its Revolution. You cannot be of a proper noble status.") << endl;
				}
				else {
					cout << tab << info("The High Nobility of the Empire is a very wealthy, well-educated class of people who usually serve at the very top of the Imperial government and military. These impressive figures are often criticised by their subjects for being decadent, but no doubt that they are clever rulers given how long many of the families have managed to hold onto power for.") << endl;
					cout << tab << info("The Highlands' theocracy does not practice feudalism. Moreover, Foyer does not recognize noble titles in the Highlands.") << endl;
				}//end if
			}
			else {
				cout << notice("Try again.") << endl;
			}//end if
		}//end while
		
		while (background_is_picked == false) {
			cout << question("What is your background?") << endl;
			cout << tab << "Type in 'Backgrounds' to see the list of availible backgrounds." << endl;
			cout << "My background is: ";
			getline(cin, player_background);
			player_background = fixformat(player_background);
			
			if (player_background == "Backgrounds") {
				cout << info("List of Backgrounds:") << endl;
				cout << tab << "Rural" << endl;
				cout << tab << "Urban" << endl;
				cout << tab << "Lowborn" << endl;
				cout << tab << "Spiritual" << endl;
				cout << tab << "Militarist" << endl;
				//Players from the Empire, but not from Kathay, can be nobility
				if (player_citizenship == "The Empire" and player_region != "Kathay") {
					cout << tab << "Minor Nobility" << endl;
					cout << tab << "Nobility" << endl;
					cout << tab << "High Nobility" << endl;
				}//end if
			}
			else if (player_background == "Rural") {
				player_is_nobility = false;
				break;
			}
			else if (player_background == "Urban") {
				player_is_nobility = false;
				break;
			}
			else if (player_background == "Lowborn") {
				player_is_nobility = false;
				break;
			}
			else if (player_background == "Spiritual") {
				player_is_nobility = false;
				break;
			}
			else if (player_background == "Militarist") {
				player_is_nobility = false;
				break;
			}
			else if (player_background == "Minor Nobility") {
				if (player_citizenship == "The Empire" and player_region != "Kathay") {
					player_is_nobility = true;
					break;
					
				}
				else if (player_region == "Kathay") {
					cout << notice("The nobility of Kathay were expelled following the Revolution. You cannot be a noble.") << endl;
				}
				else {
					cout << notice("The Highlands does not recognize noble titles. You cannot be a noble.") << endl;
				}//end if
			}
			else if (player_background == "Nobility") {
				if (player_citizenship == "The Empire" and player_region != "Kathay") {
					player_is_nobility = true;
					break;
				}
				else if (player_region == "Kathay") {
					cout << notice("The nobility of Kathay were expelled following the Revolution. You cannot be a noble.") << endl;
				}
				else {
					cout << notice("The Highlands does not recognize noble titles. You cannot be a noble.") << endl;
				}//end if
			}
			else if (player_background == "High Nobility") {
				if (player_citizenship == "The Empire" and player_region != "Kathay") {
					player_is_nobility = true;
					break;
				}
				else if (player_region == "Kathay") {
					cout << notice("The nobility of Kathay were expelled following the Revolution. You cannot be a noble.") << endl;
				}
				else {
					cout << notice("The Highlands does not recognize noble titles. You cannot be a noble.") << endl;
				}//end if
			}
			else {
				cout << notice("Try again.") << endl;
			}//end if
		}//end while
		
		//Confirming background
		while (background_is_picked == false) {
			if (player_is_nobility == true) {
				if (player_background == "Minor Nobility") {
					cout << "You are a Minor Noble." << endl;
				}
				else if (player_background == "Nobility") {
					cout << "You are of a Noble background." << endl;
				}
				else {// player_background == "High Nobility"
					cout << "You are a High Noble." << endl;
				}//end if
			}
			else {
				cout << "You are of a " << player_background << " background." << endl;
			}//end if
			cout << question("Is this okay? ") << "Yes or No. ";
			getline(cin, is_my_background_okay);
			is_my_background_okay = fixformat(is_my_background_okay);
			
			if (is_my_background_okay == "Yes") {
				cout << "Excellent." << endl;
				background_is_picked = true;
			}
			else if (is_my_background_okay == "No") {
				cout << "Let's pick again then." << endl;
				break;
			}
			else {
				cout << notice("Try again.") << endl;
			}//end if
		}//end while
		
		
	}//end while
	
	
	//Determining the Diasporic and Settler properties.
		// A player is Diasporic if they are from a race that is not native to their location
		// A player is a Settler if they are an Imperial subject race, citizen of the Empire, and not in the native land of their people.
		//TOADD:
			//Immigrant status
			//Original place of birth if an immigrant
	
	//Highlander characters are diasporic if not from the Highlands
	if (player_race == "Foyerian" and player_citizenship != "The Highlands") {
		player_is_diasporic = true;
		player_is_settler = false;
	}
	else if (player_race == "Vitalian" and player_citizenship != "The Highlands") {
		player_is_diasporic = true;
		player_is_settler = false;
	}
	else if (player_race == "Orieni Highlander" and player_citizenship != "The Highlands") {
		player_is_diasporic = true;
		player_is_settler = false;
	}
	//Imperial characters are diasporic if strictly not from the Empire (but are allowed to be from anywhere in the Empire)
	else if (player_race == "Imperial" and player_citizenship != "The Empire") {
		player_is_diasporic = true;
		player_is_settler = false;
	}
	//The various Imperial subject races are diasporic if they don't live in their native lands
	else if (player_race == "Kathaic" and player_region != "Kathay") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Thurop" and player_region != "Thurop") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Cstphene" and player_region != "Cstphon") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Entranan" and player_region != "Entrana") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Fetan" and player_region != "Fetedal") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Ralois" and player_region != "Ralaer") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Hanoir" and player_region != "Hanor") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Nerhest" and player_region != "Nerhast") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Aryan" and player_region != "Arya") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Tiblan" and player_region != "Tiblus") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Sophene" and player_region != "Sophos") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Algus" and player_region != "Algus") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Anoch" and player_region != "Anoch") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Dessan" and player_region != "Edessa") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Rihden" and player_region != "Rihde") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Inden" and player_region != "Inden") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Sinias" and player_region != "Siniasus") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Mokven" and player_region != "Mokvon") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	else if (player_race == "Vanois" and player_region != "Vanas") {
		player_is_diasporic = true;
		if (player_citizenship == "The Empire") {
			player_is_settler = true;
		}
		else {
			player_is_settler = false;
		}//end if
	}
	//If you are from the same general location as your ethnic group, or if you are Convent Auroran, you are neither diasporic or a settler
	else {
		player_is_diasporic = false;
		player_is_settler = false;
	}//end if
	
	
	// Determining Imperial Type: Provincial or Governorate
	if (player_race == "Imperial") {
		// Imperials from a Highlander or Imperial province are considered provincial
		if (player_region ==  "Foyer") {
			player_imperial_class = "Provincial";
		}
		else if (player_region == "Vility") {
			player_imperial_class = "Provincial";
		}
		else if (player_region == "Zarata") {
			player_imperial_class = "Provincial";
		}
		else if (player_region == "Imperia") {
			player_imperial_class = "Provincial";
		}
		else if (player_region == "Valle") {
			player_imperial_class = "Provincial";
		}
		else if (player_region == "Petral") {
			player_imperial_class = "Provincial";
		}
		else if (player_region == "Aurora Nova") {
			player_imperial_class = "Provincial";
		}
		else if (player_region == "Coulon") {
			player_imperial_class = "Provincial";
		}
		else if (player_region == "Enrenan") {
			player_imperial_class = "Provincial";
		}
		else if (player_region == "Hiten") {
			player_imperial_class = "Provincial";
		}
		// Imperials from anywhere that is not a province are considered governorate
		else {
			player_imperial_class = "Governorate";
		}// end if
	}
	else {
		player_imperial_class = "False";//Non Imperials get a 'False' string to prevent crashes.
	}//end if
	
	
	//Convent Auroran tag
	// True only if the party member is a Convent Auroran
		//NOTE: These are kind of unnecessary. Can just use player_race == "Convent Auroran" and player_race != "Convent Auroran" for comparison instead; will keep onto them just in case
	if (player_race == "Convent Auroran") {
		player_is_convent_auroran = true;
	}
	else {
		player_is_convent_auroran = false;
	}//end if
	
	
	//Determining Convent Auroran Exile Status
	//If you are a Convent Auroran, check the Holy Order of the player to automatically assign status (if possible). If not automatically assigned, ask them if they want to be an exile
	if (player_is_convent_auroran == true) {
		//NOTE: CHECK LOGIC OF THIS!
		// If player is in a Holy Order that is not Aurora's or Enteie's, this should trigger
		if (player_is_in_holy_order == true and (player_holy_order != "The Holy Order of the Queen of the Ice" and player_holy_order != "The Holy Order of the Fair Essence")) {
			cout << "You are a member of " << player_holy_order << "." << endl;
			cout << "Your membership in this Holy Order means that you have been exiled by your fellow Convent Aurorans." << endl;
			player_is_convent_exile = true;
		}
		//Should trigger for Convent Aurorans not in a Holy Order, or in Aurora or Enteie's order
		else {
			while (i_have_decided_my_exile_status == false) {
				cout << question("Do you want to be a Convent Auroran Exile? ") << "Yes or No." << endl;
				cout << tab << "Type 'Info' for information about this status." << endl;
				cout << "Am I a Convent Auroran Exile? ";
				getline(cin, do_i_want_to_be_convent_exile);
				do_i_want_to_be_convent_exile = fixformat(do_i_want_to_be_convent_exile);
				
				if (do_i_want_to_be_convent_exile == "Yes") {
					cout << "You are a Convent Auroran Exile then." << endl;
					player_is_convent_exile = true;
					i_have_decided_my_exile_status = true;
				}
				else if (do_i_want_to_be_convent_exile == "No") {
					cout << "You are not a Convent Auroran Exile then." << endl;
					player_is_convent_exile = false;
					i_have_decided_my_exile_status = true;
				}
				else if (do_i_want_to_be_convent_exile == "Info") {
					cout << tab << info("A Convent Auroran Exile is a Convent Auroran who has left behind their origins. They are still permanently branded as Convent Aurorans by society at large, but are isolated and shunned from the common Convent Auroran community. People become exiles for many reasons, from pursuing servitude to spirits outside a select few spirits, love to a person from a different race or another Exile, committing crimes deemed unforgivable, or violating the extensive cultural rules commonly accepted by Convent Auroran society.") << endl;
					cout << tab << info("An Exile can expect to be discriminated against by communed Convent Aurorans, but find acceptance with their fellow Exiles, and with a good portion of the population who opposes the otherness of those Convent Aurorans who do not expose themselves to the common society at large.") << endl;
				}
				else {
					cout << notice("Try again.") << endl;
				}//end if
			}//end while
		}//end if
	}
	// All other races are automatically not exiles
	else {
		player_is_convent_exile = false;
	}//end if
	
	
	
	// Cstphene Guardsman Selecting
	// Triggers if the player is not in a Holy Order, from Cstphon, and are either Infantry or an Officer.
	if ((player_region == "Cstphon" and player_is_in_holy_order == false) and (player_career == "Infantry" or player_career == "Officer")) {
	
		while (player_is_cstphene_guardsman == false) {
			cout << question("Are you a Cstphene Guardsman? ") << "Yes or No." << endl;
			cout << tab << "Type 'Info' for information on what a Cstphene Guardsman is." << endl;
			cout << "Are you a Cstphene Guardsman? ";
			getline(cin, do_i_want_to_be_cstphene_guardsman);
			do_i_want_to_be_cstphene_guardsman = fixformat(do_i_want_to_be_cstphene_guardsman);
			
			if (do_i_want_to_be_cstphene_guardsman == "Yes") {
				cout << "You are a Cstphene Guardsman then." << endl;
				player_is_cstphene_guardsman = true;
			}
			else if (do_i_want_to_be_cstphene_guardsman == "No") {
				cout << "Alright." << endl;
				player_is_cstphene_guardsman = false;
				break;
			}
			else if (do_i_want_to_be_cstphene_guardsman == "Info") {
				cout << tab << info("The Cstphene Guard is an elite military unit based in the City of Cstphon, in the Governorate of Cstphon. Its ranks are populated by the various people who inhabit the governorate, and the members often see prestigious deployments around the Empire. They may form a portion of the Imperial military deployment in a governorate's capital, or in other choice locations. It is a well-respected and prestigious career.") << endl;
			}
			else {
				cout << notice("Try again.") << endl;
			}//end if
		}//end while
	
	}
	else {
		player_is_cstphene_guardsman = false;
	}//end if
	
	
	
	// Seeing if the player served in the Banact War
	// If the palyer is in the military and is old enough, they can choose if they served in the war.
	if (player_age >= age_cap and player_is_military == true) {
	
		while (player_served_in_banact_war == false) {
			cout << question("Did you serve in the Banact War? ") << "Yes or No." << endl;
			cout << tab << "Type 'Info' for information." << endl;
			cout << "Did I serve in the Banact War? ";
			getline(cin, did_i_serve_in_banact_war);
			did_i_serve_in_banact_war = fixformat(did_i_serve_in_banact_war);
			
			if (did_i_serve_in_banact_war == "Yes") {
				cout << "Excellent. You no doubt served well." << endl;
				player_served_in_banact_war = true;
			}
			else if (did_i_serve_in_banact_war == "No") {
				cout << "No doubt that you had more pressing issues at the time." << endl;
				player_served_in_banact_war = false;
				break;
			}
			else if (did_i_serve_in_banact_war == "Info") {
				cout << tab << info("The Banact War was a conflict with the Empire of the Eternal Warlord, the Highlands, and Aurora against the Banact, a reptilian people of a supposed celestial origin; it ended twenty years ago. The brutal war would see a significant portion of the Empire and even the Highlands occupied. It was a wildly destructive war that left the Empire significantly weakened and on the brink of collapse. Millions of men from all walks of life joined the armies of the world to fight against the Banact menace.") << endl;
			}
			else {
				cout << notice("Try again.");
			}//end if
		}//end while
		
	}
	else {
		player_served_in_banact_war = false;
	}//end if




}//end main
