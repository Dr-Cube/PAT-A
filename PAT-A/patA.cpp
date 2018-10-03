//1005
// 20/20
#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;
void d2w(int s)
{
	switch (s)
	{
	case 0: cout << "zero"; break;
	case 1: cout << "one"; break;
	case 2: cout << "two"; break;
	case 3: cout << "three"; break;
	case 4: cout << "four"; break;
	case 5: cout << "five"; break;
	case 6: cout << "six"; break;
	case 7: cout << "seven"; break;
	case 8: cout << "eight"; break;
	case 9: cout << "nine"; break;
	default:
		break;
	}
}
int main()
{
	int sum = 0;
	string N;
	char p[1000];
	cin >> N;
	int sizeN = N.size();
	for (int i = 0; i < sizeN; i++)
	{
		sum += N[i] - '0';
	}
	sprintf_s(p, "%d", sum);
	if (strlen(p) != 1)
	{
		for (int i = 0; i < strlen(p) - 1; i++)
		{
			d2w(p[i]-'0');
			cout << ' ';
		}
		d2w(p[strlen(p) - 1]-'0');
	}
	else d2w(p[0]-'0');
	//cout << sum<<' '<<strlen(p);
	//cout << ' ' << sizeof(sum);
	system("pause");
	return 0;
}


//1008
// 20/20
//#include<stdio.h>
//#include<iostream>
//#include<math.h>
//
//using namespace std;
//
//int main()
//{
//	int N, temp=0, time=0;
//	cin >> N;
//	int ele[105] = { 0 };
//	if (N == 1)
//	{
//		cin >> ele[0];
//		time = ele[0] * 6;
//	}
//	else
//	{
//		for (int i = 0; i < N; i++)
//		{
//			cin >> ele[i];
//			//cout << ele[i];
//			if (i == 0)
//			{
//				temp = ele[i] - 0;
//				time = temp * 6;
//			}
//			else
//			{
//				temp = ele[i] - ele[i - 1];
//				if (temp > 0) 
//				{
//					time += temp * 6;
//				}
//				else time += abs(temp) * 4;
//			}
//		}
//	}
//	time += N * 5;
//	cout << time;
//	system("pause");
//	return 0;
//}