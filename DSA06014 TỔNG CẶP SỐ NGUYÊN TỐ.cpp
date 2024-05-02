#include<bits/stdc++.h>
using namespace std;
int checksnt(int n){
    if(n <= 1) return 0;
    for (int i = 2; i <= sqrt(n) ; i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int check = 0;
        for(int i = 2; i <= sqrt(n); i++){
            if(checksnt(i) == 1 && checksnt(n-i)==1){
                cout << i <<" " << n - i;
                check++;
                break;
            }
        }
        if(check == 0){
            cout << "-1";
        }
        cout << endl;
        

        
    }
}
