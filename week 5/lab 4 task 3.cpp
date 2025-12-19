#include<iostream>
using namespace std;
int main(){
	double balance;
	int isloyal;
	cout<<"enter account balance:";
	cin>>balance;
	cout<<"are you a loyal customer? (1== yes, 0== no):";
	cin>>isloyal;
	string accounttype =(balance< 100)? "low balance account":(balance < 500) ?"standard account":"premium account";
	string offer = (balance > 200 && isLoyal == 1) ? "eligible for special offer":"Not eligible for special offer";
	cout<< "\nAccount type: "<<accounttype << endl;
	cout<<"special offer status: "<<offer<<endl;
	return 0;
}
