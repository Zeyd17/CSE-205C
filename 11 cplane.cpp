#include <iostream>
using namespace std;
int main(){
	float x,y;
        //enter the position of cartesian plane
	cout<<"Enter x coordinate"<<endl;
	cin>>x;
	cout<<"Enter y coordinate"<<endl;
	cin>>y;
	//check the quadrant
	if(x>0 && y>0)
	cout<<"1st Quadrant";
	else if(x<0 && y>0)
	cout<<"2nd Quadrant";
	else if(x<0 && y<0)
	cout<<"3rd Quadrant";
	else if(x>0 && y<0)
	cout<<"4th Quadrant";
	else if (x==0 && y!=0)
	cout<<"Its on y axis";
	else if(y==0 && x!=0)
	cout<<"Its on x axis";
	else 
	cout<<"Its on origin";
	
}
