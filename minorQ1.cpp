#include<iostream>
using namespace std;

int main()
{
	float x,y;
	cout<<"enter the  values of  point:";
	cin>>x>>y;
	if(x>0&&y>0)
		cout<<"in 1st quadrant";
	else if(x>0&&y<0)
		cout<<"in 4th quadrant";
	else if(x<0&&y<0)
		cout<<"in 3rd quad";
	else if(x<0&&y>0)
		 cout<<"in 2nd quad";
	else if(x==0&&y!=0)
		cout<<"On y axis";
	else if(x!=0&&y==0)
		cout<<"On x axis";
	else
		cout<<"the point lies on origin";
		
	
}
