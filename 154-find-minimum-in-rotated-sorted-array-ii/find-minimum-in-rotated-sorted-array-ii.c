int findMin(int* nums, int numsSize) {
    int  start = 0,end= numsSize-1;
   int ans;
    while(start<=end){
        int mid= start+(end-start)/2;
       if(nums[start]>=nums[end]){
        if(nums[mid]<=nums[start]){
            start = start +1;
        }
        else{
            start=mid+1;
        }
       }
       else{
        end= mid-1;
       }
       if(start ==mid||mid==end){
        ans = nums[mid];
       }
       
        

    }
    return ans;
    
}