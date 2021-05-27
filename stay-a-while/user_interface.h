#ifndef user_interface_h
#define user_interface_h

#include "console.h"
#include "decryption.h"
#include "encryption.h"
#include "extractor.h"

#include <string>
#include <map>
#include <memory>

class UserInterface
{
public:
	void get_sign_in_credentials();
	bool sign_in();
	void compare_credentials();
	void display_options();
	char get_input();
private:
	std::map<std::string, std::map<std::string, std::string>> sign_in_credentials;
	std::unique_ptr<Extractor> extractor;
	std::unique_ptr<Decryption> decryptor;
	std::unique_ptr<Encryption> encryptor;
	std::unique_ptr<Console> console;
};

#endif

