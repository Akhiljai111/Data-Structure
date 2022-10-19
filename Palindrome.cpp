#include <iostream>
using namespace std;
#define NO_OF_CHARS 256

/* function to check whether characters of a string
can form a palindrome */
bool canFormPalindrome(string str)
{
	int count[NO_OF_CHARS] = { 0 };

	for (int i = 0; str[i]; i++)
		count[str[i]]++;

	int odd = 0;
	for (int i = 0; i < NO_OF_CHARS; i++) {
		if (count[i] & 1)
			odd++;

		if (odd > 1)
			return false;
	}
	return true;
}


int main()
{
	canFormPalindrome("geeksforgeeks") ? cout << "Yes\n" : cout << "No\n";
	canFormPalindrome("geeksogeeks") ? cout << "Yes\n" : cout << "No\n";
	return 0;
}
