//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
////定义一个Point类，其属性包括点的坐标，提供计算两点之间距离的方法；
////（要求当用户不输入坐标数据时，能够默认为坐标原点（0，0））
//
//double max(double a, double b)
//{
//	if (a >= b)
//		return a;
//	else
//		return b;
//}
//
//class Point
//{
//private:
//	int x = 0;
//	int y = 0;
//public:
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
//};
//
////定义一个圆形类，其属性包括圆心和半径；
//class Circle
//{
//private:
//	Point center;
//	int route;
//public:
//	Circle(int x, int y, int r):center(x,y),route(r)
//	{
//		cout << "Circle类构造函数被执行" << endl;
//	}
//	~Circle()
//	{
//		cout << "Circle类析构函数被执行" << endl;
//	}
//};
//
//class Judge
//{
//private:
//	Circle C1;
//	Circle C2;
//public:
//	Judge(int x1, int y1, int r1, int x2, int y2, int r2) :C1(x1, y1, r1), C2(x2, y2, r2)
//	{
//		cout << "Judge类构造函数被执行" << endl;
//		if ((abs(sqrt(((x1 - x2) ^ 2) + ((y1 - y2) ^ 2))) > abs(r1 - r2)) && (abs(sqrt(((x1 - x2) ^ 2) + ((y1 - y2) ^ 2))) < abs(r1 + r2)))
//			cout << "两圆相交" << endl;
//		else
//		{
//			if (((abs(sqrt(((x1 - x2) ^ 2) + ((y1 - y2) ^ 2)))) > 0) && ((abs(sqrt(((x1 - x2) ^ 2) + ((y1 - y2) ^ 2)))) < abs(r1 - r2)))
//				cout << "两圆不相交" << endl;
//			else
//				cout << "两圆相交" << endl;
//		}
//			
//	}
//	~Judge()
//	{
//		cout << "Judge类析构函数被执行" << endl;
//	}
//};
//
//int main()
//{
//	//创建两个圆形对象，提示用户输入圆心坐标和半径，判断两个圆是否相交，并输出结果；
//	cout << "请输入第一个圆的圆心坐标和半径，格式为：圆心横坐标 圆心纵坐标 半径" << endl;
//	int x1, y1, r1;
//	cin >> x1 >> y1 >> r1;
//	cout << "请输入第二个圆的圆心坐标和半径，格式为：圆心横坐标 圆心纵坐标 半径" << endl;
//	int x2, y2, r2;
//	cin >> x2 >> y2 >> r2;
//
//	Judge j(x1, y1, r1, x2, y2, r2);
//	
//	system("pause");
//	return 0;
//}
