#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n; cin >> n;
    int a[100], b[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    int cnt = 1;
    sort(b, b + n);
    for(int i =  0; i < n - 1 ; i++){
        int check = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                check++;
            }
        }
        if(check == 0) break;
        else{
            cout <<"Buoc "<< cnt <<": ";
            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
            cnt++;
            cout << endl;
        }
    }
    
}