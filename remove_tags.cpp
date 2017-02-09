#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "tagremover.h"

using namespace std;

int main() {
	TagRemover tr(cin);
	tr.print(cout);
}
