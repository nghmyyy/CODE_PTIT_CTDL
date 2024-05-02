#include<bits/stdc++.h>
using namespace std;
int n, ok;
char a[100];
void ktao(){
    for(int i = 0; i < n;i++){
        a[i] = 'A';
    }
}
void sinh(){
    int i = n - 1;
    while(i >= 0 && a[i] == 'H' ){
        a[i] = 'A';
        i--;
    }
    if(i<0){
        ok = 0;
    }
    else{
        a[i] = 'H';
    }
}
int check(){
    int ck = 0;
    if(a[0] !='H' || a[n-1] !='A'){
        return 0;
    }
    else{
        for(int i = 0; i <= n - 2; i++){
            if(a[i] == 'H' && a[i+1] == 'H'){
                return 0;
                break;
            }
        }
    }
    return 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        ok = 1;
        ktao();
        while(ok){
            if(check()==1){
                for(int i = 0; i < n; i++){
                    cout << a[i];
                }
                cout << endl;
            }
            sinh();
        }
    }
}