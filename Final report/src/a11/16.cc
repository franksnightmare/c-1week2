std::string newString;
std::string& test()

{
    return newString;
}

int main()
{
    test() = "Test this string\n"; // test() is replaced 
				//with the returned
                                   // std::string variable, 
				//which then receives
                                   // the value "Test
				// this string\n"
    cout << newString;
    return 0;
}

