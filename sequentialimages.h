#ifndef SEQUENTIALIMAGES_H
#define SEQUENTIALIMAGES_H
#include "detectionmethod.h"
#include "filter.h"
#include "grayscalefilter.h"
#include "binaryfilter.h"
#include "blurfilter.h"
#include "medianfilter.h"


class SequentialImages: public DetectionMethod
{
public:

    virtual void detect(Video video);

    SequentialImages();
    ~SequentialImages();
};

#endif // SEQUENTIALIMAGES_H
