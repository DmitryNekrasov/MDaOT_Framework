#ifndef BINARYFILTER_H
#define BINARYFILTER_H
#include "filter.h"

class BinaryFilter: public Filter
{
private:

    int threshold;

public:

    virtual Frame apply(Frame originalFrame);

    BinaryFilter(int threshold);
    ~BinaryFilter();
};

#endif // BINARYFILTER_H