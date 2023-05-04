#include <iostream>
#include <vector>
class Problem
{
    public:
        Problem(std::string str1,std::string str2):
            tar(str1),src(str2){}
        void solve()
        {
            for(auto i = src.begin();i < src.end();i ++)
            {
                auto tmp = i;
                for(auto j = tar.begin();j != tar.end() && i < src.end() && *i == *j;j ++)
                {
                    if(j - tar.begin() + 1 == tar.length())
                        ans.push_back((i - src.begin()) - tar.length() + 1);
                    else if(*i == *j)
                        i ++;
                }
                i = tmp;
            }
        }
        void print()
        {
            if(!ans.empty())
            {
                for(auto i = ans.begin();i < ans.end() - 1;i ++)
                    std::cout << *i << ' ';
                std::cout << ans.back() << std::endl;
            }
            else
                std::cout << -1 << std::endl;
        }
    private:
        std::string tar,src;
        std::vector<int> ans;
};
int main()
{
    std::string str1,str2;
    std::getline(std::cin,str1);
    std::getline(std::cin,str2);
    Problem *prom = new Problem(str1,str2);
    prom->solve();
    delete prom;
    return 0;
}