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
#define PART  ONE

int SAFE_MAIN(int argc, char* argv[])
// int main(int argc, char* argv[])
{
#if PART == ONE
    cout << "Hello, This is PART " << PART << "\n";
    std::cout << "Hello, World!\n";
	return 0;
#endif

#if PART == TWO
    cout << "Hello, This is PART " << PART << "\n";
    cout << "Hello, World!\n";
    keep_window_open();
    return 0;
#endif
}