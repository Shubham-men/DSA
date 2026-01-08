class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
         sort(nums.begin(),nums.end());
        for(int i=0;i< nums.size()-1;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int l=i+1;
            int h=nums.size()-1;
            while(l<h){
                int sum = nums[l]+nums[h]+nums[i];
                if(sum>0){
                    h--;
                }
                else if(sum<0){
                    l++;
                }
                else{
                    res.push_back({nums[i],nums[l],nums[h]});
                    l++;
                    while(l<h && nums[l]==nums[l-1]){
                    l++;
                }
               
            }
         }
        }
        return res;
    }
};