#include<iostream>
using namespace std;

int main(){
	char firstName[50];
	char lastName[50];
	int age;
	char grade;
	
	cout<<"First name=";
	cin.getline(firstName,50);
	cout<<"Last name=";
	cin.getline(lastName,50);
	cout<<"Grade=";
	cin>>grade;
	grade++;
	cout<<"Age=";
	cin>>age;
	
	cout<<"Name: "<<lastName<<", "<<firstName<<endl;
	cout<<"Grade: "<<grade<<endl;
	cout<<"Age: "<<age<<endl;
	
	return 0;
}
