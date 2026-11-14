class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int fre,s=0,val,mn,n;
        n = nums.size();
        fre = n*(n+1)/2;
        for(int val : nums){
            s += val;
        }
        mn = fre-s;
        return mn;
    }
};
