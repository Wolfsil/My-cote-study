#include <iostream>
#include <vector>
using namespace std;

class a {
public:
	static a() {
	}
};

int main() {
	vector<vector<int>> vec;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> vec[i][j];
		}
	}

	return 0;
}
