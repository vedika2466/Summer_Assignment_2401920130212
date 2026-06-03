class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(nums[i])>abs(nums[j])){
                    swap(nums[i],nums[j]);
                }
            }
        }
        for(int i=0;i<n;i++){
            ans.push_back((nums[i])*(nums[i]));
            
        }

        return ans;
        
    }
};
