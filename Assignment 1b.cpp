//A data processing script needs to separate numbers.
// Ternary 
#include <iostream>
#include <string>
using namespace std;
int main(){
	int number;
	cout<<"Enter an integer:"<<endl;
	cin>>number;
	string result = (number%2==0) ?"Even" : "Odd" ;
	cout<<result<<endl;
		
	return 0;
}
