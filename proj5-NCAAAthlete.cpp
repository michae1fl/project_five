#include "proj5-NCAAAthlete.h"

void NCAAAthlete::setID(int id) {
    athleteID = id;
}

void NCAAAthlete::setName(string name) {
    athleteName = name;
}

void NCAAAthlete::setSchool(string school) {
    schoolChoice = school;
}

void NCAAAthlete::setLOI(string loi) {
    if (loi == "yes") {
        athleteLOI = true;
    }
    else {
        athleteLOI = false;
    }
}

int NCAAAthlete::getID() {
    return athleteID;
}

string NCAAAthlete::getName() {
    return athleteName;
}

string NCAAAthlete::getSchool() {
    return schoolChoice;
}

bool NCAAAthlete::getLOI() {
    return athleteLOI;
}

string NCAAAthlete::toString() {
    ostringstream out;

    out << "ID: " << athleteID << endl;
    out << "Name: " << athleteName << endl;

    if (athleteLOI) {
        out << "School: " << schoolChoice << endl;
    }
    else {
        out << "Available" << endl;
    }

    return out.str();
}
