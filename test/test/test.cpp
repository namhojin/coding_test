// test.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "test code" << endl;

	int input[] = { 1,2,3,4,5 };
	int sum=1;
	for (size_t i = 0; i < sizeof(input) / sizeof(int); i++)
	{
		for (size_t j = 0; j < sizeof(input)/sizeof(int); j++)
		{
			if (i != j)
			{
				sum *= input[j];	
			}
		}
		cout << sum << endl;
		sum = 1;
	}

    return 0;
}

