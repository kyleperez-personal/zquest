#include <iostream>
#include <string>
#include "lower_cap.h"
using namespace std;

string lowerfixformat(string strIn) {
	// Output
	string strOut = strIn;
	
	// Capitalize the first character
	strOut[0] = tolower(strIn[0]);
	
	for ( int i = 1; i < strIn.length(); i++) {
		// if strIn[i] is between A and Z:
		if (strIn[i] >= 'A' and strIn[i] <= 'Z'){
			// If the entry before is a space, check to do stuff
			if (strIn[i-1] == ' ') {
				// if the character is an O, and it is followed by an f or F, then a space, make O lowercase (IE: does not make ' of ' capitalized)
				if (strIn.substr(i,3) == "Of ") {
					strOut[i] = tolower(strIn[i]);
				}
				else if (strIn.substr(i,3) == "OF ") {
					strOut[i] = tolower(strIn[i]);
				}
				// if the character is a T, followed by an H/h, then an e/E, then space, make T lowercase (IE: does not make ' the ' capitalized)
				else if (strIn.substr(i,4) == "The ") {
					strOut[i] = tolower(strIn[i]);
				}
				else if (strIn.substr(i,4) == "THe ") {
					strOut[i] = tolower(strIn[i]);
				}
				else if (strIn.substr(i,4) == "ThE ") {
					strOut[i] = tolower(strIn[i]);
				}
				else if (strIn.substr(i,4) == "THE ") {
					strOut[i] = tolower(strIn[i]);
				}
				// If the character is not an O or T, then do nothing
				else {
					strOut[i] = strIn[i];
				} // end if
			}
			// If the entry is not a space, make it lowercase
			else {
				strOut[i] = tolower(strIn[i]);
			} // end if
		}
		// if strIn[i] is between a and z:
		else if (strIn[i] >= 'a' and strIn[i] <= 'z') {
			// If the character before is a space, do stuff
			if (strIn[i-1] == ' ') {
				// If the strIn[i] is an 'o', then if the next characters are an f/F followed by a space, do nothing (IE: does not capitalize 'of')
				if (strIn.substr(i,3) == "of ") {
					strOut[i] = strIn[i];
				}
				else if (strIn.substr(i,3) == "oF ") {
					strOut[i] = strIn[i];
				}
				// If the character is a 't', followed by an H/h, then E/e, then a space, then do nothing (IE: does not capitalize 'the')
				else if (strIn.substr(i,4) == "the ") {
					strOut[i] = strIn[i];
				}
				else if (strIn.substr(i,4) == "tHe ") {
					strOut[i] = strIn[i];
				}
				else if (strIn.substr(i,4) == "thE ") {
					strOut[i] = strIn[i];
				}
				else if (strIn.substr(i,4) == "tHE ") {
					strOut[i] = strIn[i];
				}
				// if the following word is not 'of' or 'the', capitalize the letter
				else {
					strOut[i] = toupper(strIn[i]);
				} // end if
			}
			// Otherwise, do nothing
			else {
				strOut[i] = strIn[i];
			} // end if
		}
		// if strIn[i] is anything else, do nothing
		else {
			strOut[i] = strIn[i];
		} // end if
	} // end for
	
	return strOut;
}
