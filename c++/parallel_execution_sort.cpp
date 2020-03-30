#include<iostream>
#include<fstream>
#include<algorithm>
#include<execution>
#include<chrono>
int a[1000010],b[1000010];
int main()
{
    std::ifstream cin("P1177_2.in");
    std::ofstream cout("test.out");
    std::ios::sync_with_stdio(0);
    std::cin.tie(0);

    int n;
    auto start = std::chrono::steady_clock::now();
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
        
    std::sort(a,a+n);
    auto end = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsed_seconds = end-start;
    std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";

    start = std::chrono::steady_clock::now();
    std::sort(std::execution::par, b, b+n);
    end = std::chrono::steady_clock::now();
    elapsed_seconds = end-start;
    std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
}