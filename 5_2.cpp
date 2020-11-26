//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
////定义一个Point类，其属性包括点的坐标，提供计算两点之间距离的方法；
////（要求当用户不输入坐标数据时，能够默认为坐标原点（0，0））
//class Point
//{
//private:
//	int x = 0;
//	int y = 0;
//public:
//	//构造函数和析构函数
//	Point()
//	{
//		cout << "Point类构造函数被执行" << endl;
//	}
//	Point(int x, int y)
//	{
//		cout << "Point类构造函数被执行" << endl;
//		this->x = x;
//		this->y = y;
//	}
//	~Point()
//	{
//		cout << "Point类析构函数被执行" << endl;
//	}
//
//	//检查函数：输出点坐标
//	void Output()
//	{
//		cout << "横坐标为：" << x << "，纵坐标为：" << y << endl;
//	}
//
//	//实现 Point类重载＋＋和――运算符：?	++p，--p，p++，p--；＋＋和――分别表示x，y增加或减少1。
//	//++p，--p
//	Point operator ++();
//	Point operator --();
//	//p++，p--
//	Point operator ++(int);
//	Point operator --(int);
//
//};
//
//Point Point::operator ++()
//{
//	Point p;
//	p.x = x + 1;
//	p.y = y + 1;
//
//	x += 1;
//	y += 1;
//	return p;
//}
//
//Point Point::operator --()
//{
//	Point p;
//	p.x = x - 1;
//	p.y = y - 1;
//
//	x -= 1;
//	y -= 1;
//	return p;
//}
//
//Point Point::operator ++(int)
//{
//	Point p;
//	p.x = x;
//	p.y = y;
//
//	x += 1;
//	y += 1;
//	return p;
//}
//
//Point Point::operator --(int)
//{
//	Point p;
//	p.x = x;
//	p.y = y;
//
//	x -= 1;
//	y -= 1;
//	return p;
//}
//
//int main()
//{
//	
//	Point A(0, 0);
//	Point B(7, 9);
//	Point C(25, 28);
//	cout << "A的初始坐标为：";
//	A.Output();
//	cout << "B的初始坐标为：";
//	B.Output();
//	cout << "C的初始坐标为：";
//	C.Output();
//	cout << endl;
//
//	//p++，p--
//	A = B++;
//	cout << "执行 p++ 操作后，A的坐标为：";
//	A.Output();
//	cout << "执行 p++ 操作后，B的坐标为：";
//	B.Output();
//	A = C--;
//	cout << "执行 p-- 操作后，A的坐标为：";
//	A.Output();
//	cout << "执行 p-- 操作后，C的坐标为：";
//	C.Output();
//	cout << endl;
//
//	//++p，--p
//	A = ++B;
//	cout << "执行 ++p 操作后，A的坐标为：";
//	A.Output();
//	cout << "执行 ++p 操作后，B的坐标为：";
//	B.Output();
//	A = --C;
//	cout << "执行 --p 操作后，A的坐标为：";
//	A.Output();
//	cout << "执行 --p 操作后，C的坐标为：";
//	C.Output();
//	cout << endl;
//	
//	
//	system("pause");
//	return 0;
//}
