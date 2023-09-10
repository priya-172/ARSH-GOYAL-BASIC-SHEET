// Program to count vowels, consonant, digits and
// special character in a given string.
#include <bits/stdc++.h>
using namespace std;

// Function to count number of vowels, consonant,
// digitsand special character in a string.
void countCharacterType(string str)
{
	// Declare the variable vowels, consonant, digit
	// and special characters
	int vowels = 0, consonant = 0, specialChar = 0,
		digit = 0;

	// str.length() function to count number of
	// character in given string.
	for (int i = 0; i < str.length(); i++) {
		
		char ch = str[i];

		if ( (ch >= 'a' && ch <= 'z') ||
			(ch >= 'A' && ch <= 'Z') ) {

			// To handle upper case letters
			ch = tolower(ch);

			if (ch == 'a' || ch == 'e' || ch == 'i' ||
				ch == 'o' || ch == 'u')
				vowels++;
			else
				consonant++;
		}
		else if (ch >= '0' && ch <= '9')
			digit++;
		else
			specialChar++;
	}
	cout << "Vowels: " << vowels << endl;
	cout << "Consonant: " << consonant << endl;
	cout << "Digit: " << digit << endl;
	cout << "Special Character: " << specialChar << endl;
}

// Driver function.
int main()
{
	string str = "geeks for geeks121";
	countCharacterType(str);
	return 0;
}
