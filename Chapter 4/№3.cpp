#include<iostream>
#include<string>
using namespace std;

struct CandyBar{
	string name;
	double weight;
	int calories;
};


int main(){
	
	CandyBar candybars[3];
	
	for(int i=0;i<3;i++){
		cout<<"Name= ";
		getline(cin,candybars[i].name);
		cout<<"Weight= ";
		cin>>candybars[i].weight;
		cout<<"Calories= ";
		cin>>candybars[i].calories;
		cin.get();
	}	
	for(int i=0; i<3; i++){
		cout<<i+1<<": Name "<<candybars[i].name<<
		" Weight= "<<candybars[i].weight<<" Calories= "<<candybars[i].calories<<endl;
	}
	
	return 0;
}
