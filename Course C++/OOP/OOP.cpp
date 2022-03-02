#include <iostream>
#include <string>
using namespace std;

class account { //khai báo lớp account
public: //các thành viên có thể truy cập từ bên ngoài
	int dual_value = 100;
	account() { //hàm khởi tạo mặc định (default constructor)
	}
	account(std::string nm, int id) //hàm khởi tạo (constructor)
		: name(nm), idaccount(id) {
		cout << "account is created. welcome " << nm << endl;
	}
	~account() { //hàm huỷ (destructor)
		cout << "object " << getname() << " deleted" << endl;
	}
	void setid(int id) { //phương thức truyền dữ liệu vào idaccount
		idaccount = id;
	}
	void setname(string nm) { //phương thức truyền dữ liệu vào name
		name = nm;
	}
	int getid() { //phương thức xuất dữ liệu từ idaccount
		return idaccount;
	}
	string getname() { //phương thức xuất dữ liệu từ name
		return name;
	}
	string getlicense() {
		return license;
	}
	void sayhi() {
		cout << "hi" << endl; //phương thức in ra "hi"
	}
	account operator+(account& user) { //nạp chồng toán tử "+"
		account value;
		value.dual_value = this->dual_value + user.dual_value;
		return value;
	}
private: //các thành viên chỉ có thể truy cập trong lớp
	int idaccount;
	string name;
	string license = "trial";

	//khai báo và định nghĩa hàm bằng từ khóa friend có thể truy cập vào thành viên private
	friend void unlocklicense(account& user) { 
		user.license = "activated";
		cout << "license upgraded. user " << user.getname() << " product ativated.\n" << endl;
	}
	friend void upgradelicense(account& user) {
		user.license = "pro";
		cout << "license upgraded. user " << user.getname() << " pro version ativated.\n" << endl;
	}
};
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
