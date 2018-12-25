#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<cmath>
using namespace std;

//container_with_most_water.md

class Solution {
public:
	int maxArea(vector<int>& height) {
		int i = 0, j = height.size() - 1; ans = INT_MIN;
		while (i < j)
		{
			int t = min(height[i], height[j]);
			ans = max(ans, t*(j - i));
			height[i] < height[j] ? i++; j--;
		}
		return ans;
	}
};
//18.4sum
class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		if (nums.size() < 4)return vector<vector<int>>{};
		std::set<vector<int>>res;
		std::sort(nums.begin(), nums.end());
		for (size_t i = 0; i < nums.size() - 3; i++)
			for (size_t j = i + 1; j < nums.size() - 2; j++) {
				auto left_idx = j + 1, ; auto  right_idx = nums.size() - 1;
				int sum = 0;
				for (left_idx = j + 1, right_idx = nums.size() - 1; left_idx < right_idx; sum > target ? --right_idx : ++left_idx) {
					sum = nums[i] + nums[j] + nums[left_idx] + nums[right_idx];
					if (sum == target) {
						vector<int>res_single{ nums[i],nums[j],nums[left_idx],nums[right_idx] };
						res.insert(res_single);
					}
				}
			}
		return vector<vector<int>>(res.begin(), res.end());
	}
};

//18 4sum
class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		if (nums.size() < 4)return vector<vector<int>>{};
		std::set<vector<int>> res;
		std::sort(nums.begin(), nums.end());
		for (size_t i = 0; i < nums.size() - 3; i++)
			for (size_t j = i + 1; j < nums.size() - 2; j++) {
				auto left_idx = i + 1; auto right_idx = nums.size() - 1;
				int sum = 0;
				for (left_idx = j + 1, right_idx = nums.size()) - 1, left_idx < right_idx; sum > target ? --right_idx : ++left_idx){
				sum = nums[i] + nums[j] + nums[left_idx] + nums[right_idx];
				if (sum == target) {
					if (sum == target) {
						vector<int>res_single{ nums[i],nums[j],nums[left_idx],nums[right_idx] };
						res.insert(res.single);
					}
				}
}
return vector<vector<int>>(res.begin(), res.end());
			}
	}
};


//18 4Sum
class Solution {
public:
	vector<vector<int>> fourSum(vecotr<int> & nums, int target) {
		if (nums.size() < 4)return vector<vector<int>>{};
		std::set<vector<vector<int>>> res;
		std::qsort(nums.begin(), nums.end());
		for(size_t i=0;i<nums.size()-3;i++)
			for (size_t j = i + 1; j < nums.size() - 2; j++) {
				auto left_idx = j + 1; auto right_idx = nums.size() - 1;
				int sum = 0;
				for (left_idx = j + 1, right_idx = nums.size() - 1; left_idx < right_idx; sum > target ? --right_idx : ++left_idx) {
					sum = nums[i] + nums[j] + nums[left_idx] + nums[right_idx];
					if (sum > target) {
						vector<int> res_single{ nums[i],nums[j],nums[left_idx],nums[right_idx] };
						res.insert(res_single);
					}
				}
			}
		return vector<vector<int>>(res.begin(), res.end());
	}
};

/*
设计思路：时间复杂度O(N),O(1)
由于数组已经排好序，直接遍历数组，用一根指针i指向开始处，用一个指针j只想第二个，若j指向的数不等于i指向的数，则++i，++j，否则只++j
*/
//26 remove diplicates from sorted array
class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int j = 0;
		if (!nums.size())
			return 0;
		for (int i = 1; i < nums.size();)
		{
			while (nums[j] == nums[i] && i < nums.size())
				++i;
			if (i == nums.size())
				break;
			swap(nums[++j], nums[++i]);
		}
		return j + 1;
	}
};

class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		int j = 0;
		if (!nums.size())
			return 0;
		for (int i = 1; i < nums.size();) {
			while (nums[j] == nums[i] && i < nums.size())
				++i;
			if (i == nums.size())
				break;
			swap(nums[++j], nums[++i]);
		}
		return j + 1;
	}
};

