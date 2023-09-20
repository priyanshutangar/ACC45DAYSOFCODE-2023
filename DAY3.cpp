//Work Smarter
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	    int l,v,b;
	    cin>>l>>v>>b;
	    int x=l/v;
	    int y=l/b;
	    if(l%v!=0)
	    {
	        x=x+1;
	    }
	    if(l%b!=0)
	    {
	        y=y+1;
	    }
	    if(x<=y)
	    {
	        cout<<-1<<endl;
	    }
	    else if(x>y+1)
	    {
	        cout<<x-(y+1)<<endl;;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}
