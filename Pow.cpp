#include <iostream>
class Problem
{
    public:
        Problem(int a,int x):
            num(a),pow(x){}
        void cal()
        {
            long long sum = 1;
            for(int i = 1;i <= pow;i ++)
                sum *= num;
            std::cout << sum << std::endl;
        }
    private:
        int num,pow;
};
int main()
{
    int a,x;
    scanf("%d,%d",&a,&x);
    Problem *prom = new Problem(a,x);
    prom->cal();
    delete prom;
    return 0;
}