#include <regex>
#include "tagremover.h"

using namespace std;

/*Constructor*/
TagRemover::TagRemover(std::istream& i_stream){
	i_stream_ptr = &i_stream;
}

void TagRemover::print(std::ostream& o_stream){
	string text;
	char ch;
	while ((*i_stream_ptr).get(ch)) {
		text += ch;
	}
	regex tag("(<[^\\<]*>)|(\\&)(lt|gt|nbsp|amp)");
	text = regex_replace(text,tag," REMOVED ");
	o_stream << text << endl;
}
