//
// 
//
// https://leetcode-cn.com/problems/two-sum/
//
// 给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
// 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。
// 示例:
// 给定 nums = [2, 7, 11, 15], target = 9
// 因为 nums[0] + nums[1] = 2 + 7 = 9
// 所以返回 [0, 1]
// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// Example:
// Given nums = [2, 7, 11, 15], target = 9,
// Because nums[0] + nums[1] = 2 + 7 = 9,
// return [0, 1].

#define ONE   1
#define TWO   2


// lib choose
#include "../../lib/libch.h"


// program part choose
#define PART  TWO

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
              for(int j=i+1;j<nums.size();j++){
                  if(nums[i]+nums[j]==target){
                      ans.push_back(i);
                      ans.push_back(j);
                      return ans;
                  }
              }
        }
        return ans;
    }

    vector<int> twoSum1(vector<int>& nums, int target) {
        
    }
    int test(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
            cout << nums[i] << " ";          //输出为1 2
        return 0;
    }
    int result(vector<int>& result) {
        vector<int> ans;
        for (int i = 0; i < result.size(); i++)
            cout << result[i] << " ";          //输出为1 2
        return 0;
    }
};


int SAFE_MAIN(int argc, char* argv[])
// int main(int argc, char* argv[])
{
#if PART == ONE
    cout << "Hello, This is PART " << PART << "\n";
    std::cout << "Hello, World!\n";
    // twoSum();
    vector<int> v = {1,2,3,4};
    Solution m;
    m.test(v);
    cout << endl;
	return 0;
#endif

#if PART == TWO
    cout << "Hello, This is PART " << PART << "\n";
    cout << "Hello, World!\n";
    vector<int> v = {1, 2, 7, 11, 15};
    Solution m;
    int target= 9;
    vector<int> res;
    res=m.twoSum(v, target);
    m.test(res);
    // (m.twoSum(v, target));
    return 0;
#endif

#if PART == THREE
    cout << "Hello, This is PART " << PART << "\n";
    cout << "Hello, World!\n";
    vector<int> v = {1, 2, 7, 11, 15};
    Solution m;
    int target = 9;
    m.twoSum(v, target);
    return 0;
#endif
}