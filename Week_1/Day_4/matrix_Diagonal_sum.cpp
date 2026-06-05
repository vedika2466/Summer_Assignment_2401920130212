class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        int sum1=0;
        int ans;

        for(int i=0;i<n;i++){
            sum+=mat[i][i];
        }

        for(int i=0;i<n;i++){
            sum1+=mat[i][n-i-1];
        }
        if(n%2!=0){
            int s=n%2;
            ans=sum+sum1-mat[s][s];
        }
        else{
            ans=sum+sum1;
        }

        return ans;

    }
};
