#include<bits/stdc++.h>
using namespace std;
int n, a[16], ok;
void ktao(){
    a[1] = 8;
    for(int i = 2; i <= n; i++){
        a[i] = 6;
    }
}
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 8){
        a[i] = 6;
        i--;
    }
    if(i==0) ok = 0;
    else{
        a[i] = 8;
    }
}
int check(){
    if(a[1] != 8 || a[n] != 6) return 0;
    else{
        int ck1 = 0, ck2 = 0;
        for(int i = 1; i <= n - 1; i++){
            if(a[i] == 8 && a[i+1] == 8){
                ck1++;
                return 0;
                break;
            }
        }
        if(ck1==0){
            for(int i = 1; i <= n - 1; i++){
                if(a[i]==6 && a[i+1]==6 && a[i+2]==6 && a[i+3]==6){
                    ck2++;
                    return 0;
                    break;
                }
            }
            if(ck2==0) return 1;
        }
    }
}
int main(){
    cin >> n;
    ok = 1;
    ktao();
    while(ok){
        if(check()==1){
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << endl;
        }
        sinh();
    }
}