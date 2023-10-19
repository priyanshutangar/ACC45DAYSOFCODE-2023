#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'extraLongFactorials' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void extraLongFactorials(int n) {
    temp = 0; 
for(i=1;i<=n;i++)
{
    for(j=0;j<m;j++)
    {
        x = a[j]*i+temp; 
        a[j]=x%10; 
        temp = x/10; 
    }
    while(temp>0) 
    { 
        a[m]=temp%10;
        temp = temp/10;
        m++; 
    }
}
for(i=m-1;i>=0;i--)
    printf("%d",a[i]);
return 0;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    extraLongFactorials(n);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
