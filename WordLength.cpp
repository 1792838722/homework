#include <iostream>
#include <string>
class Problem
{
    public:
        Problem(std::string str):
            sen(str){}
        void solve()
        {
            int cnt = 0;
            for(auto i = sen.begin();i != sen.end();i ++)
            {
                if(*i != ' ')
                    cnt ++;
                else if(cnt > 0)
                {
                    std::cout << cnt << ' ';
                    cnt = 0;
                }
            }
            if(cnt > 1)
                std::cout << cnt - 1 << std::endl;
        }
    private:
        std::string sen;
};
int main()
{
    std::string str;
    getline(std::cin,str);
    Problem *prom = new Problem(str);
    prom->solve();
    delete prom;
    return 0;
}