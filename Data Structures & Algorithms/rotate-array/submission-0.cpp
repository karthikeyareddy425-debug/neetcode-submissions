class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int i,j,r,temp;
        k = k % nums.size();
        for(r=0;r<k;r++){
            temp = nums[nums.size()-1];
            for(i=nums.size()-1;i>=1;i--){
               nums[i] = nums[i-1];
            }
             nums[0]= temp;
        }
    }
};