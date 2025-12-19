#include<iostream>
using namespace std;
int main(){
	char signalcolour;
	cout<<"Enter the signal colour (R for red means stop)(G for green means go)(Y for yellow means slowdown)";
	cin>>signalcolour;
	if (signalcolour=='R' || signalcolour=='r'){
		cout<<"stop"<<endl;
	}
	if (signalcolour=='G' || signalcolour=='g'){
		cout<<"Go"<<endl;
	}
	if (signalcolour=='Y' || signalcolour=='y'){
		cout<<"slowdown"<<endl;
	}
	return 0;
}
