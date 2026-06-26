#include <iostream>
using namespace std;

int main(){
	int input;
	double value,result;
	
	cout<<"1. Convert volt to millivolts"<<endl;
	cout<<"2. Convert amperes to milliamperes"<<endl;
	cout<<"3. Convert kilowatts to watts"<<endl;
	cout<<"4. Convert ohms to kilo-ohms"<<endl;
	cout<<endl;
	
	cout<<"Enter choice: ";
	cin>>input;
	cout<<endl;
	
	
	
	switch(input){
		case 1:
			cout<<"Enter value: ";
	cin>>value;
			result=value*1000;
			cout<<value<<" V = "<<result<<" in mV";
			break;
			case 2:
				cout<<"Enter value: ";
	cin>>value;
				result=value*1000;
				cout<<value<<" A = "<<result<<" in mA";
				break;
				case 3:
					cout<<"Enter value: ";
	cin>>value;
					result=value*1000;
					cout<<value<<" W = "<<result<<" in W";
					break;
					case 4:
						cout<<"Enter value: ";
	cin>>value;
						result=value/1000;
						cout<<value<<" O = "<<result<<" in kO";
						break;
						default:
							cout<<"Invalid choice";
							
	}
	return 0;
}
