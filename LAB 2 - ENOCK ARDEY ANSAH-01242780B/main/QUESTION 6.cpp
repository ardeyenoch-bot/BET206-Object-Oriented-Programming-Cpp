#include <iostream>
using namespace std;

int main(){
	int p_v,s_v,p_t,s_t,choice;
	double result;
	
	cout<<"1. Calculate turns raio"<<endl;
	cout<<"2. Calculate secondary voltage"<<endl;
	cout<<"3. Calculate primary voltage"<<endl;
	cout<<endl;
	
	cout<<"Enter your choice: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			cout<<"Enter the primary turns: ";
			cin>>p_t;
			cout<<"Enter the secondary turns: ";
			cin>>s_t;
			result = p_t/s_t;
			cout<<"Turns ratio = "<<result;
			break;
		
			
			case 2:
				cout<<"Enter primary voltage: ";
				cin>>s_v;
				cout<<"Enter secondary turns: ";
				cin>>s_t;
				cout<<"Enter primary turns: ";
				cin>>p_t;
				result=(p_v*s_t)/p_t;
				cout<<"Secondary voltage = "<<result;
				break;
				
				case 3:
					cout<<"Enter the secondary voltage: ";
					cin>>s_v;
					cout<<"Enter primary turns: ";
					cin>>p_t;
					cout<<"Enter secondary turns: ";
					cin>>s_t;
					result=(s_v*p_t)/s_t;
					cout<<"Primary voltage = "<<result;
					break;
					
					default:
						cout<<"Invalid selection";
				
				
			
	}
	return 0;
}
