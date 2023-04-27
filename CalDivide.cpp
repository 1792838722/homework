#include <iostream>
#include <cstdio>
class Problem
{
    public:
        Problem(int num,int div):
            num(num),div(div)
            {
                std::cout << "0.";
            }
        void process()
        {
            solve(0,num);
        }
    private:
        void solve(int cnt,int rst)
        {
            if(cnt >= 200 || rst == 0 && cnt > 0)
                return;
            std::cout << rst * 10 / div;
            solve(cnt + 1,rst * 10 % div);
        }
        int num,div;
};
int main()
{
    int num,div;
    scanf("%d/%d",&num,&div);
    Problem *prom = new Problem(num,div);
    prom->process();
    delete prom;
    return 0;
}