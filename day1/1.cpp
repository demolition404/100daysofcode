class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      int n=nums.size(),k=1;
        for(long long int t=0;t<n;t++)
        {
            if(nums[t]<=0)
                nums[t]=pow(2,31)-1;
        }
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.first!=k)
                return k;
            k++;
        }
        return k;
    }
};