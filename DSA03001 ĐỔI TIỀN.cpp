#include<bits/stdc++.h>
using namespace std;
int doitien(long long n){
    int cnt = 0;
    while(n > 0){
        while(n >= 1000){
            cnt++;
            n -= 1000;
        }
        while(n >= 500 && n < 1000){
            cnt++;
            n -= 500;
        }
        while(n >= 200 && n < 500){
            cnt++;
            n -= 200;
        }
        while(n >= 100 && n < 200){
            cnt++;
            n -= 100;
        }
        while(n >= 50 && n < 100){
            cnt++;
            n -= 50;
        }
        while(n >= 20 && n <50){
            cnt++;
            n -= 20;
        }while(n >= 10 && n <20){
            cnt++;
            n -= 10;
        }while(n >= 5 && n <10){
            cnt++;
            n -= 5;
        }while(n >= 2 && n < 5){
            cnt++;
            n -= 2;
        }while(n >= 1 && n < 2){
            cnt++;
            n -= 1;
        }
    }
    return cnt;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << doitien(n) << endl;
    }
}