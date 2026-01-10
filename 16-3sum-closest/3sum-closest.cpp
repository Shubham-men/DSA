static const bool __boost = []() {
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return std::ios_base::sync_with_stdio(false);
}();
const size_t BUFFER_SIZE = 0x6fafffff;
alignas(std::max_align_t) char buffer[BUFFER_SIZE];
size_t buffer_pos = 0;
void* operator new(size_t size) {
    constexpr std::size_t alignment = alignof(std::max_align_t);
    size_t padding = (alignment - (buffer_pos % alignment)) % alignment;
    size_t total_size = size + padding;
    char* aligned_ptr = &buffer[buffer_pos + padding];
    buffer_pos += total_size;
    return aligned_ptr;
}
void operator delete(void* ptr) {}
void operator delete(void* ptr, unsigned long) {}
void operator delete[](void* ptr) {}



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