#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[1001], cnt[1001];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if(cnt[a[i]] != 0) {
            cout << a[i] << " ";
            cnt[a[i]]=0;
        }
    }
}