lass Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        int n =nums.size();
        long long toplam=0;
        int right=left+1;
        long long ans=0;
        for(;right<k;right++){
            toplam+=nums[right];

        }

        toplam+=nums[left];
        ans = toplam;     
        for(;right<n;right++){
            
            toplam+=nums[right];
            toplam-=nums[left];
            left++;
            ans=max(ans,toplam);

          
              }

        
        return static_cast<double>(ans) / k;

        }
        
    };
