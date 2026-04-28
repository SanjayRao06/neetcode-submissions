class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp; // value -> index
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if(mpp.find(complement) != mpp.end()) {
                return {mpp[complement], i}; // found pair
            }
            mpp[nums[i]] = i; // store current value with index
        }
        return {}; // return empty if no solution
    }
};