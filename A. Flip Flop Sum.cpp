#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[i];
        for(int i = 1; i <= n; i++) cin >> a[i];
        int min = 10000;
        int ck1, ck2;
        for(int i = 1; i <= n - 1; i++){
            if(a[i]+a[i+1] < min) {
                min = a[i] + a[i+1];
                ck1 = i; ck2 = i + 1;
            }
        }
        if(ck1 == -1) ck1 = 1;
        else{ 
            ck1 = -1; 
        }
        if(ck2 == -1) ck2 = 1;
        else{ 
            ck2 = -1; 
        }
        int sum = 0;
        for(int i = 1; i <= n; i++) sum+=a[i];
        cout << sum << endl;
    }
}