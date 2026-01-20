//A data processing script needs to separate numbers.
#include <iostream>

using namespace std;
int main(){
	int number;
	cout<<"Enter an integer:"<<endl;
	cin>>number;
	if(number%2==0) {
		cout<<"Even"<<endl;
	}
	else{
		cout<<"Odd"<<endl;
	}
		
	return 0;
}
