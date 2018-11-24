#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

struct scan_info{
	char model[25];
	int price;
	double x_size;
	double y_size;
	int optr;
	int grey;
};

void inFile(int tSize,scan_info* tArray){
	ofstream file("save.bin", ios::binary | ios_base::trunc);
	file.write((char*)&tSize,sizeof(tSize));
	for(int i=0; i<tSize; i++)
		file.write((char*)&tArray[i],sizeof(tArray[i]));
	file.close();
	delete [] tArray;
}

void sortFile(char tSort){
	int tSize;
	ifstream file("save.bin", ios::binary);
	file.read((char*)&tSize,sizeof(int));
	scan_info* tArray = new scan_info[tSize];
	for(int i=0;i<tSize;i++){
		file.read((char*)&tArray[i],sizeof(tArray[i]));
	}
	file.close();
	scan_info tVar;
	for(int i=0;i<tSize-1;i++)
		for(int j=0; j<tSize-i-1; j++){
			if(tSort=='a'){
				if(tArray[j].price>tArray[j+1].price){
					tVar=tArray[j];
					tArray[j]=tArray[j+1];
					tArray[j+1]=tVar;
				}
			}
			if(tSort=='b'){
				if(tArray[j].grey>tArray[j+1].grey){
					tVar=tArray[j];
					tArray[j]=tArray[j+1];
					tArray[j+1]=tVar;
				}
			}
		}
		
	inFile(tSize,tArray);
	file.close();
	delete [] tArray;
}

int main(){
	int size;
	char sort;
	cout<<"size="; cin>>size;
	cin.get();
	scan_info* array = new scan_info[size];
	for(int i=0; i<size; i++){
		cout<<"name="; 		cin.getline(array[i].model,25);
		cout<<"prize="; 	cin>>array[i].price;
		cout<<"x_size="; 	cin>>array[i].x_size;
		cout<<"y_size="; 	cin>>array[i].y_size;
		cout<<"optr="; 		cin>>array[i].optr;
		cout<<"gray="; 		cin>>array[i].grey;
		cin.get();
	}
	inFile(size,array);
	cout<<"Parametr sortirovki ('a'=price, 'b'=grey): ";
	cin>>sort;	
	sortFile(sort);
	delete [] array;
	return 0;
}
