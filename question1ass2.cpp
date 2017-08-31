#include <iostream>
using namespace std;

int main() {
	float cm,l,m;
    cout<<"Enter the length in centimeters ";
    cin>>cm;
    m=cm/100;
    l=cm/100000;
    cout<<"\n The length is "<<l<<" kilometers and "<<m<<" meters";
	return 0;
}
