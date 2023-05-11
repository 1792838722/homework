#include <iostream>
class Problem
{
    public:
        Problem(int x):
            num(x){}
        void solve()
        {
            move(num,'A','B','C');
        }
    private:
        void move(int rst,char src,char buffer,char dest)
        {
            if(!rst)
                return;
            move(rst - 1,src,dest,buffer);
            std::cout << "step" << cnt ++ << ": Move Disk " << rst << " from " << src << " to " << dest << std::endl;
            move(rst - 1,buffer,src,dest);
        }
        int num,cnt = 1;
};
int main()
{
    int n;
    std::cin >> n;
    Problem *prom = new Problem(n);
    prom->solve();
    delete prom;
    return 0;
}