//#include <iostream>
//#include <iomanip>
//
//#define Pi 3.14159265358979323846264338328
//
//using namespace std;
//
////����һ������Shape����״�������а���һ�����������������
//class Shape
//{
//protected:
//	int type;//0Ϊ���� 1ΪԲ��
//	int edge1, edge2;//����
//	int r;//�뾶
//public:
//	Shape(int type, int edge1, int edge2, int r)
//	{
//		cout << "Shape�๹�캯����ִ��" << endl;
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
//		cout << "���Ϊ" << fixed << setprecision(2) << area << endl;
//	}
//	~Shape()
//	{
//		cout << "Shape������������ִ��" << endl;
//	}
//};
//
////��Shape���������ࣺ�������Բ���ࣻ
//class Rectangular : public Shape
//{
//public:
//	Rectangular(int type, int edge1, int edge2) :Shape(type, edge1, edge2, r) 
//	{
//		cout << "Rectangular�๹�캯����ִ��" << endl;
//		this->type = type;
//		this->edge1 = edge1;
//		this->edge2 = edge2;
//	};
//	~Rectangular()
//	{
//		cout << "Rectangular������������ִ��" << endl;
//	}
//};
//class Circle : public Shape
//{
//public:
//	Circle(int type, int r) :Shape(type, edge1, edge2, r) 
//	{
//		cout << "Circle�๹�캯����ִ��" << endl;
//		this->type = type;
//		this->r = r;
//	};
//	~Circle()
//	{
//		cout << "Circle������������ִ��" << endl;
//	}
//};
//
////�Ӿ����������������ࣻ
//class Square :public Rectangular
//{
//public:
//	Square(int type, int edge1, int edge2) :Rectangular(type, edge1, edge2)
//	{
//		cout << "Square�๹�캯����ִ��" << endl;
//		this->type = type;
//		this->edge1 = edge1;
//		this->edge2 = edge2;
//	}
//	~Square()
//	{
//		cout << "Square������������ִ��" << endl;
//	}
//};
//
//int main()
//{
//	//����������Ķ��󣬹۲칹�캯���������������ô���
//	//��һ��Square һ��Circle
//	Square S(0, 2, 2);
//	Circle C(1, 1);
//
//	//�Բ�ͬ������������
//	S.Aera();
//	C.Aera();
//
//	system("pause");
//	return 0;
//}