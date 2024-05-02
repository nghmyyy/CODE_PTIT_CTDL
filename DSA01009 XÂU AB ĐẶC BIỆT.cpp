#include<bits/stdc++.h>
using namespace std;
int n, k, ok;
char a[16];
void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = 'A';
    }
}
void sinh(){
    int i = n ;
    while(i >= 0 && a[i] == 'B'){
        a[i] = 'A';
        i--;
    }
    if(i==0) ok = 0;
    else{
        a[i] = 'B';
    }
}
void count(){
    ktao();
    int dem = 0;
    ok = 1;
    int dem1 , dem2;
    while(ok){
        dem2 = 0;
        for(int i = 1; i <= n - k + 1;i++){
            dem1 = 0;
            if((a[i-1] == 'B' && a[i + k] == 'B') || (i == 1 && a[i + k] == 'B') ||(a[n - k] == 'B' && i == n - k + 1) ){
                for(int j = i; j <= i + k - 1; j++){
                    if(a[j]!='A') {
                        dem1++;
                        break;
                    }
                }
                if(dem1==0) dem2++;
            }
            if(dem2 > 1) break;
        }
        if(dem2 == 1) {
            dem++;
        }
        sinh();
    }
    cout << dem << endl;
}
int main(){
    cin >> n >> k;
    ok = 1;
    count();
    int dem1, dem2;
    ok = 1;
    ktao();
    while(ok){
        dem2 = 0;
        for(int i = 1; i <= n - k + 1;i++){
            dem1 = 0;
            if((a[i-1] == 'B' && a[i + k] == 'B') || (i == 1 && a[i + k] == 'B') ||(a[n - k] == 'B' && i == n - k + 1) ){
                for(int j = i; j <= i + k - 1; j++){
                    if(a[j]!='A') {
                        dem1++;
                        break;
                    }
                }
                if(dem1==0) dem2++;
            }
            if(dem2 > 1) break;
        }
        if(dem2 == 1) {
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout <<endl;
        }
        sinh();
    }
}