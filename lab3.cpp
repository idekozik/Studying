#include<iostream>
using namespace std;

int main(){
	int nstr,nstb,numberOfNotNullStb;
	cout<<"Matrix MxN:";
	cin>>nstr>>nstb;
	int* sumArray = new int[nstr];
	int** array = new int*[nstb];
	for(int i=0; i<nstb; i++)
		array[i] = new int [nstr];
	
	for(int i=0; i<nstr; i++){
		sumArray[i]=0;
	}
		
	for(int i=0; i<nstb; i++)
		for(int j=0; j<nstr; j++){
			cin>>array[i][j];
			if(j%2==0 && array[i][j]>0) sumArray[i] += array[i][j];
		}
	for(int i=0; i<nstb; i++){
		for(int j=0; j<nstr; j++)
			cout<<array[i][j]<<" ";
		cout<<" "<<sumArray[i]<<endl;
	}
	for(int j=0; j<nstr; j++)
	{
		int schet;
		for(int i=0; i<nstb; i++){
			if(array[i][j]!=0) schet++;
			if(schet==nstr) numberOfNotNullStb++;
		}
		schet=0;
	}
	cout<<"Numbers not NULL stb:"<<numberOfNotNullStb<<endl;
	
	int temp;
	int* tempStb;
	for (int i=0; i<nstr-1; i++){
    		for (int j=0; j<nstr-i-1; j++){
        		if (sumArray[j]<sumArray[j+1]){
                		temp=sumArray[j];
                		sumArray[j]=sumArray[j+1];
                		sumArray[j+1]=temp;
                
                		tempStb=array[j];
				array[j]=array[j+1];
				array[j+1]=tempStb;      
			}
       		}
    	}
    
    	for(int i=0; i<nstb; i++){
		for(int j=0; j<nstr; j++)
			cout<<array[i][j];
		cout<<" "<<sumArray[i]<<" "<<endl;
	}
	
	delete [] array;
	delete [] sumArray;
	return 0;
}
