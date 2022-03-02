#include <iostream>
using namespace std;

//khai báo hàm
void unbreaking();
int recursion(int x);
int netherite = 10; //khai báo biến toàn cục (có thể sử dụng ở bất cứ đâu trong chương trình)

int main() {

	int netherite = 15; //khai báo biến cục bộ (chỉ có thể sử dụng ở hàm main)
	cout << "local variable: " << netherite << endl; //xuất ra biến cục bộ
	cout << "global variable: " << ::netherite << endl; //xuất ra biến toàn cục bằng toán tử phân giải phạm vi "::"
	unbreaking();
	cout << "modified global variable: " << ::netherite << endl; //xuất ra biến toàn cục đã bị chỉnh sửa bằng hàm unbreaking
	cout << recursion(6);

	return 0;
}
//định nghĩa hàm
void unbreaking() { //hàm này chỉnh sửa biến toàn cục
	netherite = 19;
}

int recursion(int x) { // hàm tính giai thừa
	if (x == 1) { // điều kiện để dừng việc gọi lại chính nó
		return 1;
	}
	else {
		return x * recursion(x - 1); // x * (x - 1) * (x - 1 - 1) * ...
	}
}