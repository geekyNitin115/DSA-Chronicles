#include<iostream>
using namespace std;
void sumParameterised(int sum,int n){
    if(n==0){
        cout<<sum;
        return;
    }
    sumParameterised(sum+n, n-1);
    
}
int main(){
    int n;
    cin>>n;
    sumParameterised(0 ,n);
}