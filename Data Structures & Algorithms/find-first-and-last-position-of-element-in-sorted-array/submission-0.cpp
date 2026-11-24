class Solution {
public:
    int lowerbound(vector<int>nums,int x){
        int n = nums.size();
       int  l=0,h=n-1,mid,ans=n;
        while(l<=h){
            mid = (l+h)/2;
            if(nums[mid] >= x){
                ans = mid;
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
    int upperbound(vector<int>nums,int x){
        int n = nums.size();
        int l=0,h=n-1,mid,ans=n;
        while(l<=h){
            mid = (l+h)/2;
            if(nums[mid] > x){
                ans = mid;
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {

        int lb = lowerbound(nums,target);
        int ub = upperbound(nums,target);
        if(lb == nums.size() || nums[lb] != target) return {-1,-1};
        return {lb,ub-1};
    }
};