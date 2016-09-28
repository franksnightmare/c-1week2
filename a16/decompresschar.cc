// Numbers 0 and 1 are mapped to \t and \n,
// the other numbers are mapped to the printable characters
// starting with ' '.
char decompressChar(char character)
{
	switch (character)
	{
		case (0):
			return '\t';
		case (1):
			return '\n';
		default:
			return character + ' ' - 2;
	}
}
