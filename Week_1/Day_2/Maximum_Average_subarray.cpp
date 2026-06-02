class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double maxi=0;
        double final_ans;

        for(int i=0;i<k;i++){
            maxi+=nums[i];
        }

        double max_sum=maxi;

        for(int i=k;i<n;i++){
            maxi=maxi-nums[i-k]+nums[i];
            max_sum=max(max_sum,maxi);

        }

        final_ans=max_sum/k;

        return final_ans;

    }
};
