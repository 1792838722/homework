#include <iostream>
class Problem
{
    public:
        Problem(std::string str):
            str(str){}
        void solve()
        {
            for(auto i = str.begin();i != str.end();i ++)
                sum += int(*i) - 48;
            std::cout << sum << std::endl;
        }
    private:
        std::string str;
        int sum = 0;
};
int main()
{
    std::string num;
    std::cin >> num;
    Problem *prom = new Problem(num);
    prom->solve();
    delete prom;
    return 0;
}