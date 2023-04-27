#include <iostream>
class Problem
{
    public:
        void process(int x)
        {
            if(check(x))
                sum += x;
        }
        ~Problem()
        {
            std::cout << sum << std::endl;
        }
    private:
        bool check(int x)
        {
            return x & 1;
        }
        int sum = 0;
};
int main()
{
    int num;
    Problem *prom = new Problem();
    while(std::cin >> num && num > 0)
        prom->process(num);
    delete prom;
    return 0;
}