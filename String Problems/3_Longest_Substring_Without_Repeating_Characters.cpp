class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0, maxLen = 0;
        unordered_set<char> seen;

        while(right<s.length()){
            if(seen.find(s[right])==seen.end()){
                // Character is not in the current window
                seen.insert(s[right]);
                maxLen = max(maxLen, right-left+1);
                right++;
            }
            else{
                // Duplicate found, remove from the left
                seen.erase(s[left]);
                left++;
            }
        }
        return maxLen;
    }
};