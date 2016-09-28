std::string returnString()
{
  return "temporary string";
}

void receive(std::string &value)
{
  std::cout << "string value parameter\n";
}

void receive(std::string &&value)
{
  std::cout << "string R-value parameter\n";
}


int main()
{
  std::string newString = "newString";
  receive(newString);           // newString is lvalue
  receive(returnString());      // returnStrings return 
	//std::string is temporary
}

