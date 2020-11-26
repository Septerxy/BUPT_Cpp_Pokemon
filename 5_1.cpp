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
//public:
//	virtual float area() = 0;//这是一个纯虚函数
//	Shape()
//	{
//		cout << "Shape类构造函数被执行" << endl;
//	}
//
//	~Shape()
//	{
//		cout << "Shape类析构函数被执行" << endl;
//	}
//};
//
////从Shape派生两个类：矩形类和圆形类；
//class Rectangular : public Shape
//{
//private:
//	float length, wide;
//public:
//	Rectangular(float len, float wid) 
//	{
//		cout << "Rectangular类构造函数被执行" << endl;
//		length = len;
//		wide = wid;
//	};
//	~Rectangular()
//	{
//		cout << "Rectangular类析构函数被执行" << endl;
//	}
//	float area()
//	{
//		return length * wide;
//	}
//};
//class Circle : public Shape
//{
//private:
//	float R;
//public:
//	Circle(float r)
//	{
//		cout << "Circle类构造函数被执行" << endl;
//		R = r;
//	};
//	~Circle()
//	{
//		cout << "Circle类析构函数被执行" << endl;
//	}
//	float area()
//	{
//		return Pi * R * R;
//	}
//};
//
////从矩形类派生正方形类；
//class Square :public Rectangular
//{
//private:
//	float edge;
//public:
//	Square(float e) :Rectangular(e, e)//构造直接基类
//	{
//		cout << "Square类构造函数被执行" << endl;
//		edge = e;
//	}
//	~Square()
//	{
//		cout << "Square类析构函数被执行" << endl;
//	}
//	//因为基类里面已经有area函数，这里不再写
//};
//
//int main()
//{
//	//将【形状】 中的基类计算面积的方法定义为虚函数，比较与【形状（A）】程序的差异；
//	//将【形状】中的基类定义为抽象类，比较与【形状（A）】程序的差异。
//	float a, b, r, e;
//	cout << "请输入矩形的长和宽：" << endl;
//	cin >> a >> b;
//	Rectangular T(a, b);
//	//我们不能实例化抽象类，那样编译器会报错，抽象类只提供一个接口，他不清楚子类如何对基类中的纯虚函数的实现
//	Shape* t = new Rectangular(a, b);
//	//将【形状】 中的基类计算面积的方法定义为虚函数，比较与【形状（A）】程序的差异；
//	cout << "矩形面积为：" << T.area() << endl;
//	cout << "矩形面积为：" << t->area() << endl;
//	cout << endl;
//	
//	cout << "请输入圆的半径：" << endl;
//	cin >> r;
//	Circle c(r);
//	cout << "圆的面积为：" << c.area() << endl;
//	cout << endl;
//
//	cout << "请输入正方形的边长：" << endl;
//	cin >> e;
//	Square s(e);
//	cout << "正方形的面积为：" << s.area() << endl;
//	cout << endl;
//
//	system("pause");
//	return 0;
//}