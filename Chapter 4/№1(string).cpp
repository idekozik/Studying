#include<iostream>
#include<string>

using namespace std;

int main(){
	string firstName;
	string lastName;
	int age;
	char grade;
	
	cout<<"First name=";
	getline(cin,firstName);
	cout<<"Last name=";
	getline(cin,lastName);
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
