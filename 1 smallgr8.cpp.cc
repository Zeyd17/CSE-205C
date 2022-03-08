#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int N;
    cout<<"Value of N: ";
    cin>>N;
    int arr[N];
    cout<<"Write the no.s:\n";
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int max;
    int min;
    float sum = 0;
    float avg;
    for(int i=0;i<N;i++)
    {
        sum += arr[i];
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout<<max<<" is largest"<<endl;
    cout<<min<<" is smallest"<<endl;
    avg = sum/N;
    cout<<avg<<" is the average";
    
    
    return 0;
}
