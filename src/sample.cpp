#include "sample.h"

using namespace sample;

Sample::Sample()
{
}

bool Sample::init(int value)
{
    _value = value;
    return true;
}

bool Sample::method(bool val)
{
    return val;
}

int Sample::getValue()
{
    return _value;
}