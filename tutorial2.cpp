// Online C++ compiler to run C++ program online
#include <iostream>
#include <set>
void fn ( )
{
    std::set<std::string> S = {"cat","dog","rat"};
    for (auto E:S)
    {
        std::cout<<E<<" "<<std::endl;
    }
}
void fn2 ( )
{
    std::set<std::string> B ={"1","5","2","3","4"};
    for (auto E:B)
    {
        std::cout<<E<<" "<<std::endl;
    }
}
void fn3 ( )
{
    std::set<std::string> V ={"man","fan","tan"};
    for (auto E:V)
    {
    std::cout<<E<<" "<<std::endl;
    }
}    
int main()
{
    fn ( );
    // Write C++ code here
    std::cout << "Hello world!";
    std::cout << "numbers";
    fn2 ( );
    std::cout << "rhyming words";
    fn3 ( );
    return 0;
}
