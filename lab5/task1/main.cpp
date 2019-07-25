#include <iostream>
#include "hashtable.h"
#include <string>
#include <fstream>

using namespace std;

unsigned int hashingFunction(int nr){	//basic hash function pt chei intregi
    return nr  % 10;
}

int main(){
	Hashtable<int, int> my_table(2, &hashingFunction);

	my_table.put(1, 1);
	my_table.put(2, 2);
	my_table.put(3, 3);
	my_table.put(4, 4);
	my_table.put(5, 11);
	my_table.put(6, 22);
	my_table.put(7, 33);
	my_table.put(8, 44);
	my_table.put(9, 15);
	my_table.put(10, 26);
	my_table.put(11, 37);
	my_table.put(12, 48);

	int a, b, c, d;
	a = my_table.get(11);  // 1
	b = my_table.get(12);  // 2
	c = my_table.get(5);  // 3
	d = my_table.get(5);  // 4

	cout << a << " " << b << " " << c << " " << d << endl;

	bool check1 = my_table.has_key(3458); //exista
	bool check2 = my_table.has_key(1001); //nu exista
	cout << check1 << " " << check2 << endl;

	check1 = my_table.has_key(34588);  // are
	check2 = my_table.has_key(8345);  // nu are

	cout << check1 << " " << check2 << endl;
	return 0;
}
