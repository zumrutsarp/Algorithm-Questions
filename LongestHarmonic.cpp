class Solution {
public:
    int findLHS(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int ans=0;
        int left=0;
        for(int right=left+1;right<nums.size();right++){


            while (nums[right]-nums[left]>1){
                left++;


            }
            if(nums[right]-nums[left]==1){
                ans=max(ans,right-left+1);

            }

        }

        return ans;

    }
};