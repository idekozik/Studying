#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
	char button;
	char words[1000];
	int schetWords=0;
	int sStrings=0;
	char string[70];
	ifstream file("text.dat");
	while (!file.eof()){
		file.getline(string, 70);
		sStrings++;
	}
	char** text = new char*[sStrings];
	for(int i=0; i<sStrings; i++)
		text[i]= new char[70];
	file.seekg(0);
	for(int i=0; i<sStrings; i++){
		file.getline(text[i],70);
	}
	for(int i=0; i<sStrings; i++)
		cout<<text[i]<<endl;
	for(int i=0; i<sStrings; i++){
		for(int j=0;j<strlen(text[i]);j++){
			if((text[i][j]!=' ' && text[i][j+1]==' ') || (text[i][j]!=' ' && text[i][j+1]=='\0')) schetWords++;		
		}
	}
	cout<<"Kol-vo slov: "<<schetWords<<endl;
	int s1=0;
	while(s1<sStrings+1)
	for(int i=0; i<sStrings; i++)
		for(int j=0;j<strlen(text[i])+1;j++){
			if(text[i][j]=='\0') words[s1]=' ';
			else words[s1]=text[i][j];
			s1++;
		}
	s1=0;
	while(s1<strlen(words)-2){
		cout<<endl;
		cout<<"Press d for selection word: ";
		cin>>button;
		if(button=='d'){
			while(words[s1]!=' '){
				cout<<words[s1];
				s1++;
			}
		s1++;
		cout<<endl;
		}
	}
	system("Pause");
	return 0;
}
