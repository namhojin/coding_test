// test.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "test code" << endl;

	string test;
	test = "Hello world!!";

	cout << test.c_str() << endl;


	test = test + "1";
	cout << test.c_str() << endl;

	test[0] = test[0] + 1;
	cout << test.c_str() << endl;

    return 0;
}

