// kakao_2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	cout << "kakao_2" << endl;

	char * token = NULL;
	char s1[] = "1D#2S*3S";
	char s2[] = "*,#";
	char * context = NULL;

	token = strtok(s1, s2);

	

	for (size_t i = 0; i < sizeof(s1); i++)
	{
		cout << s1[i] << endl;

	}

    return 0;
}

