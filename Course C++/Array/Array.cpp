#include <iostream>
#include <string>
using namespace std;

int main() {
	//khai báo mảng -> kiểu_dữ_liệu tên_mảng[số phần tử trong mảng] = { phần tử [0], phần tử [1], ... }
	int arr1[4] = { 2, 5, 8, 3 }; 
	bool arr2[5] = { true, true, false, true, false };
	string arr3[2] = { "anhlaptrinh", "lognguyen" };
	double arr4[6] = { 15.11, 23.09, 20.05, 20.21, 3.14, 99.99 };

	//truy xuất và gán giá trị phần tử trong mảng (đếm từ số 0)
	cout << arr1[0] << endl;
	arr1[0] = 9;
	cout << arr1[0] << endl;

	//truy xuất phần tử trong mảng (dùng vòng lặp for)
	for (int i = 0; i < 6; i++) {
		cout << arr4[i] << endl;
	}

	// mảng 2 chiều int array2[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int array2[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	cout << array2[0][0] << endl;
	cout << array2[1][2] << endl;

	//mảng 3 chiều (có thể có mảng N chiều)
	int array3[2][3][2] = { { {1, 2}, {3, 4}, {5, 6} }, { {7, 8}, {9, 10}, {11, 12} } };
	cout << array3[0][0][1] << endl;
	cout << array3[1][1][2] << endl;

	return 0;
}
