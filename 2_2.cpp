//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
////
//class Martric
//{
//	//用类来实现矩阵，定义一个矩阵的类，属性包括：
//	//矩阵大小，用 lines, rows（行、列来表示）；
//	//存贮矩阵的数组指针，根据矩阵大小动态申请（new）。
//private:
//	int line;
//	int row;
//	int** data = NULL;
//
//	//矩阵类的方法包括：
//	//构造函数，参数是矩阵大小，需要动态申请存贮矩阵的数组；
//	//析构函数，需要释放矩阵的数组指针；
//	//拷贝构造函数，需要申请和复制数组；
//	//输入，可以从cin中输入矩阵元素；
//	//输出，将矩阵格式化输出到cout；
//	//矩阵相加的函数，实现两个矩阵相加的功能，结果保存在另一个矩阵类，但必须矩阵大小相同；
//	//矩阵相减的函数，实现两个矩阵相减的功能，结果保存在另一个矩阵类，但必须矩阵大小相同。
//public:
//	Martric(int line, int row)
//	{
//		cout << "Martric类构造函数被执行" << endl;
//		this->line = line;
//		this->row = row;
//		this->data = new int* [line];
//		for (int i = 0;i < line;i++)
//			this->data[i] = new int[row];
//	}
//	Martric(Martric& M)
//	{
//		cout << "Martric类拷贝构造函数被执行" << endl;
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
//		cout << "Martric类输入函数被执行" << endl;
//		for (int i = 0;i < this->line;i++)
//		{
//			for (int j = 0;j < this->row;j++)
//				cin >> this->data[i][j];
//		}
//	}
//	void Output()
//	{
//		cout << "Martric类输出函数被执行" << endl;
//		for (int i = 0;i < this->line;i++)
//		{
//			for (int j = 0;j < this->row;j++)
//				cout << this->data[i][j] << " ";
//			cout << endl;
//		}
//	}
//	void MarAdd(Martric& A, Martric& B, Martric& C)
//	{
//		cout << "---执行矩阵加法---" << endl;
//		for (int i = 0;i < A.line;i++)
//		{
//			for (int j = 0;j < A.row;j++)
//				C.data[i][j] = A.data[i][j] + B.data[i][j];
//		}
//	}
//	void MarSub(Martric& A, Martric& B, Martric& C)
//	{
//		cout << "---执行矩阵减法---" << endl;
//		for (int i = 0;i < A.line;i++)
//		{
//			for (int j = 0;j < A.row;j++)
//				C.data[i][j] = A.data[i][j] - B.data[i][j];
//		}
//	}
//	~Martric()
//	{
//		cout << "Martric类析构函数被执行" << endl;
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
//	//定义三个矩阵：A1、A2、A3；
//	int line, row;
//	cout << "请输入矩阵的行数与列数" << endl;
//	cin >> line >> row;
//	Martric A1(line, row);
//	Martric A2(line, row);
//	Martric temp(line, row);
//
//	//初始化A1、A2；
//	cout << "请初始化第一个矩阵" << endl;
//	A1.Input();
//	cout << "请初始化第二个矩阵" << endl;
//	A2.Input();
//
//	//计算并输出A3 = A1加A2，A3 = A1减A2；（要求及提示：最好能实现对赋值操作符“ = ”的重载；注意检查“自赋值”、释放“旧元素”）
//	A1.MarAdd(A1, A2, temp);
//	Martric A3 = temp;
//	A3.Output();
//	A1.MarSub(A1, A2, A3);
//	A3.Output();
//
//	//用new动态创建三个矩阵类的对象：pA1、pA2、pA3；
//	Martric* pA1 = new Martric(line, row);
//	Martric* pA2 = new Martric(line, row);
//	Martric* pA3 = new Martric(line, row);
//
//	//初始化pA1、pA2；
//	pA1->Input();
//	pA2->Input();
//
//	//计算并输出pA3 = pA1加pA2，pA3 = pA1减pA2；
//	pA1->MarAdd(*pA1, *pA2, *pA3);
//	pA3->Output();
//	pA1->MarSub(*pA1, *pA2, *pA3);
//	pA3->Output();
//
//	//释放pA1、pA2、pA3。
//	pA1->~Martric();
//	pA2->~Martric();
//	pA3->~Martric();
//
//	system("pause");
//	return 0;
//}