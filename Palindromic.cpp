#include <iostream>
#include <algorithm>
class Problem
{
    public:
        Problem(int num,int amt):
            num(num),cnt(0),amount(amt){}
        void solve()
        {
            for(;cnt <= amount;num ++)
            {
                strRev = std::to_string(num);
                std::string str = strRev;
                reverse(strRev.begin(),strRev.end());
                if(str == strRev)
                    std::cout << str << ' ',cnt ++;
            }
            std::cout << std::endl;
        }
    private:
        int num,cnt,amount;
        std::string strRev;
};
int main()
{
    int N;
    std::cin >> N;
    while(N--)
    {
        int num,amt;
        std::cin >> num >> amt;
        Problem *prom = new Problem(num,amt);
        prom->solve();
        delete prom;
    }
    return 0;
}