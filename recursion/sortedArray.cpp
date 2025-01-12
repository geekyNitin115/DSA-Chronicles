#include<iostream>
using namespace std;
bool isSortedArray(int arr[], int n){
    if(n==0 || n==1) return true;
    if(arr[0]>arr[1]) return false;
    else {
        bool remainingPart = isSortedArray(arr+1, n-1);
        return remainingPart;
    }
}
int main(){
    int arr[5] = {1,9,3,4,5};
    int n = 5;
     bool ans  = isSortedArray(arr,n);
     if(ans) cout<<"Array is sorted";
     else cout<<"Array is not sorted";
     return 0;
    
}