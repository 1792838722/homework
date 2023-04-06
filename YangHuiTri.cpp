#include <iostream>
#include <cstring>
class Problem{
    public:
        Problem(int num)
        {
            row = num;
            memset(tri,0,sizeof tri);
            for(int i = 1;i <= row;i ++)    
                tri[i][1] = 1;
        }
        void cal()
        {
            for(int i = 2;i <= row;i ++)
                for(int j = 2;j <= row;j ++)
                    tri[i][j] = tri[i-1][j-1] + tri[i-1][j];
        }
        void print()
        {
            for(int i = 1;i <= row;i ++)
            {
                for(int j = 1;j <= i;j ++)
                    std::cout << tri[i][j] << " ";
                std::cout << std::endl;
            }
        }
    private:
        int tri[17][17],row;
};
int main()
{
    int num;
    std::cin >> num;
    Problem *prom = new Problem(num);
    prom->cal(),prom->print();
    delete prom;
    return 0;
}