#include<bits/stdc++.h>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target){
     unordered_map<int , int > sol;
     for (int i = 0;i<nums.size();i++){
         sol[nums[i]]=i;
     }
     for(int i = 0;i < nums.size();i++){
         int diff = target - nums[i];
         if(sol.count(diff)&&sol[diff]!=i) 
         return {i,sol[diff]};
     }

return{};
     
 }
int main(){
        vector<int> nums={2,7,11,15};
        int target=9;
        twoSum(nums,target);
        
    }