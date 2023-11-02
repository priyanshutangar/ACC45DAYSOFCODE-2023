#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	    int n,count=0 ;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	       for(int j=i+1;j<n;j++)
	       {
	           count++;
	       }
	    }
	    cout<<count*2<<endl;;
	}
	return 0;
}
