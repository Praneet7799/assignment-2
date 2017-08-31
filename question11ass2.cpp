#include <iostream>
using namespace std;

int main() {
            double p,t,r,si;
            cout<<"Enter the values of Principle,Time and rate respectively ";
            cin>>p>>t>>r;
           si=(p*t*r)/100;
           cout<<"\n The simple interest is "<<si;
           cout<<"\n The total money to be repayed is "<<p+si;
            
	return 0;
}
