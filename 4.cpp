//#include <iostream>
//#include <time.h>
//
//using namespace std;
//
////�������ĺϷ���
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
//	//�ٶ���һ����Ʒ�������������ָ������Ʒ�ļ۸�1-1000����������
//	srand((int)time(NULL));
//	int price = rand() % 1000 + 1;
//
//	char input[100];
//	int guess = 0;
//
//	//��ʾ�û��¼۸񣬲����룺���û��µļ۸����Ʒ�۸�߻�ͣ����û�������Ӧ����ʾ��
//	cout << "��������²�ļ۸�1-1000��������" << endl;
//	while (guess != price)
//	{
//		while (cin >> input && !isint(input))
//		{
//			cout << "������1-1000��Χ�ڵ�����" << endl;
//			getchar();
//		}
//		//��ʾ�û��¼۸񣬲����룺���û��µļ۸����Ʒ�۸�߻�ͣ����û�������Ӧ����ʾ��
//		guess = atoi(input);
//		if (guess < price)
//			cout << "��µļ۸�̫����" << endl;
//		else if (guess > price)
//			cout << "��µļ۸�̫����" << endl;
//	}
//
//	//ֱ���¶�Ϊֹ����������ʾ��
//	cout << "��¶���" << endl;
//	system("pause");
//	return 0;
//}