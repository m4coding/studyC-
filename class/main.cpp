//
// Created by mcsheng on 2019-05-25.
//

#include <iostream>
#include "Rectangle.h"
#include "MoreRectangle.h"

/**
 * 类  继承 相关测试
 * @return
 */
int main() {
    Rectangle rectangle;
    rectangle.setWidth(50);
    rectangle.setHeight(50);
    std::cout <<  "Rectangle Area is " <<rectangle.getArea() << std::endl;

    MoreRectangle moreRectangle(10);
    moreRectangle.setWidth(50);
    moreRectangle.setHeight(50);
    std::cout << "MoreRectangle Id is " << moreRectangle.getId() << std::endl;
    std::cout << "MoreRectangle Area is " << moreRectangle.getArea() << std::endl;
    std::cout << "MoreRectangle Cost is " << moreRectangle.getCost(moreRectangle.getArea()) << std::endl;

    MoreRectangle moreIdRectangle(100);
    std::cout << "moreIdRectangle Id is " << moreIdRectangle.getId() << std::endl;
    std::cout << "moreIdRectangle name is " << moreIdRectangle.getName() << std::endl;

}
