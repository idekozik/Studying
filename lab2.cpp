#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int size,modMin,modMax,sum,minI=0,maxI=0,comp=1;
	cout<<"size=";
	cin>>size;
	int* array = new int[size];
	cin>>array[0];
	modMin=abs(array[0]);
	modMax=abs(array[0]);
	if(array[0]>0)sum+=array[0];
	
	for(int i=1; i<size; i++){
		cin>>array[i];
		if(array[i]>0)sum+=array[i];
		if(abs(array[i])>modMax){
			modMax=abs(array[i]);
			maxI=i;
		}
		if(abs(array[i])<modMin){
			modMin=abs(array[i]);
			minI=i;
		}
	}
	
	//cout<<"min"<<min(minI,maxI)<<endl;
	//cout<<"max"<<max(minI,maxI)<<endl;
	
	for(int i=min(minI,maxI)+1; i<max(minI,maxI); ++i){
		comp*=array[i];
	}
	cout<<"sum="<<sum<<endl;
	cout<<"comp="<<comp<<endl;
	
	int temp;								
  	for (int i=0; i<size-1; i++){
        for (int j=0; j<size-i-1; j++){
            if (array[j]<array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    for(int i=0; i<size; i++){
    	cout<<i<<" = "<<array[i]<<endl;
	}
	
	delete [] array;	
	//system("PAUSE");
	return 0;
}
