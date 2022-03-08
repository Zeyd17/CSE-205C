#include <iostream>
using namespace std;
//declaring a function 
int compare(int first, int second)
{
  if (first > second)
  return first;
  else
  return second;
}
//main function
int main()
{
 int first, second;
 cout << "Enter first value: ";
 cin >> first;
 cout << "Enter second value: ";
 cin >> second;
 cout << "The larger value is " << compare(first, second) <<endl;
 return 0;
}
