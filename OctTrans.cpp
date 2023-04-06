#include <iostream>
#include <cstring>
class Problem{
    public:
        Problem(int x):
            numDec(x){}
        void solve()
        {
            sprintf(numOct,"%o",numDec);
        }
        void print()
        {
            for(int i = 1;i <= 5 - strlen(numOct);i ++)
                std::cout << 0;
            std::cout << numOct << std::endl;
        }
    private:
        int numDec;
        char numOct[6];
};
int num;
int main()
{
    while(std::cin >> num)
    {
        Problem *prom = new Problem(num);
        prom->solve(),prom->print();
        delete prom;
    }
    return 0;
}