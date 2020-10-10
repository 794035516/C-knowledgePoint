#include <iostream>
#include <memory>
#include <string_view>
 

using namespace std;

int main()
{
    int *data;
    {
        std::shared_ptr<int> pShared = std::make_shared<int>(42);
        data = pShared.get();
		cout<<pShared<<" -- "<<data<<endl;
        // 这里智能指针已经释放了
    }
    {
		cout<<*data<<endl;
//		int* temp = new int(10);
        std::shared_ptr<int> pShared2 = std::make_shared<int>(32);
        std::shared_ptr<int> pShared3 = std::make_shared<int>(22);
		cout<<pShared2<<" -- "<<data<<endl;
    }
    std::cout << *data << "\n";

}
