#include <iostream>
#include <map>
#include <utility>
class Problem
{
    public:
        Problem(std::string str):
            num(str)
            {
                for(char i = 'A';i <= 'O';i ++)
                    tel.insert(std::pair<char,int>(i,(i - 'A') / 3 + 2));
                for(char i = 'P';i <= 'S';i ++)
                    tel.insert(std::pair<char,int>(i,7));
                for(char i = 'T';i <= 'V';i ++)
                    tel.insert(std::pair<char,int>(i,8));
                for(char i = 'W';i <= 'Z';i ++)
                    tel.insert(std::pair<char,int>(i,9));
            }
        void solve()
        {
            for(auto i = num.begin();i != num.end();i ++)
                std::cout << tel.find(*i)->second;
            std::cout << std::endl;
        }
    private:
        std::string num;
        std::map<char,int> tel;
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