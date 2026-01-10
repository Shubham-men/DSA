class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mindiff = INT_MAX;
        int n= nums.size();
        int ans =0;
        for(int i=0;i<nums.size()-1;i++){
            int j=i+1;
            int k= n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                int diff = abs(sum-target);
                if(sum==target){
                    return sum;
                }
                if(diff<mindiff){
                    ans = sum;;
                    mindiff = diff;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    j++;
                }
                
                

            }
        }
        return ans;
    }
};