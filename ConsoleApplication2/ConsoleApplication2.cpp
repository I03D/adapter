#include <iostream>
#include "Duck.h"
#include "MallardDuck.h"
#include "TurkeyAdarter.h"
#include "WildTurkey.h"

using testDuck(Duck* duck) {
    duck->quack();
    duck->fly();
}

int main()
{
    MallardDuck* duck = new MallardDuck();
    WildTurkey* turkey = new WildTurkey();
    Duck* adapter = new TurkeyAdapter(turkey);

    cout << "The turkey says..." << endl;
    turkey->gobble();
    turkey->fly();

    cout << "Ghe Duck says..." << endl;
    testDuck(adapter);

    delete duck, turkey, adapter;

    return 0;
}
