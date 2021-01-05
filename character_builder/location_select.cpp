#include <iostream>
#include "color_functions.h" // Lets you use the notice, info, picked, and question functions
#include "proper_cap.h" // lets you use the fixformat function
#include "lower_cap.h" // lets you use the lowerfixformat function
using namespace std;

int main() {
	//Formatting
	string tab = "   ";
	string double_tab = "      ";

	// Variable Declarations
	// Output
	string player_citizenship;
	string player_region;
	// To eventually add: picking the city you are from
	
	// Temporary Variables
	string do_i_want_realm_info;
	string is_my_region_correct;
	string do_i_want_area_info;
	
	string realm_i_want_to_know_about;
	string area_i_want_to_know_about;
	
	bool nation_is_confirmed = false;
	bool nation_is_selected = false;
	bool i_want_realm_info = false;
	bool citizenship_is_valid = false;
	bool citizenship_cannot_change = false;
	bool i_want_area_info = false;
	bool region_chosen = false;
	bool region_is_correct = false;
	
	cout << question("Where are you from?") << endl;
	
	while (nation_is_confirmed == false) {
		
		// Picking your realm
		cout << info("Pick from the following realms:") << endl;
		// Realm list
		cout << tab << "The Highlands" << endl;
		cout << tab << "The Empire" << endl;
		//------------------------------
		//For more realms
		//cout << tab << "Other realms" << endl;
		//------------------------------
		// end Realm list
		while (i_want_realm_info == false) {//realm info question
			cout << question("Do you want to know about the realms? ") << "Yes or No? ";
			getline(cin, do_i_want_realm_info);
			do_i_want_realm_info = fixformat(do_i_want_realm_info);
			if (do_i_want_realm_info == "Yes") {
				i_want_realm_info = true;
			}
			else if (do_i_want_realm_info == "No") {
				i_want_realm_info = false;
				break;
			}
			else {
				cout << notice("Yes or No please.") << endl;
			}//end if
		}//end while realm info question
		
		//Finding out realm information
		while (i_want_realm_info == true) {//get realm info
			cout << question("Which realm do you want to know about?") << endl;
			cout << tab << "Type 'Realms' to see the list of realms again." << endl;
			cout << tab << "Type 'Exit' to end the information session." << endl;
			cout << "I want to know about ";
			getline(cin, realm_i_want_to_know_about);
			realm_i_want_to_know_about = fixformat(realm_i_want_to_know_about);
			if (realm_i_want_to_know_about == "Exit") {
				cout << "Let's move on then." << endl;
				i_want_realm_info = false;
			}
			else if (realm_i_want_to_know_about == "Realms") {
				// Realm list
				cout << info("Realms:") << endl;
				cout << tab << "The Highlands" << endl;
				cout << tab << "The Empire" << endl;
				//------------------------------
				//For more realms
				//cout << "   Other realms" << endl;
				//------------------------------
				// end realm list
			}
			else if (realm_i_want_to_know_about == "The Highlands" or realm_i_want_to_know_about == "Highlands") {
				cout << tab << info("The Highlands is a realm headed by Foyer, the Commander of Weapons, an ancient spirit who ascended long ago. The core of the realm is in the west, where it is mostly mountainous, with dense urban pockets in the various isolated valleys. Home to more than just mountains, the Highlands is home to plains, forests, and deserts across its territory.") << endl;
				cout << tab << info("The Highlands is the spiritual center of the Continent, where spirits from all across the known world commune and live under the theocracy headed by Foyer.") << endl;
				cout << tab << info("The Highlands is home to some 750 million people, and is well regarded as a highly militarized state of considerable power alongside its heavily industrialized economy and significant mineral wealth.") << endl;
				cout << tab << info("Capital: City of Foyer (pop: 25,992,000)") << endl;
				cout << tab << info("Population (est): 751,848,000") << endl;
				cout << tab << info("By ethnicity:") << endl;
				cout << double_tab << info("Foyerian - 402,033,000") << endl;
				cout << double_tab << info("Vitalian - 288,767,000") << endl;
				cout << double_tab << info("Orieni Highlander - 34,764,000") << endl;
				cout << double_tab << info("Convent Auroran - 12,150,000") << endl;
				cout << double_tab << info("Imperial - 7,969,000") << endl;
				cout << double_tab << info("Imperial Settler - 6,165,000") << endl;
			}
			else if (realm_i_want_to_know_about == "The Empire" or realm_i_want_to_know_about == "Empire") {
				cout << tab << info("The Empire is far from monolithic. Headed by the Eternal Warlord, an undead being of ancient origins, the Empire stretches across most of the Continent, from the border with Aurora to the edge of the Great Desert, to the East Sea, to the border with Oriena.") << endl;
				cout << tab << info("Home to a vast array of peoples scattered throughout the lands, the Empire is home to around 2.5 billion people. It is, however, subject to a great amount of inequalilty in wealth and standard of living; the Empire is home to both the richest and the poorest areas on the Continent. Much of the Empire remains vastly underdeveloped except for a great handful of populous urban centers.") << endl;
				cout << tab << info("Capital: The City of the Eternal Warlord (pop: 84,221,000)") << endl;
				cout << tab << info("Population (est): 2,502,874,000") << endl;
				cout << tab << info("By ethnicity (excluding minor groups):") << endl;
				cout << double_tab << info("Imperial - 730,785,000") << endl;
				cout << double_tab << info("Convent Auroran - 60,471,000") << endl;
				cout << double_tab << info("Indigenous - 1,587,091,000") << endl;
				cout << double_tab << info("Settlers - 124,580,000") << endl;
			}
			//------------------------------------------------------------
			//For more realms
			//else if (realm_i_want_to_know_about == "Another Realm" or realm_i_want_to_know_about == "Nickname") {
			//	cout << tab <<  info("My realm info") << endl;
			//	cout << tab << info("My population") << endl;
			//}
			//-------------------------------------------------------------
			else {
				cout << notice("Try again.") << endl;
			}//end if
		}//end while get realm info
		
		// Initial citizenship picker (can change citizenship later)
		while (nation_is_confirmed == false) {
			cout << question("Which realm are you from?") << endl;
			cout << question("The Highlands or The Empire? ");
			//---------------------------------------------------------
			//For more realms
			//cout << question("All realms in a nice format") << endl;
			//cout << "I am from ";
			// END
			//---------------------------------------------------------
			getline(cin, player_citizenship);
			player_citizenship = fixformat(player_citizenship);
			if (player_citizenship == "The Highlands") {
				break;
			}
			else if (player_citizenship == "Highlands") {
				player_citizenship = "The Highlands";
				break;
			}
			else if (player_citizenship == "The Empire") {
				break;
			}
			else if (player_citizenship == "Empire") {
				player_citizenship == "The Empire";
				break;
			}
			//-------------------------------------------------
			//For more realms
			//else if (player_citizenship == "Realm name") {
			//	break;
			//}
			//else if (player_citizenship == "Common mixup for realm name") {
			//	player_citizenship = "Realm name";
			//	break;
			//}
			//-------------------------------------------------
			else {
				cout << notice("You can only be from The Empire or the Highlands.") << endl;
				//-----------------------------------------------------------
				//For more realms
				//cout << notice("You can only be from these realms in a nice format") << endl;
				//-----------------------------------------------------------
			}//end if
		}//end while
		
		
		// Area picker; can change citizenship
		while (nation_is_selected == false) {
			cout << info("Select a particular location to be from:") << endl;
			
			// Block for Highlanders
			if (player_citizenship == "The Highlands") {
				cout << tab <<  "Province of Foyer" << endl;
				cout << tab << "Province of Vility" << endl;
				cout << tab << "Province of Zarata" << endl;
				cout << tab << "Governorate of Narena" << endl;
				cout << tab << "Governorate of Centa" << endl;
				cout << tab << "Governorate of Betiera" << endl;
				cout << tab << "Governorate of Pallon" << endl;
				cout << tab << "Ostorn Governorate" << endl;
				cout << tab << "Lifus Governorate" << endl;
				cout << tab << "Governorate of Sonal" << endl;
				cout << tab << "Governorate of Deseret" << endl;
				cout << tab << "Governorate of Anglia" << endl;
				cout << tab << "Governorate of Halfon" << endl;
				cout << tab << "Era Free Trade State" << endl;
				// Not a choice printed, but still availible
				//cout << tab << "Spirit Archipelago" << endl;
				
				// Asking about area info
				while (i_want_area_info == false) {
					cout << question("Do you want to know about any of these regions? ") << "Yes or No. ";
					getline(cin, do_i_want_area_info);
					do_i_want_area_info = fixformat(do_i_want_area_info);
					if (do_i_want_area_info == "Yes") {
						i_want_area_info = true;
					}
					else if (do_i_want_area_info == "No") {
						i_want_area_info = false;
						break;
					}
					else {
						cout << notice("Yes or No please.") << endl;
					}//end if
				}// end while
				
				// Asking about the Highlander areas
				while (i_want_area_info == true) {
					cout << question("Which region would you like to learn about?") << endl;
					cout << tab << "Type in its long or short name to see information about it." << endl;
					cout << tab << "Type 'Exit' to stop learning." << endl;
					cout << tab << "Type 'Regions' to see the list of regions again." << endl;
					cout << "I want to know about the ";
					getline(cin, area_i_want_to_know_about);
					area_i_want_to_know_about = fixformat(area_i_want_to_know_about);
					if (area_i_want_to_know_about == "Exit") {
						i_want_area_info = false;
					}
					else if (area_i_want_to_know_about == "Regions") {
						cout << info("Political Divisions of the Highlands") << endl;
						cout << tab << "Province of Foyer" << endl;
						cout << tab << "Province of Vility" << endl;
						cout << tab << "Province of Zarata" << endl;
						cout << tab << "Governorate of Narena" << endl;
						cout << tab << "Governorate of Centa" << endl;
						cout << tab << "Governorate of Betiera" << endl;
						cout << tab << "Governorate of Pallon" << endl;
						cout << tab << "Ostorn Governorate" << endl;
						cout << tab << "Lifus Governorate" << endl;
						cout << tab << "Governorate of Sonal" << endl;
						cout << tab << "Governorate of Deseret" << endl;
						cout << tab << "Governorate of Anglia" << endl;
						cout << tab << "Governorate of Halfon" << endl;
						cout << tab << "Era Free Trade State" << endl;
						// Not a choice printed, but still availible
						//cout << "   Spirit Archipelago" << endl;
					}
					//BEGIN Highlander region descriptions
					else if (area_i_want_to_know_about == "Province of Foyer" or area_i_want_to_know_about == "Foyer") {
						cout << tab << info("The Province of Foyer is the core of the Highlander state. Known simply as Foyer colloquially, it is home to the traditional home of the Highlanders. A significant portion of the Highlander industrial base is located here, and it is among the most urbanized of the Highlander governorates. Home to many urban areas packed in the valleys between the mountainous region, and much of the territory set on a plateau.") << endl;
						cout << tab << info("Capital: City of Foyer (pop: 25,992,000)") << endl;
						cout << tab << info("Population (est): 208,154,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 151,521,000") << endl;
						cout << double_tab << info("Vitalian - 50,582,000") << endl;
						cout << double_tab << info("Orieni Highlander - 3,398,000") << endl;
						cout << double_tab << info("Convent Auroran - 543,000") << endl;
						cout << double_tab << info("Imperial - 1,361,000") << endl;
						cout << double_tab << info("Imperial Settler - 719,000") << endl;
					}
					else if (area_i_want_to_know_about == "Province of Vility" or area_i_want_to_know_about == "Vility") {
						cout << tab << info("The Province of Vililty is often referred to as the second homeland of the Highlanders. It maintains a similar climate and terrain as Foyer, and is indistiguishable from it in many ways. This province is most noted for the Vitalians, a hybridized people sourced mostly from Aurorans, but with significant Highlander input. The Vitalians, while the largest group in Vility, make up large minorities through the Highlands.") << endl;
						cout << tab << info("Capital: City of Vility (pop: 24,061,000)") << endl;
						cout << tab << info("Population (est): 162,003,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 36,613,000") << endl;
						cout << double_tab << info("Vitalian - 120,551,000") << endl;
						cout << double_tab << info("Orieni Highlander - 2,547,000") << endl;
						cout << double_tab << info("Convent Auroran - 969,000") << endl;
						cout << double_tab << info("Imperial - 1,031,000") << endl;
						cout << double_tab << info("Imperial Settler - 292,000") << endl;
					}
					else if (area_i_want_to_know_about == "Province of Zarata" or (area_i_want_to_know_about == "Zarata" or area_i_want_to_know_about == "Zerixa")) {
						cout << tab << info("The Province of Zarata is quite similar to Foyer and Vility. However, like Vility, it is distinguished by its unique ethnic group: Orieni Highlanders. This group of people are descended from both Orieni migrants from ancient times and Highlanders. This group makes up around a quarter of the population and form smaller minorities through the realm.") << endl;
						cout << tab << info("Capital: City of Zerixa (pop: 13,617,000)") << endl;
						cout << tab << info("Population (est): 103,806,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 37,834,000") << endl;
						cout << double_tab << info("Vitalian - 39,673,000") << endl;
						cout << double_tab << info("Orieni Highlander - 25,139,000") << endl;
						cout << double_tab << info("Convent Auroran - 179,000") << endl;
						cout << double_tab << info("Imperial - 708,000") << endl;
						cout << double_tab << info("Imperial Settler - 274,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Narena" or area_i_want_to_know_about == "Narena") {
						cout << tab << info("The Governorate of Narena is the most far-flung of the governorates. Set on a coastal plain, it is currently experiencing a period of extreme growth, unlike the other eastern governorates. Narena is home to notable populations of minorities, notably Convent Aurorans and Thurops.") << endl;
						cout << tab << info("Capital: Veneta (pop: 7,218,000)") << endl;
						cout << tab << info("Population (est): 60,401,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 42,312,000") << endl;
						cout << double_tab << info("Vitalian - 9,095,000") << endl;
						cout << double_tab << info("Orieni Highlander - 410,000") << endl;
						cout << double_tab << info("Convent Auroran - 4,395,000") << endl;
						cout << double_tab << info("Imperial - 177,000") << endl;
						cout << double_tab << info("Imperial Settler - 4,012,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Centa" or area_i_want_to_know_about == "Centa") {
						cout << tab << info("The Governorate of Centa borders Nareana. It is mostly flat and agricultural, being the breadbasket of the Eastern Highlands. Despite this, it experienced great damage during the Lizard War, including occupation. It has begun to hemorrhage residents who are moving to better lives in Narena.") << endl;
						cout << tab << info("Capital: Centiphon (pop: 5,971,000)") << endl;
						cout << tab << info("Population (est): 61,645,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 48,819,000") << endl;
						cout << double_tab << info("Vitalian - 9,143,000") << endl;
						cout << double_tab << info("Orieni Highlander - 372,000") << endl;
						cout << double_tab << info("Convent Auroran - 3,141,000") << endl;
						cout << double_tab << info("Imperial - 98,000") << endl;
						cout << double_tab << info("Imperial Settler - 72,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Betiera" or area_i_want_to_know_about == "Betiera") {
						cout << tab << info("The Governorate of Betiera is thought of as the gateway to the Empire, as it holds the busiest border between the two realms. Betiera is home to a mountainous south, but the north is largely flat farmland. Quite homogeneous, populated by mostly Highlanders, it is quite a bit more rural than its neighoring provinces.") << endl;
						cout << tab << info("Capital: Iana (pop: 8,236,000)") << endl;
						cout << tab << info("Population (est): 24,109,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 18,529,000") << endl;
						cout << double_tab << info("Vitalian - 4,671,000") << endl;
						cout << double_tab << info("Orieni Highlander - 203,000") << endl;
						cout << double_tab << info("Convent Auroran - 72,000") << endl;
						cout << double_tab << info("Imperial - 524,000") << endl;
						cout << double_tab << info("Imperial Settler - 110,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Pallon" or area_i_want_to_know_about == "Pallon") {
						cout << tab << info("The Governorate of Pallon is known for its isolation, despite its rather central location in the Highlands. It is centered around the Valley of Pallon, the single largest valley in the Highlands. Despite this, the governorate remains quiet and rather unpopulated, although it is home to large scale mining operations in its tall moutains. It remains the largest producer of iron ore and salt in the Highlands.") << endl;
						cout << tab << info("Capital: Pallum (pop: 1,006,000)") << endl;
						cout << tab << info("Population (est): 7,457,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 5,821,000") << endl;
						cout << double_tab << info("Vitalian - 1,356,000") << endl;
						cout << double_tab << info("Orieni Highlander - 177,000") << endl;
						cout << double_tab << info("Convent Auroran - <1000") << endl;
						cout << double_tab << info("Imperial - 103,000") << endl;
						cout << double_tab << info("Imperial Settler - <1000") << endl;
					}
					else if (area_i_want_to_know_about == "Ostorn Governorate" or (area_i_want_to_know_about == "Ostorn" or area_i_want_to_know_about == "Governorate of Ostorn")) {
						cout << tab << info("The Ostorn Governorate is the most heavily forested area in the Highlands, home to its logging industry. It also serves as a buffer between Vility and the Empire, with its nigh-impassible forests making an excellent deterrent for any potential invader.") << endl;
						cout << tab << info("Capital: Bastion (pop: 1,753,000)") << endl;
						cout << tab << info("Population (est): 8,210,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 1,991,000") << endl;
						cout << double_tab << info("Vitalian - 5,224,000") << endl;
						cout << double_tab << info("Orieni Highlander - 263,000") << endl;
						cout << double_tab << info("Convent Auroran - 319,000") << endl;
						cout << double_tab << info("Imperial - 316,000") << endl;
						cout << double_tab << info("Imperial Settler - 97,000") << endl;
					}
					else if (area_i_want_to_know_about == "Lifus Governorate" or (area_i_want_to_know_about == "Lifus" or area_i_want_to_know_about == "Governorate of Lifus")) {
						cout << tab << info("The Lifus Governorate is the resource capital of the Highlands. It is the largest producer of raw materials in the whole realm, producing coal, oil, and natural gas alongside a variety of heavy and light metals. Its permanent population is rather small, though it is home to a large population of temporary workers.") << endl;
						cout << tab << info("Capital: Fort Ternan (pop: 634,000)") << endl;
						cout << tab << info("Population (est): 3,851,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 2,243,000") << endl;
						cout << double_tab << info("Vitalian - 1,099,000") << endl;
						cout << double_tab << info("Orieni Highlander - 113,000") << endl;
						cout << double_tab << info("Convent Auroran - 396,000") << endl;
						cout << double_tab << info("Imperial - <1000") << endl;
						cout << double_tab << info("Imperial Settler - <1000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Sonal" or area_i_want_to_know_about == "Sonal") {
						cout << tab << info("The Governorate of Sonal is home to the production of many cash crops for the Highlander economy, producing plant oils, cotton, tobacco, and a variety of other plants used to manufacture goods. Largely rural and agricultural, it remains as a buffer to the Empire, although exposed.") << endl;
						cout << tab << info("Capital: Aurorus Sonus (pop: 4,465,000)") << endl;
						cout << tab << info("Population (est): 22,996,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 14,275,000") << endl;
						cout << double_tab << info("Vitalian - 6,289,000") << endl;
						cout << double_tab << info("Orieni Highlander - 371,000") << endl;
						cout << double_tab << info("Convent Auroran - 540,000") << endl;
						cout << double_tab << info("Imperial - 1,278,000") << endl;
						cout << double_tab << info("Imperial Settler - 243,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Deseret" or area_i_want_to_know_about == "Deseret") {
						cout << tab << info("The Governorate of Deseret is split between flat plains and desert. The upper half is composed of flat plains, not dissimilar from Centa. The notable portion of it is composed of deserts with the occasional oasis in between. The whole desert is usually seen as an impenetrable fortification, although it is home to a developed road system connecting the oasis cities.") << endl;
						cout << tab << info("Capital: The Oasis of Aurora (pop: 9,122,000)") << endl;
						cout << tab << info("Population (est): 43,025,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 22,091,000") << endl;
						cout << double_tab << info("Vitalian - 20,368,000") << endl;
						cout << double_tab << info("Orieni Highlander - 56,000") << endl;
						cout << double_tab << info("Convent Auroran - 87,000") << endl;
						cout << double_tab << info("Imperial - 423,000") << endl;
						cout << double_tab << info("Imperial Settler - <1000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Anglia" or area_i_want_to_know_about == "Anglia") {
						cout << tab << info("The Governorate of Anglia is largely considered an agricultural province, with agriculture being the largest source of employment, though it is not the largest food producer in the Highlands. Despite this, it continues to produce food for the packed urban centers, taking pressure off farms in Vility and Foyer.") << endl;
						cout << tab << info("Capital: Caire (pop: 6,385,000)") << endl;
						cout << tab << info("Population (est): 37,250,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 16,789,000") << endl;
						cout << double_tab << info("Vitalian - 18,121,000") << endl;
						cout << double_tab << info("Orieni Highlander - 358,000") << endl;
						cout << double_tab << info("Convent Auroran - 1,297,000") << endl;
						cout << double_tab << info("Imperial - 651,000") << endl;
						cout << double_tab << info("Imperial Settler - 34,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Halfon" or area_i_want_to_know_about == "Halfon") {
						cout << tab << info("The Governorate of Halfon is mostly dry, mountainous terrain. It remains as a buffer against the Empire, and is largely unpopulated. It houses testing grounds for the military despite its spare population.") << endl;
						cout << tab << info("Capital: Fort Vollon (pop: 372,000)") << endl;
						cout << tab << info("Population (est): 2,683,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 1,773,000") << endl;
						cout << double_tab << info("Vitalian - 698,000") << endl;
						cout << double_tab << info("Orieni Highlander - <1000") << endl;
						cout << double_tab << info("Convent Auroran - 212,000") << endl;
						cout << double_tab << info("Imperial - <1000") << endl;
						cout << double_tab << info("Imperial Settler - <1000") << endl;
					}
					else if ((area_i_want_to_know_about == "Era Free Trade State" or area_i_want_to_know_about == "Era") or (area_i_want_to_know_about == "Era Free Trade" or area_i_want_to_know_about == "Eft")) {//Note: EFT is another abbreviation but proper_cap makes EFT become Eft
						cout << tab << info("The Era Free Trade State began as the City of Era in the Province of Zarata. As an effort to attract business from the Empire, Foyer declared Era its own political entity and gave it significant legal autonomy, often exempt from certain laws and taxes. The division has laws that make it quite cheap for Imperial businesses to use Era as their base of operations for their local Imperial branches.") << endl;
						cout << tab << info("Population (est): 5,765,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 1,129,000") << endl;
						cout << double_tab << info("Vitalian - 1,683,000") << endl;
						cout << double_tab << info("Orieni Highlander - 1,346,000") << endl;
						cout << double_tab << info("Convent Auroran - <1000") << endl;
						cout << double_tab << info("Imperial - 1,296,000") << endl;
						cout << double_tab << info("Imperial Settler - 311,000") << endl;
					}
					else if (area_i_want_to_know_about == "Spirit Archipelago" or area_i_want_to_know_about == "Anglia") {
						cout << tab << info("The Territory of the Spirit Archipelago is a recent conquest out on the East Ocean. This land is home to an indigenous population of men not deemed fit for Highlander society owing to their phenotypical differences and general lack of civilization. At present the military is attempting to rid the islands of these people, resulting in a violent life on the islands for many residents, including Highlanders. Despite this violence, settlers continue to arrive in large numbers, often drawn from the damaged East. The Spirit Archipelago is expected to be ceded to Narena for administration until more territory can be conquered. Migration to the Spirit Archipelago is strictly monitored, with exact population numbers constantly being updated to reflect births, deaths, and arrivals.") << endl;
						cout << tab << info("Capital: Port Foyer (pop: 406,337)") << endl;
						cout << tab << info("Population: 523,850 legal residents and ~200,000 indigenous") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Foyerian - 293,150") << endl;
						cout << double_tab << info("Vitalian - 215,430") << endl;
						cout << double_tab << info("Orieni Highlander - 10,980") << endl;
						cout << double_tab << info("Convent Auroran - 37 (exact)") << endl;
						cout << double_tab << info("Imperial - 3290") << endl;
						cout << double_tab << info("Imperial Settler - 960") << endl;
					}
					//END Highlander region descriptions
					else {
						cout << notice("Try again.") << endl;
					}//end if
				}// end while
				
				// Pick the region you are actually from in the Highlands
				while (nation_is_confirmed == false) {
					cout << question("What region do you want to be from?") << endl;
					cout << tab << "Type 'Change' if you want to change your realm." << endl;
					cout << tab << "Type 'Regions' to see the list of regions again." << endl;
					cout << "I want to be from the ";
					getline(cin, player_region);
					player_region = fixformat(player_region);
					if (player_region == "Change") {
						// Just for a 2 realm system
						cout << "You are now from the Empire." << endl;
						player_citizenship = "The Empire";
						//----------------------------------------------------
						//For multiple realms (not just 2)
						//while (nation_is_confirmed == false) {
						//	cout << question("What realm do you want to be from?") << endl;
						//	cout << picked("The Highlands ") << "(restarts region selection)" << endl;
						//	cout << "The Empire" << endl;
						//	cout << "My other realms" << endl;
						//	cout << "I want to be from ";
						//	getline(cin, player_citizenship);
						//	player_citizenship = fixformat(player_citizenship);
						//	if (player_citizenship == "The Highlands") {
						//		break;
						//	}
						//	else if (player_citizenship == "Highlands") {
						//		player_citizenship = "The Highlands";
						//		break;
						//	}
						//	else if (player_citizenship == "The Empire") {
						//		cout << "You are now from the Empire" << endl;
						//		break;
						//	}
						//	else if (player_citizenship == "Empire") {
						//		player_citizenship = "The Empire";
						//		cout << "You are now from the Empire" << endl;
						//		break;
						//	}
						//	else if (player_citizenship == "My realm") {
						//		cout << "You are now from My Realm" << endl;
						//		break;
						//	}
						//	else if (player_citizenship == "My realm nickname") {
						//		player_citizenship = "My Realm";
						//		cout << "You are now from My Realm" << endl;
						//		break;
						//	}
						//	else {
						//		cout << notice("Try again.") << endl;
						//	}
						//}//end while
						//----------------------------------------------------
						break;
					}
					else if (player_region == "Regions") {
						cout << info("Political Divisions of the Highlands:") << endl;
						cout << tab << "Province of Foyer" << endl;
						cout << tab << "Province of Vility" << endl;
						cout << tab << "Province of Zarata" << endl;
						cout << tab << "Governorate of Narena" << endl;
						cout << tab << "Governorate of Centa" << endl;
						cout << tab << "Governorate of Betiera" << endl;
						cout << tab << "Governorate of Pallon" << endl;
						cout << tab << "Ostorn Governorate" << endl;
						cout << tab << "Lifus Governorate" << endl;
						cout << tab << "Governorate of Sonal" << endl;
						cout << tab << "Governorate of Deseret" << endl;
						cout << tab << "Governorate of Anglia" << endl;
						cout << tab << "Governorate of Halfon" << endl;
						cout << tab << "Era Free Trade State" << endl;
						// Not a choice printed, but still availible
						//cout << "   Spirit Archipelago" << endl;					
						
					}
					else if (player_region == "Province of Foyer" or player_region == "Foyer") {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Foyer";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Province of Vility" or player_region == "Vility") {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Vility";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Province of Zarata" or (player_region == "Zarata" or player_region == "Zerixa")) {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Zarata";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Narena" or player_region == "Narena") {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Narena";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Centa" or player_region == "Centa") {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Centa";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Betiera" or player_region == "Betiera") {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Betiera";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Pallon" or player_region == "Pallon") {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Pallon";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Ostorn Governorate" or (player_region == "Ostorn" or player_region == "Governorate of Ostorn")) {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Ostorn";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Lifus Governorate" or (player_region == "Lifus" or player_region == "Governorate of Lifus")) {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Lifus";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Sonal" or player_region == "Betiera") {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Sonal";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Deseret" or player_region == "Deseret") {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Deseret";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Anglia" or player_region == "Anglia") {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Anglia";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Halfon" or player_region == "Halfon") {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Halfon";
						nation_is_selected = true;
						break;
					}
					else if ((player_region == "Era Free Trade State" or player_region == "Era") or (player_region == "Era Free Trade" or player_region == "Eft")) {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Era";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Spirit Archipelago") {
						player_citizenship = "The Highlands"; // ensures that no unexpected bugs occur
						player_region = "Spirit Islands";//Note the name change
						nation_is_selected = true;
						break;
					}
					else {
						cout << notice("Try again.") << endl;
					}//end if
				}// end while
			}//End Block for Highlanders
			
			
			
			// Block for Imperials
			else if (player_citizenship == "The Empire") {
				//Provinces
				cout << tab << "Province of Imperia" << endl;
				cout << tab << "Province of Valle" << endl;
				cout << tab << "Province of Petral" << endl;
				cout << tab << "Province of Aurora Nova" << endl;
				cout << tab << "Province of Coulon" << endl;
				cout << tab << "Province of Enrenan" << endl;
				cout << tab << "Province of Hiten" << endl;
				//Special Divisions
				cout << tab << "Protectorate of Kathay" << endl;
				cout << tab << "Thurop Authoritarian State" << endl;
				//Governorates
				cout << tab << "Governorate of Entrana" << endl;
				cout << tab << "Governorate of Ralaer" << endl;
				cout << tab << "Governorate of Hanor" << endl;
				cout << tab << "Governorate of Fetedal" << endl;
				cout << tab << "Governorate of Nerhast" << endl;
				cout << tab << "Governorate of Cstphon" << endl;
				cout << tab << "Governorate of Arya" << endl;
				cout << tab << "Governorate of Tiblus" << endl;
				cout << tab << "Governorate of Sophos" << endl;
				cout << tab << "Governorate of Alges" << endl;
				cout << tab << "Governorate of Anoch" << endl;
				cout << tab << "Governorate of Edessa" << endl;
				cout << tab << "Governorate of Rihde" << endl;
				cout << tab << "Governorate of Inden" << endl;
				cout << tab << "Governorate of Siniasus" << endl;
				cout << tab << "Governorate of Mokvon" << endl;
				cout << tab << "Governorate of Vanas" << endl;
				
				// Asking about area info
				while (i_want_area_info == false) {
					cout << question("Do you want to know about any of these regions? ") << "Yes or No. ";
					getline(cin, do_i_want_area_info);
					do_i_want_area_info = fixformat(do_i_want_area_info);
					if (do_i_want_area_info == "Yes") {
						i_want_area_info = true;
					}
					else if (do_i_want_area_info == "No") {
						i_want_area_info = false;
						break;
					}
					else {
						cout << notice("Yes or No please.") << endl;
					}//end if
				}// end while
				
				// Asking about the Imperial regions
				while (i_want_area_info == true) {
					cout << question("Which region would you like to learn about?") << endl;
					cout << tab << "Type in its long or short name to see information about it." << endl;
					cout << tab << "Type 'Exit' to stop learning." << endl;
					cout << tab << "Type 'Regions' to see the list of regions again." << endl;
					cout << "I want to know about the ";
					getline(cin, area_i_want_to_know_about);
					area_i_want_to_know_about = fixformat(area_i_want_to_know_about);
					if (area_i_want_to_know_about == "Exit") {
						i_want_area_info = false;
					}
					else if (area_i_want_to_know_about == "Regions") {
						cout << info("Political Divisions of the Empire:") << endl;
						//Provinces
						cout << tab << "Province of Imperia" << endl;
						cout << tab << "Province of Valle" << endl;
						cout << tab << "Province of Petral" << endl;
						cout << tab << "Province of Aurora Nova" << endl;
						cout << tab << "Province of Coulon" << endl;
						cout << tab << "Province of Enrenan" << endl;
						cout << tab << "Province of Hiten" << endl;
						//Special Divisions
						cout << tab << "Protectorate of Kathay" << endl;
						cout << tab << "Thurop Authoritarian State" << endl;
						//Governorates
						cout << tab << "Governorate of Entrana" << endl;
						cout << tab << "Governorate of Ralaer" << endl;
						cout << tab << "Governorate of Hanor" << endl;
						cout << tab << "Governorate of Fetedal" << endl;
						cout << tab << "Governorate of Nerhast" << endl;
						cout << tab << "Governorate of Cstphon" << endl;
						cout << tab << "Governorate of Arya" << endl;
						cout << tab << "Governorate of Tiblus" << endl;
						cout << tab << "Governorate of Sophos" << endl;
						cout << tab << "Governorate of Alges" << endl;
						cout << tab << "Governorate of Anoch" << endl;
						cout << tab << "Governorate of Edessa" << endl;
						cout << tab << "Governorate of Rihde" << endl;
						cout << tab << "Governorate of Inden" << endl;
						cout << tab << "Governorate of Siniasus" << endl;
						cout << tab << "Governorate of Mokvon" << endl;
						cout << tab << "Governorate of Vanas" << endl;
					}
					//BEGIN Imperial Region info
					else if ((area_i_want_to_know_about == "Province of Imperia" or area_i_want_to_know_about == "Imperia") or (area_i_want_to_know_about == "Center State" or area_i_want_to_know_about == "Imperial Center State")) {
						cout << tab << info("The Province of Imperia is the most important area in the whole Empire; the home of the Imperial capital, and where the most heavily industrialized and developed portions of the Empire lay, it is an absolute economic and military powerhouse. There is no doubt that even as the Empire declines that this region will carry the legacy of it.") << endl;
						cout << tab << info("Capital: The City of the Eternal Warlord (aka: The City) (pop: 84,221,000)") << endl;
						cout << tab << info("Population (est): 409,851,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Imperial - 373,841,000") << endl;
						cout << double_tab << info("Convent Auroran - 874,000") << endl;
						cout << double_tab << info("Settler - 33,611,000") << endl;
						cout << double_tab << info("Highlander - 1,171,850") << endl;
						cout << double_tab << info("Auroran - 158,723") << endl;
						cout << double_tab << info("Orieni - 194,281") << endl;
					}
					else if (area_i_want_to_know_about == "Province of Valle" or area_i_want_to_know_about == "Valle") {
						cout << tab << info("The Province of Valle is a small province located just to the south of Imperia. Home to a significant agriculture industry, most inhabitants are ethnically Imperial. In particular, this province has seen great benefit from technological advanced in the Center State, and has allowed it to generate significant economy activity through increased crop yields.") << endl;
						cout << tab << info("Capital: Foyer of Valle (pop: 4,814,000)") << endl;
						cout << tab << info("Population (est): 31,098,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Imperial - 30,129,000") << endl;
						cout << double_tab << info("Convent Auroran - 213,000") << endl;
						cout << double_tab << info("Settler - 756,000") << endl;
					}
					else if (area_i_want_to_know_about == "Province of Petral" or area_i_want_to_know_about == "Petral") {
						cout << tab << info("The Province of Petral is located to the northeast of Imperia. Noted for its wealth of resources, it was the primary source of raw materials used to industrialize the Center State.") << endl;
						cout << tab << info("Capital: Yurum (pop: 6,880,000)") << endl;
						cout << tab << info("Population (est): 39,725,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Imperial - 38,245,000") << endl;
						cout << double_tab << info("Convent Auroran - 213,000") << endl;
						cout << double_tab << info("Settler - 1,267,000") << endl;
					}
					else if ((area_i_want_to_know_about == "Province of Aurora Nova" or area_i_want_to_know_about == "Aurora Nova") or (area_i_want_to_know_about == "New Aurora" or area_i_want_to_know_about == "Imperial Aurora")) {
						cout << tab << info("The Province of Aurora Nova is located to the west of the Center State. Despite its name, the area is nearly devoid of Convent Aurorans, as is typical for the Northern Empire. It relies heavily on its heavily developed industrial base. As is standard for a province, it is small, but punches well above the governorates in terms of economic activity; Aurora Nova is among the richest regions in the Empire.") << endl;
						cout << tab << info("Capital: New Aurora (pop: 8,539,000)") << endl;
						cout << tab << info("Population (est): 35,382,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Imperial - 31,921,000") << endl;
						cout << double_tab << info("Convent Auroran - 54,000") << endl;
						cout << double_tab << info("Settler - 3,407,000") << endl;
					}
					else if (area_i_want_to_know_about == "Province of Coulon" or area_i_want_to_know_about == "Coulon") {
						cout << tab << info("The Province of Coulon is coastal, and well known for its deep water port that processes the heavy trade between the north and south portions of the Empire. Other than ports, Coulon offers well-endowed fishing waters alongside the industry to process fish.") << endl;
						cout << tab << info("Capital: Farsan (pop: 7,311,000)") << endl;
						cout << tab << info("Population (est): 44,207,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Imperial - 42,419,000") << endl;
						cout << double_tab << info("Convent Auroran - 357,000") << endl;
						cout << double_tab << info("Settler - 1,431,000") << endl;
					}
					else if (area_i_want_to_know_about == "Province of Enrenan" or area_i_want_to_know_about == "Enrenan") {
						cout << tab << info("The Province of Enrenan is an agricultural province of predominantly Imperial origins. In particular, its economy is dominated by agricultural exports to the southern Empire. Noble families in this province dominate the market for meat in the southern Empire.") << endl;
						cout << tab << info("Capital: Vaigorn (pop: 4,133,000)") << endl;
						cout << tab << info("Population (est): 29,261,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Imperial - 28,123,000") << endl;
						cout << double_tab << info("Convent Auroran - 188,000") << endl;
						cout << double_tab << info("Settler - 950,000") << endl;
					}
					else if (area_i_want_to_know_about == "Province of Hiten" or area_i_want_to_know_about == "Hiten") {
						cout << tab << info("The Province of Hiten is largely industrial; it specializes in processing chemicals and other dangerous materials. Its value is unspeakable to the military capabilities of the Empire, as it produces a notable amount of the explosives that keep the Empire armed.") << endl;
						cout << tab << info("Capital: Ceris (pop: 1,909,000)") << endl;
						cout << tab << info("Population (est): 27,491,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Imperial - 22,631,000") << endl;
						cout << double_tab << info("Convent Auroran - 211,000") << endl;
						cout << double_tab << info("Settler - 4,649,000") << endl;
					}
					else if (area_i_want_to_know_about == "Protectorate of Kathay" or (area_i_want_to_know_about == "Kathay" or area_i_want_to_know_about == "Imperial Kathay")) {
						cout << tab << info("The Protectorate of Kathay is an Autonomy in the Empire. Founded hardly twenty years ago, this inland holding is in the process of transforming from a rural, poor area to one of the most heavily industrialized regions of the Continent. Previously home to notable populations of Imperials and Settlers, which have since been expelled in the aftermath of a rebellion, Kathay has developed a powerful, distinct ethnic identity. It remains a constant source of anti-Imperial rhetoric and a constant troublemaker in internal Imperial affairs. The capital of Aurea is no doubt a modern city that is among the largest in the Empire, but the rest of the Protectorate sorely lags behind, remaining mostly untamed wilderness populated by villagers.") << endl;
						cout << tab << info("Note: the following census data is prewar. The demographics of Kathay have changed significantly; there are almost no Imperials or Settlers left.") << endl;
						cout << tab << info("Capital: Aurea (pop: 33,328,000)") << endl;
						cout << tab << info("Population (est): 305,432,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Kathaic - 258,376,000") << endl;
						cout << double_tab << info("Imperial - 20,452,000") << endl;
						cout << double_tab << info("Convent Auroran - 8,193,000") << endl;
						cout << double_tab << info("Settler - 18,411,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Kathay") {
						cout << tab << info("The Governorate of Kathay was a governorate in the Empire. Largely rural and underdeveloped, the vast majority of the formal economy is concentrated in the capital Aurea, which holds a modern standard of living on par with the other large cities of the Empire. The Governorate of Kathay was disestablished following the Kathay Spring, in the immediate aftermath of the Lizard War, making way for the new Protectorate of Kathay that came in its wake.") << endl;
						cout << tab << info("Note: the following census data is the last ever taken in the Governorate of Kathay. Demographics have changed since the imposition of the Protectorate.") << endl;
						cout << tab << info("Capital: Aurea (pop: 33,328,000)") << endl;
						cout << tab << info("Population (est): 305,432,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Kathaic - 258,376,000") << endl;
						cout << double_tab << info("Imperial - 20,452,000") << endl;
						cout << double_tab << info("Convent Auroran - 8,193,000") << endl;
						cout << double_tab << info("Settler - 18,411,000") << endl;
					}
					else if (area_i_want_to_know_about == "Thurop Authoritarian State" or area_i_want_to_know_about == "Thurop") {
						cout << tab << info("The Thurop Authoritarian State is an Autonomy of the Empire. Founded around twenty years ago, in the aftermath of a rebellion, the state is headed up by a naval dictatorship that is a nominal vassal of the Empire, despite constant violations of the terms of autonomy. Thurop is well-developed and urbanized, unlike many governorates, being home to the second largest city in the Empire. Prosperous, with heavily developed industry and services, Thurop is already one of the most powerful areas of the Empire, home to both a powerful indigenous group and a large Imperial population.") << endl;
						cout << tab << info("Capital: Caleoda (pop: 42,178,000)") << endl;
						cout << tab << info("Population (est): 278,309,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Thurop - 215,291,000") << endl;
						cout << double_tab << info("Imperial - 41,937,000") << endl;
						cout << double_tab << info("Convent Auroran - 2,504,000") << endl;
						cout << double_tab << info("Settler - 18,577,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Thurop") {
						cout << tab << info("The Governorate of Thurop was a governorate of the Empire. Well developed and urbanized, it was among the richest regions in the Empire. The area is home to a large Imperial population that has historically battled for cultural dominance over the local Thurop population, which had previously been the dominant ethnic group across the entire East Coast of the Continent. The Governorate of Thurop was disestablished following a treaty that recognized the authority self-proclaimed Thurop Authoritarian State that had sent the local government into exile.") << endl;
						cout << tab << info("Capital: Caleoda (pop: 42,178,000)") << endl;
						cout << tab << info("Population (est): 278,309,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Thurop - 215,291,000") << endl;
						cout << double_tab << info("Imperial - 41,937,000") << endl;
						cout << double_tab << info("Convent Auroran - 2,504,000") << endl;
						cout << double_tab << info("Settler - 18,577,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Entrana" or area_i_want_to_know_about == "Entrana") {
						cout << tab << info("The Governorate of Entrana is a costal state. While not particularly well-developed, it is home to a sizable fishing industry that feeds many landlocked governorates. It also holds a sizable navy, the second largest in the Empire, although this takes up a significant portion of the local budget. Entrana maintains a one-sided rivalry with its neighbor Thurop.") << endl;
						cout << tab << info("Capital: Livonus (pop: 13,017,000)") << endl;
						cout << tab << info("Population (est): 107,356,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Entranan - 81,059,000") << endl;
						cout << double_tab << info("Imperial - 16,311,000") << endl;
						cout << double_tab << info("Convent Auroran - 1,983,000") << endl;
						cout << double_tab << info("Settler - 8,003,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Ralaer" or area_i_want_to_know_about == "Ralaer") {
						cout << tab << info("The Governorate of Ralaer is a notable dichotomy. While it is mostly agricultural, it is home to a prime Imperial city known for its strong legal tradition and history of philosophy. The differences can cause problems between the Ralois, though the Imperial nobility can largely enforce peace in the governorate.") << endl;
						cout << tab << info("Capital: Novglaitier (pop: 9,492,000)") << endl;
						cout << tab << info("Population (est): 89,236,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Ralois - 72,431,000") << endl;
						cout << double_tab << info("Imperial - 8,621,000") << endl;
						cout << double_tab << info("Convent Auroran - 1,731,000") << endl;
						cout << double_tab << info("Settler - 6,453,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Hanor" or area_i_want_to_know_about == "Hanor") {
						cout << tab << info("The Governorate of Hanor is mostly used for its military capabilities. While the land is mostly harsh and not usable for large-scale agriculture or resource extraction, its access to the Orieni Lake allows it to facilitate trade between the Empire and Oriena.") << endl;
						cout << tab << info("Capital: Equis (pop: 3,973,000)") << endl;
						cout << tab << info("Population (est): 52,249,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Hanoir - 47,083,000") << endl;
						cout << double_tab << info("Imperial - 3,558,000") << endl;
						cout << double_tab << info("Convent Auroran - 512,000") << endl;
						cout << double_tab << info("Settler - 1,096,000") << endl;
					}
					else if ((area_i_want_to_know_about == "Governorate of Fetedal" or area_i_want_to_know_about == "Fetedal") or area_i_want_to_know_about == "Imperial Fetedal") {
						cout << tab << info("The Governorate of Fetedal is quite isolated and is located in a harsh, volcanic environment. Despite this, it is notably well populated, and is even under the authority of a constitutional theocracy, although the local Imperial power has always predominated. Fetedal continually exports the volcanic ash used to create the concrete that is used to build the infrastructure of the Empire. There has been a recent resurgence in the movement to restore Farar, the spirit of the land, to absolutism.") << endl;
						cout << tab << info("Capital: Psonus (pre-conquest: Farar) (pop: 25,093,000)") << endl;
						cout << tab << info("Population (est): 145,131,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Fetan - 125,911,000") << endl;
						cout << double_tab << info("Imperial - 14,636,000") << endl;
						cout << double_tab << info("Convent Auroran - <1000") << endl;
						cout << double_tab << info("Settler - 4,584,000") << endl;
					}
					else if (area_i_want_to_know_about == "Faran Theocracy") {
						cout << tab << info("The Faran Theocracy is a vassal of the Empire of the Eternal Warlord, headed by Farar, the Aspect of Fire. The land is remarkably well populated and reasonably wealthy in spite of it being located in a harsh, dry, volcanic environment. The Faran Theocracy is one of the largest producers of mineral resources on the entire Continent, with volcanic ash being a particular specialty, which is found in the concrete that is the foundation of the urban centers of the Empire. The theocratic component of the state has been largely suppressed over the centuries of the Imperial occupation, which has seen much of the governance performed by appointed Imperial officials. However, there has been a recent resurgance to restore Farar to absolutism and to declare an independent realm closely modeled on the Highlands' theocracy.") << endl;
						cout << tab << info("Capital: The Holy City of Farar (pop: 25,093,000)") << endl;
						cout << tab << info("Population (est): 145,131,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Faran - 125,911,000") << endl;
						cout << double_tab << info("Imperial - 14,636,000") << endl;
						cout << double_tab << info("Convent Auroran - <1000") << endl;
						cout << double_tab << info("Settler - 4,584,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Nerhast" or area_i_want_to_know_about == "Nerhast") {
						cout << tab << info("The Governorate of Nerhast is largely agricultural, and serves as a major food exporter to the many hungry subjects of the Empire. The money produced by this is largely funneled in to the Imperial nobility, leaving most of the land's population poor and destitute. The many Nerhest are often seen as unintelligent and backwards due to their willingness to continue being exploited by the nobility. Regardless, the successful Convent Auroran population is heavily urbanized and concentrated in the capital of Hall.") << endl;
						cout << tab << info("Capital: Hall (pop: 6,909,000)") << endl;
						cout << tab << info( "Population (est): 105,897,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Nerhest - 98,046,000") << endl;
						cout << double_tab << info("Imperial - 2,732,000") << endl;
						cout << double_tab << info("Convent Auroran - 4,725,000") << endl;
						cout << double_tab << info("Settler - 394,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Cstphon" or area_i_want_to_know_about == "Cstphon") {
						cout << tab << info("The Governorate of Cstphon is well known for its militarism, where the majority ethnic group: the Cstphene, are a culturally militant people who serve both locally and all across the Empire. Cstphon is heavily urbanized, and its capital is a great Imperial city that has housed a great deal of conquerers before the conquest by the Empire. Today, it stands as a notably diverse city.") << endl;
						cout << tab << info("Capital: City of Cstphon (pop: 30,768,000)") << endl;
						cout << tab << info("Population (est): 109,473,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Cstphene - 76,081,000") << endl;
						cout << double_tab << info("Imperial - 16,934,000") << endl;
						cout << double_tab << info("Convent Auroran - 7,847,000") << endl;
						cout << double_tab << info("Settler - 8,611,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Arya" or area_i_want_to_know_about == "Arya") {
						cout << tab << info("The Governorate of Arya is noted for its heavy presence in the desert, indeed it is almost completely encapsulated by desert. It is the largest salt supplier in the Empire, but remains heavily populated by only recently settled tribesmen. The local Aryans still manage to maintain vague tribal structures and traditions despite their modern language and religious beliefs.") << endl;
						cout << tab << info("Capital: Arya Nova (pop: 2,945,000)") << endl;
						cout << tab << info("Population (est): 54,861,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Aryan - 51,349,000") << endl;
						cout << double_tab << info("Imperial - 2,346,000") << endl;
						cout << double_tab << info("Convent Auroran - <1000") << endl;
						cout << double_tab << info("Settler - 1,116,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Tiblus" or area_i_want_to_know_about == "Tiblus") {
						cout << tab << info("The Governorate of Tiblus is a hilly region that borders the Highlands on the south. Its primary economic activity is mining, where the land is home to a variety of rare materials that are sourced from mines set deep in the mountains. Home to a culture of mountainous people, direct Imperial authority largely remains absent outside of the valleys. Every few years, the local nobility goes out to reinforce their control of the hills. The Convent Auroran population has concentrated itself in the capital, Cobal, in response to persecution by the local Tiblan in the aftermath of the Imperial conquest.") << endl;
						cout << tab << info("Capital: Cobal (pop: 3,745,000)") << endl;
						cout << tab << info("Population (est): 63,120,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Tiblan - 57,302,000") << endl;
						cout << double_tab << info("Imperial - 3,644,000") << endl;
						cout << double_tab << info("Convent Auroran - 1,591,000") << endl;
						cout << double_tab << info("Settler - 583,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Sophos" or area_i_want_to_know_about == "Sophos") {
						cout << tab << info("The Governorate of Sophos is a rocky, coastal state. It constrasts starkly with the flat coastal plains of Thurop and Entrana. Sophos is mostly unsuitable for naval activities beyond small-scale fishing. It remains an economic burden, and is an endless sink for Imperial tax money, and has the only benefit of being peaceful.") << endl;
						cout << tab << info("Capital: Atenos (pop: 4,850,000)") << endl;
						cout << tab << info("Population (est): 38,642,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Sophene - 35,368,000") << endl;
						cout << double_tab << info("Imperial - 1,247,000") << endl;
						cout << double_tab << info("Convent Auroran - 1,599,000") << endl;
						cout << double_tab << info("Settler - 428,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Alges" or area_i_want_to_know_about == "Alges") {
						cout << tab << info("The Governorate of Alges is the most heavily forested area in the Empire. Located in the far north of the Empire, bordering Aurora, it is quite large, though also poor and sparsely populated. Its largest economic contribution is in logging, which brings in poor people from all around the Empire.") << endl;
						cout << tab << info("Capital: Redwood (pop: 2,491,000)") << endl;
						cout << tab << info("Population (est): 38,642,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Algus - 19,256,000") << endl;
						cout << double_tab << info("Imperial - 6,102,000") << endl;
						cout << double_tab << info("Convent Auroran - 3,113,000") << endl;
						cout << double_tab << info("Settler - 4,472,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Anoch" or area_i_want_to_know_about == "Anoch") {
						cout << tab << info("The Governorate of Anoch remains hopelessly underdeveloped. With extremely low urbanization, and even low literacy and high rates of disease, it serves as an unfortunate and unintentional glimpse into the past. Its native population is largely unmixed, and many of their red-haired women marry men from elsewhere in the Empire and send remittances back home, which serves as the largest source of taxes collected in payment.") << endl;
						cout << tab << info("Capital: Mercy (pop: 6,087,000)") << endl;
						cout << tab << info("Population (est): 91,861,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Anoch - 85,032,000") << endl;
						cout << double_tab << info("Imperial - 2,585,000") << endl;
						cout << double_tab << info("Convent Auroran - 3,674,000") << endl;
						cout << double_tab << info("Settler - 4,472,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Edessa" or area_i_want_to_know_about == "Edessa") {
						cout << tab << info("The Governorate of Edessa is small, quiet, stable, and of average means. While mostly rural, it produces a small surplus in agriculture which allows it to tax the outgoing food and keep the government afloat.") << endl;
						cout << tab << info("Capital: City of Edessa (pop: 4,952,000)") << endl;
						cout << tab << info("Population (est): 63,752,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Dessan - 56,476,000") << endl;
						cout << double_tab << info("Imperial - 2,448,000") << endl;
						cout << double_tab << info("Convent Auroran - 4,192,000") << endl;
						cout << double_tab << info("Settler - 636,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Rihde" or area_i_want_to_know_about == "Rihde") {
						cout << tab << info("The Governorate of Rihde is a flat region in the south of the Continent. Home to vast steppelands, many of its past inhabitants were nomadic. Nowadays, Rihde maintains a small grazing industry while most of the population is involved is subsistence farming. Periodic famines sweep the area and cause tensions to flare between the locals and the Imperial and Convent Auroran populations. There was controversy over its choice of capital at Asuw, which was the center of Rihden power at the time of conquest, and was an important religious city for them. In particular, the Convent Auroran population, based out of Aurora on the Steppe, has maintained that the capital should be relocated to their center of power.") << endl;
						cout << tab << info("Capital: Asuw (pop: 4,776,000)") << endl;
						cout << tab << info("Population (est): 112,288,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Rihden - 101,744,000") << endl;
						cout << double_tab << info("Imperial - 5,305,000") << endl;
						cout << double_tab << info("Convent Auroran - 3,892,000") << endl;
						cout << double_tab << info("Settler - 1,346,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Inden" or area_i_want_to_know_about == "Inden") {
						cout << tab << info("The Governorate of Inden is noted for its wealth of lakes. The lakes themselves are hardly of any economic value given the rural nature of the governorate, but it is thought that with sufficient techology that the lakes can be used to sate the thirst of more developed governorates in the southern Empire. Regardless, most of the population are subsistence farmers.") << endl;
						cout << tab << info("Capital: The City of the Great Lake (known to Convent Aurorans as Aurora on the Great Lake) (pop: 10,873,000)") << endl;
						cout << tab << info("Population (est): 72,868,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Inden - 63,559,000") << endl;
						cout << double_tab << info("Imperial - 2,237,000") << endl;
						cout << double_tab << info("Convent Auroran - 6,213,000") << endl;
						cout << double_tab << info("Settler - 859,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Siniasus" or area_i_want_to_know_about == "Siniasus") {
						cout << tab << info("The Governorate of Siniasus is a coastal province. Located in the southern Empire, while the coast is calm and clear, it remains underdeveloped. It is believed that the previous religion of the Sinias people forbid the consumption of fish, as this quirk remains in the local people today. Fishing and exploiting the sea for resources remains effectively banned in Siniasus to prevent outrage and social unrest from the local population.") << endl;
						cout << tab << info("Capital: Peken (pop: 4,866,000)") << endl;
						cout << tab << info("Population (est): 63,879,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Sinias - 60,000,000") << endl;
						cout << double_tab << info("Imperial - 2,731,000") << endl;
						cout << double_tab << info("Convent Auroran - 610,000") << endl;
						cout << double_tab << info("Settler - 538,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Mokvon" or area_i_want_to_know_about == "Mokvon") {
						cout << tab << info("The Governorate of Mokvon is flat, but far too cold to be useful for agriculture. It ussed to be covered in great forests, but they were cut down in ancient times, and what remains is a barren landscape. Sparsely populated and unable to support many people, many Mokven leave for elsewhere in the Empire.") << endl;
						cout << tab << info("Capital: Fort Amman (pop: 281,000)") << endl;
						cout << tab << info("Population (est): 14,868,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Mokven - 8,112,000") << endl;
						cout << double_tab << info("Imperial - 4,753,000") << endl;
						cout << double_tab << info("Convent Auroran - 1,640,000") << endl;
						cout << double_tab << info("Settler - 363,000") << endl;
					}
					else if (area_i_want_to_know_about == "Governorate of Vanas" or area_i_want_to_know_about == "Vanas") {
						cout << tab << info("The Governorate of Vanas is poorly developed and home to a small urban population. A large portion of its rural population lives under the feudal system, working lands owned by Imperial nobility. Its border on Oriena means that there is a notbale Imperial military presence along with a small Orieni population. Indeed, the capital of Orosc used to be a center of Orieni power, while the Convent Auroran population retain their power base in Aurora of the West.") << endl;
						cout << tab << info("Capital: Orosc (pop: 2,756,000)") << endl;
						cout << tab << info("Population (est): 83,424,000") << endl;
						cout << tab << info("By ethnicity:") << endl;
						cout << double_tab << info("Vanois - 74,615,000") << endl;
						cout << double_tab << info("Imperial - 3,108,000") << endl;
						cout << double_tab << info("Convent Auroran - 4,342,000") << endl;
						cout << double_tab << info("Settler - 1,149,000") << endl;
						cout << double_tab << info("Orieni - 210,000") << endl;
					}
					//END Imperial region info
					else {
						cout << notice("Try again.") << endl;
					}//end if
				}// end while
				
				// Pick the region you are actually from in the Highlands
				while (nation_is_confirmed == false) {
					cout << question("What region do you want to be from?") << endl;
					cout << tab << "Type 'Change' if you want to change your realm." << endl;
					cout << tab << "Type 'Regions' to see the list of regions again." << endl;
					cout << "I want to be from the ";
					getline(cin, player_region);
					player_region = fixformat(player_region);
					if (player_region == "Change") {
						// Just for a 2 realm system
						cout << "You are now from the Highlands." << endl;
						player_citizenship = "The Highlands";
						//----------------------------------------------------
						//For multiple realms (not just 2)
						//while (nation_is_confirmed == false) {
						//	cout << question("What realm do you want to be from?") << endl;
						//	cout << "The Highlands " << endl;
						//	cout << picked("The Empire ") <<  "(restarts region selection)" << endl;
						//	cout << "My other realms" << endl;
						//	cout << "I want to be from ";
						//	getline(cin, player_citizenship);
						//	player_citizenship = fixformat(player_citizenship);
						//	if (player_citizenship == "The Highlands") {
						//		player_citizenship = "The Highlands";
						//		cout << "You are now from the Highlands." << endl;
						//		break;
						//	}
						//	else if (player_citizenship == "Highlands") {
						//		player_citizenship = "The Highlands";
						//		cout << "You are now from the Highlands." << endl;
						//		break;
						//	}
						//	else if (player_citizenship == "The Empire") {
						//		break;
						//	}
						//	else if (player_citizenship == "Empire") {
						//		player_citizenship = "The Empire";
						//		break;
						//	}
						//	else if (player_citizenship == "My realm") {
						//		cout << "You are now from My Realm" << endl;
						//		break;
						//	}
						//	else if (player_citizenship == "My realm nickname") {
						//		player_citizenship = "My Realm";
						//		cout << "You are now from My Realm" << endl;
						//		break;
						//	}
						//	else {
						//		cout << notice("Try again.") << endl;
						//	}
						//}//end while
						//----------------------------------------------------
						break;
					}
					else if (player_region == "Regions") {
						cout << info("Political Divisions of the Empire:") << endl;
						//Provinces
						cout << tab << "Province of Imperia" << endl;
						cout << tab << "Province of Valle" << endl;
						cout << tab << "Province of Petral" << endl;
						cout << tab << "Province of Aurora Nova" << endl;
						cout << tab << "Province of Coulon" << endl;
						cout << tab << "Province of Enrenan" << endl;
						cout << tab << "Province of Hiten" << endl;
						//Special Divisions
						cout << tab << "Protectorate of Kathay" << endl;
						cout << tab << "Thurop Authoritarian State" << endl;
						//Governorates
						cout << tab << "Governorate of Entrana" << endl;
						cout << tab << "Governorate of Ralaer" << endl;
						cout << tab << "Governorate of Hanor" << endl;
						cout << tab << "Governorate of Fetedal" << endl;
						cout << tab << "Governorate of Nerhast" << endl;
						cout << tab << "Governorate of Cstphon" << endl;
						cout << tab << "Governorate of Arya" << endl;
						cout << tab << "Governorate of Tiblus" << endl;
						cout << tab << "Governorate of Sophos" << endl;
						cout << tab << "Governorate of Alges" << endl;
						cout << tab << "Governorate of Anoch" << endl;
						cout << tab << "Governorate of Edessa" << endl;
						cout << tab << "Governorate of Rihde" << endl;
						cout << tab << "Governorate of Inden" << endl;
						cout << tab << "Governorate of Siniasus" << endl;
						cout << tab << "Governorate of Mokvon" << endl;
						cout << tab << "Governorate of Vanas" << endl;					
						
					}
					else if ((player_region == "Province of Imperia" or player_region == "Imperia") or (player_region == "Center State" or player_region == "Imperial Center State")) {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Imperia";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Province of Valle" or player_region == "Valle") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Valle";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Province of Petral" or player_region == "Petral") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Petral";
						nation_is_selected = true;
						break;
					}
					else if ((player_region == "Province of Aurora Nova" or player_region == "Aurora Nova") or (player_region == "New Aurora" or player_region == "Imperial Aurora")) {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Aurora Nova";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Province of Coulon" or player_region == "Coulon") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Coulon";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Province of Enrenan" or player_region == "Enrenan") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Enrenan";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Province of Hiten" or player_region == "Hiten") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Hiten";
						nation_is_selected = true;
						break;
					}
					else if ((player_region == "Protectorate of Kathay" or player_region == "Kathay") or (player_region == "Imperial Kathay" or player_region == "Governorate of Kathay")) {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Kathay";
						nation_is_selected = true;
						break;
					}
					else if ((player_region == "Thurop Authoritarian State" or player_region == "Thurop") or player_region == "Governorate of Thurop") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Thurop";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Entrana" or player_region == "Entrana") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Entrana";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Ralaer" or player_region == "Ralaer") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Ralaer";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Hanor" or player_region == "Hanor") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Hanor";
						nation_is_selected = true;
						break;
					}
					else if ((player_region == "Governorate of Fetedal" or player_region == "Fetedal") or (player_region == "Imperial Fetedal" or player_region == "Faran Theocracy")) {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Fetedal";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Nerhast" or player_region == "Nerhast") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Nerhast";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Cstphon" or player_region == "Cstphon") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Cstphon";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Arya" or player_region == "Arya") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Arya";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Tiblus" or player_region == "Tiblus") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Tiblus";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Sophos" or player_region == "Sophos") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Sophos";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Alges" or player_region == "Alges") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Alges";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Anoch" or player_region == "Anoch") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Anoch";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Edessa" or player_region == "Edessa") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Edessa";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Rihde" or player_region == "Rihde") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Rihde";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Inden" or player_region == "Inden") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Inden";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Siniasus" or player_region == "Siniasus") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Siniasus";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Mokvon" or player_region == "Mokvon") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Mokvon";
						nation_is_selected = true;
						break;
					}
					else if (player_region == "Governorate of Vanas" or player_region == "Vanas") {
						player_citizenship = "The Empire"; // ensures that no unexpected bugs occur
						player_region = "Vanas";
						nation_is_selected = true;
						break;
					}
					else {
						cout << notice("Try again.") << endl;
					}//end if
				}// end while
			}//End Block for the Empire
			

// TEMPLATE FOR ADDING MORE REALMS!			
//--------------------------------------------------------------------------------------------------			
//			// Block for others
//			else if (player_citizenship == "This realm") {
//				//Divisions
//				cout << tab << "My first division" << endl;
//				cout << tab << "My second division" << endl;
//				// CONTINUE
//				
//				// Asking about area info
//				while (i_want_area_info == false) {
//					cout << question("Do you want to know about any of these regions? ") << "Yes or No. ";
//					getline(cin, do_i_want_area_info);
//					do_i_want_area_info = fixformat(do_i_want_area_info);
//					if (do_i_want_area_info == "Yes") {
//						i_want_area_info = true;
//					}
//					else if (do_i_want_area_info == "No") {
//						i_want_area_info = false;
//						break;
//					}
//					else {
//						cout << notice("Yes or No please.") << endl;
//					}//end if
//				}// end while
//				
//				// Asking about the regions
//				while (i_want_area_info == true) {
//					cout << question("Which region would you like to learn about?") << endl;
//					cout << tab << "Type in its long or short name to see information about it." << endl;
//					cout << tab << "Type 'Exit' to stop learning." << endl;
//					cout << tab << "Type 'Regions' to see the list of regions again." << endl;
//					cout << "I want to know about the ";
//					getline(cin, area_i_want_to_know_about);
//					area_i_want_to_know_about = fixformat(area_i_want_to_know_about);
//					if (area_i_want_to_know_about == "Exit") {
//						i_want_area_info = false;
//					}
//					else if (area_i_want_to_know_about == "Regions") {
//						cout << info("Political Divisions of my realm:") << endl;
//						//Divisions
//						cout << tab << "My first division" << endl;
//						cout << tab << "My second division" << endl;
//						// CONTINUE
//					}
//					else if (area_i_want_to_know_about == "My first division" or area_i_want_to_know_about == "My first division short name") {
//						cout << "information" << endl;
//					}
//					else if (area_i_want_to_know_about == "My second division" or area_i_want_to_know_about == "My second division short name") {
//						cout << "information" << endl;
//					}
//					// Continue
//					else {
//						cout << notice("Try again.") << endl;
//					}//end if
//				}// end while
//				
//				// Pick the region you are actually from in your realm
//				while (nation_is_confirmed == false) {
//					cout << question("What region do you want to be from?") << endl;
//					cout << tab << "Type 'Change' if you want to change your realm." << endl;
//					cout << tab << "Type 'Regions' to see the list of regions again." << endl;
//					cout << "I want to be from the ";
//					getline(cin, player_region);
//					player_region = fixformat(player_region);
//					if (player_region == "Change") {
//						while (nation_is_confirmed == false) {
//							cout << question("What realm do you want to be from?") << endl;
//							cout << tab << "The Highlands " << endl;
//							cout << tab << "The Empire" << endl;
//							cout << tab << "These other realms" << endl;
//							cout << picked("My realm ") << "(restarts regions selection)" << endl;
//							cout << tab << "My other realms" << endl;
//							cout << "I want to be from ";
//							getline(cin, player_citizenship);
//							player_citizenship = fixformat(player_citizenship);
//							if (player_citizenship == "The Highlands") {
//								player_citizenship = "The Highlands";
//								cout << "You are now from the Highlands." << endl;
//								break;
//							}
//							else if (player_citizenship == "Highlands") {
//								player_citizenship = "The Highlands";
//								cout << "You are now from the Highlands." << endl;
//								break;
//							}
//							else if (player_citizenship == "The Empire") {
//								cout << "You are now from the Empire." << endl;
//								break;
//							}
//							else if (player_citizenship == "Empire") {
//								player_citizenship = "The Empire";
//								cout << "You are now from the Empire." << endl;
//								break;
//							}
//							else if (player_citizenship == "These other realms") {
//								cout << "You are now from this realm";
//								break;
//							}
//							else if (player_citizenship == "Other realm nickname") {
//								player_citizenship = "This realm";
//								cout << "You are now from this realm";
//								break;
//							}
//							//Continue
//							else if (player_citizenship == "My realm") {
//								break;
//							}
//							else if (player_citizenship == "My realm nickname") {
//								player_citizenship = "My Realm";
//								break;
//							}
//							else if (player_citizenship == "Another realm") {
//								cout << "You are now from another realm";
//								break;
//							}
//							else if (player_citizenship == "Another realm nickname") {
//								player_citizenship = "Another realm";
//								cout << "You are now from another realm";
//								break;
//							}
//							//Continue
//							else {
//								cout << notice("Try again.") << endl;
//							}
//						}//end while
//						break;
//					}
//					else if (player_region == "Regions") {
//						cout << info("Political Divisions of My Realm:") << endl;
//						//Divisions
//						cout << tab << "My first division" << endl;
//						cout << tab << "My second division" << endl;
//						// CONTINUE
//						
//					}
//					else if (player_region == "My first division" or player_region == "My first division nickname") {
//						player_citizenship = "My realm"; // ensures that no unexpected bugs occur
//						player_region = "My first division";
//						nation_is_selected = true;
//						break;
//					}
//					else if (player_region == "My second division" or player_region == "My second division nickname") {
//						player_citizenship = "My realm"; // ensures that no unexpected bugs occur
//						player_region = "My second division";
//						nation_is_selected = true;
//						break;
//					}
//					//Continue
//					else {
//						cout << notice("Try again.") << endl;
//					}//end if
//				}// end while
//			}//End Block for others
//--------------------------------------------------------------------------------------------------
			
			
			
			// Exception; automatically assigns character
			else {
				cout << "You're an exception. I'm making you a Highlander from Foyer." << endl;
				player_citizenship = "The Highlands";
				player_region = "Foyer";
				nation_is_selected = true;
				break;
			}//end if

		}//end while [variable: nation_is_selected]
		
		
		// Confirming your region and citizenship
		while (nation_is_confirmed == false) {
			cout << "You are from " << player_region << " in " << lowerfixformat(player_citizenship) << "." << endl;
			cout << question("Is this alright? ") << "Yes or No." << endl;
			cout << tab << "If you want to change these atributes, type 'No'." << endl;
			cout << "Am I fine with my nationality and region? ";
			getline(cin, is_my_region_correct);
			is_my_region_correct = fixformat(is_my_region_correct);
			if (is_my_region_correct == "Yes") {
				cout << "Excellent." << endl;
				cout << "You are from " << player_region << endl;
				nation_is_confirmed = true;
			}
			else if (is_my_region_correct == "No") {
				cout << "Alright. Let's try again." << endl;
				nation_is_selected = false;
				break;
			}
			else {
				cout << notice("Try again.") << endl;
			}//end if
		}//end while
	
	
	
	}//end while [variable: nation_is_confirmed]
	
	return 0;
	

}//end main
