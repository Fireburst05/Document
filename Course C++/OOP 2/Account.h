#include <string>
#ifndef ACCOUNT_H
#define ACCOUNT_H

class account { //khai báo lớp account
public: //các thành viên có thể truy cập từ bên ngoài
	int dual_value = 100;
	account(); //hàm khởi tạo mặc định (default constructor)
	account(std::string nm, int id); //hàm khởi tạo (constructor)
	~account(); //hàm huỷ (destructor)

	void setid(int x); //phương thức truyền dữ liệu vào idaccount
	void setname(std::string nm); //phương thức truyền dữ liệu vào name

	int getid(); //phương thức xuất dữ liệu từ idaccount
	std::string getname(); //phương thức xuất dữ liệu từ name
	std::string getlicense(); //phương thức xuất dữ liệu từ license

	void sayhi(); //phương thức in ra "hi"

	account operator+(account& user); //nạp chồng toán tử "+"
private:
	int idaccount;
	std::string name;
	std::string license = "trial";

	friend void unlocklicense(account& user); //hàm chỉnh sửa license
	friend void upgradelicense(account& user); //hàm chỉnh sửa license
};
#endif
