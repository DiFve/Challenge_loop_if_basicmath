#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float avg = 0,sum=0;
	int firstNum, secNum;
	cin >> firstNum >> secNum;
	int count = abs(firstNum - secNum)+1;
	avg = ((count/2.00)*(firstNum+secNum)/ abs(count));
	if (firstNum > secNum)
	{
		for (int i = firstNum; i >= secNum; i--)
		{
			cout << i << " ";
			sum += pow(i - avg, 2);
		}
	}
	else
	{
		for (int i = firstNum; i <= secNum; i++)
		{
			cout << i << " ";
			sum += pow(i - avg, 2);
		}
	}
	cout << endl;
	cout << "Average : " << avg << endl;
	if(count==1)
		printf("S.D. : ERROR");
	else
		printf("S.D. : %.2f", sqrt(sum / (count - 1)));
	return 0;
}