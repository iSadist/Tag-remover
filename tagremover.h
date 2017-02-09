#ifndef TAGREMOVER_H
#define TAGREMOVER_H

#include <iostream>
#include <string>
#include <vector>

class TagRemover {

public:
	TagRemover(std::istream& i_stream);
	void print(std::ostream& o_stream);

private:
	std::istream *i_stream_ptr;

};

#endif
