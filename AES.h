#pragma once
#include <vector>
#include <string>

class AES
{
public:
	AES(const std::string& key);
	std::vector<int> subkeys;
	
	int Nb;  // Number of columns in state
	int Nk;	 // Lenght of key in words(Dword)
	int Nr;  // Number of rounds
	static const unsigned char Rcon[30];
	static const unsigned char sbox[16][16];
	static const unsigned char galois[4][4];
	static const unsigned char padding;
	unsigned char state[4][4];
	static const unsigned char L_Table[16][16];
	static const unsigned char E_Table[16][16];
	std::string stateToString();
	unsigned char Mul(unsigned char state, unsigned char galois);
	void keyExpansion();
	int SubWord(int temp);
	int RotWord(int temp);
	void subBytes();
	void shiftRows();
	void mixColumns();
	void addRoundKey(int round);
	std::string encrypt(std::string plaintext);
	// std::string decrypt(std::string encrypted); // Not implemented yet
	~AES();

private:
	std::string key;
};

