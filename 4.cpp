//#include <iostream>
//#include <time.h>
//
//using namespace std;
//
////检查输入的合法性
//bool isint(char s[])
//{
//	for (int i = 0; s[i] != '\0'; i++)
//		if (s[i] < 1 || s[i]>255 || !isdigit(s[i]))
//			return false;
//	return true;
//}
//
//int main()
//{
//	//假定有一件商品，程序用随机数指定该商品的价格（1-1000的整数）；
//	srand((int)time(NULL));
//	int price = rand() % 1000 + 1;
//
//	char input[100];
//	int guess = 0;
//
//	//提示用户猜价格，并输入：若用户猜的价格比商品价格高或低，对用户作出相应的提示；
//	cout << "请输入你猜测的价格（1-1000的整数）" << endl;
//	while (guess != price)
//	{
//		while (cin >> input && !isint(input))
//		{
//			cout << "请输入1-1000范围内的整数" << endl;
//			getchar();
//		}
//		//提示用户猜价格，并输入：若用户猜的价格比商品价格高或低，对用户作出相应的提示；
//		guess = atoi(input);
//		if (guess < price)
//			cout << "你猜的价格太低了" << endl;
//		else if (guess > price)
//			cout << "你猜的价格太高了" << endl;
//	}
//
//	//直到猜对为止，并给出提示。
//	cout << "你猜对了" << endl;
//	system("pause");
//	return 0;
//}