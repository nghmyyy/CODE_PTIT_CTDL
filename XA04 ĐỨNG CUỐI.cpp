#include<bits/stdc++.h>
using namespace std;
int n, ok, a[10];
vector<string> v;
string str;
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
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}
int main(){
    cin >> n;
    set<string> se;
    for(int i = 1; i <= n; i++){
        string s; cin >> s;
        se.insert(s);
    }
    cin >> str;
    for(auto it : se){
        if(it != str) v.push_back(it); 
    }
    n = v.size();
    ktao();
    ok = 1;
    while(ok){
        	for(int i = 1; i <= n; i++){
        		cout << v[a[i]-1] <<" ";
        	}
        	cout << str;
        	cout << endl;
        sinh();
    }
}