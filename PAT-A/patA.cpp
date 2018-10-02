//1008
#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int N, temp=0, time=0;
	cin >> N;
	int ele[105] = { 0 };
	if (N == 1)
	{
		cin >> ele[0];
		time = ele[0] * 6;
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			cin >> ele[i];
			//cout << ele[i];
			if (i == 0)
			{
				temp = ele[i] - 0;
				time = temp * 6;
			}
			else
			{
				temp = ele[i] - ele[i - 1];
				if (temp > 0) 
				{
					time += temp * 6;
				}
				else time += abs(temp) * 4;
			}
		}
	}
	time += N * 5;
	cout << time;
	system("pause");
	return 0;
}