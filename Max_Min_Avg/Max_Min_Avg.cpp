// Max_Min_Avg.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

const int SIZEOFARRAY = 10;

template<typename T>
void Max_Min_Avg(T score[]) {
	T max_score = score[0], min_score = score[0];
	double total_score = 0;
	for (int i = 0; i < SIZEOFARRAY; i++)
	{
		if (score[i] > max_score)max_score = score[i];
		if (score[i] < min_score)min_score = score[i];
		total_score += score[i];
	}
	std::cout << "Max:" << max_score << "  Min:" << min_score << "  Avg:" << total_score / SIZEOFARRAY << std::endl;

}

int main()
{	
	double score[SIZEOFARRAY];
	for (int i = 0; i < SIZEOFARRAY; i++)
	{
		std::cin >> score[i];
	}
	Max_Min_Avg(score);
	system("pause");
    return 0;
}

