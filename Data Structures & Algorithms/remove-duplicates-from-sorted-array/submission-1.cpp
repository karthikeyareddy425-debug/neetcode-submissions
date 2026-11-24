class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> ans;
        for(int i=0;i<n;i++){
            ans.insert(nums[i]);
        }
        int k=0;
        for(auto it:ans){
            nums[k++] = it;
        }
        return k;
    }
};