class Solution {
public:
    bool isPalindrome(string s) {

        string temp="";

        for(char ch :s){
            if(isalnum(ch)){
                temp+=tolower(ch);
            }
        }
        
        int n=temp.size();
        int start=0,end=n-1;
        while(start<=end){
            if(temp[start]!=temp[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
        
    }
};
