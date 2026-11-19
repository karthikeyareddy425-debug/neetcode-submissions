class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i,j,len1=0,len2=0,min;
        string w3;

        len1 = w1.size();
        len2 = w2.size();

        if(len1 > len2){
            min = len2;
        }
        else{
            min = len1;
        }
        j=0;
        for(i=0;i<min;i++){
            w3.push_back(w1[i]);
            w3.push_back(w2[i]);
        }

        if(len1 < len2){
            i = min;
            for(;i<len2;i++){
                w3.push_back(w2[i]);
            }
        }
        else{
            i = min;
            for(;i<len1;i++){
                w3.push_back(w1[i]);
            }
        }
        return w3;
    }
};