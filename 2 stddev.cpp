#include<iostream>
#include <math.h>
using namespace std;
int main ()
{
	
    int arr[10], n, i,squaresum=0,avg1,sum=0,avg2;
    double standard_d;
//size of array
    cout << "Enter the size of the array : ";
    cin >> n;
//user input
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    for (i = 0; i < n; i++){
        squaresum=(arr[i]*arr[i])+squaresum;
        
    }
// calculating sum
    for (int i = 0; i < n; i++) {
       sum=sum+arr[i];
    }
    avg1=sum/n;
    avg2=avg1*avg1;
//standard deviation
    standard_d=sqrt((squaresum/n)-avg2);
    cout <<"\nStandard deviation= :"<<standard_d;
    return 0;
}
