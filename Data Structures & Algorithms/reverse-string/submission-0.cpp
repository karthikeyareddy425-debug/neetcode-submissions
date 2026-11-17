class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp,i,j;
        int len;
        len = s.size();
        j=len-1;

        for(i=0;i<len/2;i++,j--){
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }
};