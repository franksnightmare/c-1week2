char decompressChar(char character)
{
	switch(character)
	{
		case(0):
			return '\t';
		case(1):
			return '\n';
		default:
			return character + ' ' - 2;
	}
}
