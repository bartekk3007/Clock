#include <iostream>
#include <ctime>

int main()
{
	int count = 100;
	clock_t c1 = clock();

	for (int i = 0; i < count; i++)
	{
		std::cout << i << '\n';
	}

	clock_t c2 = clock();

	double time = double(c2 - c1) / CLOCKS_PER_SEC;

	std::cout << "It took " << time << " seconds\n";

	return 0;
}