#include<bits/stdc++.h>
using namespace std;
int n, a[100], ok;
void ktao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void dx(){
    int check = 1;
    
        for(int i = 1; i <= n/2; i++){
            if(a[i] != a[n-i+1]){
                check = 0;
                break;
            }
        }
    
    if(check == 1){
        for(int i = 1; i <= n; i++){
            cout << a[i] <<" ";
        }
        cout << endl;
    }
}
void sinh(){
    dx();
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if(i == 0){ok = 0;}
    else{
        a[i] = 1;
    }
}

int main(){
    cin >> n;
    ok = 1;
    ktao();
    while(ok){
        
        sinh();
    }
}