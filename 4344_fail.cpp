#include <iostream>

using namespace std;

int main() {
	int n = 0;
	int numa;
	int** arr;
	double* score;
	double* rate;
	cin >> n;

	arr = new int*[n];
	score = new double[n];
	rate = new double[n];

	for (int i = 0; i < n; i++)
		arr[i] = new int[1000];

	for (int i = 0; i < n; i++) {
		numa = 0;
		cin >> numa;

		for (int j = 0; j < numa; j++)
			cin >> arr[i][j];

		double sc = 0;

		for (int j = 0; j < numa; j++)
			sc += arr[i][j];

		score[i] = sc / numa;

		int count = 0;

		for (int j = 0; j < numa; j++) {
			if (arr[i][j] > score[i]) {
				count++;
			}
		}
		rate[i] = count/numa * 100.0;
	}

	for (int i = 0; i < n; i++) 
		cout << score[i] << "\n";

	for (int i = 0; i < n; i++)
		printf("%.3f\n", rate[i]);
}
