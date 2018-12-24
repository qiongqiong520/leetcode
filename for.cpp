#include<iostream>
#include<array>
using namespace std;
/*
int main()
{
	int array[3] = { 1,2,3 };
	int *p;
	for (p = array; p < array + sizeof(array) / sizeof(int); ++p)
	{
		*p += 2;
		std::cout << *p << std::endl;
	}
	system("pause");
	return 0;
}


int main() {
	int array[3] = { 1,2,3 };
	for(int &e:array)
	{
		e += 2;
		std::cout << e << std::endl;
	}
	system("pause");
	return 0;
}
//使用数组名和下标访问数组元素
//使用数组名和指针运算符访问数组

int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	for (int i = 0; i  < 10; ++i)
		//cout << *(a + i) << " ";
		cout << a[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}

//使用指针变量访问数组元素
int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	for(int *p=a;p<(a+10);++p)
		cout<<*p<<" ";
	cout << endl;
	system("pause");
	return 0;
}


int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	int *pa = a;
	for ( *pa; pa < (a + 10); pa++)
		cout << *pa << " ";
	cout << endl;
	system("pause");
	return 0;
}


int main() {
	int line1[] = { 1,0,0 };
	int line2[] = { 0,1,0 };
	int line3[] = { 0,0,1 };
	int *pline[3] = { line1,line2,line3 };
	cout << "matrix test:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << pline[i][j] << " ";
		cout << endl;
	}

	system("pause");
	return 0;
}


//读入三个浮点数，将整数部分和小数部分分别输出
void splitFloat(float x, int *intPart, float *fracPart) {
	*intPart = static_cast<int> (x);//取整数部分
	*fracPart = x - *intPart;//取小数部分

}
int main() {
	cout << "enter 3 float point munbers:" << endl;
	for (int i = 0; i < 3; i++) {
		float x, f;
		int n;
		cin >> x;
		splitFloat(x, &n, &f);//变量地址作为实参
		cout << "Integer Part=" << n << "fracPart = " << f << endl;
	}
	system("pause");
	return 0;
}
 
//指向常量的指针做形参
const int N = 6;
void print(const int *p, int n);
int main() {
	int array[N];
	for (int i = 0; i < N; ++i) {
		cin >> array[i];
	}
	print(array, N);
	system("pause");
	return 0;
}
 
void print(const int *p, int n) {
	cout << "{" << *p;
	for (int i = 1; i < n; i++)
		cout << "," << *(p + i);
	cout << "}" << endl;
}

void print(const int *p, int n) {
	cout << "{" << *p;
	for (int i = 1; i < n; i++)
		cout << "," << *(p + i);
	cout << "}" << endl;
}


//指针类型函数
int main() {
	int array[10];
	int* search(int* a, int num);
	void func(int n, char *s);
	void(*pf)(int a, char *d);//函数指针
	pf = func;
	for (int i = 0; i < 10; i++)
		cin >> array[i];
	int* zeroptr = search(array, 10);//将主函数中的数组的首地址传给子函数
	for (int i = 0; i < 10; i++)
		cout << array[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
int* search(int* a, int num) { //指针a指向主函数中定义的数组
	for (int i = 0; i < num; i++)
		if (a[i] == 0)
			return&a[i];//返回的地址指向的元素实在主函数中定义的
}//函数运行结束时，a【i】的地址仍有
/*
int main() {
	int* newptr();
	int* intptr = newptr();
	*intptr = 5;//访问的是合法有效的地址
	delete intptr;//如果忘记在这里释放，会造成内存泄露
	return 0;
}
int* newptr() {
	int* p = new int();
	return p;//返回的地址指向的是动态分配的空间
}//函数运行结束，p中地址仍然有效
*/

//函数指针定义和赋值  void fun(int n,char *s){}  void (*pf)(int ,char*);pf=func;

/*
class Fred;//前向引用
class Barney{
Fred *x;
};
class Fred{
Banery y;
};

*/
