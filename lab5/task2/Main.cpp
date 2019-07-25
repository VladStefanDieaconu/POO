#include "UsersTable.h"
#include <iostream>
#include <string>

using namespace std;


unsigned int charHashingFunction(string str){	//basic hash function pt strings
	const int magic = 8497;
	unsigned int hash = str.length() + magic;
	return hash;
}

int main(){
	UsersTable my_table(10, &charHashingFunction);

	my_table.signup("Razvan", "PATRONUL");
	my_table.signup("Alex", "420blazeit");
	my_table.signup("Razvan", "@razvanra2peinstagram");

	my_table.login("Razvan", "PATRONUL");
    my_table.login("Alex", "1234");

    my_table.logout("Razvan");
    my_table.logout("Andrei");

    my_table.change_password("Alex", "420blazeit", "garda");
    my_table.change_password("Razvan", "PATRONUL1111", "Maverick");
	return 0;
}
