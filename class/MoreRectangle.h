//
// Created by mcsheng on 2019-05-25.
//

#ifndef PROJECT_MORERECTANGLE_H
#define PROJECT_MORERECTANGLE_H

#include "Shape.h"
#include "PaintCost.h"

class MoreRectangle : public Shape, public PaintCost{
public:
    MoreRectangle(int id = -100);
    MoreRectangle(const char* name, int id = -100);
    int getArea();
    int getId();
    const char* getName();

private:
    int mId;
    const char* mName = "xxxx";
};


#endif //PROJECT_MORERECTANGLE_H
