#include<bits/stdc++.h>
using namespace std;
int n, k, ok;
int a[16];
void ktao(){
    for(int i = 1; i <= n; i++){
        cin >> a[i];
   }
}
void sinh(){
    int i = n - 1;
   int min = a[n];
   while(i >= 1 && a[i]>a[i+1]){
        i--;
   }
   if(i==0) ok = 0;
   else{
        int j = n;
        while(a[i]>a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i +1, a+n+1);
   } 
}
int main(){
    cin >> n;
    ktao();
    ok = 1;
    sort(a + 1, a + n + 1);
    while(ok == 1){
        for(int i = 1; i <= n;i++){
            cout << a[i] <<" ";
        }
        cout << endl;
        sinh();
    }
}