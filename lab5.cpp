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
	STUDENT timeVar;
	STUDENT array[10];
	for (int i = 0; i < 10; i++) {
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

	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9 - i; j++)
			if (array[j].averageUsp > array[j+1].averageUsp) {
				timeVar = array[j];
				array[j] = array[j + 1];
				array[j + 1] = timeVar;
			}
	for (int i = 0; i < 10; i++) {
		cout << "Name: " << array[i].firstName;
		cout << " average bal:" << array[i].averageUsp<<endl;
		for (int j = 0; j < 5; j++)
			if (array[i].usp[j]>3) array[i].schet++;
	}

	for (int i = 0; i < 10; i++) {
		int j = 0;
		if (array[i].schet == 5) {
			cout << "Student without balls < 3 : " << array[i].firstName<<endl;
			cout << "Group name: " << array[i].groupNumber<<endl;
			j++;
		}
		if (j == 0) cout << "No one have balls > 3";
	}
	system("PAUSE");
    return 0;
}

