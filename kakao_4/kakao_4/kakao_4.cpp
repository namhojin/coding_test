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
	
	string time = "09:00";

	const int n = 1;
	const int t = 1;
	int m =2;
	string timetable[] = { "10:09","09:00", "09:59","09:02","09:01", "08:01" };
	int count = m;
	sort(timetable, timetable + sizeof(timetable) / sizeof(string));

	cout << endl << "time = " << time.c_str() << endl;

	for (size_t i = 0; i <  sizeof(timetable) / sizeof(string); i++)
	{
		

		if (time >= timetable[i].c_str())
		{
			
			if (count == 0)
			{
				string tmp_m;
				tmp_m += time[3];
				tmp_m += time[4];
				int tmp_int_m = atoi(tmp_m.c_str());

				char tmp[3];
				tmp_int_m += t;
				_itoa_s(tmp_int_m, tmp, 10);
				
				if (tmp[1]==NULL)
				{
					time[3] = '0';
					time[4] = tmp[0];
				}
				else
				{
					time[3] = tmp[0];
					time[4] = tmp[1];
				}
				

				cout << endl << "time = " << time.c_str() << endl;

				count = m;
			}
			cout << count;
			count--;
			
		}
		cout << " : timetable[" << i << "]=" << timetable[i].c_str();
		
		cout << endl;
		
	}


//	cout << "time = " << time.c_str() << endl;
	/*
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
	*/
	

    return 0;
}

