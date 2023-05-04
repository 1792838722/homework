#include <iostream>
#include <vector>
class Problem
{
    public:
        Problem(std::vector<int> vec):
            num(vec){}
        void sort()
        {
            quicksort(num.begin(),num.end() - 1);
            for(auto i = num.begin();i != num.end();i ++)
                std::cout << *i << ' ';
            std::cout << std::endl;
        }
    private:
        void quicksort(const std::vector<int>::iterator l,const std::vector<int>::iterator r)
        {
            if(l >= r)
                return;
            auto key = find(l,r);
            if(key != num.begin())
                quicksort(l,key - 1);
            if(key != num.end() - 1)
                quicksort(key + 1,r);
        }
        std::vector<int>::iterator find(const std::vector<int>::iterator l,const std::vector<int>::iterator r)
        {
            auto key = l,lft = l,rgt = r;
            while(rgt > lft)
            {
                while(*rgt >= *key && rgt > lft) 
                    rgt --;
                while(*lft <= *key && rgt > lft) 
                    lft ++;
                std::swap(*lft,*rgt);
            }
            std::swap(*key,*lft);
            return lft;
        }
        std::vector<int> num;
};
int main()
{
    int n;
    std::vector<int> vec;
    std::cin >> n;
    for(int i = 1;i <= n;i ++)
    {
        int x;
        std::cin >> x;
        vec.push_back(x);
    }
    Problem *prom = new Problem(vec);
    prom->sort();
    delete prom;
    return 0;
}