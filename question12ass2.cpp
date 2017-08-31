#include <iostream>
#include <cmath>
using namespace std;

int main() {
            double p,t,r,ci;
            cout<<"Enter the values of Principle,Time and rate respectively ";
            cin>>p>>t>>r;
         ci=pow(p+p*r/100,t);
            cout<<"\nThe compound interest is "<<ci-p;
            cout<<"\nThe total amount is "<<ci;
          
            
	return 0;
}
