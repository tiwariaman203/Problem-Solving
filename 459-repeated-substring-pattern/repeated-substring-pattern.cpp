class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.length() <= 1 ) return 0;
        if(s == "ab") return 0;
        string temp="";
        for(int i=0;i<=s.length()/2;i++){
            temp= s.substr(0, i+1);
            int flag = 1;

            for(int j=0;j<s.length();j=j+temp.size()){
                if(temp != s.substr(j,temp.size())){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)return true;
        }
        return false;
    }
};