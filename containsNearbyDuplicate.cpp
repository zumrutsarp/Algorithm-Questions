class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
            if(k<=0){
                return false;
            }
            int n=nums.size();
           
            for(int i=0;i<nums.size();i++){
                 int jMax=std::min(n-1,k+i);
                 for(int j=i+1;j<jMax;j++){
                    if(nums[i]==nums[j]&& abs(i-j)<=k){
                        return true;
                        break;

                    }

                 }
                
            }
        
        return false;
        }
    
};