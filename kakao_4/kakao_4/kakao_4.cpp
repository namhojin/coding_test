// kakao_4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;


int main()
{
	cout << "kakao_4" << endl;
	int count;
	string time = "09:00";

	const int n = 1;
	const int t = 19;
	const int m = 5;
	TBYTE shuttle[m];
	string timetable[] = { "10:09","08:59", "09:59", "08:01", "08:02", "08:03" };
	sort(timetable, timetable + 6);
	for (size_t i = 0; i <  sizeof(timetable) / sizeof(string); i++)
	{
		cout << "timetable[" << i << "]=" << timetable[i].c_str();
		if (time > timetable[i].c_str())
		{
			cout << "*";
		}
		cout << endl;
	}


//	cout << "time = " << time.c_str() << endl;

	string tmp_m;
	tmp_m += time[3];
	tmp_m += time[4];
	int tmp_int_m = atoi(tmp_m.c_str());

	char tmp[3];
	tmp_int_m += t;
	_itoa_s(tmp_int_m, tmp, 10);
	time[3] = tmp[0];
	time[4] = tmp[1];

	cout << "time = " << time.c_str() << endl;

    return 0;
}

