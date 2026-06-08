class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int n=ransomNote.size();
        int m=magazine.size();
        vector<bool>used(m,false);

        if(ransomNote.size()>magazine.size()){
            return false;
        }
        
        for(int i=0;i<n;i++){

            bool found=false;

            for(int j=0;j<m;j++){

                if(ransomNote[i]==magazine[j] && !used[j]){
                    used[j]=true;
                    found=true;
                    break;
                }

            }
            if(!found){
                return false;
            }
        }
        return true;
    }
};
