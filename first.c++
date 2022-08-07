#include <iostream>

int if100(int a,int b)
{
if(a + b >100)
{
return 100;
}
else
return -1; 
}

int main()
{
    for(int i=0;i<10;i++)
    {
        std::cout<<"jeet raghuwanshi" << std::endl;
    }
    std::cout<< "result" << std::endl;
    std::cout<<"bye one" << std::endl;
   int output = if100(100,12);
   std::cout<< output << std::endl;
    return 0;
}