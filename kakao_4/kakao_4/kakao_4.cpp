// kakao_4.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;


string shuttle_time(string time, int t) {
	string tmp_h, tmp_m;
	tmp_h += time[0];
	tmp_h += time[1];
	tmp_m += time[3];
	tmp_m += time[4];
	int tmp_int_m = atoi(tmp_m.c_str());

	char tmp[3];
	tmp_int_m += t;
	if (tmp_int_m >= 60) {
		tmp_int_m = tmp_int_m - 60;
		if (time[1] == '9')
		{
			time[0] = time[0] + 1;
			time[1] = '0';
		}
		else {
			time[1] = time[1] + 1;
		}
	}
	_itoa_s(tmp_int_m, tmp, 10);

	if (tmp[1] == NULL)
	{
		time[3] = '0';
		time[4] = tmp[0];
	}
	else
	{
		time[3] = tmp[0];
		time[4] = tmp[1];
	}
	return time;
}

int main()
{
	std::cout << "kakao_4" << endl;
	
	string time = "09:00";

	int n = 4;
	const int t = 10;
	int m =4;
	string timetable[] = { "08:09","09:00", "09:59","09:02","09:01", "08:01" , "18:01" , "13:01" };
	int count = m;
	sort(timetable, timetable + sizeof(timetable) / sizeof(string));

	for (size_t i = 0; i <  sizeof(timetable) / sizeof(string); i++){
		if (time >= timetable[i].c_str()){
			if (count == 0){
				time = shuttle_time(time, t);
				
				count = m;
				n--;
			}

			std::cout << count;
			count--;	
		}
		else {
			while (time < timetable[i].c_str()) {
				time = shuttle_time(time, t);
			}
			count = m;
			n--;
			std::cout << count;
			count--;
			
		}
		std::cout << " : timetable[" << i << "]=" << timetable[i].c_str() << endl;
		
		cout << "time = " << time.c_str() << endl;
		
	}	

    return 0;
}

