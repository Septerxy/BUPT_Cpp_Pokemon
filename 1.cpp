//#include <iostream>
//
//using namespace std;
//
////�ٶ������СΪ4��5�����ͣ�
//typedef struct
//{
//	int Num[4][5];
//}Trc,* Mar;
//
////��������ʼ�����������Դ�cin���������Ԫ��;
//void MarInit(Mar A);
////�����������������������ʽ�������cout��
//void MarPrint(Mar A);
////���������ӵĺ�����ʵ������������ӵĹ��ܣ������������һ�������У�
//void MarAdd(Mar A, Mar B, Mar C);
////�����������ĺ�����ʵ��������������Ĺ��ܣ������������һ�������У�
//void MarSub(Mar A, Mar B, Mar C);
//
//
//int main()
//{
//	//����ռ����new��̬���룬������ָ����
//	//��̬������������A1��A2��A3��
//	Mar A1 = new Trc;
//	Mar A2 = new Trc;
//	Mar A3 = new Trc;
//
//	//��ʼ��A1��A2��
//	MarInit(A1);
//	MarInit(A2);
//
//	//���㲢���A3 = A1��A2��A3 = A1��A2��
//	MarAdd(A1, A2, A3);
//	MarPrint(A3);
//
//	MarSub(A1, A2, A3);
//	MarPrint(A3);
//
//	//�ͷž���ռ䡣
//	delete A1;
//	delete A2;
//	delete A3;
//	system("pause");
//	return 0;
//}
//
//
//void MarInit(Mar A)
//{
//	cout << "�������������о���" << endl;
//	for (int i = 0;i < 4;i++)
//	{
//		for (int j = 0;j < 5;j++)
//			cin >> A->Num[i][j];
//	}
//}
//
//void MarPrint(Mar A)
//{
//	cout << "��ǰ����Ϊ��" << endl;
//	for (int i = 0;i < 4;i++)
//	{
//		for (int j = 0;j < 5;j++)
//			cout << A->Num[i][j] << " ";
//		cout << endl;
//	}
//}
//
//void MarAdd(Mar A, Mar B, Mar C)
//{
//	cout << "---ִ�о���ӷ�---" << endl;
//	for (int i = 0;i < 4;i++)
//	{
//		for (int j = 0;j < 5;j++)
//			C->Num[i][j] = A->Num[i][j] + B->Num[i][j];
//	}
//}
//
//void MarSub(Mar A, Mar B, Mar C)
//{
//	cout << "---ִ�о������---" << endl;
//	for (int i = 0;i < 4;i++)
//	{
//		for (int j = 0;j < 5;j++)
//			C->Num[i][j] = A->Num[i][j] - B->Num[i][j];
//	}
//}