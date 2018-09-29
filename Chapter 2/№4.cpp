#include <iostream>
using namespace std;

int trans(int tCelsius){
	return tCelsius * 1.8 + 32;
}

int main(){
	int Celsius;
	cout<<"Please enter a Celsius value: ";
	cin>>Celsius;
	cout<<Celsius<<" degrees Celsius is "<<trans(Celsius)<<" degrees Fahrenheit"<<endl;
	return 0;
}
