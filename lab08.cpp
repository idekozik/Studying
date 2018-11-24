#include<iostream>
using namespace std;

void checkNotNullStb(int element, int* tSchet, int* tNONNS, int tnstr){
	if(element != 0) (*tSchet)++;
	if((*tSchet)==tnstr){
		(*tNONNS)++;
	}
}

void sumElemMass(int element, int* tSumArray){
	if(element>0) (*tSumArray) += element;
}

void sortArray(int* tSumArray1, int* tSumArray2, int** tArray1, int** tArray2){
	int temp;
	int* tempStb;
	temp=(*tSumArray1);
    (*tSumArray1)=(*tSumArray2);
    (*tSumArray2)=temp;
    
    tempStb=(*tArray1);
	(*tArray1)=(*tArray2);
	(*tArray2)=tempStb;  
}

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
			if(j%2==0) sumElemMass(array[i][j],&sumArray[i]);
		}
	for(int i=0; i<nstb; i++){
		for(int j=0; j<nstr; j++)
			cout<<array[i][j]<<" ";
		cout<<" "<<sumArray[i]<<endl;
	}
	
	for(int j=0; j<nstr; j++)
	{
		int schet=0;
		for(int i=0; i<nstb; i++){
			checkNotNullStb(array[i][j],&schet,&numberOfNotNullStb,nstb);
		}
	}
	
	cout<<"Numbers not NULL stb:"<<numberOfNotNullStb<<endl;
	
	for (int i=0; i<nstr-1; i++){
    	for (int j=0; j<nstr-i-1; j++){
            if (sumArray[j]<sumArray[j+1]){
                sortArray(&sumArray[j],&sumArray[j+1],&array[j],&array[j+1]);   
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
