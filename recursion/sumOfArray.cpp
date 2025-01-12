#include<iostream>
using namespace std;
int sumOfArray(int arr[],int n,int sumArray,int idx){
    if(idx>=n) return sumArray;
    sumArray = sumArray + arr[idx];
    return sumOfArray(arr,n,sumArray,idx+1);
    
    
}

int main(){
    int arr[5] = {0,1,2,3,4};
    int n = 5;
   int sumArray = 0;
   int idx = 0;
   int sum = sumOfArray(arr,n,sumArray, idx);
   cout<<"Sum of array is :"<<sum;
   return 0;
    
     
    
}