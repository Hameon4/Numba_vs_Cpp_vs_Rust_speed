#include <vector>
#include <cstdio>
#include <ctime>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")


int findMax(std::vector<int> a, std::vector<int> b) {
	int A = a.size();
	int B = b.size();
	printf("%d %d\n", A, B);
	int maxi = 0;
	for (int i = 0; i < a.size(); ++i) {
		for (int j = 0; j < b.size(); ++j) {
			if (i * j > maxi)
				maxi = i * j;
		}
	}
	return maxi;
}

int main() {
	std::vector<int> a, b;
	for (int i = 0; i < 20000; ++i) {
		a.emplace_back(0.5);
		b.emplace_back(0.4);
	}
	clock_t start, end;
	start = clock();
	int s = findMax(a, b);
	end = clock();
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	printf("Time taken: %f seconds", time_taken);
	return 0;
}
