#include <iostream>
#include "Complejo.h"

using namespace std;

int main()
{
    Complejo a;
    Complejo b(5.3, 6.1);
    Complejo c(5.3, -6.1);

    cout <<"Son iguales: " << (c==b) << endl;

    c.setReal( 89 );

    if(true){
        Complejo d = b + c;
    }

    cout << "Hello World!" << endl;
    return 0;
}
