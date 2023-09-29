//pattern
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    char k= 'A';
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<k<<" ";
            j=j+1;
            k=k+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}
