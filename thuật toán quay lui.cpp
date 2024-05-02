#include<bits/stdc++.h>
using namespace std;
//xau nhi phan co do dai N
/*
int n, x[100];
void inkq(){
    for(int i = 1; i <= n;i++)
    {
        cout << x[i];
    }
    cout << endl;
}
void Try(int i){
    for(int j = 0; j <= 1;j++){
        x[i] = j;
        if(i==n) inkq();
        else{
            Try(i+1);
        }
    } 
}
int main(){
    cin >> n;
    Try(1);
}
*/



// To Hop chap k cua n
/*
int n, k, x[100];
void inkq(){
    for (int i = 1; i <= k; i++)
    {
        cout << x[i] <<" ";
    }
    cout << endl;
    
}
void Try(int i){
    for(int j = x[i-1] + 1; j <= n - k + i; j++){
        x[i] = j;
        if(i==k) inkq();
        else{
            Try(i+1);
        }
    }
}
int main(){
    cin >> n >> k;
    Try(1);
}
*/

//Hoan vi cua N phan tu
int n, x[100], used[100];
void inkq(){
    for (int i = 1; i <= n; i++)
    {
        cout << x[i];
    }
    cout << endl;
    
}
void Try(int i){
    for (int j = 1; j <= n; j++)
    {
        if(!used[j]){
            x[i] = j;
            used[j] = 1;
            if(i==n) inkq();
            else{
                Try(i+1);
            }
            used[j] = 0;
        }
    }
    
}
int main(){
    cin >> n;
    Try(1);
}