#include "proj5-BUAthlete.h"

void BUAthlete::setEvaluation(int val) {
    athleteEvaluation = val;
}

void BUAthlete::setPosition(Position pos) {
    athletePosition = pos;
}
int BUAthlete::getEvaluation() {
    return athleteEvaluation;
}
Position BUAthlete::getPosition() {
    return athletePosition;
}
string BUAthlete::toString()  {
    stringstream out;

    out << "Evaluation: " << athleteEvaluation << endl;
    out << "Position: " << athletePosition << endl;

    return NCAAAthlete::toString() + out.str();
}