//
// Created by mcsheng on 2019-05-25.
//

#ifndef PROJECT_MORERECTANGLE_H
#define PROJECT_MORERECTANGLE_H

#include "Shape.h"
#include "PaintCost.h"

class MoreRectangle : public Shape, public PaintCost{
public:
    int getArea();
};


#endif //PROJECT_MORERECTANGLE_H