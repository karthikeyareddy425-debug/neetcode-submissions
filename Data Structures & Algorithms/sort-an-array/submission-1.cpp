class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int i,j,len;

        len = nums.size();

        for(i=0;i<len-1;i++){
            for(j=0;j<len-i-1;j++){
                if(nums[j] > nums[j+1]){
                    swap(nums[j],nums[j+1]); 
                }
            }
        }
        return nums;
    }
};