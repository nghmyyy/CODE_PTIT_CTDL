#include<bits/stdc++.h> 
using namespace std;
int binarySearch(int a[], int n, int x){
    int left = 1, right = n;
    while(left <= right){
        int mid = (left + right) / 2;
        if(x==a[mid]) return mid;
        if(x > a[mid]){
            left = mid + 1;
        }
        if(x < a[mid]){
            right = mid - 1;
        }
    }
    if(left > right) return -1;

}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int x; cin >> x;
        int a[100001];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        if(binarySearch(a, n, x) > 0) cout << binarySearch(a, n, x) << endl;
        else{
            cout << "NO" << endl;
        }


        
    }
}