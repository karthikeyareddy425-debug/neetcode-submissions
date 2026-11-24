class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j,k;
        vector<int>ans;
        for(i=0;i<nums.size();i++){
            if(i == 0 || nums[i] != nums[i-1]){
                ans.push_back(nums[i]);
            }
        }
        for(i=0;i<ans.size();i++){
            nums[i] = ans[i];
        }
        k = ans.size();
        return k;
    }
};