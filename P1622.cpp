#include <iostream>
#include <cstring>
class Number{
    public:
        Number(int size)
        {
            this->size = size;
            memset(bucket,0,sizeof bucket);
        }
        void init()
        {
            for(int i = 1;i <= size;i++)
            {
                std::cin >> numbers[i];
                bucket[numbers[i]]++;
            }
        }
        void print()
        {
            for(int i = 1;i <= size;i++)
            {
                if(bucket[numbers[i]] == 2)
                {
                    std::cout << numbers[i] << " ";
                    bucket[numbers[i]] = 0;
                    numbers[0] = -1;
                }
            }
            if(numbers[0] != -1)
                std::cout << "none";
        }
    private:
        int size,bucket[1005];
        int numbers[25];
};
int size,numbersNeedInput;
int main()
{
    std::cin >> size;
    Number *nums = new Number(size);
    nums->init();
    nums->print();
    delete nums;
    return 0;
}