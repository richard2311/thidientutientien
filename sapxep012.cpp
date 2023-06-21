#include<bits/stdc++.h>
using namespace std;

int main(){
	int t=0; cin >> t;
	for (int k=0;k <t; k++){
		int x, x0=0, x1=0, x2=0;
		cin >> x;
		for (int i=0; i<x; i++){
		   int t; cin >> t;
		   if(t==0 )
		      x0=x0+1;
		    else if (t==1)
		       x1=x1+1;
		    else
		       x2= x2+1;
	    }
		for (int i=0; i<x0; i++)
		   cout << 0 << ' ';
		for (int i=0; i<x1; i++)
		   cout <<1 << ' ';
		for (int i=0; i<x2; i++)
		   cout << 2 << ' ';
		cout << endl;
	}
}
