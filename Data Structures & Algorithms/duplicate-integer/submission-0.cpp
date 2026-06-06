class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> ans;

        for(int a : nums){
            if(ans.count(a)){
                return true;
            }
            ans.insert(a);
        }
        return false;
    }
};