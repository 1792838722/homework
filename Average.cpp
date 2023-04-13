#include <iostream>
#include <cstring>
#include <iomanip>
#include <vector>
class Problem
{
    public:
        Problem(int num[])
        {
            numData.resize(6); // 预留长度并以默认值填充,若 reverse 则不可访问
            memcpy(&numData[0],num,6*sizeof(int)); // memcpy 函数参数是指针
        }
        void getAve()
        {
            sum = 0;
            for(auto i = numData.begin();i != numData.end();i ++)
                sum += *i;
            ave = (double) sum / 6;
        }
        void getVar()
        {
            var = 0;
            for(auto i = numData.begin();i != numData.end();i ++)
                var += (double)(*i - ave) * (double)(*i - ave);
            var /= 6;
        }
        void print()
        {
            std::cout << std::setprecision(2) << std::fixed << ave << ' ' << var << std::endl;
        }
    private:
        std::vector<int> numData;
        double ave,var;
        int sum;

};
int main()
{
    int n,num[6];
    std::cin >> n;
    while(n--)
    {
        for(int i = 0;i < 6;i ++)
            std::cin >> num[i];
        Problem *prom = new Problem(num);
        prom->getAve(),prom->getVar();
        prom->print();
        delete prom;
    }
    return 0;
}