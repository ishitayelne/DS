//Rainfall Tracking
/*Write a program to track rainfall data for 3 cities over 4 months.
Using a 2D array, we can store the data, calculate the average rainfall for each city, and display the rainfall data in a tabular format.*/
#include <iostream>
using namespace std;

int main (){
	int arr[3][4];
	int sum;
	for(int i=0; i<3; i++) {
		cout<<"Enter rainfall for city " << i+1 << ": ";
		for(int j=0; j<4; j++) {
			cin>>arr[i][j];
		}
	}
  
	cout<<"Tabular representation of rainfall in the five cities and its average: \n";
	cout<<"\tM1\tM2\tM3\tM4\tAVG\n";
  
	for(int i=0; i<3; i++) {
		cout << "City " << i+1 << "\t";
		sum = 0;
		for(int j=0; j<4; j++) {
			cout << arr[i][j]<<"\t";
			sum += arr[i][j];
		}
		cout<<sum/4;
		cout<<"\n";
	}
	return 0;
}
