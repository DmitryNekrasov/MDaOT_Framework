#ifndef BLURFILTER_H
#define BLURFILTER_H
#include "filter.h"

class BlurFilter: public Filter
{
private:

    int widthBlur;
    int heightBlur;

public:

    virtual Frame apply(Frame originalFrame);

    BlurFilter(int widthBlur, int heightBlur);
    ~BlurFilter();
};

#endif // BLURFILTER_H