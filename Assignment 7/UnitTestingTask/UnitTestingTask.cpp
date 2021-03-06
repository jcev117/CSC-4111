// UnitTestingTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "function.h"

int main()
{
	char a[] = "abcd";
	char b[] = "bcdae";
	cout << "isAnagram: "<< check_anagram(a,b)<<endl;
	string input = "heLLo!@12";
	cout << "Strength of Password: " <<getStrongNess(input) <<endl;
	input = "@12";
	cout << "Strength of Password: " << getStrongNess(input) << endl;
	cout << getFactorial(5) <<endl;
	int arr[] = { -2, 1, 3, 4,7 };
	cout << subArraySum(arr, 5, 3) <<endl;

}
/*
*/
int getFactorial(int n)
{
	int factorial = 1;
	for (int i = 1; i <= n; ++i)
	{
		factorial *= i;              // factorial = factorial*i;
	}
	return factorial;
}
/*
returns sum of the subarray strating from index start
a is the array,
n is size of the array
start in the starting index of the subarray
*/

int subArraySum(int a[], int n, int start)
{
	int sum = 0;
	for (int i = start; i < n; i++)
		sum += a[i];

	return sum;

}
/* checkes one string is anagram of another string or not
returns 1 if true;
returns 0 if false;
For more details about Anagram: https://en.wikipedia.org/wiki/Anagram
*/

int check_anagram(char a[], char b[])
{
	int first[26] = { 0 }, second[26] = { 0 }, c = 0;

	// Calculating frequency of characters of first string

	while (a[c] != '\0')
	{
		first[a[c] - 'a']++;
		c++;
	}

	c = 0;

	while (b[c] != '\0')
	{
		second[b[c] - 'a']++;
		c++;
	}

	// Comparing frequency of characters

	for (c = 0; c < 26; c++)
	{
		if (first[c] != second[c]) 
			return 0;
		
	}

	return 1;
}
/*
This function checks the strength of a password:
A password should have following properties:
	It contains at least one lowercase English character.
	It contains at least one uppercase English character.
	It contains at least one special character. The special characters are: !@#$%^&*()-+
	Its length is at least 8.
	It contains at least one digit.

	Let a strong password is one that satisfies all above conditions. 
	A moderate password is one that satisfies first three conditions and has length at least 6. 
	Otherwise password is weak.
	function returns 2 if password is strong.
	function returns 1 if password is moderate.
	function returns 0 if password is weak.
*/
int getStrongNess(string& input)
{
	int n = input.length();

	// Checking lower alphabet in string 
	bool hasLower = false, hasUpper = false;
	bool hasDigit = false, specialChar = false;
	string normalChars = "abcdefghijklmnopqrstu"
		"vwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";

	for (int i = 0; i < n; i++) {
		if (islower(input[i]))
			hasLower = true;
		if (isupper(input[i]))
			hasUpper = true;
		if (isdigit(input[i]))
			hasDigit = true;

		size_t special = input.find_first_not_of(normalChars);
		if (special != string::npos)
			specialChar = true;
	}

	if (hasLower && hasUpper && hasDigit &&
		specialChar && (n >= 8))
		return 2;
	else if ((hasLower || hasUpper) &&
		specialChar && (n >= 6))
		return 1;
	else
		return 0;
}