#include<bits/stdc++.h>
using namespace std;

    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> prevMap;
        
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            
            if(prevMap.count(diff)) 
                return { prevMap[diff], i };
            prevMap[nums[i]] = i;
        }
        return {};        
   }
    int main(){
        vector<int> nums={2,7,11,15};
        int target=9;
        twoSum(nums,target);
        
    }