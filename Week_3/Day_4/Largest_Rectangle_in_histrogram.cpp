class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>st1;
        vector<int>pse(n);

        for(int i=0;i<n;i++){
            while(!st1.empty() && heights[st1.top()]>=heights[i]){
                st1.pop();
            }
            if(st1.empty()){
                pse[i]=-1;
            }
            else{
                pse[i]=st1.top();
            }
            st1.push(i);
        }

        stack<int>st2;
        vector<int>nse(n);

        for(int i=0;i<n;i++){

            while(!st2.empty() && heights[st2.top()]>=heights[i]){
                nse[st2.top()]=i;
                st2.pop();
            }
            st2.push(i);
        }
        while(!st2.empty()){
            nse[st2.top()]=n;
            st2.pop();
        }

        int maxi=-1;
        int ans;
        for(int i=0;i<n;i++){
            ans=heights[i]*(nse[i]-pse[i]-1);
            maxi=max(maxi,ans);
        }

        return maxi;
    }
};
