#include <iostream>
#include <fstream>

#include "proj5-BUAthleteList.h"

using namespace std;

int

int main () {

    BUAthleteList *players = nullptr;
    int count = 0;
    ifstream NCAAfile;
    ifstream BUfile;
    int idxs;
    string names;
    string schools;
    string lois;

    int evals;

    NCAAfile.open("proj5-NCAAAthlete.csv");
    BUfile.open("proj5-BUAthlete.csv");

    while (NCAAfile >> idxs) {
        NCAAfile.ignore();
        getline(NCAAfile, names, ',');
        getline(NCAAfile, lois, ',');
        getline(NCAAfile, schools);
        players[count].addNCAAAthlete(idxs, names, lois, schools);
        count ++;
    }

    count = 0;
    while (BUfile >> idxs) {
        BUfile.ignore();
        BUfile >> Positions;
        BUfile >> evals;

        players->setBUInfo(idxs, positions, evals);
    }





    return 0;
}