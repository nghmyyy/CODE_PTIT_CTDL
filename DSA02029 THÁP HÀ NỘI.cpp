#include<bits/stdc++.h>
using namespace std;
void thapHaNoi(int n, char a, char b, char c){
    if(n==1) cout << a << " -> " << c << endl;
    else{
        thapHaNoi( n - 1, a , c, b);
        thapHaNoi( 1 , a , b , c );
        thapHaNoi( n - 1 , b, a, c); 
    }
}
int main(){
    int n; cin >> n;
    char a = 'A', b = 'B', c = 'C';
    thapHaNoi(n, a, b, c);
}