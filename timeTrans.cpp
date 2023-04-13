#include <iostream>
#include <cstring>
#include <ctime>
#include <sstream>
class Problem
{
    public:
        Problem(std::string str):
            time(str){}
        void getTime()
        {
            int size = time.size();
            time.insert(0,4 - size,'0');
            std::stringstream str;
            str << time.substr(0,2);
            str >> hr;
            str.clear();
            str << time.substr(2,2);
            str >> mn;
        }
        void solve()
        {
            hr = (hr + 24 - 8) % 24;
            std::cout << hr * 100 + mn << std::endl;
        }
    private:
        std::string time;
        int hr,mn;
};
int main()
{
    std::string str;
    std::cin >> str;
    Problem *prom = new Problem(str);
    prom->getTime();
    prom->solve();
    delete prom;
    return 0;
}