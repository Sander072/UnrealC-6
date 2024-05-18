#include <iostream>

#define N 7

int main()
{
	int array[N][N];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			array[i][j] = i + j;
			std::cout << array[i][j] << ' ';
		}
		std::cout << "\n";
	}
	std::cout << "\n";

	int sum = 0;

	for (int x = 0; x < N; x++)
	{
		sum += array[18 % N][x];
	}
	std::cout << sum << "\n";

	return 0;
}
