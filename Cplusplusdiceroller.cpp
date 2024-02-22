#include <iostream>
#include <ctime>

int roll(int x, int y, int z){
    /* X = sides
       Y = roll times
       Z = modifier
    */
    srand(time(NULL));
    int end = 0;
    for(int i =0;i < y;i++){
        end += (rand() % x) + 1;
    }
    
    return (end + z);
}

int main(){
    int sidz;
    int amm;
    int mod;
    
    while(1 == 1){
        std::cout << "How many sides does your dice have?: ";
        std::cin >> sidz;
        std::cout << "How many dice? ";
        std::cin >> amm;
        std::cout << "What number should I add to the roll after it is all rolled? ";
        std::cin >> mod;
        
        std::cout << roll(sidz,amm,mod) << std::endl << std::endl;
    }
}
