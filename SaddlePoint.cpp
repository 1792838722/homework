#include <iostream>
#include <vector>
#include <algorithm>
class Problem
{
    public:
        Problem(int n,std::vector<std::vector<int> > vec,std::vector<std::vector<int> > vecT)
        {
            this->n = n;
            num = vec;
            numT = vecT;
        }
        void solve()
        {
            for(int i = 0;i < n;i ++)
                for(int j = 0;j < n;j ++)
                    if(check(i,j))
                    {
                        std::cout << i << ' ' << j << std::endl;
                        return; 
                    }
            std::cout << "NO" << std::endl;
        }
    private:
        inline bool check(int x,int y)
        {
            int maxx = num[x][y],minn = maxx;
            for(auto i = num[x].begin();i != num[x].end();i ++)
                maxx = std::max(maxx,*i);
            for(auto i = numT[y].begin();i != numT[y].end();i ++)
                minn = std::min(minn,*i);
            return maxx == num[x][y] && minn == maxx;
        }
        int n;
        std::vector<std::vector<int> > num;
        std::vector<std::vector<int> > numT;
};
int main()
{
    int n,x;
    std::cin >> n;
    std::vector<std::vector<int> > vec(n,std::vector<int>(n,0));
    std::vector<std::vector<int> > vecT(n,std::vector<int>(n,0));
    for(int i = 0;i < n;i ++)
        for(int j = 0;j < n;j ++)
        {
            std::cin >> vec[i][j];
            vecT[j][i] = vec[i][j];
        }
    Problem *prom = new Problem(n,vec,vecT);
    prom->solve();
    delete prom;
    return 0;
}