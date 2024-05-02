#include<bits/stdc++.h>
using namespace std;
int n, a[10], ok;
void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}
void sinh(){
    int i = n - 1;
    while(i >= 1 && a[i] > a[i+1]){
        i--;
    }
    if(i==0) ok = 0;
    else{
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        int b[10], count = 0;
        for(int i = 1; i <= n; i++){
            cin >> b[i];
        }
        ok = 1;
        ktao();
        while(ok){
            int check = 0;
            count++;
            for(int i = 1; i<=n;i++){
                if(a[i] != b[i]){
                    check++;
                    break;
                }
            }
            if(check==0) {
                cout << count << endl;
                break;
            }
            else{
                sinh();
            }
        }
    }
}