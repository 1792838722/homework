#include <iostream>
#include <algorithm>
class Problem
{
    public:
        Problem(std::string str,int k):
            key(str),num(k)
            {
                for(auto i = key.begin();i != key.end();)
                {
                    if(*i == '-')
                        key.erase(i ++);
                    else 
                        *i = toupper(*i),i ++;
                }
                len = key.length();
            }
        void solve()
        {
            reverse(key.begin(),key.end());
            int comb = (len - 1) / num;
            for(int i = 1;i <= comb;i ++)
                ans += key.substr(num * (i - 1),num) + "-";
            ans += key.substr(num * comb);
            reverse(ans.begin(),ans.end());
            std::cout << ans << std::endl;
        }
    private:
        std::string key;
        std::string ans;
        int num,len;
};
int main()
{
    std::string str;
    int k;
    std::cin >> str >> k;
    Problem *prom = new Problem(str,k);
    prom->solve();
    delete prom;
    return 0;
}