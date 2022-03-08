#include <iostream>
using namespace std;
int main() {
    int arr[26] = {55,62,68,74,59,45,41,58,60,67,65,78,82,88,91,92,90,93,87,80,78,79,72,68,61,59};
    
    int hotdays = 0;
    int pleasantdays = 0;
    int colddays = 0;
    
    for(int i=0;i<26;i++)
    {
        if(arr[i] >= 85)
        {
            hotdays += 1;
        }
        if(arr[i]>=60 && arr[i]<=84)
        {
            pleasantdays += 1;  
        }
        if(arr[i] < 60)
        {
            colddays += 1;  
        }
    }   

int sum=0;
 for(int i=0;i<26;i++)
 {
    sum += arr[i];
 }

cout<<"Hot days: "<<hotdays<<endl;
cout<<"Pleasant days: "<<pleasantdays<<endl;
cout<<"Cold days: "<<colddays<<endl;
cout<<"Avg temp: "<<sum/26;     
    return 0;
    
}
