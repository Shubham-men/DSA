class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1||nums.size()==0){
            return;
        }
        k = k%nums.size();
         for(int i=0,j=nums.size()-1;i<j;i++,j--){
        swap(nums[i],nums[j]);
    }
    for(int i=0,j=k-1;i<j;i++,j--){
        swap(nums[i],nums[j]);
    }
    for(int i=k ,j=nums.size()-1;i<j;i++,j--){
        swap(nums[i],nums[j]);
    }
        
    }
};