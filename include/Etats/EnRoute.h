#ifndef ENROUTE_H
#define ENROUTE_H

#include <EtatRobot.h>


class EnRoute : public EtatRobot
{
    public:
        EnRoute() : EtatRobot() {};
        virtual EtatRobot* figer();
        virtual EtatRobot* tourner();
};

#endif // ENROUTE_H
