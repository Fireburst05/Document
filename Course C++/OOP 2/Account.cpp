#include <iostream>
#include <string>
#include "Account.h"

account::account() {
}
account::account(std::string nm, int id)
	: name(nm), idaccount(id) {
	std::cout << "account is created. welcome " << nm << std::endl;
}
account::~account() {
	std::cout << "object " << account::getname() << " deleted" << std::endl;
}
void account::setid(int x) {
	idaccount = x;
}
void account::setname(std::string nm) {
	name = nm;
}
int account::getid() {
	return idaccount;
}
std::string account::getname() {
	return name;
}
std::string account::getlicense() {
	return license;
}
void account::sayhi() {
	std::cout << "hi" << std::endl;
}
account account::operator+(account& user) {
	account value;
	value.dual_value = this->dual_value + user.dual_value;
	return value;
}
void unlocklicense(account& user) {
	user.license = "activated";
	std::cout << "license upgraded. user " << user.account::getname() << " product ativated.\n" << std::endl;
}
void upgradelicense(account& user) {
	user.license = "pro";
	std::cout << "license upgraded. user " << user.account::getname() << " pro version ativated.\n" << std::endl;
}
