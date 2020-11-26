//#include <iostream>
//#include <iomanip>
//
//#define Pi 3.14159265358979323846264338328
//
//using namespace std;
//
////声明一个基类Shape（形状），其中包含一个方法来计算面积；
//class Shape
//{
//protected:
//	int type;//0为矩形 1为圆形
//	int edge1, edge2;//矩形
//	int r;//半径
//public:
//	Shape(int type, int edge1, int edge2, int r)
//	{
//		cout << "Shape类构造函数被执行" << endl;
//		this->type = type;
//		this->edge1 = edge1;
//		this->edge2 = edge2;
//		this->r = r;
//	}
//	void Aera()
//	{
//		double area = 0;
//		if (type == 0)
//			area = edge1 * edge2;
//		else if (type == 1)
//			area = Pi * r * r;
//		cout.setf(ios::fixed);
//		cout << "面积为" << fixed << setprecision(2) << area << endl;
//	}
//	~Shape()
//	{
//		cout << "Shape类析构函数被执行" << endl;
//	}
//};
//
////从Shape派生两个类：矩形类和圆形类；
//class Rectangular : public Shape
//{
//public:
//	Rectangular(int type, int edge1, int edge2) :Shape(type, edge1, edge2, r) 
//	{
//		cout << "Rectangular类构造函数被执行" << endl;
//		this->type = type;
//		this->edge1 = edge1;
//		this->edge2 = edge2;
//	};
//	~Rectangular()
//	{
//		cout << "Rectangular类析构函数被执行" << endl;
//	}
//};
//class Circle : public Shape
//{
//public:
//	Circle(int type, int r) :Shape(type, edge1, edge2, r) 
//	{
//		cout << "Circle类构造函数被执行" << endl;
//		this->type = type;
//		this->r = r;
//	};
//	~Circle()
//	{
//		cout << "Circle类析构函数被执行" << endl;
//	}
//};
//
////从矩形类派生正方形类；
//class Square :public Rectangular
//{
//public:
//	Square(int type, int edge1, int edge2) :Rectangular(type, edge1, edge2)
//	{
//		cout << "Square类构造函数被执行" << endl;
//		this->type = type;
//		this->edge1 = edge1;
//		this->edge2 = edge2;
//	}
//	~Square()
//	{
//		cout << "Square类析构函数被执行" << endl;
//	}
//};
//
//int main()
//{
//	//创建派生类的对象，观察构造函数、析构函数调用次序；
//	//建一个Square 一个Circle
//	Square S(0, 2, 2);
//	Circle C(1, 1);
//
//	//对不同对象计算面积。
//	S.Aera();
//	C.Aera();
//
//	system("pause");
//	return 0;
//}