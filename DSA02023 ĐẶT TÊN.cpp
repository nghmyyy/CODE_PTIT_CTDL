#include<bits/stdc++.h>
using namespace std;
int n, k, ok, a[30];
vector<string> v;
void nhap(){
    cin >> n >> k;
    set<string> se;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        se.insert(s);
    }
    for(auto it : se){
        v.push_back(it);
    }
    n = v.size();
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}
void sinh(){
    int i = k;
    while(i > 0 && a[i] >= n - k + i) i--;
    if(i==0) ok = 0;
    else{
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
    }
}
int main(){
    ok = 1;
    nhap();
    while(ok){
        for(int i = 1; i <= k; i++ ){
            cout << v[a[i]-1] <<" ";
        }
        sinh();
        cout << endl;
    }
}