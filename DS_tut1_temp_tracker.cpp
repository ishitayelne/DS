//Temperature Tracker
/*Write a program for tracking daily temperatures of 3 cities for a week.
The program calculates the average temperature for each day and for the week.*/
#include <iostream>
using namespace std;

int main (){
	int arr[3][7];
	int sum;
	for(int i=0; i<3; i++) {
		cout<<"Enter temperature for city " << i+1 << ": \n";
		for(int j=0; j<7; j++) {
			cin>>arr[i][j];
		}
	}
  
	cout<<"Tabular representation of city's temperature in the week and its average: \n";
	cout<<"\tMon\tTue\tWed\tThurs\tFri\tSat\tSun\tAVG\n";
  
	for(int i=0; i<3; i++) {
		cout << "City " << i+1 << "\t";
		sum = 0;
		for(int j=0; j<7; j++) {
			cout << arr[i][j]<<"\t";
			sum += arr[i][j];
		}
		cout<<sum/7;
		cout<<"\n";
	}
	return 0;
}
