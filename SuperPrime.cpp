#include <iostream>
class Problem
{
    public:
        void solve()
        {
            for(int i = 100;i <= 999;i ++)
            {
                char num[4];
                sprintf(num,"%d",i);
                if(check(i,num[0] - '0',num[1] - '0',num[2] - '0'))
                    cnt ++,sum += i;
            }
            std::cout << cnt << ' ' << sum << std::endl;
        }
    private:
        bool check(int x,int bit1,int bit2,int bit3)
        {
            return prime(x) && prime(bit1 + bit2 + bit3) && prime(bit1 * bit2 * bit3) && prime(bit1 * bit1 + bit2 * bit2 + bit3 * bit3);
        }
        inline bool prime(int x)
        {
            for(int i = 2;i * i <= x;i ++)
                if(x % i == 0)
                    return 0;
            return 1;
        }
        int cnt = 0,sum = 0;
};
int main()
{
    Problem *prom = new Problem();
    prom->solve();
    delete prom;
    return 0;
}