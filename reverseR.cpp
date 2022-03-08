#include <iostream.h>
using namespace std;

int reverse(int num) {
 
   static temp,sum;
 
   if(num>0){
  
      temp = num%10;
      sum = sum*10 + temp;

      reverse(num/10);

   } else {
  
     return sum;
   }
 
}

int main() {
 
  int num,rev;
 

   cout<<"Enter number";
   cin >> num;
 

   rev = reverse(num);
 
   cout << "Reverse of a input number is" << rev;
 
   return 0;
}
