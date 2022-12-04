#ifndef CSV_H
#define CSV_H
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class CSV
{
    public:
        CSV();
        void getLine(ifstream&);
        string getField(int);
        int getNumFields();
    private:
        vector<string> fields;
        int numFields;

};

#endif // CSV_H
