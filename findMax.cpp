#include <vector>
#include <iostream>
#pragma GCC optimize("O1")


int findMax(std::vector<int> a, std::vector<int> b) {
	std::cout << a.size() << " " << b.size() << std::endl;
	int maxi = 0;
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			if (i * j > maxi)
				maxi = i * j;
		}
	}
	return maxi;
}

int main() {
	std::vector<int> a, b;
	for (int i = 0; i < 20000; i++) {
		a.push_back(0.5);
		b.push_back(0.4);
	}
	clock_t start, end;
	start = clock();
	int s = findMax(a, b);
	end = clock();
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	std::cout << time_taken << " seconds";
	return 0;
}
