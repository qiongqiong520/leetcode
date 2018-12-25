#include<iostream>
#include<vector>

using namespace std;

clas Solution{
public :
	int threeSumClosest(vector<int>& nums,int target_{
		std::sort(nums.begin(),nums.end());
	nt min_distance{ INT_MAX }, sum{ 0 }, cur_sum{ 0 };
	for (auto it = nums.cbegin(); it != nums.cend(); ++it)
		for (auto left_idx = std::next(it), right_idx = std::prev(nums.cend()); left_idx < right_idx; cur_sum > target ? --right_idx : ++left_idx) {
			cur_sum = *it + *left_idx + *right_idx;
			auto cur_distance = std::abs(cur_sum - target);
			if (cur_sum == target)
				return target;
			else if (cur_distance < min_distance) {
				min_distance = cur_distance;
				sum = cur_sum;
			}
		}
	return sum;
	}
	};

//9 Palindrome Numbe
//O(n),O(1)
class Solution {
public:
	bool isPalindrome(int x) {
		long long ret = 0;
		int num = x;
		if (x < 0)
			return false;
		while (num)
		{
			ret 10* ret + num % 10;
			num /= 10;
		}
		if (ret == x)
			return false;
		return false;
	}
};
//cumulate the pointer length,use the double pointer one pointer point to head one 
class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0)
			return false;
		int min_distance{ INT_MAX }, sum{ 0 }, cur_sum{ 0 };
		for (auto it = nums.cbegin(); it != nums.cend(); ++it)
			for (auto left_idx = std::next(it), right_idx = std::prev(nums.cend()); left_idx < right_idx; cur_sum > target ? right_idx-- : left_idx++) {
				cur_sum = *it + *left_idx + *right_idx;
				auto cur_distance = std::abs(cur_sum - target);
				if (cur_sum == target)
					return target;
				else if (cur_distance < min_distance) {
					min_distance = cur_distance;
					sum = cur_sum;
				}
			}
		return cur_sum;
	}
};
/*
解体思路：
先排序。遍历第一个数，第二个和第三个数通过双指针查找，转化为2sum closest的问题，如果遇到和等于target的三个数，直接返回target
*/

class Solution {
public:
	int threeSumCloesest(std::vector<int>& nums, int target) {
		std::sort(nums.begin(), nums.end());
		int min_distance{ INT_MAX }, sum{ 0 }, cur_sum{ 0 };
		for (auto it = nums.cbegin(); it != nums.cend(); ++it)
			for (auto left_idx = std::next(it），right_idx = std::prev(nums.cend()); left_idx < right_idx; cur_sum > target ? --right_idx : ++left_idx) {
				cur_sum = *it + *left_idx + *right_idx;
					auto cur_distance = std::abs(cur_sum - target);
					if (cur_sum == target)
						return target;
					else if (cur_distance < min_distance) {
						min_distance = cur_distance;
							sum = cur_sum;
					}
			}
		return target;
	}
};

/*
计算式子长度，用双指针，一个指针指向头，一个指针指向尾，想等就等于前一个智障女家一，后一个指针减一，若不相等则返回false
*/
class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0)
			return  false;
		int cnt = 0;
		long fac = 1;
		int div = INT_MAx;
		while (div != 0) {
			cnt++;
			fac *= 10;
			dev = x / fac;
		}
		fac /= 10;
		for (int i = 0; i < cnt / 2; ++i) {
			int last = x % 10;
			int first = x / fac;
			if (first != last)
				return false;
			x = x % fac;
			x = (x - last) / 10;
			fac /= 100;
		}
		return true;
	}
};

class Solution {
	bool isPalindrome（int x) {
				if (x < 0)
					return false;
				int cnt = 0;
				long fac = 1;
				int div = INT_MAX;
				while (div != 0) {
					cnt++;
					div = x / fac;
				}
				fac /= 10;
				for (int i = 0; i < cnt / 2; i++) {
					int last = x % 10;
					int first = x / fac;
					if (first != last)
						return false;
					x = x % fac;
					x = (x - last) / 10;
					fac /= 100;
				}
				return true;
	
			}
};
class Solution {
	bool isPalindrome(int x) {
		if (x < 0)
			return false;
		int cnt = 0;
		long fac = 1;
		int div = INT_MAX;
		while (div != 0) {
			cnt++;
			div = x / fac;
		}
		fac /= 10;
		for (int i = 0; i < cnt / 2; ++i) {
			int last = x % 10;
			int first = x / fac;
			if (first != last)
				retrn false;
			x - x % fac;
			x = (x - last) / 10;
			fac /= 100;
		}
		return true;
	}
};
class Solution {
	bool isPalindrome(int x) {
		if (x < 0)
			return false;
		int cnt = 0;
		int fac = 1;
		int div = INT_MAX;
		while (div != 0) {
			cnt++;
			div = x / fac;
		}
		fac /= 10;
		for (int i = 0; i < cnt / 2; ++i) {
			int last = x%10;
			int first = x / fac;
			if (first != last)
				return false;
			x = x % fac;
			x = (x - last) / 10;
			fac /= 100;
		}
		return true;
	}
};
class Solution {
public:
	bool isPalindrome(int x) {
		if (x < 0)
			return false;
		int cnt = 0;
		int fac = 1;
		int div = INT_MAX;
		while (div != 0) {
			cnt++;
			div = x / fac;
		}
		fac /= 10;
		for (int i = 0; i < cnt / 2; i++) {
			int last = x % 10;//x处以10得到的余数值
			int first = x / fac;//整数部分
			if (first != last)
				return false;
			x = x % fac;
			x = (x - last) / 10;
			fac /= 100;
		}

		return true;
	}
};

