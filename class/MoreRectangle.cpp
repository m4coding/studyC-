//
// Created by mcsheng on 2019-05-25.
//

#include "MoreRectangle.h"



int MoreRectangle::getArea() {
    return mWidth * mHeight;
}

int MoreRectangle::getId() {
    return mId;
}

MoreRectangle::MoreRectangle(int id) {
    mId = id;
}
