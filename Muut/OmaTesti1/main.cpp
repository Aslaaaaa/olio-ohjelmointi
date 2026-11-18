#include <iostream>

using namespace std;

void sarja(int sluku) {
    srand(sluku);

    for (int i = 1; i<5; i++){
        int satunnaisluku = rand() % 20;
        cout<<satunnaisluku<<endl;
    }
}
