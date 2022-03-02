#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
	account anhlaptrinh("anhlaptrinh", 1511); //khởi tạo đối tượng anhlaptrinh
	account* p1 = &anhlaptrinh; //con trỏ tới đối tượng anh lập trình
	account lognguyen("lognguyen", 2309); //khởi tạo đối tượng lognguyen
	account* p2 = &lognguyen; //con trỏ tới đối tượng lognguyen
	
	//sử dụng toán tử "+" với đối tượng của lớp account
	account value = anhlaptrinh + lognguyen;
	cout << value.dual_value << "\n" << endl;

	//xuất ra thuộc tính name, thuộc tính id và thuộc tính license của 2 đối tượng trên
	cout << "username: " << anhlaptrinh.getname() << endl;
	cout << "id: " << anhlaptrinh.getid() << endl;
	cout << "version: " << anhlaptrinh.getlicense() << "\n" << endl;
	cout << "username: " << lognguyen.getname() << endl;
	cout << "id: " << lognguyen.getid() << endl;
	cout << "version: " << lognguyen.getlicense() << "\n" << endl;

	unlocklicense(anhlaptrinh); //chỉnh sửa license cho đối tượng
	upgradelicense(anhlaptrinh); //chỉnh sửa license cho đối tượng

	//xuất ra thuộc tính name, thuộc tính id và thuộc tính license của 2 đối tượng trên (con trỏ)
	cout << "username: " << p1->getname() << endl;
	cout << "id: " << p1->getid() << endl;
	cout << "version: " << p1->getlicense() << "\n" << endl;
	cout << "username: " << p2->getname() << endl;
	cout << "id: " << p2->getid() << endl;
	cout << "version: " << p2->getlicense() << "\n" << endl;

	//sử dụng phương thức sayhi(), setid()
	anhlaptrinh.sayhi();
	anhlaptrinh.setid(151105);
	cout << anhlaptrinh.getid() << "\n" << endl;

	//sử dụng phương thức sayhi(), setid() (con trỏ)
	p1->sayhi();
	p1->setid(151121);
	cout << p1->getid() << "\n" << endl;

	return 0;
}
