#include<iostream>
#include<map>
using namespace std;

int main(){

//     //creation
//     unordered_map<string,int> m;

//     //insertion

//     //method-1
//     pair<string,int> p = make_pair("Nitin",3);
//     m.insert(p);

//     //method-2
//     pair<string,int> pair2("love", 2);
//     m.insert(pair2);

//     //methdd-3
//     m["mera"] = 1;

//     //what will happen
//     m["mera"] = 2;

//     // search
//     cout<<m["mera"] <<endl;
//     cout<<m.at("Nitin")<<endl;

//     cout<<m.at("unknownKey")<<endl;
//     cout<<m["unknownKey"]<<endl;



    unordered_map<string, int> m;
   
    m["Nitin"] = 115;
    m["Shubham"] = 036;
    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size();
     cout<<endl;
     cout<<endl;
    m.erase("Shubham");
     for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;

     cout<<m["Nitin"];
 }