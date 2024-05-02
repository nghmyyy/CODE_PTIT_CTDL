#include<bits/stdc++.h>
using namespace std;
int n, a[1000], ok;
string s;
void ktao(){
    for(int i = 0; i < s.length(); i++){
        a[i] = s[i] - '0';
    }
}
void sinh(){
    int i = s.length() - 1;
    while( i >= 0 && a[i] == 0){
        a[i] = 1;
        i--;
    }
    if(i < 0) ok = 0;
    else{
        a[i] = 0;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> s;
        ktao();
        sinh();
        for(int i = 0 ; i < s.length(); i++){
            cout << a[i];
        }
        cout << endl;
    }
}