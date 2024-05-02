#include<bits/stdc++.h>
using namespace std;
int n, w;
int f, c[100], a[100], b, ok;
int x[100], fopt = -10e7, xopt[100];
void ktao(){
    for(int i = 1; i <= n; i++){
        x[i] = 0;
    }
}
void ki_luc(){
    if(f > fopt && b >= 0) {
        fopt = f;
        for(int i = 1; i <= n; i++){
            xopt[i] = x[i];
        }
    }

}
void sinh(){
    int i = n;
    while(i > 0 && x[i] == 1){
        x[i]= 0;
        i--;
    }
    if(i==0) ok = 0;
    else{
        x[i] = 1;
    }
    f = 0;
    b = w;
    for (int j = 1; j <= n; j++)
    {
        f += c[j]*x[j];
        b -= a[j]*x[j];
    }
    ki_luc();
}
int main(){
    cin >> n >> w;
    for(int i = 1; i <= n; i++){
        cin >> c[i];
    }
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    ok = 1;
    ktao();
    while(ok){
        sinh();
    }
    cout << fopt << endl;
    for(int j = 1; j <= n; j++){
        cout << xopt[j] <<" "; 
    }
}