#include<bits/stdc++.h>
using namespace std;
int n, k, a[16], ok;
void ktao(){
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
    
}
void sinh(){
    int i = k;
    while(i >= 1 && a[i] == n - k + i){
        i--;
    }
    if(i == 0) ok = 0;
    else{
        a[i]++;
        for(int j = i + 1 ; j <= k ; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}
int main(){
    cin >> n >> k;
    set<string> se;
    for(int i = 1; i <= n; i++){
        string x; cin >> x;
        se.insert(x);
    }
    vector<string> v;
    for(auto it : se){
        v.push_back(it);
    }
    n = v.size();
    ktao();
    ok = 1;
    while(ok){
        for(int i = 1; i <= k; i++){
            cout << v[a[i] - 1] << " ";
        }
        sinh();
        cout << endl;
    }
}