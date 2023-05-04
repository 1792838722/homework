#include <iostream>
class Problem
{
    public:
        Problem(int n,int k):
            num(n),lim(k){}
        void solve()
        {
            for(int i = 1;i <= num;i ++)
            {
                int x;
                std::cin >> x;
                if(x <= 0)
                    lim --;
            }
        }
        void print()
        {
            lim > 0? std::cout << "YES" << std::endl: std::cout << "NO" << std::endl;
        }
    private:
        int num,lim;

};
int main()
{
    int n,k;
    std::cin >> n >> k;
    Problem *prom = new Problem(n,k);
    prom->solve();
    prom->print();
    delete prom;
    return 0;
}