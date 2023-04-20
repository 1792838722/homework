#include <iostream>
class Problem
{
    public:
        Problem(int seasonCode):
            seasonCode(seasonCode){}
        void solve()
        {
            switch(seasonCode)
            {
                case 1: std::cout << "Spring" << std::endl;break;
                case 2: std::cout << "Summer" << std::endl;break;
                case 3: std::cout << "Fall" << std::endl;break;
                case 4: std::cout << "Winter" << std::endl;break;
            }
        }
    private:
        int seasonCode;
};
int main()
{
    int season;
    std::cin >> season;
    Problem *prom = new Problem(season);
    prom->solve();
    delete prom;
    return 0;
}