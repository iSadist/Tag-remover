#ifndef TAGREMOVER_H
#define TAGREMOVER_H

#include <iostream>
#include <string>
#include <vector>

class TagRemover {

public:
	TagRemover(std::istream i_file);
	void print(std::ostream o_file);

private:
	std::istream i_stream;
};

#endif
