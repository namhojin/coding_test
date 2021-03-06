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
	char s1[] = "1D2S3T*";
	Score score[3];

	int i=0;
	for (size_t j = 0; j < 3; j++)
	{		
		if ((s1[i]=='1') && (s1[i+1]=='0'))
		{
			score[j].num = 10;
			i++;
		}
		else
		{
			score[j].num = s1[i] - 48;		//char to int
		}
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
	
	std::cout << score[0].num << endl;
	std::cout << score[1].num << endl;
	std::cout << score[2].num << endl;

	std::cout << score[0].bonus << endl;
	std::cout << score[1].bonus << endl;
	std::cout << score[2].bonus << endl;

	std::cout << score[0].option << endl;
	std::cout << score[1].option << endl;
	std::cout << score[2].option << endl;
	
	for (size_t i = 0; i < 3; i++)
	{
		if (score[i].bonus == 'D')
		{
			score[i].num = score[i].num * score[i].num;
		}
		else if (score[i].bonus == 'T')
		{
			score[i].num = score[i].num * score[i].num * score[i].num;
		}

		if (score[i].option == '#')
		{
			score[i].num = score[i].num * (-1);
		}
		else if (score[i].option == '*') {
			score[i].num = score[i].num * 2;
			if (i != 0) {
				score[i-1].num = score[i-1].num * 2;
			}
		}
	}
	std::cout << "-----------------------" << endl;
	std::cout << score[0].num << endl;
	std::cout << score[1].num << endl;
	std::cout << score[2].num << endl;
	std::cout << "-----------------------" << endl;
	std::cout << "result = " << score[0].num+ score[1].num+ score[2].num << endl;

    return 0;
}

