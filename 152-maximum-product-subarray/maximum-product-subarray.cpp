class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int x= INT_MIN;
        int pf=1,sf=1;
        int n = nums.size();
        for(int i=0;i<n;i++){
              if(pf==0) pf=1;
            if(sf==0) sf=1;
            pf *=nums[i] ;
            sf *= nums[n-1-i];
            x = max(x ,max(pf,sf));
        }
        return x;
    }
};