int intVal()
{
  return 5;
}

void receive(int &value)
{
  std::cout << "int value parameter\n";
}

void receive(int &&value)
{
  std::cout << "int R-value parameter\n";
}

int main()
{
  receive(18); // 18 is anonymous variable, hence rvalue
  int value = 5;
  receive(value); // value is lvalue
  receive(intVal()); // the number returned by intVal() is 
	//anonymous, hence rvalue
}

