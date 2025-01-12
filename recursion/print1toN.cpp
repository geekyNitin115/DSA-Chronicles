#include<iostream>
using namespace std;
// void print(int n){
    //  using while loop and extra variable method

    // int i=1;
    // while(i<=n){
    //     cout<<i<<endl;
    //     i++;
    // }
// }

    //RECUSRION METHOD-1
   void print(int i,int n){
    cout<<i<<endl;
    if(i==n) return ;
    print(i+1,n);
   }


    //RECURSION METHOD-2k
// void print(int n){
//     if(n==0) return;
//     print(n-1);
//      cout<<n<<endl;;
// }
int main(){
    int n;
    cin>>n;
    // print(n);
     print(1,n);
}