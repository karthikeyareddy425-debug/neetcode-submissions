class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int i,j,n,count,maxele=nums[0];

        n = nums.size();

        for(i=0;i<n;i++){
            count=0;
            for(j=0;j<n;j++){
                if(nums[j] ==  nums[i]){         
                    count++;
                }
                if(count > n/2){
                return nums[j];
            }
            }
            
            
        }
    }
};