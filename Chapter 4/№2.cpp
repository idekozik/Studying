#include<iostream>
#include<string>
using namespace std;

struct CandyBar{
	string name;
	double weight;
	int calories;
};


int main(){
	
	CandyBar snack;
	snack.name = "Moncha Munch";
	snack.weight = 2.3;
	snack.calories = 350;
	
	cout<<"Name "<<snack.name<<" Weight= "<<snack.weight<<" Calories= "<<snack.calories<<endl;
	
	return 0;
}
