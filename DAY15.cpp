// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a;
    string s="happyrank";
    string t="happyhacker";
    if(s.size()>t.size())
    {
        a=s.size();
    }
    else
    {
        a=t.size();
    }
    for(int i=0;i<a;i++)
    {
        if(s[i]==t[i])
        {
            i++;
            s.erase(s[i]);
            s.erase(t[i]);
        }
    }
    cout<<s.size()<<" "<<t.size();
    return 0;
}
