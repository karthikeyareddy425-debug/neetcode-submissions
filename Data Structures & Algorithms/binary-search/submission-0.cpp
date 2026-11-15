class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ui=nums.size()-1 , li = 0;

        while(li <= ui){
            int mid = (li+ui)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] < target){
                li = mid + 1;
                
            }
            else{
                ui = mid-1;
            }
        }
        return -1;
    }
};
