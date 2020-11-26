//#include <iostream>
//
//using namespace std;
//
////假定矩阵大小为4×5（整型）
//typedef struct
//{
//	int Num[4][5];
//}Trc,* Mar;
//
////定义矩阵初始化函数，可以从cin中输入矩阵元素;
//void MarInit(Mar A);
////定义矩阵输出函数，将矩阵格式化输出到cout；
//void MarPrint(Mar A);
////定义矩阵相加的函数，实现两个矩阵相加的功能，结果保存在另一个矩阵中；
//void MarAdd(Mar A, Mar B, Mar C);
////定义矩阵相减的函数，实现两个矩阵相减的功能，结果保存在另一个矩阵中；
//void MarSub(Mar A, Mar B, Mar C);
//
//
//int main()
//{
//	//矩阵空间采用new动态申请，保存在指针中
//	//动态申请三个矩阵：A1、A2、A3；
//	Mar A1 = new Trc;
//	Mar A2 = new Trc;
//	Mar A3 = new Trc;
//
//	//初始化A1、A2；
//	MarInit(A1);
//	MarInit(A2);
//
//	//计算并输出A3 = A1加A2，A3 = A1减A2；
//	MarAdd(A1, A2, A3);
//	MarPrint(A3);
//
//	MarSub(A1, A2, A3);
//	MarPrint(A3);
//
//	//释放矩阵空间。
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
//	cout << "请输入四行五列矩阵：" << endl;
//	for (int i = 0;i < 4;i++)
//	{
//		for (int j = 0;j < 5;j++)
//			cin >> A->Num[i][j];
//	}
//}
//
//void MarPrint(Mar A)
//{
//	cout << "当前矩阵为：" << endl;
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
//	cout << "---执行矩阵加法---" << endl;
//	for (int i = 0;i < 4;i++)
//	{
//		for (int j = 0;j < 5;j++)
//			C->Num[i][j] = A->Num[i][j] + B->Num[i][j];
//	}
//}
//
//void MarSub(Mar A, Mar B, Mar C)
//{
//	cout << "---执行矩阵减法---" << endl;
//	for (int i = 0;i < 4;i++)
//	{
//		for (int j = 0;j < 5;j++)
//			C->Num[i][j] = A->Num[i][j] - B->Num[i][j];
//	}
//}