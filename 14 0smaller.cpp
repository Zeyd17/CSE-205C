#include<iostream>
using namespace std;

void zerosmall(int *,int *);

int main()
{
	int x,y;
	cout<<"Enter first number : ";
	cin>>x;
	cout<<"Enter second number : ";
	cin>>y;
	zerosmall(&x,&y);
	cout<<"\nFirst number is : "<<x<<endl;
	cout<<"Second number is : "<<y<<endl;
    
        return 0;
}

void zerosmall(int *a, int *b)
{
	if(*a<*b)
		*a=0;
	else
		*b=0;
}
