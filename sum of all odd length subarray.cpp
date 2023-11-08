class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
         int sum=arr[i];
            ans+=sum;
            for(int j=i+1;j<n;j++)
            {
                sum+=arr[j];
                if((j-i+1)%2==1)
                    ans+=sum;
            }
        }
        return ans;
    }
};