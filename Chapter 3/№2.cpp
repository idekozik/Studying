#include <iostream>
using namespace std;

int main(){
	
	int fGrowth=0;
	int inGrowth=0;
	float mGrowth=0;
	int fWeight=0;
	float kgWeight=0;
	float bmi = 0;
	
	const float fToM = 0.0254;
	const float fToKg = 2.2;
	
	cout<<"Growth in futs=";
	cin>>fGrowth;
	cout<<"Growth in inches=";
	cin>>inGrowth;
	cout<<"dWeight in futs=";
	cin>>fWeight;
	
	inGrowth=fGrowth*12+inGrowth;
	mGrowth=inGrowth*fToM;
	kgWeight=fWeight/fToKg;
	bmi=kgWeight/(mGrowth*mGrowth);
	
	cout<<"You'r BMI is "<<bmi<<endl;
	
	return 0;
}
