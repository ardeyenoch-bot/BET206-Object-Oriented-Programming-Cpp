#include <iostream>
using namespace std;

int main(){
	float factor;
	
	cout<<"Enter the power factor: ";
	cin>>factor;
	
	if(factor>1 || factor<0){
		cout<<"Invalid power factor";
	}
	else if(factor <= 0.5){
		cout<<"Poor power factor";
	}
	else if(factor>=0.51 && factor <= 0.80){
		cout<<"Fair power factor";
	} 
	else if(factor>=0.81 && factor <=0.95){
		cout<<"Good power factor";
	}
	else{
		cout<<"Excellent power factor";
	}
}
