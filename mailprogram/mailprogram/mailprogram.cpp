// mailprogram.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout << "mail programming" << endl;

	int current_sum;
	int sum;

	int input[] = { 2, 4, -2, -3, 8 };

	current_sum = input[0];
	sum = input[0];
	cout << "input[0]=" << input[0] << " / current_sum = " << current_sum << endl;
	cout << "sum = " << sum << endl;

	for (size_t i = 1; i < sizeof(input)/sizeof(int); i++)
	{
		if (current_sum + input[i] > input[i])
		{
			current_sum = current_sum + input[i];
		}
		else
		{
			current_sum = input[i];
		}
		
		cout << "input[" << i << "]=" << input[i] << " / current_sum = " << current_sum << endl;

		
		if (sum < current_sum)
		{
			sum = current_sum;
		}
		
		cout << "sum = " << sum << endl;
	//	current_sum = 0;

	}

    return 0;
}
