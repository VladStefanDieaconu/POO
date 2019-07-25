#include <iostream>
#include <fstream>
#include "Hashtable.h"
using namespace std;

unsigned int hashingFunction(int nr){	//basic hash function pt chei intregi
    return nr  % 10;
}

int main(){
	Hashtable<int, int> my_table(5, &hashingFunction);
    std::ofstream output("../Out/Lab5/task3.out");

    output << my_table.get_size() << std::endl;
	my_table.put(34588, 1);
	my_table.put(3458, 2);
	my_table.put(8345, 3);
	my_table.put(13459, 4);
    output << my_table.get_size() << std::endl;

    output.close();
	return 0;
}
