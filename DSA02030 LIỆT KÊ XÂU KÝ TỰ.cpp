#include<bits/stdc++.h>
using namespace std; 
char c, x[100];
char temp;
int k, n;
void inkq(){
    for(int i = 1; i <= k; i++){
        cout << x[i];
    }
    cout << endl;
}
void Try(int i){
    for(char j = temp; j <= c; j++){
        x[i] = j;
        temp = x[i];
        if(i==k) inkq();
        else{
            Try(i+1); 
        }
    }
}
int main(){
    cin >> c >> k;
    temp = 'A';
    Try(1);
}