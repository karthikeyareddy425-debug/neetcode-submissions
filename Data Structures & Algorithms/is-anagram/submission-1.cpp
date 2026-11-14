class Solution {
public:
    bool isAnagram(string s, string t) {
        int i,flag,j;

        if(s.length() != t.length()){
            return false;
        }
        else{
            for(i=0;s[i] != '\0';i++){
                flag=0;
                for(j=0;t[j] != '\0';j++){
                    if(s[i] == t[j] && t[j] != '#'){
                        flag=1;
                        t[j] = '#';
                        break;
                    }
                }
                if(flag==0){
                    return false;
                }
            }
            return true;
        }
    }
};
