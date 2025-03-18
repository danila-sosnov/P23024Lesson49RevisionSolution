#include "util.h"

string convert(int** matrix, int n, int m) {
	string s = "";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			s += to_string(matrix[i][j]) + " ";
		}
		s += "\n";
	}

	return s;
}

void init(int** matrix, int n, int m, int b, int a)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[n][m] = rand() % (b - a + 1) + a;
		}

	}
}