#include <iostream>
#include <string>
using namespace std;

//khai báo hàm kiểu_dữ_liệu tên_hàm(tham số)
int sum(int x, int y); //hàm tính tổng
void printArray(int arr[], int size); //hàm in mảng ra màn hình
void printSomething(int x); //hàm in số ra màn hình
void printSomething(float x); //hàm in số ra màn hình
int plusplus(int x, int y = 1511); //hàm tính tổng có tham số mặc định
void change(int x); 
void mending(int* x);

int main() {
	string data;
	int a, b, gold = 20;
	float c;
	const int size = 3;
	int d[3] = { 15, 11, 05 };

	cin >> a >> b >> c;

	//gọi hàm tính tổng và in các phần tử trong mảng
	cout << sum(a, b) << endl;
	printArray(d, 3);

	//gọi hàm in ra màn hình (nạp chồng hàm)
	printSomething(a);
	printSomething(c);

	//gọi hàm tính tổng và tham số mặc định
	cout << plusplus(a, b) << endl;
	cout << plusplus(a) << endl;

	//truyền giá trị và truyền địa chỉ vào hàm
	change(gold);
	cout << gold << endl;

	mending(&gold);
	cout << gold << endl;

	return 0;
}

//định nghĩa hàm
int sum(int x, int y) {
	return x + y;
}
void printArray(int arr[], int size) {
	for (int x = 0; x < size; x++) {
		cout << arr[x] << endl;
	}
}
void printSomething(int x) {
	cout << "Day la so nguyen: " << x << endl;
}
void printSomething(float x) {
	cout << "Day la so thuc: " << x << endl;
}
int plusplus(int x, int y) {
	return x + y;
}
void change(int x) {
	x = 100;
}
void mending(int* x) {
	*x = 100;
}
