#include<iostream>
using namespace std;

bool vowel(char ch)
{
	ch = toupper(ch);
	return (ch=='A' || ch=='E' || ch=='I' ||ch=='O' || ch=='U');
}
int total_vowels(string str)
{
	int count = 0;
	for (int i=0; i<str.length(); i++)
		if (vowel(str[i])) 
			++count;
	return count;
}
int main()
{
	//string
	string str = "Who is the boss? ";

	// numbers of Vowel
	cout <<"The total number of vowels are: "<< total_vowels(str) << endl;
	return 0;
}
