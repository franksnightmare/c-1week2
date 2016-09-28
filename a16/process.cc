#include "main.ih"

void process(Vars args)
{	
	int alphabetSize = 2 + '~' - ' ';
	int cipherSize = args.cipher.length();
	
	size_t step = 0;
	for (char character : args.input)
	{
		char cipherChar = compressChar(args.cipher[step]);
		char newChar = compressChar(character);
		
		if (args.action == ENCRYPT)
			newChar = (newChar + cipherChar) % alphabetSize;
		else
			newChar = (alphabetSize + newChar - cipherChar) % alphabetSize;
			
		newChar = decompressChar(newChar);
		cout << newChar;
		step = (step + 1) % cipherSize;
	}
}
