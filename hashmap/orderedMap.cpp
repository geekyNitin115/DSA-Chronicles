#include<iostream>
#include<map>
using namespace std;
int main(){
    // map<int,int> m;
    // m[1]=1;
    // m[2]=3;
    // m[7]=2;
    // m[5]=4;
    

    // for(auto p : m){
    //     cout<<p.first<<" "<<p.second<<endl;

    // }
    map<string,int> m;
     m["nitin"] = 2;    
     m["shubham"] = 1;

     for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
     }
    
}