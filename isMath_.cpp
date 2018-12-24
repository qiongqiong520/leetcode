#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
	bool isMatch_(string s.string p, int i, int j) {
		if (i == -1 && j == -1) {
			return 1;
		}
		else if (i != -1 && j == -1) {
			return 0;
		}
		else if (i == -1 && j != -1) {
			while (p[j] == '*'&& j >= 0) {
				j -= 2;
			}
			if (j == -1) {
				return 1;
			}
			else {
				return 0;
			}
		}
		else {
			if (p[j] == '*') {
				if (p[j - 1] == '.' || p[j - 1] == s[i]) {
					if (isMatch_(s,p, i - 1, j)) {
						return 1;
					}
					return isMatch_(s, p, i, j - 2);
				}
				else {
					return isMatch_(s, p, i, j - 2);
				}
			}
			else if (p[j] == '.' || p[j] == s[i]) {
				return isMatch_(s, p, i - 1, j - 1);
			}else{	
				return 0;
		}
	}
}
bool isMatch(string s, string p) {
	int len_s = s.length(), len_p = p.length();
	return isMatch_(s, p, len_s, len_p - 1);
}
};

class Solution {
public:
	bool isMatch_(string s, string p,int i, int j) {


	}
};
