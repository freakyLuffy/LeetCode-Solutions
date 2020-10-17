class Solution {
public:
    int singleNumber2(vector<int>& nums) {
        
        int one = 0;
        int two = 0;
        for(auto ele: nums)
        {
            one = (one^ele) & (~two);
            two= (two^ele) & (~one);
        }
        return one;
        
        
    }
};