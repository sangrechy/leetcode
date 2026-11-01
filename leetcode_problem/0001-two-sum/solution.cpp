class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> x= {};
        for (int i=0;i<nums.size();i++){
            
            if (x.find(nums[i])!=x.end()){return {i,x[nums[i]]};}
            x[target-nums[i]]=i;
            
        }
        return {};

    }
};