class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,j,len=0,k=0;
        vector<int> ans = {};
        len = nums.size();

        for(i=0;i<len;i++){
            if(nums[i] != val){
                nums[k] = nums[i];
                k++;
            }
        }
        
        return k;
    }
};