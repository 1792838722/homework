#include <iostream>
#include <algorithm>
#include <cstring>
class Problem
{
    public:
        Problem(std::string str)
        {
            this->str = str;
            memset(cnt,0,sizeof cnt);
            ans = 0;
        }
        void count()
        {
            for(int i = 0;i < str.size();i ++)
                cnt[str[i] - 'a'] ++;
        }
        void solve()
        {
            std::sort(cnt,cnt + 26,cmp);
            for(int i = 0;i < 26 && cnt[i] > 0;i ++)
                ans += cnt[i] * (26 - i);
            std::cout << ans << std::endl;
        }
    private:
        std::string str;
        int cnt[27],ans;
        static bool cmp(int x,int y)
        {
            return x > y;
        }
};
int main()
{
    std::string str;
    std::cin >> str;
    Problem *prom = new Problem(str);
    prom->count(),prom->solve();
    delete prom;
    return 0;
}