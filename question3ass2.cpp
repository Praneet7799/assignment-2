#include <iostream>
using namespace std;

int main() {
	float f,c;
	cout<<"Enter the value of temperature in fahrenheit ";
	cin>>f;
	c=5*(f-32)/9;
	cout<<"\n The temperature in celsius is "<<c;
	return 0;
}
