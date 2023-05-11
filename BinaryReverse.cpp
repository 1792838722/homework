#include <iostream>
#include <algorithm>
class Problem
{
    public:
        Problem(std::string str):
            num(str){}
        void solve()
        {
            std::reverse(num.begin(),num.end());
            std::cout << num << std::endl;
        }
    private:
        std::string num;
};
int main()
{
    std::string str;
    std::cin >> str;
    Problem *prom = new Problem(str);
    prom->solve();
    delete prom;
    return 0;
}