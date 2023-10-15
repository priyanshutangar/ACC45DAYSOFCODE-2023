#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(0);
cin.tie(0);

string s, l;
int t;
cin >> t;

while(t--) {
    cin >> s;
    l = s;
    next_permutation(s.begin(), s.end());
    if(s <= l) {
        cout << "no answer" << "\n";
    }
    else {
        cout << s << "\n";
    }
}


}
