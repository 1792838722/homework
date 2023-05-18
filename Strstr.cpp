#include <iostream>
class Problem
{
    public:
        Problem(std::string str1,std::string str2):
            src(str1),sub(str2){}
        int mystrstr()
        {
            for(auto i = src.begin();i != src.end();i ++)
            {
                auto backup = i;
                for(auto j = sub.begin();j != sub.end();j ++)
                {
                    if(j == sub.end() - 1 && *j == *i)
                        return i - src.begin() - sub.length() + 1;
                    if(*j != *i)
                        break;
                    else
                        i ++;
                }
                i = backup;
            }
            return -1;
        }
    private:
        std::string src,sub;
};
int main()
{
    std::string str1,str2;
    std::cin >> str1 >> str2;
    Problem *prom = new Problem(str1,str2);
    std::cout << prom->mystrstr() << std::endl;
    delete prom;
    return 0;
}