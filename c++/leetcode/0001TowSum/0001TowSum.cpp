/*Convright:
 *Filename:
 *File tag:
 *Function:
 *Autor:
 *Email:
 *Date:
 *Version:
 */

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


// lib choose
#include "../../lib/libch.h"


// program part choose
#define PART  THREE

class Solution {
public:
// 1.暴力
// 暴力算法时间
vector<int> twoSum1(vector<int>& nums, int target) {
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

// 2.排序+双指针法
// 这里先将数组排序好O（nlogn），再利用双指针法遍历一遍O（n）得到结果。
// 为了保存下标信息另开了一个数组
vector<int> twoSum2(vector<int>& nums, int target) {
    vector<int> ans;
    vector<int> temp;
    temp=nums;
    int n=temp.size();
    sort(temp.begin(),temp.end());
    int i=0,j=n-1;
    while(i<j){  
        if(temp[i]+temp[j]>target)j--;
        else if(temp[i]+temp[j]<target)i++;
        else break; 
    }
    if(i<j){
        for(int k=0;k<n;k++){
            if(i<n&&nums[k]==temp[i]){
                ans.push_back(k);
                i=n;
            }
            else if(j<n&&nums[k]==temp[j]){
                ans.push_back(k);
                j=n;
            }
            if(i==n&&j==n)return ans;
        }
    }
    return ans;
}

// 3.hash法
// 利用undered_map数组构造映射，遍历nums[i]时，看target-nums[i]是否存在hash表中即可
    vector<int> twoSum3(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int>hashmap;
        for(int i=0;i<nums.size();i++){
            if(hashmap[target-nums[i]]
            &&hashmap[target-nums[i]]!=i+1){
            //防止利用同个元素
                ans.push_back(i);//在vector最后边加一个值
                ans.push_back(hashmap[target-nums[i]]-1);
                return ans;
            }
            hashmap[nums[i]]=i+1;
            //将hash表对应下标＋1，防止处理下标为0的情况
        }
        
        return ans;
    }


    int test(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
            cout << nums[i] << " ";          //输出为1 2
        return 0;
    }
    int result(vector<int>& result) {
        vector<int> ans;
        cout << "solution : "  ;
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
    
    int a,b;
    if(argv[1]==0x00||argv[2]==0x00) {	
        printf("Please input argv[1] and argv[2].\n");		    return 0;
    }
    a = atoi(argv[1]);
	b = atoi(argv[2]);
    // int a = atoi(argv[1]);
    // int b = atoi(argv[2]);
    // printf("is %d\n", a+b);
    // printf("exit 0!\n");
	std::cout << a + b <<std::endl;
   
    // cout << "Hello, World!\n";
    // vector<int> v = {1, 2, 7, 11, 15};
    // Solution m;
    // int target = 9;
    // m.twoSum(v, target);
    return 0;
#endif

#if PART == THREE
    cout << "Hello, This is PART " << PART << "\n";
    cout << "Hello, World!\n";
    vector<int> v = {1, 2, 7, 11, 15};
    Solution m;
    int target= 9;
    vector<int> res;
    res=m.twoSum3(v, target);
    m.result(res);
    cout << "\n";
    // (m.twoSum(v, target));
    return 0;
#endif
}