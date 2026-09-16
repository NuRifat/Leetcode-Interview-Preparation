class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numMap;
        int n = nums.size();

        for(int i=0;i<n;i++){
            int x = target - nums[i];
            if(numMap.count(x)){
                return {numMap[x],i};
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};