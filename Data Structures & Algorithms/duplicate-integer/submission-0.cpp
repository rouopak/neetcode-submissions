class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int>noDupli(nums.begin(),nums.end());
        if(nums.size()!=noDupli.size()) return(true);
        return(false);
    }
};