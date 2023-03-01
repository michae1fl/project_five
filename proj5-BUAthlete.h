#ifndef PROJECT_FIVE_PROJ5_BUATHLETE_H
#define PROJECT_FIVE_PROJ5_BUATHLETE_H

#include "proj5-NCAAAthlete.h"

enum Position {
    OL, QB, RB, WR, TE, DL, DE, LB, CB, S, K
};

class BUAthlete : public NCAAAthlete {

protected:
    int athleteEvaluation;
    Position athletePosition;

public:
    void setEvaluation(int);
    void setPosition(Position);
    int getEvaluation();
    Position getPosition();
    string toString() override;
};

#endif //PROJECT_FIVE_PROJ5_BUATHLETE_H
