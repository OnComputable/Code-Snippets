/* Section - 0.12 — Configuring your compiler: Choosing a language 
   CopyTyper - Swiss
   Testing your compiler for C++17 compatibility
*/

#include <array>
#include <iostream>
#include <string_view>
#include <tuple>
#include <type_traits>

namespace a::b::c
{
    inline constexpr std::string_view str{ "hello" };
}

template <class... T>
std::tuple<std::size_t, std::common_type_t<T...>> sum(T... args)
{
    return { sizeof...(T), (args +...) };
}

int main()
{
    auto [iNumbers, iSum]{ sum(1,2,3) };
    std::cout << a::b::c::str << ' ' << iNumbers << ' ' << iSum << '\n';

    std::array arr{ 1, 2, 3 };

    std::cout << std::size(arr) << '\n';
    
    return 0;
}