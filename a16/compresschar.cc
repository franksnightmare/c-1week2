char compressChar(char character)
{
	switch(character)
	{
		case('\t'):
			return 0;
		case('\n'):
			return 1;
		default:
			return 2 + character - ' ';
	}
}
