#include <iostream>
using namespace std;

int main (){
	int temp;
	
	cout<<"Type in the temperature value: ";
	cin>>temp;
	
	while (temp<=90){
		
		cout <<"Type in the temperature value : ";
		cin>>temp;
	}
		cout<<"Motor temperature unsafe. Stop motor test."; 
		return 0;
	
}
