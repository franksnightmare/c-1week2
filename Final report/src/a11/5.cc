int main()
{
  int x = 5;

  square();

  std::cout << x;
}

int square(int &x)
{
  return x * x;
}
