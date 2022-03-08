#include <iostream>

using namespace std;
//cretaing a function of area 
float circle_area(float r){
    return 3.14*r*r;
}
// main function
int main()
{   float r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;
    //printing and calling a function
    cout<<"The area of the circle="<<circle_area(r)<<endl;

    return 0;
}
