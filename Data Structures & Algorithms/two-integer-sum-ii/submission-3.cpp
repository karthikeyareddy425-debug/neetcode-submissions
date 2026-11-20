class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,len=0;

        len = nums.size();
        j = len-1;
        i=0;
        while(i<j){
            if(nums[i] + nums[j] == target){
                return {i+1,j+1};
            }
            else if(nums[i] + nums[j] < target){
                i++;
            }
            else{
                j--;
            }
        }
        return {};
    }
};
