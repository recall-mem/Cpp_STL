#include <iostream>
#include <vector>
#include <ostream>
 
std::ostream& operator<<(std::ostream& os, std::vector<int>& v){
    for(auto t : v)
        os << t << ' ';
    os << std::endl;
    
    return os;
}

int main()
{
    using std::cout;

    std::vector<int> vec;

    // assign(count, value)
    vec.assign(12, 5);
    cout << vec;

    // assign({list})
    std::vector<const char*> words;
    words.assign({"first line\n", "second line\n"});
    cout << words[0];
    cout << words[1];
    cout.flush();

    

    return 0;
}