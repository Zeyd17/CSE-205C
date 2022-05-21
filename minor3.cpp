#include<iostream>

using namespace std;

void fu(int arr1[],int arr2[],int l1,int l2) //asume l1 =l2
{
	for(int i =0;i<l1;i++)
	{
		cout<<arr1[i]+arr2[i]<<" ";
	}
}

int main()
{
	int arr[3]={1,2,3};
	int arr2[3]={2,34,4};
	fu(arr,arr2,3,3);
}
