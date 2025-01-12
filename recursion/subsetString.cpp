#include<iostream>
using namespace std;
void storeSubset(string ans, string original, vector<string >&v){
    if(original==""){
        v.push_back(ans);
        return;
    } 
    char ch = original[0];
        storeSubset(ans+ch, original.substr(1), v);
        storeSubset(ans, original.substr(1), v);
        
    
    

}
int main(){
    string str = "aab";
    vector<string > v;
    storeSubset("",str,v);
    for(int i=0;i<v.size();i++){
        cout<<v[i];
        cout<<endl;
    }
    
} 