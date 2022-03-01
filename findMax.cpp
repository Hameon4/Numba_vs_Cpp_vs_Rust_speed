#include <vector>
#include <cstdio>
#include <ctime>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

int findMax(std::vector<int> a, std::vector<int> b) 
{
	printf("%d %d\n", int(a.size()), int(b.size()));
	int maxi = 0;
	for (int i = 0; i < int(a.size()); ++i) 
	{
		for (int j = 0; j < int(b.size()); ++j) 
		{
			if (i * j > maxi)
				maxi = i * j;
		}
	}
	return maxi;
}

int main()
{
	std::vector<int> a, b;
	for (int i = 0; i < 20000; ++i) 
	{
		a.emplace_back(0.5);
		b.emplace_back(0.4);
	}
	clock_t start, end;
	start = clock();
	findMax(a, b);
	end = clock();
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	printf("Time taken: %lf seconds\n", time_taken);
	return 0;
}
