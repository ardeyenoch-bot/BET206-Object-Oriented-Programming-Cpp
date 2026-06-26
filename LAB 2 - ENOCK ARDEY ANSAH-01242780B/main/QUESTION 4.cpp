#include <iostReam>
using namespace std;

int main(){
	int rating;
	
	cout<<"1. 5 A Fuse"<<endl;
	cout<<"2. 10 A Fuse"<<endl;
	cout<<"3. 13 A Fuse"<<endl;
	cout<<"4. 20 A Fuse"<<endl;
	cout<<"5. 32 A Fuse"<<endl;
	cout<<endl;
	
	cout<<"Enter your fuse rating: ";
	cin >>rating;
	
	switch(rating){
		case 1 :
			cout<<"5 A Fuse is suitable for lightning systems and small lamps.";
			break;
			case 2 :
				cout<<"10 A Fuse is recommended for low power household appliances.";
				break;
				case 3 :
					cout<<"13 A Fuse is used for general-purpose socket outlets.";
					break;
					case 4 :
						cout<<"20 A Fuse is appropriate for devices with higher power consumptions, such as water heaters.";
						break;
						cout<<"32 A Fuse is designed for heavy duty equipment like electric cookers and large appliances.";
						break;
						default :
							cout<<"Invalid choice. Please try again"; 
	}
	return 0;
}
