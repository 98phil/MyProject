#include<iostream>

int main()
{
	using namespace std;
	int n = 10;
	cout << "hello world" <<n<< endl;

	//2019/6/4 22：34添加的注释
	
	int m;
	cin >> m;
	cout << "m=" << m << endl;
	
	cin.get();		//第一个cin吸收Enter
	cin.get();		//第二个cin让程序暂停
	//main函数中的return 0可以省略
}
