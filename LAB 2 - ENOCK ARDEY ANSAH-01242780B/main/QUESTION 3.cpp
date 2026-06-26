#include <iostream>
using namespace std;

int main(){
	int starting_current,rated_current;
	
	cout<<"Type the starting current: ";
	cin>>starting_current;
	
	cout<<"Type the rated current: ";
	cin>>rated_current;
	
	if(starting_current > 3*rated_current){
		cout<<"High starting current.Use proper motor starter.";
	}
	else{
		cout<<"Starting current is acceptable";
		
	}
	}

