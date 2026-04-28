class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        long long temp = 0;
        for(int i =0; i<nums.size();i++){
            freq[nums[i]]++;
            if(freq[nums[i]]>1){
                temp = nums[i];
                return temp;
            }
        }
        
    }
};
