//way 1
// C program to Convert characters
// of a string to opposite case
 
#include <stdio.h>
#include <string.h>
 
// Function to convert characters
// of a string to opposite case
void convertOpposite(char* str)
{
    int ln = strlen(str);
 
    // Conversion according to ASCII values
    for (int i = 0; i < ln; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
    }
}
 
// Driver function
int main()
{
    char str[] = "GeEkSfOrGeEkS";
 
    // Calling the Function
    convertOpposite(str);
 
    printf("%s", str);
    return 0;
}
//way 2


// C program to Convert characters
// of a string to opposite case

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "GeEkSfOrGeEkS";
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
		else {
			str[i] = toupper(str[i]);
		}
	}
	printf("%s\n", str);
	return 0;
}
