
//  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int t_i ,t_j ;
        for ( int i = 0 ; i< nums.size()-1 ; ++i){
            for (int  j = i+1 ; j<nums.size() ; ++j){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                    // cout << "[" << i << "," << j << "]" ;
                    // t_i = i ;
                    // t_j = j ;
                }
            }
        }
    return {} ;
    }
};
