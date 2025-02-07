#include <iostream>
#include <array>

int main()
{   
    using std::cout;

    std::array<char, 13> arr{"Hello World\n"};
    
    cout << &arr[0];

    cout << "arr.size(): " << arr.size() << '\n';

    cout << "arr.max_size(): " << arr.max_size() << '\n';

    cout << std::boolalpha << "arr.empty(): " << arr.empty() << '\n';
    
    return 0;
}