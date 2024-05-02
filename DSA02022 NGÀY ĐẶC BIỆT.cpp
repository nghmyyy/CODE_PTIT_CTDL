#include<bits/stdc++.h>
using namespace std;
int n = 8, ok, a[100];
void nhap(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 2 ){
        a[i] = 0;
        i--;
    }
    if(i==0) ok = 0;
    else{
        a[i] = 2;
    }
}
bool check(){
    if((a[1]== 0 && a[2]==0) || (a[3]==0 && a[4]==0) || a[3]==2 || a[5] == 0){
        return false;
    }
    else{
        for(int i = 1; i <= n/2; i++){
            if(a[i] != a[n-i+1]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    ok = 1;
    nhap();
    set<string> se;
    string s;
    while(ok){
        s = "";
        if(check() == true) {
            for(int i = 1; i <= n; i++){
                if(i == 2 || i == 4){
                    s = s + to_string(a[i]) + "/";
                }
                else{
                    s=s + to_string(a[i]);
                }
            }
            se.insert(s);
        }
        sinh();
        
    }
    for(auto it : se){
        cout << it << endl;
    }
}