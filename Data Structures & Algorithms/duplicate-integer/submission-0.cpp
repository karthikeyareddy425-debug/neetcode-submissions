class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i,j,len,count;

        len = nums.size();
    
        for(i=0;i<len;i++){
            count=0;
            for(j=i+1;j<len;j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};