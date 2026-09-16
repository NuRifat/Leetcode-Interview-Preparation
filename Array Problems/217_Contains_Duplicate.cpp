class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> setNum;
        for(int num : nums){
            if(setNum.count(num)>0) return true;
            setNum.insert(num);
        }
        return false;
    }
};