#include<bits/stdc++.h>
using namespace std;
int n, ok;
char a[100];
string s;
void ktao(){
    for(int i = 0; i < n;i++){
        a[i] ='A';
    }
}
void sinh(){
    int i = n-1;
    while(i>=0 && a[i] == 'B'){
        a[i] = 'A';
        i--;
    }
    if(i<0) ok = 0;
    else{
        a[i] = 'B';
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        ok = 1;
        cin >> n;
        ktao();
        while(ok){
            for(int i = 0; i < n; i++){
                cout << a[i];
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}