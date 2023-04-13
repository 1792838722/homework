#include <iostream>
const double pi = 3.14;
class circle
{
    public:
        circle(int r):
            r(r){}
        int getD()
        {
            return r + r;
        }
        double getC()
        {
            return getD() * pi;
        }
        double getS()
        {
            return pi * r * r;
        }
    private:
        int r;
};
int main()
{
    int r;
    std::cin >> r;
    circle *cir = new circle(r);
    std::cout << "直径: " << cir->getD() << std::endl << "周长: " << cir->getC() << std::endl << "面积: " << cir->getS() << std::endl;
    delete(cir);
    return 0;
}