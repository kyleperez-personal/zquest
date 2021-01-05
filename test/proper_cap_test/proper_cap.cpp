#include <iostream>
#include <string>
#include "proper_cap.h"
using namespace std;


// DOCUMENTATION
//	fixformat passes a string strIn by reference
//
//	The goal of the function is to convert a long multi-word (ie: including spaces)
//	and capitalize it like a proper noun:
//		-Capitalizing the first character
//		-Capitalizing the first character of each word
//			--Unless the word is 'the' or 'of'
//
//	HOW IT WORKS
//		1. Capitalize the first letter of the string
//		2. Look at the next letter.
//			- If it is a capitalized
//				--If the previous character was a space, check to see if the
//				next few characters form 'of' or 'the'
//					---If 'of' or 'the' is formed, make the letter lowercase
//					---Otherwise, do nothing
//				--Otherwise (previous character was not a space), make that
//				character lowercase
//			- If it is not capitalized
//				--If the previous character was a space, check to see if the
//				character is a part of 'of' or 'the'
//					---If 'of' or 'the' is formed, do 'nothing'
//					---Otherwise, make the character uppercase
//				--Otherwise(previous character was not a space), do nothing
//		3. Repeat for the next letter until done with the string
//
//	QUIRKS
//		I've adopted time-saving measures so that during the program that makes it so that
//		when we find a given permutation of cap/noncap 'of' or 'the', we automatically fix
//		the capitalization.
//			-To my knowledge, these brute-force permutative checkers are necessary in
//			the program, so this helps to save some time at the expense of added
//			lines of code in the if statements
//
//		The program does not behave correctly at the end of a string; if the string ends
//		with 'The' or 'Of' (up to case beyond the first character), then it will not make
//		the 'T'/'O' lowercase. This is since the program does not detect the ' ' character.
//			-The reason for this is that during the 'the'/'of' check portion of the
//			program, in order to truly check for the word 'the' or 'of', we are really
//			checking for 'the ' or 'of '; the space denotes that the word is complete.
//			If we didn't have this feature, it would cause errors on words like 'often'
//			or 'theta'.
//			-This behaviour is ultimately acceptable; a proper title (which this program)
//			serves to correct capitalization for would normally not end on 'the'/'of'
//
//	POTENTIAL ISSUES
//		No hyphen '-' support.

void fixformat(string& strIn) {

	
	// First, capitalize the first character
	strIn[0] = toupper(strIn[0]);
	
	//For every other element of the string, starting at element 1
	for ( int i = 1; i < strIn.length(); ++i) {//IF BREAKS, use i++
	
	
		// if strIn[i] is between A and Z:
		if (strIn[i] >= 'A' and strIn[i] <= 'Z'){
		
		
			// If the entry before is a space, check to do stuff
			if (strIn[i-1] == ' ') {
			
			
				// if the character is an O, and it is followed by an f or F, then a space, make O lowercase (IE: does not make ' of ' capitalized)
				if (strIn.substr(i,3) == "Of ") {
				
					strIn[i] = tolower(strIn[i]);
					//MAYBE DELETE
					i = i + 2;
					
				}
				else if (strIn.substr(i,3) == "OF ") {
				
					strIn[i] = tolower(strIn[i]);
					//MAYBE DELETE
					strIn[i + 1] = tolower(strIn[i + 1]);
					i = i + 2;
					
				}
				// if the character is a T, followed by an H/h, then an e/E, then space, make T lowercase (IE: does not make ' the ' capitalized)
				else if (strIn.substr(i,4) == "The ") {
				
					strIn[i] = tolower(strIn[i]);
					//Maybe Delete
					i = i + 3;
					
				}
				else if (strIn.substr(i,4) == "THe ") {
				
					strIn[i] = tolower(strIn[i]);
					strIn[i + 1] = tolower(strIn[i + 1]);
					i = i + 3;
					
				}
				else if (strIn.substr(i,4) == "ThE ") {
				
					strIn[i] = tolower(strIn[i]);
					strIn[i + 2] = tolower(strIn[i + 2]);
					i = i + 3;
					
				}
				else if (strIn.substr(i,4) == "THE ") {
				
					strIn[i] = tolower(strIn[i]);
					strIn[i + 1] = tolower(strIn[i + 1]);
					strIn[i + 2] = tolower(strIn[i + 2]);
					i = i + 3;
					
				}
				
				
				// If the character is not an O or T, then do nothing
			}
			
			
			// If the entry is not a space, make it lowercase
			else {
			
				strIn[i] = tolower(strIn[i]);
				
			} // end if
			
			
		}
		
		
		// if strIn[i] is between a and z:
		else if (strIn[i] >= 'a' and strIn[i] <= 'z') {
		
		
			// If the character before is a space, do stuff
			if (strIn[i-1] == ' ') {
			
			
				// If the strIn[i] is an 'o', then if the next characters are an f/F followed by a space, do nothing (IE: does not capitalize 'of')
				if (strIn.substr(i,3) == "of ") {
				
					//strIn[i] = strIn[i];
					i = i + 2;
					
				}
				else if (strIn.substr(i,3) == "oF ") {
				
					//strIn[i] = strIn[i];
					strIn[i + 1] = tolower(strIn[i + 1]);
					i = i + 2;
					
				}
				// If the character is a 't', followed by an H/h, then E/e, then a space, then do nothing (IE: does not capitalize 'the')
				else if (strIn.substr(i,4) == "the ") {
				
					//strIn[i] = strIn[i];
					i = i + 3;
					
				}
				else if (strIn.substr(i,4) == "tHe ") {
				
					//strIn[i] = strIn[i];
					strIn[i + 1] = tolower(strIn[i + 1]);
					i = i + 3;
					
				}
				else if (strIn.substr(i,4) == "thE ") {
				
					//strIn[i] = strIn[i];
					strIn[i + 2] = tolower(strIn[i + 2]);
					i = i + 3;
					
				}
				else if (strIn.substr(i,4) == "tHE ") {
				
					//strIn[i] = strIn[i];
					strIn[i + 1] = tolower(strIn[i + 1]);
					strIn[i + 2] = tolower(strIn[i + 2]);
					i = i + 3;
					
				}
				// if the following word is not 'of' or 'the', capitalize the letter
				else {
				
					strIn[i] = toupper(strIn[i]);
					
				} // end if
				
				
			}
			
			
			// Otherwise, do nothing
			
			
		}
		
		
		// if strIn[i] is anything else, do nothing
		
		
	} // end for
	
	return;
}
