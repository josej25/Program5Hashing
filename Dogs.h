#ifndef DOGS_H
#define DOGS_H
#include <string>
using namespace std;

class Dogs
{
    public:
        Dogs();
        Dogs(string, string);

        string getCountry();
        string getDogPop();
        int getTotalDogPop();
        void findTotalDogPop(string);
        void setCountry(string);
        void setDogPop(int);

    protected:

    private:
        string m_country;
        string m_dogPop;
        int m_tDogPop;
};

#endif // DOGS_H
