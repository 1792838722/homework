#include <iostream>
#include <algorithm>
#include <iomanip>
class Problem
{
    public:
        Problem(){}
        Problem(std::string name,double Uscore,double Escore):
            name(name),Uscore(Uscore),Escore(Escore)
            {Ascore = Uscore * 0.4 + Escore * 0.6;}
        double getScore()
        {
            return Ascore;
        }
        void print()
        {
            std::cout << name << ' ' << std::setprecision(2) << std::fixed << Uscore << ' ' << Escore << ' ' << Ascore << std::endl;
        }
    private:
        std::string name;
        double Uscore,Escore,Ascore;
};
bool cmp(Problem x,Problem y)
{
    return x.getScore() > y.getScore();
}
int main()
{
    int cnt = 0;
    std::string name;
    double Uscore,Escore;
    Problem *prom = new Problem[105];
    while(std::cin >> name >> Uscore >> Escore && ++ cnt)
        prom[cnt] = Problem(name,Uscore,Escore);
    std::sort(prom + 1,prom + cnt + 1,cmp);
    for(int i = 1;i <= cnt;i ++)
        prom[i].print();
    delete []prom;
    return 0;
}