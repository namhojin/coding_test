// kakao_1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "kakao exam1" << endl;
	cout << "input size = ";
	int n;
	cin >> n;
	int arr1[16] = { 9, 20, 28, 18, 11 };
	int arr2[16] = { 30, 1, 21, 17, 28 };
	int result[16];

	for (size_t i = 0; i < n; i++)
	{
		result[i] = arr1[i] | arr2[i];
//		cout << result[i] << endl;
		for (size_t j = n; j >0; j--)
		{
		//	cout << (result[i]>>(j-1) &1);
			if (result[i] >> (j - 1) & 1 == 1)
			{
				cout << "#";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

    return 0;
}

