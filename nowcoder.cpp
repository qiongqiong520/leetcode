//数组中重复数字
//确定数组中有多少个重复的数字,也不清楚每个数字重复几次
#include<iostream>
using namespace std;

 
public boolean duplicate(int[] nums, int length, int[] dplication) {
	if (nums == null || length <= 0) {
		return false;
	}
	for (int i = 0; i < length; i++) {
		while (nums[i] != i) {
			if (nums[i] == nums[nums[i]]) {
				duplication[0] = nums[i];
				return true;
			}
			swap(nums, i, nums[i]);
		}
	}
	return false;
}
private void swap(int[] nums, int i, int j) {
	int t = nums[i];
	nums[i] = nums[j];
	nums[j] = t;
}
//二维数组查找判断该数字是否有该整数

//左边比他小，下边比他大,o(M+N)+O(1)

publicboolean Find(int target, int[] matrix) {
	if (matrix == null || matrix.length == 0 || matrix[0].length == 0) {
		return false;
	}
	int rows = matrix.length, cols = matrix[0].length;
	int r = 0, c = cols - 1;
	while (r <= rows - 1 && c >= 0) {
		if (target == matrix[r][c])
			return true;
		else if (target > matrix[r][c])
			r++;
		else
			c--;
	}
	return false;
}

//tihuan space
public string resplaceSpace(stringBuffer str) {
	int p1 = str.length() - 1;
	for (int i = 0; i <= P1; i++)
		if (str.charAt(i) == '')
			str.append(" ");
	int p2 = str.length() - 1;
	while (p1 >= 0 && p2 > p1) {
		char c = str.setCahrAt(p1--);
		if (c == ' ') {
			str.setCahrAt(p2--, '0');
			str.setCharAt(p2--, '2');
			str.setCharAt(p2--, '%');
		}
		else {
			str.setCharAt(p2--, c);
		}
	}
	return str.toString();
}

//从头到尾打印链表
//使用栈从头到尾答应队列
 
public ArrayList<Integer> printListFromHead(ListNode listNode) {
	stack<Integer> stack = new stack<>();
	while (listNode != null) {
		stack.add(listNode.val);
		listNode = listNode.next;
	}
	ArrayList<Integer>ret = new ArrayList<>();
	while (!stack.isEmpty())
		ret.add(stck.pop())
	return ret;
}

//使用递归
public ArrayList<Integer> printListFromTailToHead(ListNode listNode) {
	ArrayList<Integer> ret = new ArrayList<>();
	if (listNode != null) {
		ret.addAll(printFromTailToHead(listNode.next));
		ret.add(listNode.val);
	}
	return ret;
}
//使用头插法逆序插入数据
public ArrayList<Integer> printListFromTailToHead(ListNode listNode) {
	ListNode head = new ListNode(-1);
	while (listNode != null) {
		ListNode memo = listNode.next;
		listNode.next = head.next;
		head.next = listNode;
		listNode = memo;
	}
	ArrayList<Integer> ret = new ArrayList<>();
	head = head.next;
	while (hed != null) {
		ret.add(head.val);
		head = head.next;
	}
	return ret;
}

