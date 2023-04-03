#include <iostream>
#include <cmath>
class plus{
    public:
        plus(int fz1,int fm1,int fz2,int fm2)
        {
            this->fz1 = fz1,this->fm1 = fm1;
            this->fz2 = fz2,this->fm2 = fm2;
            if(fm1 * fm2 == 0)
                print(0);
        }
        void tongFen()
        {
            if(fm1 * fm2 == 0)
                return;
            fz2 *= fm1,fz1 *= fm2;
            fm2 *= fm1,fm1 = fm2;
        }
        void cal()
        {
            if(fm1 * fm2 == 0)
                return;
            fz1 += fz2;
            int tmp = gcd(abs(fz1),fm1);
            fz1 /= tmp,fm1 /= tmp;
            print(1);
        }
        
    private:
        int fz1,fm1,fz2,fm2;
        int gcd(int a,int b)
        {
            if(!b)
                return a;
            return gcd(b,a % b);
        }
        void print(int val)
        {
            if(!val)
            {
                std::cout << "error" << std::endl;
                return;
            }
            std::cout << fz1;
            if(fm1 != 1)
                std::cout << '/' << fm1;
            std::cout << std::endl;
        }
};
int main()
{
    int n;
    std::cin >> n;
    for(int i = 1;i <= n;i++)
    {
        int fz1,fz2,fm1,fm2;
        scanf("%d/%d%d/%d",&fz1,&fm1,&fz2,&fm2);
        plus *comb = new plus(fz1,fm1,fz2,fm2);
        comb->tongFen(),comb->cal();
        delete comb;
    }
    return 0;
}