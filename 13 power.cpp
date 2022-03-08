#include <iostream>

using namespace std;
//function for calculating power
double power(double n,int p){
    double result=1;
    for (int i = 1; i <=p;i++) {
        result=n*result;
    }
    return result;
    
}
// main function
int main()
{   double n;
    int p;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>p;
    //printing and calling a function
    cout<<"result="<<power(n,p)<<endl;

    return 0;
}
