#include "proj5-BUAthleteList.h"

void BUAthleteList::resizeArray() {

    BUAthlete *temp = nullptr;

    capacity += 2;
    temp = new BUAthlete[capacity];

    for (int i = 0; i < size; i++) {
        temp[i] = list[i];
    }

    delete [] list;

    list = temp;
}

void BUAthleteList::addNCAAAthlete(int ID, string name, string LOl, string school) {

    if (size+1 == capacity) {
        resizeArray();
    }

    list[size].setID(ID);
    list[size].setName(name);
    list[size].setLOI(LOl);
    list[size].setSchool(school);

    size ++;

}

void BUAthleteList::setBUInfo(int index, Position pos, int eval) {

    int n;

    for (int i = 0; i < size; i++) {
        if (list[i].getID() == index) {
            n = i;
        }
    }
    list[n].setPosition(pos);
    list[n].setEvaluation(eval);
}

int BUAthleteList::findByld(int id) {
    int loc = -1;

    for (int i = 0; i < size; i++) {

        if (list[i].getID() == id) {
            loc = i;
        }
    }

    return loc;
}

void BUAthleteList::sortByID() {

    for(int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-1-i; j++) {
            if (list[j].getID() > list[j+1].getID()) {
                swap(list[j], list[j+1]);
            }
        }
    }

}

void BUAthleteList::sortByPosition() {

    for(int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-1-i; j++) {
            if (list[j].getPosition() > list[j+1].getPosition()) {
                swap(list[j], list[j+1]);
            }
        }
    }
}

void BUAthleteList::sortByEvaluation() {
    for(int i = 0; i < size-1; i++) {
        for (int j = 0; j < size-1-i; j++) {
            if (list[j].getEvaluation() > list[j+1].getEvaluation()) {
                swap(list[j], list[j+1]);
            }
        }
    }
}

BUAthlete &BUAthleteList::operator[](int ndx) {
    return list[ndx];
}

string BUAthleteList::toString() {

    ostringstream out;

    for (int i = 0; i < size; i ++) {
        out << "[ " << i << " ]" << endl;
        out << list[i].toString();
    }

    return out.str();
}







