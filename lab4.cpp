#include <iostream>
#include <cmath>
#include <limits> 
#include <FLOAT.H>
using namespace std;

float findexp(int x1, int y1, int x2, int y2, int x3, int y3){
	float length1 = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	float length2 = sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	float length3 = sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	
	float squareTriangle = 0.5*((x3-x1)*(y2-y1)-(y3-y1)*(x2-x1));
	float radius = (length1*length2*length3)/(4*squareTriangle);
	float squareCircle = 3.14*pow(radius,2);
	
	float exp = squareCircle - squareTriangle;
	return exp;
}

int main(){
	int points,l;
	double timeVar;
	double min=FLT_MAX;
	int mass[3][2];
	cout<<"Points=";
	cin>>points;	
	
	int** array = new int*[points];
	for(int i=0; i<points; i++){
		array[i] = new int[2];
	}
	
	for(int i=0; i<points; i++)
		for(int j=0; j<2; j++)
			cin>>array[i][j];
	for(int i=0; i<points; i++)
		for(int j=i+1;j<points; j++)
			for(int k=j+1; k<points; k++){
				timeVar=findexp(array[i][0],array[i][1],array[j][0],array[j][1],array[k][0],array[k][1]);
				if(timeVar<min){
					min=timeVar;
					for(int n=0; n<2; n++){
						mass[0][n]=array[i][n];
						mass[1][n]=array[j][n];
						mass[2][n]=array[k][n];
					}			
				}
			}
	cout<<"min raznost = "<<min<<endl;
	
	for(int i=0; i<3; i++){
		cout<<i+1<<":"<<endl<<"coord (X Y):";
		for(int j=0; j<2; j++)
			cout<<mass[i][j]<<" ";
		cout<<endl;
	}
	
	delete [] array;
	return 0;
}
