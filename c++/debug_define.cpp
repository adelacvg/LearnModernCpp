#include<iostream>
#include<string>
#define LOCAL

void debug_out() { std::cerr << std::endl; }
 
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
    std::cerr << " " << std::to_string(H);
    debug_out(T...);
}

#ifdef LOCAL
#define debug(...) std::cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

int main()
{
    int a{4},b{2},c{3};
    debug(a,b,c);
    
    return 0;
} 
