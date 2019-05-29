#include "AES.h"
#include <iostream>


int main()
{
	std::string key = "string 2 encrypt";
	AES aes(key);
	std::string plainText("ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_3");
	std::cout << "PlainText:" << std::endl << plainText << std::endl << std::endl;
	aes.keyExpansion();
	std::string encypted = aes.encrypt(plainText);

	std::cout << "Hex(Encrypted)" << std::endl;
	for (size_t i = 0; i < encypted.length(); i++)
	{
		unsigned char oneByte = encypted[i];
		printf("%02x", oneByte);
	}
	std::cout << std::endl << std::endl;
	return 0;
}