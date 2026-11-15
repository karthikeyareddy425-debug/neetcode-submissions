class Solution {
public:
/*Logic:
1. Store the last element in temp.
2. Start traversing from the last index towards index 1.
3. Shift every element one position to the right.
4. Put temp at index 0.*/
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