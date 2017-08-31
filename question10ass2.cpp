#include <iostream>
using namespace std;

int main() {
            double a,b,c,d,e,f,g,h,i;
            cout<<"Enter the marks of subject1 ";
            cin>>a;
          cout<<"\nEnter the marks of subject2 ";
            cin>>b;
          cout<<"\nEnter the marks of subject3 ";
            cin>>c;
          cout<<"\nEnter the marks of subject4 ";
            cin>>d;
          cout<<"\nEnter the marks of subject5 ";
            cin>>e;
            cout<<"\nEnter total maximum marks ";
            cin>>i;
            f=a+b+c+d+e;
            g=f/5;
            h=f/i*100;
            cout<<"\nThe total marks are "<<f<<" The average is "<<g<<" the percentage is "<<h;
            
	return 0;
}
