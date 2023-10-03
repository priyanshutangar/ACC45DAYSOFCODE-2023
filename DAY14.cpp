#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	    int n;
	    cin>>n;
	    int b[n];
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    sort(b, b+n);
	    for(int i=1;i<n;i++)
	    {
	        sum=sum+b[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
