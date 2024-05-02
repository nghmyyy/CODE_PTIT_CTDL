#include<bits/stdc++.h> 
using namespace std;
int partition(int a[], int low, int high){
    int pivot = a[high];
    int left = low;
    int right = high - 1;
    while(true){
        while(left <= right && a[left] < pivot) left++;
        while(left <= right && a[right] > pivot) right--;
        if(left >= right) break;
        swap(a[left], a[right]);
        left++;
        right--;
    }
    swap(a[left], a[high]);
    return left;
}
void quicksort(int a[], int low, int high){
    if(low < high){
        int pi = partition(a, low, high);
        quicksort(a, low, pi - 1);
        quicksort(a, pi + 1, high);
    }
}
int main(){
    int n; cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quicksort(a, 0, n - 1);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    
}