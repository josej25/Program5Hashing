#include "Dogs.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
Dogs::Dogs()
{
    m_country = "";
    m_dogPop = "";
    m_tDogPop = 0;
}
Dogs::Dogs(string country, string dogPop)
{
    m_country = country;
    m_dogPop = dogPop;
}
string Dogs::getCountry()
{
    return m_country;
}
string Dogs::getDogPop()
{
    return m_dogPop;
}
int Dogs::getTotalDogPop()
{
    return m_tDogPop;
}
void Dogs::findTotalDogPop(string total)
{
    int ints =0;
    stringstream sstream(total);
    sstream >> ints;
    m_tDogPop += ints;

}

void Dogs::setCountry(string country)
{
    m_country = country;
}
void Dogs::setDogPop(int dogPop)
{
    m_dogPop = dogPop;
}
