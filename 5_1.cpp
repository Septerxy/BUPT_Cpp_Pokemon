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
//public:
//	virtual float area() = 0;//����һ�����麯��
//	Shape()
//	{
//		cout << "Shape�๹�캯����ִ��" << endl;
//	}
//
//	~Shape()
//	{
//		cout << "Shape������������ִ��" << endl;
//	}
//};
//
////��Shape���������ࣺ�������Բ���ࣻ
//class Rectangular : public Shape
//{
//private:
//	float length, wide;
//public:
//	Rectangular(float len, float wid) 
//	{
//		cout << "Rectangular�๹�캯����ִ��" << endl;
//		length = len;
//		wide = wid;
//	};
//	~Rectangular()
//	{
//		cout << "Rectangular������������ִ��" << endl;
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
//		cout << "Circle�๹�캯����ִ��" << endl;
//		R = r;
//	};
//	~Circle()
//	{
//		cout << "Circle������������ִ��" << endl;
//	}
//	float area()
//	{
//		return Pi * R * R;
//	}
//};
//
////�Ӿ����������������ࣻ
//class Square :public Rectangular
//{
//private:
//	float edge;
//public:
//	Square(float e) :Rectangular(e, e)//����ֱ�ӻ���
//	{
//		cout << "Square�๹�캯����ִ��" << endl;
//		edge = e;
//	}
//	~Square()
//	{
//		cout << "Square������������ִ��" << endl;
//	}
//	//��Ϊ���������Ѿ���area���������ﲻ��д
//};
//
//int main()
//{
//	//������״�� �еĻ����������ķ�������Ϊ�麯�����Ƚ��롾��״��A��������Ĳ��죻
//	//������״���еĻ��ඨ��Ϊ�����࣬�Ƚ��롾��״��A��������Ĳ��졣
//	float a, b, r, e;
//	cout << "��������εĳ��Ϳ�" << endl;
//	cin >> a >> b;
//	Rectangular T(a, b);
//	//���ǲ���ʵ���������࣬�����������ᱨ��������ֻ�ṩһ���ӿڣ��������������ζԻ����еĴ��麯����ʵ��
//	Shape* t = new Rectangular(a, b);
//	//������״�� �еĻ����������ķ�������Ϊ�麯�����Ƚ��롾��״��A��������Ĳ��죻
//	cout << "�������Ϊ��" << T.area() << endl;
//	cout << "�������Ϊ��" << t->area() << endl;
//	cout << endl;
//	
//	cout << "������Բ�İ뾶��" << endl;
//	cin >> r;
//	Circle c(r);
//	cout << "Բ�����Ϊ��" << c.area() << endl;
//	cout << endl;
//
//	cout << "�����������εı߳���" << endl;
//	cin >> e;
//	Square s(e);
//	cout << "�����ε����Ϊ��" << s.area() << endl;
//	cout << endl;
//
//	system("pause");
//	return 0;
//}