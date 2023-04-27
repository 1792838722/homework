#include <iostream>
#include <functional>
#include <map>
class Problem
{
    public:
        void solve(int num,int pow)
        {
            map[pow] += num;
        }
        void print()
        {
            for(auto i = map.begin();i != map.end();)
                if(i->second == 0)
                    map.erase(i ++);
                else
                    i ++;
            auto mapEnd = map.end();mapEnd --;
            for(auto i = map.begin();i != map.end();i ++)
            {
                std::cout << i->second << 'x' << i->first;
                i == mapEnd? std::cout << std::endl: std::cout << '+';
            }
        }
    private:
        std::map<int,int,std::greater<int> > map;
};
int main()
{
    int num,pow;
    Problem *prom = new Problem();
    while(std::cin >> pow >> num)
        prom->solve(num,pow);
    prom->print();
    delete prom;
    return 0;
}
