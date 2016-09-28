#include "main.ih"

// The encryption/decryption occurs as follows.
// 1: The characters are compressed into the range 0 to
//     alphabetSize - 1.
// 2: The numbers are shifted by encryption/decryption.
// 3: the number range is transformed back into the
//     printable characters.
void process(Vars const &vars)
{	
	int alphabetSize = 2 + '~' - ' ';
	int cipherSize = vars.cipher.length();
	
	size_t step = 0;
	for (char character : vars.input)
	{
		char cipherChar = compressChar(vars.cipher[step]);
		char newChar = compressChar(character);
		
		if (vars.action == ENCRYPT)
			newChar = (newChar + cipherChar) % alphabetSize;
		else
			newChar = (alphabetSize + newChar - cipherChar) % alphabetSize;
			
		newChar = decompressChar(newChar);
		cout << newChar;
		step = (step + 1) % cipherSize;
	}
}
