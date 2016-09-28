void add2(int y)
{
    std::cout << "y = " << y + 2<< '\n';
}

void square(int z)
{
    std::cout << "z = " << z * z << '\n';

int main()
{
    int x = 5;
    std::cout << "x = " << x << '\n'; // x = 5

    add2(x);			      // x = 7
    square(x)                         // x = 25

    std::cout << "x = " << x << '\n'; // x = 5

}
