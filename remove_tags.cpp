#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "tagremover.h"

using namespace std;

int main() {
	ifstream in_file("test.html");
	TagRemover tr(cin);
	TagRemover tr2(in_file);
//	tr.print(cout);
	tr2.print(cout);
}
