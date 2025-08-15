class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s=nums.size();
        for(int i=0;i<s;i++)
        {
            int l=0;
            int r=0;
            for(int j=0;j<i;j++)
            {
                l=l+nums[j];
            }
             for(int j=i+1;j<s;j++)
            {
                r=r+nums[j];
            }
            if(l==r){
            return i;
            }
        }
        return -1;
        
    }
};