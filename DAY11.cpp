//CODESTUD
#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	    string s;
	    cin>>s;
	    int count=0;
	    for(int i=0; i<s.length(); i++)
	    {
	        if(s[i]=='<' and s[i+1]=='>')
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
