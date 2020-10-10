#include <iostream>
#include <memory>
#include <string_view>
 
void output(std::string msg, int const* pInt)
{
    std::cout << msg << *pInt << "\n";
}
 
int main()
{
    int* pInt = new int(42);
    std::shared_ptr<int> pShared = std::make_shared<int>(42);
 
    output("Naked pointer ", pInt);
    // output("Shared pointer ", pShared); // compiler error
    output("Shared pointer with get() ", pShared.get());
 
    delete pInt;
}
