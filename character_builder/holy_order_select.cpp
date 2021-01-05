#include <iostream>
#include "color_functions.h" // Lets you use the notice, info, picked, and question functions
#include "proper_cap.h" // lets you use the fixformat function
#include "lower_cap.h" // lets you use the lowerfixformat function
using namespace std;

int main() {
	//Formatting
	string tab = "   ";
	string double_tab = "      ";

	//Inputs
	string player_race = "Convent Auroran";
	
	// Outputs
	string player_holy_order;
	bool player_is_in_holy_order = false;
	
	// Temporary variables
	string do_i_want_to_be_in_an_order;
	string do_i_want_to_know_more;
	string is_my_order_choice_correct;
	string order_i_want_to_know_about;
	
	bool i_want_holy_order_info = false;
	bool order_decision_is_confirmed = false;
	
	// Ask if a party member wants to be a part of a Holy Order.
	// If yes, let them pick one
	
	while (order_decision_is_confirmed == false) {
		// Checking to see if the player wants to actually be in an order
		while (order_decision_is_confirmed == false) {
			cout << question("Do you want to be a member of a Holy Order? ") << "Yes or No." << endl;
			cout << tab << "Type 'Info' if you want to know what a Holy Order is." << endl;
			cout << "Do I want to be a member of a Holy Order? ";
			getline(cin, do_i_want_to_be_in_an_order);
			do_i_want_to_be_in_an_order = fixformat(do_i_want_to_be_in_an_order);
			
			if (do_i_want_to_be_in_an_order == "Info") {
				cout << tab << info("A Holy Order is an organization that dedicates itself to servitude of a particular spirit. They are, however, entirely independent of spiritual authority and they are left to themselves to interpret the words of a spirit. These Orders can be found all across the Continent, with members coming from all walks of life to serve their most favored spirit in the form of voluntary service in a Holy Order.") << endl;
				cout << tab << info("Holy Orders are headed by a Grandmaster who is responsible for acting as a diplomatic representative and the commander-in-chief of military forces. The Grandmaster is usually appointed by the Synod of Masters, which is where the vast majority of the Holy Order's power is located; composed of high-ranking members and military officials from all across the Order, the Synod of Masters passes legislation, approves purchases, and makes final judicial decisions and acts as the primary administrator of the Holy Order. Masters themselves are usually elected by a local group of Seras, or directly elected by local branches of a Holy Order.") << endl;
				cout << tab << info("Most Holy Orders are extremely wealthy organizations, owning territory, businesses, and charities within the sovereign territory of other realms. These Holy Orders share legal authority in the territory that they own.") << endl;
				cout << tab << info("Holy Orders are officially recognized by all realms on the Continent, and have the rights to issue their own currency, legislate and enforce laws on their shared territory, and operate independent military forces and deploy them as they see necessary.") << endl;
				cout << tab << info("The Holy Orders maintain garrisons, meeting places, businesses, and religious sites in the major spiritual centers of the Empire and the Highlands, and are often seen as a welcome sight to the realms of the land, who enjoy having militaristic orders ready to serve as mercenary troops.") << endl;
			}
			else if (do_i_want_to_be_in_an_order == "Yes") {
				cout << "You will be in a Holy Order." << endl;
				player_is_in_holy_order = true;
				break;
			}
			else if (do_i_want_to_be_in_an_order == "No") {
				cout << "You won't be in a Holy Order." << endl;
				player_is_in_holy_order = false;
				player_holy_order = "None";
				break;
			}
			else {
				cout << notice("Try again.") << endl;
			}//end if
		}// end while
		
		// If player wants to be in a Holy Order, they can pick their Order and learn about t hem.
		if (player_is_in_holy_order == true) {
			cout << info("List of Holy Orders:") << endl;
			cout << tab << "The Holy Order of the Commander of Weapons" << endl;
			cout << tab << "The Holy Order of the Eternal Lady of Weapons" << endl;
			cout << tab << "The Holy Order of the Queen of the Ice" << endl;
			cout << tab << "The Holy Order of the Golden Warrior" << endl;
			cout << tab << "The Holy Order of the Spirit of Life" << endl;
			cout << tab << "The Holy Order of the Aspect of Fire" << endl;
			cout << tab << "The Holy Order of the Practitioner of Discipline" << endl;
			cout << tab << "The Holy Order of the Fair Essence" << endl;
			//Add others that come up
			
			//Ask if player wants to learn more information about the orders
			while (i_want_holy_order_info == false) {
				cout << question("Do you want any information about the Holy Orders? ") << "Yes or No. ";
				getline(cin, do_i_want_to_know_more);
				do_i_want_to_know_more = fixformat(do_i_want_to_know_more);
				
				if (do_i_want_to_know_more == "Yes") {
					cout << "Let's learn more then." << endl;
					i_want_holy_order_info = true;
				}
				else if (do_i_want_to_know_more == "No") {
					cout << "Okay." << endl;
					break;
				}
				else {
					cout << notice("Try again.") << endl;
				}//end if
			}//end while
		}//end if
		
		//If a player wants to know more about Holy Orders, this triggers
		// Note: only triggers if you want to be a part of a Holy Order in the first place.
		if (i_want_holy_order_info == true) {
			while (i_want_holy_order_info == true) {
				cout << question("Which Holy Order would you like to learn about?") << endl;
				cout << tab << "Type in its full name or its patron spirit to see information." << endl;
				cout << tab << "Type 'Orders' for the list of Holy Orders." << endl;
				cout << tab << "Type 'Exit' to stop learning." << endl;
				cout << "I want to know about ";
				getline(cin, order_i_want_to_know_about);
				order_i_want_to_know_about = fixformat(order_i_want_to_know_about);
				
				if (order_i_want_to_know_about == "Exit") {
					i_want_holy_order_info = false;
				}
				else if (order_i_want_to_know_about == "Orders") {
					cout << info("List of Holy Orders:") << endl;
					cout << tab << "The Holy Order of the Commander of Weapons" << endl;
					cout << tab << "The Holy Order of the Eternal Lady of Weapons" << endl;
					cout << tab << "The Holy Order of the Queen of the Ice" << endl;
					cout << tab << "The Holy Order of the Golden Warrior" << endl;
					cout << tab << "The Holy Order of the Spirit of Life" << endl;
					cout << tab << "The Holy Order of the Aspect of Fire" << endl;
					cout << tab << "The Holy Order of the Practitioner of Discipline" << endl;
					cout << tab << "The Holy Order of the Fair Essence" << endl;
					//Plus any others
				}
				// Usability:
				// Can enter: 'The Holy Order of (my spirit formal name/ simple name)', 'Holy Order of (my spirit formal name/ simple name)', 'my spirit formal name/simple name', ''
				else if (((
				//Conditions
				order_i_want_to_know_about == "The Holy Order of the Commander of Weapons" 
				or 
				order_i_want_to_know_about == "Holy Order of the Commander of Weapons") 
				or 
				(order_i_want_to_know_about == "The Holy Order of Foyer" 
				or 
				order_i_want_to_know_about == "Holy Order of Foyer")) 
				or 
				(order_i_want_to_know_about == "The Commander of Weapons" 
				or 
				order_i_want_to_know_about == "Foyer"))
				//end conditions
				{
					cout << tab << info("Patron Spirit: Foyer") << endl;
					cout << tab << info("The Holy Order of the Commander of Weapons is among the most popular and most powerful Holy Orders. The members primarily come from either the Highlands or the Imperial provinces, with few who come from the southern Empire. This Order is well known for its militarism, and it retains among the most elite military forces among not just the Orders, but in the entire world.") << endl;
					cout << tab << info("Headquarters: The City of the Eternal Warlord, Imperial Center State (secondary headquarters are located in the City of Foyer in the Highlands.)") << endl;
					cout << tab << info("Members: 434,000") << endl;
					//cout << tab << info(founding_date) << endl;
				}
				else if (((
				//Conditions
				order_i_want_to_know_about == "The Holy Order of the Eternal Lady of Weapons" 
				or 
				order_i_want_to_know_about == "Holy Order of the Eternal Lady of Weapons") 
				or 
				(order_i_want_to_know_about == "The Holy Order of Eternity" 
				or 
				order_i_want_to_know_about == "Holy Order of Eternity")) 
				or 
				(order_i_want_to_know_about == "The Eternal Lady of Weapons" 
				or 
				order_i_want_to_know_about == "Eternity"))
				//end conditions
				{
					cout << tab << info("Patron Spirit: Eternity") << endl;
					cout << tab << info("The Holy Order of the Eternal Lady of Weapons often comes into soft conflict with the Holy Order of the Commander of Weapons due to the spiritual tensions between Foyer and Eternity; this often bleeds into the Orders' relationships. Members of this Holy Order come from all around the continent, with a suspiciously large number from the Highlands. This Order houses a small military force that often sees service all around the southern Empire.") << endl;
					cout << tab << info("Headquarters: The City of the Eternal Warlord, Imperial Center State") << endl;
					cout << tab << info("Members: 212,000") << endl;
					//cout << tab << info(founding_date) << endl;
				}
				else if (((
				//Conditions
				order_i_want_to_know_about == "The Holy Order of the Queen of the Ice" 
				or 
				order_i_want_to_know_about == "Holy Order of the Queen of the Ice") 
				or 
				(order_i_want_to_know_about == "The Holy Order of Aurora" 
				or 
				order_i_want_to_know_about == "Holy Order of Aurora")) 
				or 
				(order_i_want_to_know_about == "The Queen of the Ice" 
				or 
				order_i_want_to_know_about == "Aurora"))
				//end conditions
				{
					cout << tab << info("Patron Spirit: Aurora") << endl;
					cout << tab << info("The Holy Order of the Queen of the Ice is without a doubt the largest, most powerful, and richest Holy Order. The ranks of the Order are dominated by Convent Aurorans, both exiles and communed. Still, there is a notable minority of members who come from other races. This Holy Order retains an awkward state of communion with the Foyer-Auroran pantheon due to the inherent religious differences between Convent Aurorans and other Foyerian Aurorans, but the Order still tenuously agrees to be in proper communion with the pantheon unless given direction from Aurora herself.") << endl;
					cout << tab << info("Headquarters: The City of the Eternal Warlord, Imperial Center State") << endl;
					cout << tab << info("Members: 781,000") << endl;
					//cout << tab << info(founding_date) << endl;
				}
				else if (((
				//Conditions
				order_i_want_to_know_about == "The Holy Order of the Golden Warrior" 
				or 
				order_i_want_to_know_about == "Holy Order of the Golden Warrior") 
				or 
				(order_i_want_to_know_about == "The Holy Order of Vility" 
				or 
				order_i_want_to_know_about == "Holy Order of Vility")) 
				or 
				(order_i_want_to_know_about == "The Golden Warrior" 
				or 
				order_i_want_to_know_about == "Vility"))
				//end conditions
				{
					cout << tab << info("Patron Spirit: Vility") << endl;
					cout << tab << info("The Holy Order of the Golden Warrior is dominated by Highlanders and is one of the few Holy Orders that is based out of the Highlands. This Order usually cooperates closely with the Holy Order of the Spirit of Life, given their common location in the Highlands, alongside a more distant cooperation with the more distant Orders dedicated to spirit with a close relationship to Vility.") << endl;
					cout << tab << info("Headquarters: City of Vility, Province of Vility, the Highlands") << endl;
					cout << tab << info("Members: 351,000") << endl;
					//cout << tab << info(founding_date) << endl;
				}
				else if (((
				//Conditions
				order_i_want_to_know_about == "The Holy Order of the Spirit of Life" 
				or 
				order_i_want_to_know_about == "Holy Order of the Spirit of Life") 
				or 
				(order_i_want_to_know_about == "The Holy Order of Zerixa" 
				or 
				order_i_want_to_know_about == "Holy Order of Zerixa")) 
				or 
				(order_i_want_to_know_about == "The Spirit of Life" 
				or 
				order_i_want_to_know_about == "Zerixa"))
				//end conditions
				{
					cout << tab << info("Patron Spirit: Zerixa") << endl;
					cout << tab << info("The Holy Order of the Spirit of Life is traditionally dominated by Highlanders, in particular Orieni Highlanders, but an increasing number of members come from beyond the Highlands. This Holy Order is home to a sizable medical contingent and is second only to Aurora's Order in terms of hospitals and other medical facilities in Order ownership. Zerixa's Order completely lacks a formal military component, and instead has a substitute, informal militia. Indeed, while many other Holy Orders receive payment to deploy military forces, The Holy Order of the Spirit of Life often sees payment for deploying their medical teams around the world.") << endl;
					cout << tab << info("Headquarters: City of Zerixa, Province of Zarata, the Highlands") << endl;
					cout << tab << info("Members: 198,000") << endl;
					//cout << tab << info(founding_date) << endl;
				}
				else if (((
				//Conditions
				order_i_want_to_know_about == "The Holy Order of the Aspect of Fire" 
				or 
				order_i_want_to_know_about == "Holy Order of the Aspect of Fire") 
				or 
				(order_i_want_to_know_about == "The Holy Order of Farar" 
				or 
				order_i_want_to_know_about == "Holy Order of Farar")) 
				or 
				(order_i_want_to_know_about == "The Aspect of Fire" 
				or 
				order_i_want_to_know_about == "Farar"))
				//end conditions
				{
					cout << tab << info("Patron Spirit: Farar") << endl;
					cout << tab << info("The Holy Order of the Aspect of Fire is indeed an internationally recognized Holy Order, but its isolated location, along with its charter coming from a definitively regional spirit, means that it has a lower member count than all of the major Holy Orders. The ranks of the Order are dominated by Fetan, with a small Imperial contingent; this is due to the fact that Farar is the well-known patron spirit of Fetedal and the Fetan in general. This Holy Order largely sees its deployment in the Highlands, which keeps them away from their fiery patron and away from the prying eyes of the Imperial state, who look to curb the power of this Order due to their support for an absolute theocracy in Fetedal, which directly counters Imperial authority.") << endl;
					cout << tab << info("Headquarters: Psonus, Governorate of Fetedal") << endl;
					cout << tab << info("Members: 43,000") << endl;
					//cout << tab << info(founding_date) << endl;
				}
				else if (((
				//Conditions
				order_i_want_to_know_about == "The Holy Order of the Practitioner of Discipline" 
				or 
				order_i_want_to_know_about == "Holy Order of the Practitioner of Discipline") 
				or 
				(order_i_want_to_know_about == "The Holy Order of Anylsa" 
				or 
				order_i_want_to_know_about == "Holy Order of Anylsa")) 
				or 
				(order_i_want_to_know_about == "The Practitioner of Discipline" 
				or 
				order_i_want_to_know_about == "Anylsa"))
				//end conditions
				{
					cout << tab << info("Patron Spirit: Anylsa") << endl;
					cout << tab << info("The Holy Order of the Practitioner of Discipline is quite fitting for an Order dedicated to an elemental, being small in comparison to the major Orders. Still, its ranks are filled mostly by the many coastal peoples, with a select few Imperials. This small Order is well known for its notably more conservative and outright prohibitionist politics, which it officially professes as its interpretation of Anylsan Discipline. This Order is also known for its martial arts, which were famous in ancient times, but nowadays are little other than a curiousity of the modern world.") << endl;
					cout << tab << info("Headquarters: City of Anylsa, Governorate of Entrana") << endl;
					cout << tab << info("Members: 61,000") << endl;
					//cout << tab << info(founding_date) << endl;
				}
				else if (((
				//Conditions
				order_i_want_to_know_about == "The Holy Order of the Fair Essence" 
				or 
				order_i_want_to_know_about == "Holy Order of the Fair Essence") 
				or 
				(order_i_want_to_know_about == "The Holy Order of Enteie" 
				or 
				order_i_want_to_know_about == "Holy Order of Enteie")) 
				or 
				(order_i_want_to_know_about == "The Fair Essence" 
				or 
				order_i_want_to_know_about == "Enteie"))
				//end conditions
				{
					cout << tab << info("Patron Spirit: Enteie") << endl;
					cout << tab << info("The Holy Order of the Fair Essence is unique for its practice of legalism as a charitable service. The Order operates one of the world's most renown law schools, and the Order itself has the largest ratio of lawyers in its rank. These lawyers are often deployed to assist the poor as charity or to support other Holy Orders in legal battles. The Order is composed mostly of Imperials and Convent Aurorans and is one of the few Holy Orders that a Convent Auroran can join without becoming an exile, due to the Convent Auroran origins of Enteie and official recognition of this from Aurora herself.") << endl;
					cout << tab << info("Headquarters: Novglaitier, Governorate of Ralaer") << endl;
					cout << tab << info("Members: 58,000") << endl;
					//cout << tab << info(founding_date) << endl;
				}
				//And other orders
				else {
					cout << notice("Try again.") << endl;
				}//end if
			}//end while
		}// end if
		
		// If the player is in a Holy Order, ask what order they want to join
		if (player_is_in_holy_order == true) {
			while (player_is_in_holy_order == true) {
				cout << question("What Holy Order do you want to join?") << endl;
				cout << tab << "Type in the Full Name of the Order of its patron spirit." << endl;
				cout << tab << "Type 'Orders' to see the availible orders." << endl;
				cout << tab << "Type 'None' to not join a Holy Order." << endl;
				cout << "I want to join ";
				getline(cin, player_holy_order);
			
				if (player_holy_order == "Orders") {
					cout << info("List of Holy Orders:") << endl;
					cout << tab << "The Holy Order of the Commander of Weapons" << endl;
					cout << tab << "The Holy Order of the Eternal Lady of Weapons" << endl;
					cout << tab << "The Holy Order of the Queen of the Ice" << endl;
					cout << tab << "The Holy Order of the Golden Warrior" << endl;
					cout << tab << "The Holy Order of the Spirit of Life" << endl;
					cout << tab << "The Holy Order of the Aspect of Fire" << endl;
					cout << tab << "The Holy Order of the Practitioner of Discipline" << endl;
					cout << tab << "The Holy Order of the Fair Essence" << endl;
					//Plus any others
				}
				// To not join an order
				else if (player_holy_order == "None" or player_holy_order == "No Order" ) {
					player_is_in_holy_order = false;
					player_holy_order = "None";
				}
				// Joining an order
				// Usability:
				// Can enter: 'The Holy Order of (my spirit formal name/ simple name)', 'Holy Order of (my spirit formal name/ simple name)', 'my spirit formal name/simple name', ''
				else if (((
				//Conditions
				player_holy_order == "The Holy Order of the Commander of Weapons" 
				or 
				player_holy_order == "Holy Order of the Commander of Weapons") 
				or 
				(player_holy_order == "The Holy Order of Foyer" 
				or 
				player_holy_order == "Holy Order of Foyer")) 
				or 
				(player_holy_order == "The Commander of Weapons" 
				or 
				player_holy_order == "Foyer"))
				//end conditions
				{
					player_holy_order = "The Holy Order of the Commander of Weapons";
					break;
				}
				else if (((
				//Conditions
				player_holy_order == "The Holy Order of the Eternal Lady of Weapons" 
				or 
				player_holy_order == "Holy Order of the Eternal Lady of Weapons") 
				or 
				(player_holy_order == "The Holy Order of Eternity" 
				or 
				player_holy_order == "Holy Order of Eternity")) 
				or 
				(player_holy_order == "The Eternal Lady of Weapons" 
				or 
				player_holy_order == "Eternity"))
				//end conditions
				{
					player_holy_order = "The Holy Order of the Eternal Lady of Weapons";
					break;
				}
				else if (((
				//Conditions
				player_holy_order == "The Holy Order of the Queen of the Ice" 
				or 
				player_holy_order == "Holy Order of the Queen of the Ice") 
				or 
				(player_holy_order == "The Holy Order of Aurora" 
				or 
				player_holy_order == "Holy Order of Aurora")) 
				or 
				(player_holy_order == "The Queen of the Ice" 
				or 
				player_holy_order == "Aurora"))
				//end conditions
				{
					player_holy_order = "The Holy Order of the Queen of the Ice";
					break;
				}
				else if (((
				//Conditions
				player_holy_order == "The Holy Order of the Golden Warrior" 
				or 
				player_holy_order == "Holy Order of the Golden Warrior") 
				or 
				(player_holy_order == "The Holy Order of Vility" 
				or 
				player_holy_order == "Holy Order of Vility")) 
				or 
				(player_holy_order == "The Golden Warrior" 
				or 
				player_holy_order == "Vility"))
				//end conditions
				{
					player_holy_order = "The Holy Order of the Golden Warrior";
					break;
				}
				else if (((
				//Conditions
				player_holy_order == "The Holy Order of the Spirit of Life" 
				or 
				player_holy_order == "Holy Order of the Spirit of Life") 
				or 
				(player_holy_order == "The Holy Order of Zerixa" 
				or 
				player_holy_order == "Holy Order of Zerixa")) 
				or 
				(player_holy_order == "The Spirit of Life" 
				or 
				player_holy_order == "Zerixa"))
				//end conditions
				{
					player_holy_order = "The Holy Order of the Spirit of Life";
					break;
				}
				else if (((
				//Conditions
				player_holy_order == "The Holy Order of the Aspect of Fire" 
				or 
				player_holy_order == "Holy Order of the Aspect of Fire") 
				or 
				(player_holy_order == "The Holy Order of Farar" 
				or 
				player_holy_order == "Holy Order of Farar")) 
				or 
				(player_holy_order == "The Aspect of Fire" 
				or 
				player_holy_order == "Farar"))
				//end conditions
				{
					player_holy_order = "The Holy Order of the Aspect of Fire";
					break;
				}
				else if (((
				//Conditions
				player_holy_order == "The Holy Order of the Practitioner of Discipline" 
				or 
				player_holy_order == "Holy Order of the Practitioner of Discipline") 
				or 
				(player_holy_order == "The Holy Order of Anylsa" 
				or 
				player_holy_order == "Holy Order of Anylsa")) 
				or 
				(player_holy_order == "The Practitioner of Discipline" 
				or 
				player_holy_order == "Anylsa"))
				//end conditions
				{
					player_holy_order = "The Holy Order of the Practitioner of Discipline";
					break;
				}
				else if (((
				//Conditions
				player_holy_order == "The Holy Order of the Fair Essence" 
				or 
				player_holy_order == "Holy Order of the Fair Essence") 
				or 
				(player_holy_order == "The Holy Order of Enteie" 
				or 
				player_holy_order == "Holy Order of Enteie")) 
				or 
				(player_holy_order == "The Fair Essence" 
				or 
				player_holy_order == "Enteie"))
				//end conditions
				{
					player_holy_order = "The Holy Order of the Fair Essence";
					break;
				}
				else {
					cout << notice("Try again.") << endl;
				}// end if
			}//end while
		}//end if
	
	
		while (order_decision_is_confirmed == false) {
			if (player_is_in_holy_order == false) {
				cout << "You will not be a member of a Holy Order." << endl;
			}
			else {
				cout << "You will be a member of " << player_holy_order << info(".") << endl;
				// Check to see if player is a Convent Auroran.
				// If so, they may face exile depending on their choice of order!
				if (player_race == "Convent Auroran") {
					if (player_holy_order == "The Holy Order of the Queen of the Ice") {
						cout << info("Your Convent Auroran community will approve of your choice.") << endl;
					}
					else if (player_holy_order == "The Holy Order of the Fair Essence") {
						cout << info("Your Convent Auroran community will accept your decision.") << endl;
					
					}
					else {
						cout << info("This choice will make you a Convent Auroran Exile") << endl;//Triggers code that makes you an exile later on
					}//end if
				}//end if
			}//end if
			
			cout << question("Is this okay? ") << "Yes or No. ";
			getline(cin, is_my_order_choice_correct);
			is_my_order_choice_correct = fixformat(is_my_order_choice_correct);
			
			if (is_my_order_choice_correct == "Yes") {
				if (player_is_in_holy_order == false) {
					cout << "You will not be in a Holy Order." << endl;
				}
				else {
					cout << "You are a member of " << player_holy_order << "." << endl;
				}//end if
				order_decision_is_confirmed = true;
			}
			else if (is_my_order_choice_correct == "No") {
				cout << "Let's try again then." << endl;
				break;
			}
			else {
				cout << notice("Try again.") << endl;
			}//end if
		}//end while
	
	}//end while

	return 0;	
	
}//end main
