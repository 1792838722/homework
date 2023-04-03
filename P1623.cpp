#include <iostream>
#include <cstring>
class email{
    public:
        email(std::string tmp)
        {
            str = tmp;
        }
        bool checkAll()
        {
            for(int i = 0;i < str.size();i++)
            {
                if(!(check(str[i]) || str[i] == '@' || str[i] == '.'))
                    return 0;
            }
            int pos1 = findSign1(),pos2 = findSign2();
            return (pos1 * pos2) && (pos1 != str.size() - 1) && (pos2 != str.size() - 1) && (pos1 != pos2 - 1);
        }
    private:
        std::string str;
        bool check(char ch)
        {
            return ch >= 'a' && ch <= 'z' || ch >= 'A' && ch < 'Z' || ch >= '0' && ch <= '9' || ch == '-' || ch == '_';
        }
        int findSign1()
        {
            if(!check(str[0]))
                return 0;
            str[0] = '0';
            for(int i = 1;i < str.size();i++)
            {
                if(str[i] == '@' && str[0] - '0')
                    return str[0] - '0';
                else if(str[i] == '@')
                    str[0] = i + '0';
            }
            return str[0] - '0';
        }
        int findSign2()
        {
            str[0] = '0';
            for(int i = 1;i < str.size();i++)
            {
                if(str[i] == '.' && str[0] - '0')
                    return str[0] - '0';
                else if(str[i] == '.')
                    str[0] = i + '0';
            }
            return str[0] - '0';
        }
};
int main()
{
    std::string x;
    std::cin >> x;
    email *adr = new email(x);
    adr->checkAll() ? std::cout << "yes" : std::cout << "no";
    return 0;
}