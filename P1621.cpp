#include<iostream>
int x;
class Number{
    public:
        Number(int x)
        {
            num = x;
        }
        void getAns()
        {
            std::cout << getBit() + getBit() + getBit() << std::endl;
        }
    private:
        int num;
        int getBit()
        {
            return num%10 + divide();
        }
        int divide()
        {
            num /= 10;
            return 0;
        }
};
int main()
{
    std::cin >> x;
    Number *nums = new Number(x);
    nums -> getAns();
    delete nums;
    return 0;
}