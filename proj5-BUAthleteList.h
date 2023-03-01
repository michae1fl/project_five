#ifndef PROJECT_FIVE_PROJ5_BUATHLETELIST_H
#define PROJECT_FIVE_PROJ5_BUATHLETELIST_H

#include "proj5-BUAthlete.h"

int DEFAULT = 2;

class BUAthleteList : public BUAthlete {

protected:
    BUAthlete *list = nullptr;
    int capacity = DEFAULT;
    int size = 0;
    void resizeArray();

public:
    void addNCAAAthlete(int ID, string name, string LOl, string school);
    void setBUInfo(int index, Position pos, int eval);
    int findByld(int id);
    void sortByID();
    void sortByPosition();
    void sortByEvaluation();
    BUAthlete& operator[ ](int ndx);
    string toString() override;;
};

#endif //PROJECT_FIVE_PROJ5_BUATHLETELIST_H
