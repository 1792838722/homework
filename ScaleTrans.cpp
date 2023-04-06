#include <iostream>
#include <algorithm>
#include <cstring>
class Problem{
    public:
        Problem(int num,int sca):
            numDec(num),scale(sca){}
        void solve()
        {
            while(numDec)
            {
                if(numDec % scale + 48 > '9')
                    tar += char(numDec % scale - 10 + 'A');
                else
                    tar += char(numDec % scale + 48);
                numDec /= scale;
            }
        }
        void print()
        {
            std::reverse(tar.begin(),tar.end());
            std::cout << tar << std::endl;
        }
    private:
        int numDec,scale;
        std::string tar;
};
int num,sca;
int main()
{
    while(std::cin >> num >> sca)
    {
        Problem *prom = new Problem(num,sca);
        prom->solve(),prom->print();
        delete prom;
    }
    return 0;
}