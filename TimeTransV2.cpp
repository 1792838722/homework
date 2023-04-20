#include <iostream>
#include <sstream>
class Problem
{
    public:
        Problem(std::string time)
        {
            int size = time.size();
            time.insert(0,4 - size,'0');
            std::stringstream strstr; // 字符流操作
            strstr << time.substr(0,2);
            strstr >> hr;
            strstr.clear();
            strstr << time.substr(2,2);
            strstr >> mn;
        }
        void solve()
        {
            hr = (hr + 24 - 8) % 24;
            std::cout << hr * 100 + mn << std::endl;
        }
    private:
        int hr,mn;
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