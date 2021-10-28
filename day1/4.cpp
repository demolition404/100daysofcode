class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>answer(n);
        for(int i=0;i<nums.size();i++)
        {
            if(i>0)
            {
                answer[i]=answer[i-1]*nums[i-1];
            }
            else answer[i]=1;
        }
        int r=1;
        for(int i=n-1;i>=0;i--)
        {
            if(i<n-1)
            {
                r*=nums[i+1];
            }
            answer[i]*=r;
        }
        return answer;
    }
};