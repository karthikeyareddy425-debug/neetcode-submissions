class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i,j;

        if(strs.size() == 0){
            return "";
        }
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];

        vector<char>ans;

        for(i=0;i<first.size() && i<last.size();i++){
            if(first[i] == last[i]){
                ans.push_back(first[i]);
            }
            else{
                break;
            }
        }
        string res="";

        for(i=0;i<ans.size();i++){
            res += ans[i];
        }
        return res;
    }
};