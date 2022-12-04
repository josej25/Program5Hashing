#include <iostream>
#include <string>
#include <unordered_map>
#include "Dogs.h"
#include "CSV.h"
using namespace std;

int main()
{
    unordered_map<string,Dogs> dogPopulation;
    CSV myCSV;
    Dogs d;
    ifstream fOne;
    fOne.open("dogs.txt",ios::in);
    int records;
    while(fOne){
        myCSV.getLine(fOne);
        if (myCSV.getNumFields()>0){
            records++;
           // cout << myCSV.getField(1) << endl;
            d.findTotalDogPop(myCSV.getField(1));
            for(int i=0; i<myCSV.getNumFields(); i++){
                Dogs d(myCSV.getField(0),myCSV.getField(1));
                dogPopulation[myCSV.getField(0)] = d;

            }
        }
    }
//        for (auto i =dogPopulation.begin(); i!=dogPopulation.end(); i++)
//    {
//        cout << i-> first << "," << i->second.getDogPop() << endl;
//    }
        int request;
        string name;
    do {
        cout << endl
             << "1. Find a Country's dog population"<< endl
             << "2. Total number of dogs in the world"<< endl
             << "3. Quit"<< endl << endl
             << "Enter Choice: ";

        cin >> request;
        switch (request){
            case 1: {cout << endl << "Enter Country Name: ";

                    cin >> name;
                    cout << endl;
                    auto it = dogPopulation.find(name);
                    if(it != dogPopulation.end()){
                    cout << it->first<< " has" << it->second.getDogPop()<< "dogs." << endl;
                    }
                    else{
                        cout << "Country not found";
                    }
                    break;}
            case 2: {cout << endl;
            cout<<"There are a total of "<< d.getTotalDogPop() << " dogs in the world.";
                    break;}
            case 3: break;
        }

    } while (request !=3);

    return 0;
}
