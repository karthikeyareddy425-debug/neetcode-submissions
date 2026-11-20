class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j,len=0,si;

        len = nums.size();
        for(i=0;i<len-1;i++){
            si = i;
            for(j=i+1;j<len;j++){
                if(nums[j] < nums[si]){
                    si = j;
                }
            }
            int temp = nums[i];
            nums[i] = nums[si];
            nums[si] = temp;
        }
        for(i=0;i<len;i++){
            cout << nums[i] <<" ";
        }
        
    }
};