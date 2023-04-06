#include <iostream>
#include <cstring>
class Problem{
    public:
        Problem(int yy,int mm,int dd):
            yr(yy),mn(mm),dy(dd),days(0){}
        void cal()
        {
            calYear(),calMonth(),calDay();
            printf("%d\n",days);
            days %= 7;
        }
        void print()
        {
            switch(days)
            {
                case 0: std::cout << "Sunday" << std::endl;break;
                case 1: std::cout << "Monday" << std::endl;break;
                case 2: std::cout << "Tuesday" << std::endl;break;
                case 3: std::cout << "Wednesday" << std::endl;break;
                case 4: std::cout << "Thursday" << std::endl;break;
                case 5: std::cout << "Friday" << std::endl;break;
                case 6: std::cout << "Saturday" << std::endl;break;
            }
        }
    private:
        int yr,mn,dy,days;
        bool checkLeap(int yy)
        {
            return !(yy % 4) && yy % 100 || !(yy % 400);
        }
        void calYear()
        {
            for(;yr > 1900;yr --)

                checkLeap(yr-1)? days += 366: days += 365; //算的当前年数的前一年
        }
        void calMonth()
        {
            for(;mn > 1;mn --)
                switch(mn-1)
                {
                    default: days += 31;break;
                    case 4:case 6:case 9:case 11: days +=30;break;
                    case 2: days += 28;break;
                }
        }
        void calDay()
        {
            days += dy;
        }
};
int main()
{
    int yy,mm,dd;
    scanf("%d-%d-%d",&yy,&mm,&dd);
    Problem *prom = new Problem(yy,mm,dd);
    prom->cal(),prom->print();
    delete prom;
    system("pause");
    return 0;
}