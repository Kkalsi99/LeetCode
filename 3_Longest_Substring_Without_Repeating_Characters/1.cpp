#include<bits/stdc++.h>
using namespace std;
bool areDistinct(string s, int i, int j){
    unordered_map<char,bool> visited;
    for(int k=i;k<=j;k++){
        if(visited[s[k]]==true)
            return false;        
        visited[s[k]]=true;
        
    }
        return true;    
    }
int main(){
    string s=" "; 
    int n= s.size();
    
    int res = 0;
    for(int i = 0;i<n;i++){
        for(int j = i ;j<n;j++){
            if(areDistinct(s,i,j)){
                res=max(res,j-i+1);
            }
            else
            {
                break;
            }
                }
                }
    cout<<res;
    }