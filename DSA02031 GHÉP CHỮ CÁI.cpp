#include<bits/stdc++.h>
using namespace std;
char c, x[20];
int n, used[20];
int cnt;
bool check(){
    int ck1 = 0;
    for(int i = 1; i <= n - 1; i++){
        if((x[i] == 'A' && x[i+1] == 'E') || (x[i] == 'E' && x[i+1] == 'A')){
            ck1++;
            return true;
        }
    }
    if(ck1==0){
        if((c == 'D' && (x[1] == 'A'|| x[n] == 'A')) || (c > 'D' && (x[1] == 'A' && x[n] == 'E')) || (c > 'D' && (x[1] == 'E' && x[n] == 'A'))) return true;       
    }
    return false;
}
void inkq(){
    if(check() == true){
        for(int i = 1; i <= n; i++){
            cout << x[i];
        }
        cout << endl;
        cnt++;
    }
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(used[j] == 0){
            x[i] = 'A' - 1 + j;
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
    cin >> c;
    n = 0;
    for(char c1 = 'A'; c1 <= c; c1++){
        n++;
    } 
    cnt = 0;
    for (int i = 1; i <= 20; i++)
    {
        used[i] = 0;
    }   
    Try(1);
}