//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
////����һ��Point�࣬�����԰���������꣬�ṩ��������֮�����ķ�����
////��Ҫ���û���������������ʱ���ܹ�Ĭ��Ϊ����ԭ�㣨0��0����
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
//		cout << "Point�๹�캯����ִ��" << endl;
//		this->x = x;
//		this->y = y;
//	}
//	~Point()
//	{
//		cout << "Point������������ִ��" << endl;
//	}
//};
//
////����һ��Բ���࣬�����԰���Բ�ĺͰ뾶��
//class Circle
//{
//private:
//	Point center;
//	int route;
//public:
//	Circle(int x, int y, int r):center(x,y),route(r)
//	{
//		cout << "Circle�๹�캯����ִ��" << endl;
//	}
//	~Circle()
//	{
//		cout << "Circle������������ִ��" << endl;
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
//		cout << "Judge�๹�캯����ִ��" << endl;
//		if ((abs(sqrt(((x1 - x2) ^ 2) + ((y1 - y2) ^ 2))) > abs(r1 - r2)) && (abs(sqrt(((x1 - x2) ^ 2) + ((y1 - y2) ^ 2))) < abs(r1 + r2)))
//			cout << "��Բ�ཻ" << endl;
//		else
//		{
//			if (((abs(sqrt(((x1 - x2) ^ 2) + ((y1 - y2) ^ 2)))) > 0) && ((abs(sqrt(((x1 - x2) ^ 2) + ((y1 - y2) ^ 2)))) < abs(r1 - r2)))
//				cout << "��Բ���ཻ" << endl;
//			else
//				cout << "��Բ�ཻ" << endl;
//		}
//			
//	}
//	~Judge()
//	{
//		cout << "Judge������������ִ��" << endl;
//	}
//};
//
//int main()
//{
//	//��������Բ�ζ�����ʾ�û�����Բ������Ͱ뾶���ж�����Բ�Ƿ��ཻ������������
//	cout << "�������һ��Բ��Բ������Ͱ뾶����ʽΪ��Բ�ĺ����� Բ�������� �뾶" << endl;
//	int x1, y1, r1;
//	cin >> x1 >> y1 >> r1;
//	cout << "������ڶ���Բ��Բ������Ͱ뾶����ʽΪ��Բ�ĺ����� Բ�������� �뾶" << endl;
//	int x2, y2, r2;
//	cin >> x2 >> y2 >> r2;
//
//	Judge j(x1, y1, r1, x2, y2, r2);
//	
//	system("pause");
//	return 0;
//}
