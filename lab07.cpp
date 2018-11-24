#include <iostream>
#include <cmath>
#include <string>
using namespace std;

struct STUDENT {
	string firstName;
	int groupNumber;
	int usp[5];
	float averageUsp=0;
	int schet;
};

int main()
{
	int size;
	int st=0;
	cout<<"Number of students: ";
	cin>>size;
	cin.get();
	
	STUDENT timeVar;
	STUDENT* array = new STUDENT[size];
	
	for (int i = 0; i < size; i++) {
		cout << "Last name:"; 
		getline(cin, array[i].firstName);
		cout << "Group number:";
		cin >> array[i].groupNumber;
		cout << "Enter 5 assessments: ";
		for (int j = 0; j < 5; j++) {
			cin >> array[i].usp[j];
			array[i].averageUsp += array[i].usp[j];
		}
		array[i].averageUsp = array[i].averageUsp / 5;
		cin.get();
	}

	for (int i = 0; i<size-1; i++)
		for (int j = 0; j<size-i-1; j++)
			if (array[j].averageUsp > array[j+1].averageUsp) {
				timeVar = array[j];
				array[j] = array[j+1];
				array[j+1] = timeVar;
			}
	for (int i = 0; i < size; i++) {
		cout << "Name: " << array[i].firstName;
		cout << " average bal:" << array[i].averageUsp<<endl;
		for (int j = 0; j < 5; j++)
			if (array[i].usp[j]>3) array[i].schet++;
	}
	cout<<endl;
	for (int i = 0; i < size; i++) {
		if (array[i].schet >= 5) {
			cout << "Student without balls < 3 : " <<endl<< array[i].firstName<<endl;
			cout << "Group name: " << array[i].groupNumber<<endl;
			st++;
		}
	}
	
	if (st == 0) cout << "No one have balls > 3"<<endl;
	system("PAUSE");
	delete [] array;
    return 0;
}

