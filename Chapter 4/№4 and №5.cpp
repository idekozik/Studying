#include<iostream>
#include<string>
using namespace std;

struct bird{
	string name;
	double diameter;
	double weight;
};

int main(){
	int qBirds;
	cout<<"Skolko ptic byddem vvodit?= ";
	cin>>qBirds;
	cin.get();
	
	bird* birds = new bird[qBirds];
		
	for(int i=0; i<qBirds; i++){
		cout<<"Name= ";
		getline(cin,birds[i].name);
		cout<<"Diameter= ";
		cin>>birds[i].diameter;
		cout<<"Weight= ";
		cin>>birds[i].weight;
		cout<<endl;
		cin.get();
	}
	
	for(int i=0; i<qBirds; i++){
		cout<<i+1<<": Name "<<birds[i].name<<
		" Weight= "<<birds[i].weight<<" Diameter= "<<birds[i].diameter<<endl;
	}
	delete birds;
	return 0;
}
