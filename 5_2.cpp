//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
////����һ��Point�࣬�����԰���������꣬�ṩ��������֮�����ķ�����
////��Ҫ���û���������������ʱ���ܹ�Ĭ��Ϊ����ԭ�㣨0��0����
//class Point
//{
//private:
//	int x = 0;
//	int y = 0;
//public:
//	//���캯������������
//	Point()
//	{
//		cout << "Point�๹�캯����ִ��" << endl;
//	}
//	Point(int x, int y)
//	{
//		cout << "Point�๹�캯����ִ��" << endl;
//		this->x = x;
//		this->y = y;
//	}
//	~Point()
//	{
//		cout << "Point������������ִ��" << endl;
//	}
//
//	//��麯�������������
//	void Output()
//	{
//		cout << "������Ϊ��" << x << "��������Ϊ��" << y << endl;
//	}
//
//	//ʵ�� Point�����أ����ͨD�D�������?	++p��--p��p++��p--�������ͨD�D�ֱ��ʾx��y���ӻ����1��
//	//++p��--p
//	Point operator ++();
//	Point operator --();
//	//p++��p--
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
//	cout << "A�ĳ�ʼ����Ϊ��";
//	A.Output();
//	cout << "B�ĳ�ʼ����Ϊ��";
//	B.Output();
//	cout << "C�ĳ�ʼ����Ϊ��";
//	C.Output();
//	cout << endl;
//
//	//p++��p--
//	A = B++;
//	cout << "ִ�� p++ ������A������Ϊ��";
//	A.Output();
//	cout << "ִ�� p++ ������B������Ϊ��";
//	B.Output();
//	A = C--;
//	cout << "ִ�� p-- ������A������Ϊ��";
//	A.Output();
//	cout << "ִ�� p-- ������C������Ϊ��";
//	C.Output();
//	cout << endl;
//
//	//++p��--p
//	A = ++B;
//	cout << "ִ�� ++p ������A������Ϊ��";
//	A.Output();
//	cout << "ִ�� ++p ������B������Ϊ��";
//	B.Output();
//	A = --C;
//	cout << "ִ�� --p ������A������Ϊ��";
//	A.Output();
//	cout << "ִ�� --p ������C������Ϊ��";
//	C.Output();
//	cout << endl;
//	
//	
//	system("pause");
//	return 0;
//}
