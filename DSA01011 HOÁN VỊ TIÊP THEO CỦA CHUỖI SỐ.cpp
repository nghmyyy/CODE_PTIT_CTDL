#include<bits/stdc++.h>
using namespace std;
string s;
int ok;
void ktao(){
    cin >> s;
}
void sinh(){
    int i = s.length() - 2;
    while( i >= 0 && s[i] >= s[i+1]){
        i--;
    }
    if(i < 0) cout << "BIGGEST";
    else{
        int j = s.length() - 1;
        while(s[i] >= s[j]) j--;
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
        cout << s;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> ok;
        ktao();
        cout << ok <<" ";
        sinh();
        cout << endl;
    }
}