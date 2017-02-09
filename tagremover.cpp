#include <regex>
#include "tagremover.h"

using namespace std;

/*Constructor*/
TagRemover::TagRemover(std::istream& i_stream){
	i_stream_ptr = &i_stream;



	std::string text;
	regex tags("<[^\\<]*>");

	//Check match with regex and output
}

void TagRemover::print(std::ostream& o_file){

}
