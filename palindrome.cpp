#include <iostream>
using namespace std;
//check if string is palindrome or not..
int Palindrome(char word[], int first, int last){
   if (first < last){
      first++;
      last--;
      return Palindrome(word, first, last);
   }

   if (first == last){
      return 1;
   }
   if (word[first] != word[last]){
      return 0;
   }
   return 1;
}

int main(){
   char word[]="deed";
   int result;
   int length = strlen(word);
   if (length == 0){
      result=1;
   }

   else{
      result=Palindrome(word, 0, length - 1);
   }
   if (result==1){
      //rtesult
      cout << "Is palindrome."<<endl;
   }
   else{
      cout << "Is not a palindrome.";
   }
   return 0;
}
