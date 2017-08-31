#include <iostream>
using namespace std;

int main() {
            int d,y,w,i;
            cout<<" Enter the number of days ";
            cin>>d;
            y=d/365;
            i=d%365;
            w=i/7;
            i=i%7;
            d=i;
            cout<<"\n"<<y<<"years "<<w<<"weeks "<<d<<"days";
	return 0;
}
