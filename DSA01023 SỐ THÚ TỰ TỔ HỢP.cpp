#include<bits/stdc++.h>
using namespace std;
int n, k, a[15], ok;
void ktao(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}
void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i==0) ok = 0;
    else{
        a[i]++;
        for(int j = i; j <= k ;j++){
            a[j+1]=a[j] + 1;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        int b[10];
        for(int i = 1; i <= k;i++){
            cin >> b[i];
        }
        ok = 1;
        ktao();
        int count = 0;
        while(ok){
            int check = 0;
            count++;
            for(int i = 1; i <= k;i++){
                if(a[i] != b[i]){
                    check++;
                    break;
                }
            }
            if(check == 0){
                cout << count << endl;
                break;
            }
            else{
                sinh();
            }
        }

    }
}