#include <iostream>
class Problem
{
    public:
        Problem(int score):
            score(score){}
        void solve()
        {
            switch(score)
            {
                case 90 ... 100: std::cout << 'A' << std::endl;break;
                case 80 ... 89: std::cout << 'B' << std::endl;break;
                case 70 ... 79: std::cout << 'C' << std::endl;break;
                case 60 ... 69: std::cout << 'D' << std::endl;break;
                case 0 ... 59: std::cout << 'E' << std::endl;break;
            }
        }
    private:
        int score;
};
int main()
{
    int score;
    std::cin >> score;
    Problem *prom = new Problem(score);
    prom->solve();
    delete prom;
    return 0;
}