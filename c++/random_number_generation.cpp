#include<iostream>
#include<cstdlib>
#include<ctime>
#include<random>


namespace MyRandom
{
	// Initialize our mersenne twister with a random seed based on the clock (once at system startup)
	std::mt19937 mersenne(static_cast<std::mt19937::result_type>(std::time(nullptr)));
}
 
int getRandomNumber(int min, int max)
{
	std::uniform_int_distribution<> die(min, max); // we can create a distribution in any function that needs it
	return die(MyRandom::mersenne); // and then generate a random number from our global generator
}

/*int getRandomNumber(int min, int max)//std::rand is a mediocre PRNG
{
    static constexpr double fraction { 1.0 / (RAND_MAX + 1.0) };  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}*/

int main()
{
    std::srand(static_cast<int>(std::time(nullptr)));
    
    std::mt19937 mersenne(static_cast<std::mt19937::result_type>(std::time(nullptr)));

    std::uniform_int_distribution<> die(1,6);

    for(int count=1;count<=48;count++)
    {
        std::cout<<die(mersenne)<<'\t';

        if(count%6 == 0)
            std::cout<<'\n';
    }
    std::cout<<'\n';

    for(int count =1;count<=100;count++)
    {
        std::cout<<std::rand()<<'\t';

        if(count%5 == 0)
            std::cout<<'\n';
    }
    std::cout << getRandomNumber(1, 6) << '\n';
	std::cout << getRandomNumber(1, 10) << '\n';
	std::cout << getRandomNumber(1, 20) << '\n';
    return 0;
}
