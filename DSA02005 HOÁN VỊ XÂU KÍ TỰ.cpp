#include<bits/stdc++.h>
using namespace std;
string s;
char x[10];
int a[10], ok;
void ktao(){
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        x[i+1] = s[i];
        a[i+1] = i + 1;
    }
}
void sinh(){
    int n = s.size();
    int i = n - 1;
    while(i >= 1 && a[i] > a[i+1]){
        i--;
    }
    if(i == 0) ok = 0;
    else{
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        swap(x[i], x[j]);
        reverse(a + i + 1, a + s.size() + 1);
        reverse(x + i + 1, x + s.size() + 1);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        ktao();
        ok = 1;
        while(ok){
            for(int i = 1; i <= s.size(); i++){
                cout << x[i];
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}