#include <vector>
#include <ctime>
#include <iostream>
using namespace std;


int findMax(vector<float> a, vector<float> b) {
	cout << a.size() << " " << b.size();
	float maxi = 0;
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			if (i * j > maxi)
				maxi = i * j;
		}
	}
	return maxi;
}

int main() {
	vector<float> a, b;
	for (int i = 0; i < 50000; i++) {
		a.push_back(0.5);
		b.push_back(0.4);
	}
	time_t start, finish;
	time(&start);
	int s = findMax(a, b);
	time(&finish);
	cout << endl << difftime(finish, start) << " seconds" << endl;
	return 0;
}

//399960000 when using clock()
//5 seconds	when using time()
