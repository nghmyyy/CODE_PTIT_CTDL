#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[101], b[101];
    int check = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        b[i] = a[i];
    }
    sort(b, b + n);
    int cnt = 1, i = 0;
    while(i < n-1){
        cout << "Buoc " << cnt <<": ";
        int k=i, min = a[i];
        for(int j = i + 1; j < n; j++){
            if(min > a[j]){
                min = a[j];
                k = j;
            }
        }
        if(k != i) swap(a[i], a[k]);
        for(int j = 0; j < n; j++){
            cout << a[j] <<" ";
        }
        cout << endl;
        int ck = 0;
        for(int j = 0; j < n; j++){
            if(a[j] != b[j]){
                ck = 1;
                break;
            }
        }
        if(ck == 0){
            check = 1;
        }
        i++;
        cnt++;
    }
}