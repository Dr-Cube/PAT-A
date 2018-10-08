//1001
//#include<stdio.h>
//#include<iostream>
//#include<string.h>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	long long sum_int;
//	int remainder;
//	int cnt = 0;
//	char sum[10];
//	cin >> a >> b;
//	sum_int = a + b;
//	sprintf(sum, "%d", sum_int);
//	int sumSize = strlen(sum);
//
//	if (sum_int >= 0)
//	{
//		remainder = sumSize % 3;
//		for (int i = 0; i<remainder; i++)
//		{
//			cout << sum[i];
//		}
//		if (remainder != 0 && sumSize != 1 && sumSize != 2)cout << ',';
//		for (int i = remainder; i<sumSize; i++)
//		{
//			cout << sum[i];
//			cnt++;
//			if (cnt % 3 == 0 && i != sumSize - 1) cout << ',';
//
//		}
//	}
//	else
//	{
//		cout << sum[0];
//		remainder = (sumSize - 1) % 3;
//		for (int i = 1; i<remainder + 1; i++)
//		{
//			cout << sum[i];
//		}
//		if (remainder != 0 && sumSize != 2 && sumSize != 3)cout << ',';
//		for (int i = remainder + 1; i<sumSize; i++)
//		{
//			cout << sum[i];
//			cnt++;
//			if (cnt % 3 == 0 && i != sumSize - 1) cout << ',';
//
//		}
//	}
//	return 0;
//}

//1011
//#include<stdio.h>
//#include<iostream>
//#include<string>
//using namespace std;
//double maxOdd(double odds[])
//{
//	double max = odds[0];
//	char flag = 'W';
//	for (int i = 1; i<3; i++)
//	{
//		if (max<odds[i])
//		{
//			max = odds[i];
//			if (i == 1) flag = 'T';
//			if (i == 2) flag = 'L';
//		}
//	}
//	cout << flag << ' ';
//	return max;
//}
//int main()
//{
//	double odds[3][3];
//	double maxPro, temp;
//	for (int i = 0; i<3; i++)
//	{
//		for (int j = 0; j<3; j++)
//		{
//			cin >> temp;
//			odds[i][j] = temp;
//		}
//		//cin.get();
//	}
//	maxPro = (maxOdd(odds[0]) * maxOdd(odds[1]) * maxOdd(odds[2]) * 0.65 - 1) * 2;
//	cout << maxPro;
//	return 0;
//}

//1006
//#include<stdio.h>
//#include<iostream>
//#include<cstring>
//
//using namespace std;
//int time2sec(int hh, int mm, int ss)
//{
//	return hh * 3600 + mm * 60 + ss;
//}
//int main()
//{
//	int M;
//	int inTime, outTime;
//	int inHH, outHH, inMM, outMM, inSS, outSS, tempIn, tempOut;
//	//char * inId=(char *)malloc(20*sizeof(char));
//	//char * outId=(char *)malloc(21*sizeof(char));
//	char inId[20] = "in";
//	char outId[20] = "out";
//	cin >> M;
//	char * tempId = (char *)malloc(22 * sizeof(char));
//	for (int i = 0; i<M; i++)
//	{
//		scanf("%s %d:%d:%d %d:%d:%d", tempId, &inHH, &inMM, &inSS, &outHH, &outMM, &outSS);
//		//cout<<tempId<<inMM;
//		if (i == 0)
//		{
//			strcpy(inId, tempId);
//			strcpy(outId, tempId);
//			inTime = time2sec(inHH, inMM, inSS);
//			outTime = time2sec(outHH, outMM, outSS);
//		}
//
//		tempIn = time2sec(inHH, inMM, inSS);
//		tempOut = time2sec(outHH, outMM, outSS);
//		if (tempIn<inTime)
//		{
//			inTime = tempIn;
//			strcpy(inId, tempId);
//		}
//		if (tempOut>outTime)
//		{
//			outTime = tempOut;
//			strcpy(outId, tempId);
//		}
//	}
//	cout << inId << ' ' << outId;
//	return 0;
//}


//1005
// 20/20
//#include<stdio.h>
//#include<iostream>
//#include<string>
//
//using namespace std;
//void d2w(int s)
//{
//	switch (s)
//	{
//	case 0: cout << "zero"; break;
//	case 1: cout << "one"; break;
//	case 2: cout << "two"; break;
//	case 3: cout << "three"; break;
//	case 4: cout << "four"; break;
//	case 5: cout << "five"; break;
//	case 6: cout << "six"; break;
//	case 7: cout << "seven"; break;
//	case 8: cout << "eight"; break;
//	case 9: cout << "nine"; break;
//	default:
//		break;
//	}
//}
//int main()
//{
//	int sum = 0;
//	string N;
//	char p[1000];
//	cin >> N;
//	int sizeN = N.size();
//	for (int i = 0; i < sizeN; i++)
//	{
//		sum += N[i] - '0';
//	}
//	sprintf_s(p, "%d", sum);
//	if (strlen(p) != 1)
//	{
//		for (int i = 0; i < strlen(p) - 1; i++)
//		{
//			d2w(p[i]-'0');
//			cout << ' ';
//		}
//		d2w(p[strlen(p) - 1]-'0');
//	}
//	else d2w(p[0]-'0');
//	//cout << sum<<' '<<strlen(p);
//	//cout << ' ' << sizeof(sum);
//	system("pause");
//	return 0;
//}


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