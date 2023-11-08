class Solution {
public:
    int pivotIndex(vector<int>& nums) {
     int n=nums.size();
     
     for(int i=0;i<n;i++){
         int ls=0,rs=0;
     for(int j=0;j<i;j++){
         ls=ls+nums[j];
     }
     for(int k=i+1;k<n;k++){
         rs=rs+nums[k];
     }
     if(ls==rs)
     return i;
     }
     return -1;   
    }
};