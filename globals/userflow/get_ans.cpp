#include <iostream>
#include <string>
#include "get_ans.h"
#include "output_format.h"
#include "proper_cap.h"

using namespace std;

//Maybe need to generalize later?
//Maybe remove pass by reference for string
void user_answer(bool& my_bool, string my_question) {

	string my_answer;

	while (my_bool == false) {
	
		cout << question << my_question << endf << endl;
		getline(cin, my_answer);
		fixformat(my_answer);
		
		if (my_answer == "Yes") {
		
			my_bool = true;
		
		}
		else if (my_answer == "No") {
		
			my_bool = false;
			break;
		
		}
		else {
		
			try_again();
		
		}//end if
		
	
	}//end while


}//end user_answer
