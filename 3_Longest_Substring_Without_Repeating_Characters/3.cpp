#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="dvdf";
    int n=s.size();
    int ans = 0; 
    unordered_map<char,int> sol;
    for(int j=0,i=0;j<n;j++){
        if(sol[s[j]]!=0)
            i=max(sol[s[j]],i);
    
    ans=max(ans,j-i+1);
    sol[s[j]]=j+1;
    }
    cout<<ans;
}