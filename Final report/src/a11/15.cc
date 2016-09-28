int n;
int& test()

{
    return n;
}

int main()
{
    test() = 5; // test() is replaced with the 	
	//returned n, which then receives the value 5
    cout << n;
    return 0;
}
