#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using std::cin;
using std::cout;    using std::endl;
using std::vector;
int main() {
    vector<int> v;
    std::copy(std::istream_iterator<int>(cin), std::istream_iterator<int>(), std::back_inserter(v));

    std::copy(v.cbegin(), v.cend(), std::ostream_iterator<int>(cout, " "));

    return 0;
}
