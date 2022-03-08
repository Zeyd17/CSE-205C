#include <iostream>
using namespace std;
int main(){
	float n;
	//asking user input
	cout<<"Enter Ritcher Scale number"<<endl;
	cin>>n;
	//checking the damage
	if(n<5.0)
	cout<<"little or no damage";
	else if(n>=5.0 && n<=5.5)
	cout<<"5 some damage";
	else if(n>=5.5 && n<=6.5)
	cout<<"Serious damage: walls may crack or fall";
	else if(n>=6.6 && n<=7.5)
	cout<<"Disaster: houses and buildings may collapse";
	else
	cout<<"Catastrophe: most buildings destroyed";
	
}
