//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
////
//class Martric
//{
//	//������ʵ�־��󣬶���һ��������࣬���԰�����
//	//�����С���� lines, rows���С�������ʾ����
//	//�������������ָ�룬���ݾ����С��̬���루new����
//private:
//	int line;
//	int row;
//	int** data = NULL;
//
//	//������ķ���������
//	//���캯���������Ǿ����С����Ҫ��̬���������������飻
//	//������������Ҫ�ͷž��������ָ�룻
//	//�������캯������Ҫ����͸������飻
//	//���룬���Դ�cin���������Ԫ�أ�
//	//������������ʽ�������cout��
//	//������ӵĺ�����ʵ������������ӵĹ��ܣ������������һ�������࣬����������С��ͬ��
//	//��������ĺ�����ʵ��������������Ĺ��ܣ������������һ�������࣬����������С��ͬ��
//public:
//	Martric(int line, int row)
//	{
//		cout << "Martric�๹�캯����ִ��" << endl;
//		this->line = line;
//		this->row = row;
//		this->data = new int* [line];
//		for (int i = 0;i < line;i++)
//			this->data[i] = new int[row];
//	}
//	Martric(Martric& M)
//	{
//		cout << "Martric�࿽�����캯����ִ��" << endl;
//		this->line = M.line;
//		this->row = M.row;
//		this->data = new int* [line];
//		for (int i = 0;i < line;i++)
//			this->data[i] = new int[row];
//		for (int i = 0;i < this->line;i++)
//		{
//			for (int j = 0;j < this->row;j++)
//				this->data[i][j] = M.data[i][j];
//		}
//	}
//	void Input()
//	{
//		cout << "Martric�����뺯����ִ��" << endl;
//		for (int i = 0;i < this->line;i++)
//		{
//			for (int j = 0;j < this->row;j++)
//				cin >> this->data[i][j];
//		}
//	}
//	void Output()
//	{
//		cout << "Martric�����������ִ��" << endl;
//		for (int i = 0;i < this->line;i++)
//		{
//			for (int j = 0;j < this->row;j++)
//				cout << this->data[i][j] << " ";
//			cout << endl;
//		}
//	}
//	void MarAdd(Martric& A, Martric& B, Martric& C)
//	{
//		cout << "---ִ�о���ӷ�---" << endl;
//		for (int i = 0;i < A.line;i++)
//		{
//			for (int j = 0;j < A.row;j++)
//				C.data[i][j] = A.data[i][j] + B.data[i][j];
//		}
//	}
//	void MarSub(Martric& A, Martric& B, Martric& C)
//	{
//		cout << "---ִ�о������---" << endl;
//		for (int i = 0;i < A.line;i++)
//		{
//			for (int j = 0;j < A.row;j++)
//				C.data[i][j] = A.data[i][j] - B.data[i][j];
//		}
//	}
//	~Martric()
//	{
//		cout << "Martric������������ִ��" << endl;
//		for (int i = 0;i < this->line;i++)
//		{
//			delete[] this->data[i];
//		}
//		delete[] this->data;
//	}
//};
//
//int main()
//{
//	//������������A1��A2��A3��
//	int line, row;
//	cout << "��������������������" << endl;
//	cin >> line >> row;
//	Martric A1(line, row);
//	Martric A2(line, row);
//	Martric temp(line, row);
//
//	//��ʼ��A1��A2��
//	cout << "���ʼ����һ������" << endl;
//	A1.Input();
//	cout << "���ʼ���ڶ�������" << endl;
//	A2.Input();
//
//	//���㲢���A3 = A1��A2��A3 = A1��A2����Ҫ����ʾ�������ʵ�ֶԸ�ֵ�������� = �������أ�ע���顰�Ը�ֵ�����ͷš���Ԫ�ء���
//	A1.MarAdd(A1, A2, temp);
//	Martric A3 = temp;
//	A3.Output();
//	A1.MarSub(A1, A2, A3);
//	A3.Output();
//
//	//��new��̬��������������Ķ���pA1��pA2��pA3��
//	Martric* pA1 = new Martric(line, row);
//	Martric* pA2 = new Martric(line, row);
//	Martric* pA3 = new Martric(line, row);
//
//	//��ʼ��pA1��pA2��
//	pA1->Input();
//	pA2->Input();
//
//	//���㲢���pA3 = pA1��pA2��pA3 = pA1��pA2��
//	pA1->MarAdd(*pA1, *pA2, *pA3);
//	pA3->Output();
//	pA1->MarSub(*pA1, *pA2, *pA3);
//	pA3->Output();
//
//	//�ͷ�pA1��pA2��pA3��
//	pA1->~Martric();
//	pA2->~Martric();
//	pA3->~Martric();
//
//	system("pause");
//	return 0;
//}