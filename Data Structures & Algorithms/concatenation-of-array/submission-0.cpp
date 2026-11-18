class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i,j,n;
        n = nums.size();
        vector<int> ans(2*n);
        vector<int>nums2(n);

        

        for(i=0;i<n;i++){
            nums2[i] = nums[i];
        }

        for(i=0;i<n;i++){
            ans[i] = nums[i];
        }
        
        for(j=0;j<n;j++,i++){
            ans[i] = nums2[j];
        }
        return ans;
    }
};