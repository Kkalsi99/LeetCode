#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="pwwkew";
    int n = s.size();
    int i=0,j=0;
    int res=0;
    unordered_map<char,bool> sol;
    while(i<n&&j<n){
        if(sol[s[j]]!=true){
               sol[s[j++]]=true; 
               res=max(res,j-i);

        }
        else{
            
            sol[s[i++]]=false;
        }

    }
    cout<<res;
}