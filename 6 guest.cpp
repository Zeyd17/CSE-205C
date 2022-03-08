#include<iostream>
using namespace std;
int main (){
    int i,guests,chairs,product=1;
    //taking input of guests
    cout<<"Enter the no. of guests";
    cin>>guests;
    //taking input of chairs 
    cout<<"Enter the no. of chairs";
    cin>>chairs;
    //calculating the possibilities of arrangement 
    if(guests>chairs){
        for (int i = 0; i < chairs; i++) {
            product=product*guests;
            guests--; 
        }
    }
    
    cout<<"No. of possible arrangements are:"<<product;
    return 0;}
