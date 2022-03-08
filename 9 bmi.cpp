#include <iostream>

using namespace std;

int main()
{
    float w,h,bmi;
    //ask user for height and weight data
    cout<<"enter the height in inches and weight in lbs: ";
    cin>>h>>w;
    //calculate body mass index(bmi)
    bmi = 703*(w/(h*h));
    cout<<bmi<<endl;
    //check if person is obese or underweight or overweight
    if(bmi<18.5)
        cout<<"underweight\n";
    else if(bmi<=24.9&&w>=18.5)
        cout<<"normal\n";
    else if(bmi>=25&&bmi<=29.9)
        cout<<"overweight\n";
    else
        cout<<"obese\n";
}
