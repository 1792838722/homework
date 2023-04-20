#include <iostream>
class Problem
{
    public:
        Problem(int age):
            age(age){}
        void solve()
        {
            switch(age)
            {
                case 1 ... 10: std::cout << "Children" << std::endl;break;
                case 11 ... 20: std::cout << "Teenagers" << std::endl;break;
                case 21 ... 40: std::cout << "Youth" << std::endl;break;
                case 41 ... 50: std::cout << "middle-aged" << std::endl;break;
                case 51 ... 80: std::cout << "Elderly" << std::endl;break;
                case 81 ... 100: std::cout << "Old man" << std::endl;break;
            }
        }
    private:
        int age;
};
int main()
{
    int age;
    std::cin >> age;
    Problem *prom = new Problem(age);
    prom->solve();
    delete prom;
    return 0;
}