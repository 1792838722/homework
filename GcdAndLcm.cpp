#include <iostream>
class Problem
{
    public:
        Problem(int n1,int n2):
            num1(n1),num2(n2){}
        void solve()
        {
            gcd = solveGcd(num1,num2);
            lcm = num1 * num2 / gcd;
        }
        void print()
        {
            std::cout << gcd << std::endl << lcm << std::endl;
        }
    private:
        int solveGcd(int a,int b)
        {
            if(!b)
                return a;
            return solveGcd(b,a % b);
        }
        int num1,num2,gcd,lcm;
};
int main()
{
    int num1,num2;
    std::cin >> num1 >> num2;
    Problem *prom = new Problem(num1,num2);
    prom->solve(),prom->print();
    delete prom;
    system("pause");
    return 0;
}