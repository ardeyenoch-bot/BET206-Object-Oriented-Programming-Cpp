#include <iostream>
using namespace std;

int main(){
	int wattage,total_power=0;

for (int i =1;i <=12;i++){

cout<<"Enter the wattage: "<<i;
cin>>wattage;
total_power+=wattage;

cout<<"The total lightning load is = "<<total_power<<" W"<<endl;

}
return 0;
}
