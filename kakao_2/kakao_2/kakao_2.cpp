// kakao_2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string.h>

using namespace std;

struct Score
{
	int num;
	char bonus;
	char option;
};

int main()
{
	std::cout << "kakao_2" << endl;

	char *context = NULL;
	char s1[] = "1D#5T*3S";
	Score score[3];

	int i=0;
	for (size_t j = 0; j < 3; j++)
	{
		std::cout << "s1 : " << s1[i] << endl;
		score[j].num = s1[i];
		
		i++;
		switch (s1[i])
		{
		case 'S':
			score[j].bonus = 'S';
			break;
		case 'D':
			score[j].bonus = 'D';
			break;
		case 'T':
			score[j].bonus = 'T';
			break;
		default:
			break;
		}
		i++;
		switch (s1[i])
		{
		case '#':
			score[j].option = '#';
			i++;
			break;
		case '*':
			score[j].option = '*';
			i++;
			break;
		default:
			break;
		}
	}
	

	std::cout << score[0].bonus << endl;
	std::cout << score[1].bonus << endl;
	std::cout << score[2].bonus << endl;

	std::cout << score[0].option << endl;
	std::cout << score[1].option << endl;
	std::cout << score[2].option << endl;


    return 0;
}

