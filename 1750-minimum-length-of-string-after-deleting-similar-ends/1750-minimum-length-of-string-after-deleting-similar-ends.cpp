class Solution {
public:
    int minimumLength(string s) {
        int i = 0;
        int j = s.length() -1;

        while(i<j){
            if(s[i] != s[j]){
                break;
            }
            char ch = s[i];
            while(s[i] == ch && i<=j) i++;
            while(s[j] == ch && i<=j) j--;
        }
        return j - i +1;
    }  
};