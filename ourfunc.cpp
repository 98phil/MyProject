#include<iostream>
using namespace std;		//提前使用名称空间。可以使后面的函数不再使用该代码
//void func1(int n);			//要使用的函数需要事先声明函数原型

void func1(int n)
{
	cout << "给你" << n << "个苹果" << endl;
}
int main() {
	int m;
	cout << "hello world" << endl;
	cin >> m;
	func1(m);
	cin.get();
	cin.get();

	return 0;
}

