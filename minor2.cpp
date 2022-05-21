#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	
	float pur_p,mon_ir,ann_ir,tperiod,dpay,total_n_pay,mon_pay,am_bor;
	cout<<"enter(10000 100 7 12) the purchase price,downpayment,annual_ir and total no of pay";
	
	cin>>pur_p>>dpay>>ann_ir>>total_n_pay;
	am_bor = pur_p - dpay; //amount borrowed
	mon_ir = ann_ir/12.0;
	mon_ir/=100;
	cout<<mon_ir<<" "<<1.0-pow((1+mon_ir),-total_n_pay);
	mon_pay = mon_ir*am_bor/(1-pow((1+mon_ir),-total_n_pay));
	cout<<"the amount borrowed:"<< am_bor;
	cout<<"\nthe monthly payment:"<<mon_pay;
	
	
}
