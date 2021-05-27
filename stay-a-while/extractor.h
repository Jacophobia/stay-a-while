#ifndef extractor_h
#define extractor_h

#include <map>
#include <string>

class Extractor
{
private:
	std::map<std::string, std::map<std::string, std::string>> credentials;
public:
	std::map<std::string, std::map<std::string, std::string>> get_credentials() { return credentials; };
	void extract_credentials(std::string filename);
};

#endif 

