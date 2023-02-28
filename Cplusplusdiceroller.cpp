#include <iostream>
#include <cstdlib>
using namespace std;

int rand();

int roll(int sides, int amount, int mod){
    int i;
    int x;
    x = rand()%(sides + 1);
    for(i = 1; i < amount; ++i){
        x = (x + rand()%(sides + 1));
    }
    x = (x + mod);
    return x;
}

int main(){
    int sidz;
    int amm;
    int mod;
    int bl = 0;
    
    for (bl = 0;bl < 1000; ++bl){
        cout << "How many sides does your dice have? " << endl;
        cin >> sidz;
        cout << "How many dice? " << endl;
        cin >> amm;
        cout << "What number should I add to the roll after it is all rolled? " << endl;
        cin >> mod;
        int b = roll(sidz,amm,mod);
    
        cout << b <<endl<<endl;
    }
}

