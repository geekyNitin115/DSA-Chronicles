#include<iostream>
using namespace std;
#include<map>

int main(){
    unordered_map<string , int> m;
    pair<string, int> p1;
    p1.first = "nitin";
    p1.second = 1;
     m.insert(p1);

    pair<string,int> p2;
    p2.first = "shubham";
    p2.second = 036;
    m.insert(p2);
     
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    } 

}

