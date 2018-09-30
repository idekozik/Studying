#include <iostream>
using namespace std;

int main(){
	float Skm;
	float Vliter;
	float cons;
	
	cout<<"km=";
	cin>>Skm;
	cout<<"Ob'em potrachennogo benzina=";
	cin>>Vliter;
	
	cons=Vliter/Skm*100;
	
	cout<<"You'r consumption of benzin on 100km = "<<cons<<endl;
	
	return 0;
}
