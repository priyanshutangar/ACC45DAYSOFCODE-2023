//Code
#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch<=65 and ch>=90)
    {
        cout<<"Upper Case";
    }
    else if(ch<=48 and ch>= 57)
    {
        cout<<"Numeric";
    }
    else{
        cout<<"Lower Case";
    }
    return 0;
}
