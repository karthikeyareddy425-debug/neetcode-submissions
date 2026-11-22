class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // BY MOORE'S VOTING ALGORITHM

        int maj=0,count=0;

        for(int i=0;i<nums.size();i++){
            if(count == 0){
                count = 1;
                maj = nums[i];
            }
            if(nums[i] == maj){
                count++;
            }
            else{
                count--;
            }
        }
        int fre=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == maj){
                fre++;
            }
        }
        if(fre > (nums.size()/2)){
            return maj;
        }
    }
};