#include <iostream>
#include "color_functions.h" // Lets you use the notice, info, picked, and question functions
#include "proper_cap.h" // lets you use the fixformat function
#include "lower_cap.h" // lets you use the lowerfixformat function
using namespace std;

int main() {

	//Formatting
	string tab = "   ";
	string double_tab = "      ";
	
	// Input variables
	bool player_is_male = false;
	string player_citizenship = "The Empire";
	bool player_is_in_holy_order = true;
	
	// Output variables
	string player_career;
		//assigns based on career
	bool player_is_doctor;
	bool player_is_military;
	
	// Temporary variables
	string do_i_want_career_info;
	string is_my_career_okay;
	string job_i_want_to_know_about;
	
	bool i_want_career_info = false;
	bool career_is_confirmed = false;
	bool no_more_career_info = false;
	
	while (career_is_confirmed == false) {
	
		//Picking a job
		cout << "Select a career from the following list:" << endl;
		//Job List
		cout << tab << info("Working Class:") << endl;
		cout << double_tab << "Farmer" << endl;
		cout << double_tab << "Laborer" << endl;
		cout << double_tab << "Factory Worker" << endl;
		cout << double_tab << "Driver" << endl;
		cout << tab << info("Academic:") << endl;
		cout << double_tab << "Student" << endl;
		cout << double_tab << "Graduate Student" << endl;
		cout << double_tab << "Professor" << endl;
		cout << tab << info("Professional:") << endl;
		cout << double_tab << "Doctor" << endl;
		cout << double_tab << "Engineer" << endl;
		cout << double_tab << "Archaeologist" << endl;
		cout << double_tab << "Historian" << endl;
		cout << double_tab << "Linguist" << endl;
		cout << double_tab << "Merchant" << endl;
		cout << tab << info("Military and Law Enforcement") << endl;
		cout << double_tab << "Police" << endl;
		// If a woman is not a citizen of the Highlands or in a Holy Order, she cannot be in a military career other than a military doctor!
		if (player_is_male == true or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
			cout << double_tab << "Sailor" << endl;
			cout << double_tab << "Airman" << endl;
			cout << double_tab << "Infantry" << endl;
			cout << double_tab << "Calvary" << endl;
			cout << double_tab << "Ordinance" << endl;
			cout << double_tab << "Medic" << endl;
			cout << double_tab << "Sniper" << endl;
			cout << double_tab << "Officer" << endl;
		}//end if
		cout << double_tab << "Military Doctor" << endl;
		cout << double_tab << "Covert Operations" << endl;
		//End job list
		
		// Ask if they want career info
		while (i_want_career_info == false) {
			cout << question("Do you want information about the career options? ") << "Yes or No. ";
			getline(cin, do_i_want_career_info);
			do_i_want_career_info = fixformat(do_i_want_career_info);
			
			if (do_i_want_career_info == "Yes") {
				i_want_career_info = true;
			}
			else if (do_i_want_career_info == "No") {
				cout << "Okay." << endl;
				break;
			}
			else {
				cout << notice("Try again.") << endl;
			}//end if
		}//end while
		
		// If the player wants to know about the careers, this activates
		if (i_want_career_info == true) {
			while (no_more_career_info == false) {
				cout << question("What career do you want to learn about?") << endl;
				cout << tab << "Type 'Careers' to see the list of careers again." << endl;
				cout << tab << "Type 'Exit' to stop learning." << endl;
				cout << "I want to learn about the ";
				getline(cin, job_i_want_to_know_about);
				job_i_want_to_know_about = fixformat(job_i_want_to_know_about);
				
				if (job_i_want_to_know_about == "Exit") {
					no_more_career_info = true;
				}
				else if (job_i_want_to_know_about == "Careers") {
					cout << info("Career List: ") << endl;
					cout << tab << info("Working Class:") << endl;
					cout << double_tab << "Farmer" << endl;
					cout << double_tab << "Laborer" << endl;
					cout << double_tab << "Factory Worker" << endl;
					cout << double_tab << "Driver" << endl;
					cout << tab << info("Academic:") << endl;
					cout << double_tab << "Student" << endl;
					cout << double_tab << "Graduate Student" << endl;
					cout << double_tab << "Professor" << endl;
					cout << tab << info("Professional:") << endl;
					cout << double_tab << "Doctor" << endl;
					cout << double_tab << "Engineer" << endl;
					cout << double_tab << "Archaeologist" << endl;
					cout << double_tab << "Historian" << endl;
					cout << double_tab << "Linguist" << endl;
					cout << double_tab << "Merchant" << endl;
					cout << tab << info("Military and Law Enforcement") << endl;
					cout << double_tab << "Police" << endl;
					// If a woman is not a citizen of the Highlands or in a Holy Order, she cannot be in a military career other than a military doctor!
					if (player_is_male == true or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
						cout << double_tab << "Sailor" << endl;
						cout << double_tab << "Airman" << endl;
						cout << double_tab << "Infantry" << endl;
						cout << double_tab << "Calvary" << endl;
						cout << double_tab << "Ordinance" << endl;
						cout << double_tab << "Medic" << endl;
						cout << double_tab << "Sniper" << endl;
						cout << double_tab << "Officer" << endl;
					}//end if
					cout << double_tab << "Military Doctor" << endl;
					cout << double_tab << "Covert Operations" << endl;
					//End job list
				}
				// Career info
				else if (job_i_want_to_know_about == "Farmer") {
					cout << tab << info("A Farmer is somewhat broad category that varies from being a subsistence farmer to running a small-scale farming operation. Such people usually come from rural areas, though occasionally urbanites pick up the career.") << endl;	
				}
				else if (job_i_want_to_know_about == "Laborer") {
					cout << tab << info("A Laborer is a broad classification for a group that works jobs that do not require university educations, but may be of various skill and pay. It can vary from being a grunt day laborer to being a skilled tradesman.") << endl;	
				}
				else if (job_i_want_to_know_about == "Factory Worker") {
					cout << tab << info("A Factory Worker works in one of the large industrial workplaces scattered across the world. While most jobs are unskilled, involving assembly line workplaces, some can be remarkably well paid.") << endl;	
				}
				else if (job_i_want_to_know_about == "Driver") {
					cout << tab << info("A Driver is someone who operates a vehicle for a living. For most it involves trucking loads of goods across the continent. Such people tend to be adept drivers.") << endl;	
				}
				else if (job_i_want_to_know_about == "Student") {	
					cout << tab << info("A Student is a person who is currently attending an undergraduate institution. They come in many varieties and most certainly cannot all be grouped into a well-defined category.") << endl;
				}
				else if (job_i_want_to_know_about == "Graduate Student") {
					cout << tab << info("A Graduate Student is a person who is currently attending graduate school. They have already obtained an undergraduate degree and are pursuing higher education. There are a variety of topics that one may choose to study.") << endl;	
				}
				else if (job_i_want_to_know_about == "Professor") {
					cout << tab << info("A Professor has obtained a graduate education and currently does research and teaches at a university. They are well-educated, intelligent, and most certainly have a variety of topics that they may choose to study.") << endl;	
				}
				else if (job_i_want_to_know_about == "Doctor") {
					cout << tab << info("A Doctor has obtained a graduate education in some type of medicine and works somewhere in the medical field. Experts on human anatomy and able to diagnose and treat sickness, they are vital to the health of a population.") << endl;	
				}
				else if (job_i_want_to_know_about == "Engineer") {
					cout << tab << info("An Engineer has an education that varies from an undergradute to a postgraduate education. They may work in a variety of subdisciplines and are often well-compensated and hold important practical skills.") << endl;	
				}
				else if (job_i_want_to_know_about == "Archaeologist") {
					cout << tab << info("An Archaeologist holds expertise examining artifacts from times past. They may hold interests in a variety of fields, but most have a graduate education and have a good survival skills.") << endl;	
				}
				else if (job_i_want_to_know_about == "Anthropologist") {
					cout << tab << info("An Anthropologist is an expert in the study of sentient beings. While most study humans, a select few study Banact and other more alien peoples. Some choose to study outside the standard Foyerian-Auroran people groups and are experts in the Orieni or Ghenima. Most tend to be well educated.") << endl;	
				}
				else if (job_i_want_to_know_about == "Historian") {
					cout << tab << info("A Historian is a scholar of times past, assembling past narratives and building them into something digestible and understandable by the people today. Many are well-educated and specialize in a variety of fields.") << endl;	
				}
				else if (job_i_want_to_know_about == "Merchant") {
					cout << tab << info("A Merchant practices the selling of goods. This is a diverse profession, ranging from operating a small business to owning an entire empire of businesses. Most Merchants tend to be well-balanced and independent individuals who can operate without external help.") << endl;	
				}
				else if (job_i_want_to_know_about == "Linguist") {
					cout << tab << info("A Linguist is an expert in languages. Most commonly, they are scholars of Foyerian Auroran, but some are experts in the Orieni or Banact languages, and are certainly of an impressive pedigree.") << endl;	
				}
				else if (job_i_want_to_know_about == "Police") {
					cout << tab << info("Someone who is a member of the Police has training and expertise in patrolling cities and enforcing laws on a largely unarmed civilian populace. Some patrol urban areas, while others police rural land. Often their location dictates their ability to interact with others.") << endl;	
				}
				else if (job_i_want_to_know_about == "Sailor") {
					if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
						cout << tab << info("A Sailor is an enlisted member of the naval branch of some military. While many do not step into the ocean, many serve on ships while others stay on land. They tend to be experienced in the upkeep and maintainence of large ships and maintaining supplies to large armies. They also know how to work as a part of a team to accomplish greater goals.") << endl;
					}
					else {
						cout << tab << info("A woman is not allowed to serve in the Empire's armed forces.") << endl;
					}//end if
				}
				else if (job_i_want_to_know_about == "Airman") {
					if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
						cout << tab << info("An Airman is an enlisted member of the air branch of a military. Most do not fly aircraft, but are usually adept in the maintainence and logistics of aircraft, alongside a military discipline of working with others to accomplish great things.") << endl;
					}
					else {
						cout << tab << info("A woman is not allowed to serve in the Empire's armed forces.") << endl;
					}//end if	
				}
				else if (job_i_want_to_know_about == "Infantry") {
					if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
						cout << tab << info("A member of the Infantry has experience in armed land forces, and has training in small arms and basic explosives. Often trained to be a part of a larger team and coordinating with others, they serve in more than just national militaries, but also in smaller local forces and militia. They form the backbone of any fighting force.") << endl;
					}
					else {
						cout << tab << info("A woman is not allowed to serve in the Empire's armed forces.") << endl;
					}//end if	
				}
				else if (job_i_want_to_know_about == "Calvary") {
					if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
						cout << tab << info("A member of the Calvary has experience in operating military vehicles, be it driving, shooting or maintenence. The term is a holdover from an older time, but still a relevant description. Some are enlisted, others officers, and all work in a team to accomplish their goals.") << endl;
					}
					else {
						cout << tab << info("A woman is not allowed to serve in the Empire's armed forces.") << endl;
					}//end if	
				}
				else if (job_i_want_to_know_about == "Ordinance") {
					if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
						cout << tab << info("A member of the Ordinance sector of the military has military experience in handling explosives. This may span to assembling bombs, disarming them, operating cannons, and so on. In particular, most are well-versed on the safe handling of such dangerous weapons.") << endl;
					}
					else {
						cout << tab << info("A woman is not allowed to serve in the Empire's armed forces.") << endl;
					}//end if	
				}
				else if (job_i_want_to_know_about == "Medic") {
					if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
						cout << tab << info("A Medic is not a doctor, but a trained soldier with an additional expertise in treating battlefield injuries. While lacking the education of a true medical professional, they can certainly hold their own in helping others through basic treatment in addition to being able to perform admirably in combat.") << endl;
					}
					else {
						cout << tab << info("A woman is not allowed to serve in the Empire's armed forces.") << endl;
					}//end if	
				}
				else if (job_i_want_to_know_about == "Sniper") {
					if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
						cout << tab << info("A Sniper is a specialist position, with special training in stealthily eliminating targets from after, often when in isolated positions in the midst of dangerous territory. Most have excellent perception and are skilled hunters of man.") << endl;
					}
					else {
						cout << tab << info("A woman is not allowed to serve in the Empire's armed forces.") << endl;
					}//end if	
				}
				else if (job_i_want_to_know_about == "Officer") {
					if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
						cout << tab << info("An Officer is a well-educated, prestigious position in the military. Most command others, but are themselves sandwiched in the command structure and report to others. They lead troops, coordinate logistics, administer bases, and represent their men and military.") << endl;
					}
					else {
						cout << tab << info("A woman is not allowed to serve in the Empire's armed forces.") << endl;
					}//end if	
				}
				else if (job_i_want_to_know_about == "Military Doctor") {
					if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
						cout << tab << info("A Military Doctor serves as a trained doctor in a military. They possess the same qualifications as a civilian doctor, but with a small amount of military training and discipline instilled in them. Most are not as adept as working with civilians and instead are well aware of working with other military personel.") << endl;
					}
					else {
						cout << tab << info("This is one of the few military careers open to women in the Empire.") << endl;
						cout << tab << info("A Military Doctor serves as a trained doctor in a military. They possess the same qualifications as a civilian doctor, but with a small amount of military training and discipline instilled in them. Most are not as adept as working with civilians and instead are well aware of working with other military personel.") << endl;
					}//end if	
				}
				else if (job_i_want_to_know_about == "Covert Operations") {
					cout << tab << info("Someone involved in Covert Operations specializes in a more discrete form of armed service. Many are data scientists who sift through sensative data, while others are deployed in field service, where these spies are experts in infiltration, espionage, and detective work.") << endl;	
				}
				
				//Template for more careers
				//else if (job_i_want_to_know_about == "My Job") {
				//	if (my requirements to get the job == true) {
				//		cout << "My job info" << endl;
				//	}
				//	else if (even if my requirements are not satisfied, if these other ones are satisfied,) {
				//		cout << "This info" << endl;
				//	}
				//	else {
				//		cout << "You do not have the requirements to be in this job" << endl;
				//	}//end if	
				//}
				//End Template
				
				// End Career Info
				else {
					cout << notice("Try again.") << endl;
				}//end if
			
			}//end while
			
		}//end if
		
		while (career_is_confirmed == false) {
			cout << question("What career are you selecting?") << endl;
			cout << tab << "Type 'Careers' to see the list of careers again." << endl;
			cout << "My career: ";
			getline(cin, player_career);
			player_career = fixformat(player_career);
			
			if (player_career == "Careers") {
				cout << info("Career List: ") << endl;
				cout << tab << info("Working Class:") << endl;
				cout << double_tab << "Farmer" << endl;
				cout << double_tab << "Laborer" << endl;
				cout << double_tab << "Factory Worker" << endl;
				cout << double_tab << "Driver" << endl;
				cout << tab << info("Academic:") << endl;
				cout << double_tab << "Student" << endl;
				cout << double_tab << "Graduate Student" << endl;
				cout << double_tab << "Professor" << endl;
				cout << tab << info("Professional:") << endl;
				cout << double_tab << "Doctor" << endl;
				cout << double_tab << "Engineer" << endl;
				cout << double_tab << "Archaeologist" << endl;
				cout << double_tab << "Historian" << endl;
				cout << double_tab << "Linguist" << endl;
				cout << double_tab << "Merchant" << endl;
				cout << tab << info("Military and Law Enforcement") << endl;
				cout << double_tab << "Police" << endl;
				// If a woman is not a citizen of the Highlands or in a Holy Order, she cannot be in a military career other than a military doctor!
				if (player_is_male == true or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
					cout << double_tab << "Sailor" << endl;
					cout << double_tab << "Airman" << endl;
					cout << double_tab << "Infantry" << endl;
					cout << double_tab << "Calvary" << endl;
					cout << double_tab << "Ordinance" << endl;
					cout << double_tab << "Medic" << endl;
					cout << double_tab << "Sniper" << endl;
					cout << double_tab << "Officer" << endl;
				}//end if
				cout << double_tab << "Military Doctor" << endl;
				cout << double_tab << "Covert Operations" << endl;
				//End job list
			}
			else if (player_career == "Farmer") {
				player_is_doctor = false;
				player_is_military = false;
				break;
			}
			else if (player_career == "Laborer") {
				player_is_doctor = false;
				player_is_military = false;
				break;
			}
			else if (player_career == "Factory Worker") {
				player_is_doctor = false;
				player_is_military = false;
				break;
			}
			else if (player_career == "Driver") {
				player_is_doctor = false;
				player_is_military = false;
				break;
			}
			else if (player_career == "Student") {
				player_is_doctor = false;
				player_is_military = false;
				break;
			}
			else if (player_career == "Graduate Student") {
				player_is_doctor = false;
				player_is_military = false;
				break;
			}
			else if (player_career == "Professor") {
				player_is_doctor = false;
				player_is_military = false;
				break;
			}
			else if (player_career == "Doctor") {
				player_is_doctor = true;//Doctors are considered doctors
				player_is_military = false;
				break;
			}
			else if (player_career == "Engineer") {
				player_is_doctor = false;
				player_is_military = false;
				break;
			}
			else if (player_career == "Archaeologist") {
				player_is_doctor = false;
				player_is_military = false;
				break;
			}
			else if (player_career == "Anthropologist") {
				player_is_doctor = false;
				player_is_military = false;
				break;
			}
			else if (player_career == "Historian") {
				player_is_doctor = false;
				player_is_military = false;
				break;
			}
			else if (player_career == "Merchant") {
				player_is_doctor = false;
				player_is_military = false;
				break;
			}
			else if (player_career == "Linguist") {
				player_is_doctor = false;
				player_is_military = false;
				break;
			}
			else if (player_career == "Police") {
				player_is_doctor = false;
				player_is_military = false;
				break;
			}
			else if (player_career == "Sailor") {
				if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
					player_is_doctor = false;
					player_is_military = true;
					break;
				}
				else {
					cout << notice("A woman is not allowed to serve in the Empire's armed forces.") << endl;
				}//end if
			}
			else if (player_career == "Airman") {
				if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
					player_is_doctor = false;
					player_is_military = true;
					break;
				}
				else {
					cout << notice("A woman is not allowed to serve in the Empire's armed forces.") << endl;
				}//end if
			}
			else if (player_career == "Infantry") {
				if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
					player_is_doctor = false;
					player_is_military = true;
					break;
				}
				else {
					cout << notice("A woman is not allowed to serve in the Empire's armed forces.") << endl;
				}//end if
			}
			else if (player_career == "Calvary") {
				if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
					player_is_doctor = false;
					player_is_military = true;
					break;
				}
				else {
					cout << notice("A woman is not allowed to serve in the Empire's armed forces.") << endl;
				}//end if
			}
			else if (player_career == "Ordinance") {
				if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
					player_is_doctor = false;
					player_is_military = true;
					break;
				}
				else {
					cout << notice("A woman is not allowed to serve in the Empire's armed forces.") << endl;
				}//end if
			}
			else if (player_career == "Medic") {
				if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
					player_is_doctor = false;//Medics are not considered doctors
					player_is_military = true;
					break;
				}
				else {
					cout << notice("A woman is not allowed to serve in the Empire's armed forces.") << endl;
				}//end if
			}
			else if (player_career == "Sniper") {
				if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
					player_is_doctor = false;
					player_is_military = true;
					break;
				}
				else {
					cout << notice("A woman is not allowed to serve in the Empire's armed forces.") << endl;
				}//end if
			}
			else if (player_career == "Officer") {
				if ((player_is_male == true) or (player_citizenship == "The Highlands" or player_is_in_holy_order == true)) {
					player_is_doctor = false;
					player_is_military = true;
					break;
				}
				else {
					cout << notice("A woman is not allowed to serve in the Empire's armed forces.") << endl;
				}//end if
			}
			else if (player_career == "Military Doctor") {
				player_is_doctor = true;//Military doctors are considered doctors
				player_is_military = true;//They are also considered military (even if held by a woman)
				break;
			}
			else if (player_career == "Covert Operations") {
				player_is_doctor = false;
				player_is_military = false;//Covert Operations are not considered military (although they are closely affiliated with them.)
				break;
			}
			
			else {
				cout << notice("Try again.") << endl;
			}//end if
			
		}//end while
		
		
		//Confirming your career
		while (career_is_confirmed == false) {
			//Printing proper phrase for career confirmation
			if (player_career[0] == 'A' or player_career[0] == 'E') {
				cout << "You are an " << player_career << "." << endl;
			}
			else if (player_career[0] == 'O') {
				if (player_career == "Ordinance") {
					cout << "You are an " << player_career << " Specialist." << endl;
				}
				else {
					cout << "You are an " << player_career << "." << endl;
				}//end if
			}
			else if (player_career == "Police" or (player_career == "Infantry" or player_career == "Calvary")) {
				cout << "You serve in the " << player_career << "." << endl;
			}
			else if (player_career == "Covert Operations") {
				cout << "You work in " << player_career << "." << endl;
			}
			else {
				cout << "You are a " << player_career << "." << endl;
			}//end if
			cout << question("Is this okay? ") << "Yes or No. ";
			getline(cin, is_my_career_okay);
			is_my_career_okay = fixformat(is_my_career_okay);
			
			if (is_my_career_okay == "Yes") {
				career_is_confirmed = true;
			}
			else if (is_my_career_okay == "No") {
				cout << "Let's try again then." << endl;
				i_want_career_info = false;
				no_more_career_info = false;
				break;
			}
			else {
				cout << notice("Try again.") << endl;
			}//end if
			
		}//end while
		
	}//end while
	
	if (player_career[0] == 'A' or player_career[0] == 'E') {
		cout << "You are an " << player_career << "." << endl;
	}
	else if (player_career[0] == 'O') {
		if (player_career == "Ordinance") {
			cout << "You are an " << player_career << " Specialist." << endl;
		}
		else {
			cout << "You are an " << player_career << "." << endl;
		}//end if
	}
	else if (player_career == "Police" or (player_career == "Infantry" or player_career == "Calvary")) {
		cout << "You serve in the " << player_career << "." << endl;
	}
	else if (player_career == "Covert Operations") {
		cout << "You work in " << player_career << "." << endl;
	}
	else {
		cout << "You are a " << player_career << "." << endl;
	}//end if

	return 0;

}//end main
