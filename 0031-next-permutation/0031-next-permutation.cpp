class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int count=0;
        while (next_permutation(nums.begin(),nums.end())){
            
            
            
            count++;
            if(count==1){
                return;
            }
        }
        
        
            sort(nums.begin(),nums.end());
        
    }
};