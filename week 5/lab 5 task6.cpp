#include<iostream>
using namespace std;
int main(){
	int atmsimulator;
	double balance,withdrawlamount;
	cout<<"Enter your balance : $";
	cin>>balance;
	cout<<"Enter withdrawlamount:$";
	cin>>withdrawlamount;
	if (withdrawlamount<=balance){
	double remainingbalance=balance-withdrawlamount;
	cout<<"withdrawl succesful. remaining balance:$"<<remainingbalance<<endl;	
	}
	else{
		cout<<"insufficient balance."<<endl;
	}
	return 0;
}
