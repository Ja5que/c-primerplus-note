#include "stonewt.h"
#include <iostream>

int main(){
    Stonewt incognito = 275;
	Stonewt wolfe(285.7);
	Stonewt taft(21, 8);
    incognito.setMode(Stonewt::DBL);
    wolfe.setMode(Stonewt::DBL);
    taft.setMode(Stonewt::DBL);
    std::cout << "The celebrity weighed ";
    std::cout << incognito << std::endl;    
    std::cout << "The detective weighed ";
    std::cout << wolfe << std::endl;
    std::cout << "The President weighed ";
    std::cout << taft << std::endl;

    taft= incognito + wolfe;
    std::cout << "Incognito + Wolfe = ";
    std::cout << taft << std::endl;

    taft = incognito - wolfe;
    std::cout << "Incognito - Wolfe = ";
    std::cout << taft << std::endl;

    taft = incognito * 2.0;
    std::cout << "Incognito * 2.0 = ";
    std::cout << taft << std::endl;

    taft = 2.0 * incognito;
    std::cout << "2.0 * Incognito = ";
    std::cout << taft << std::endl;
    
    return 0;
}