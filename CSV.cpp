#include "CSV.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

CSV::CSV()
{
    numFields = 0;
}
void CSV::getLine(ifstream& fin)
{
    string line, field;
    getline(fin, line);

    stringstream str(line);
    fields.clear();
    numFields = 0;
    while (getline(str, field, ','))
    {
        numFields++;
        fields.push_back(field);
    }
}

int CSV::getNumFields()
{
    return numFields;
}

string CSV::getField(int i)
{
    return fields[i];
}
