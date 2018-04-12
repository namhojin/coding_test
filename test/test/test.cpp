// test.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void sample_1();
void sample_2();

int main()
{
//	sample_1();
	sample_2();
	
    return 0;
}

void sample_2() {
	cout << "mailprogramming sample 2" << endl;

	string input = "ABC 123";
	
	char tmp[] = input.c_str();

	char *context = NULL;
	char *token = strtok_s(tmp, " ", &context);

	for (size_t i = input.length(); i > 0; i--)
	{
		cout << input[i-1];
	}
	cout << endl;

}
void sample_1() {
	cout << "mailprogramming sample 1" << endl;

	int input[] = { 1,2,3,4,5,6 };
	int sum = 1;
	for (size_t i = 0; i < sizeof(input) / sizeof(int); i++)
	{
		for (size_t j = 0; j < sizeof(input) / sizeof(int); j++)
		{
			if (i != j)
			{
				sum *= input[j];
			}
		}
		cout << sum << endl;
		sum = 1;
	}
}