#ifndef SAMPLE_SAMPLE_H
#define SAMPLE_SAMPLE_H

namespace sample
{

    class Sample
    {
    public:
        Sample();

        bool init(int value);
        bool method(bool val);
        int getValue();

    private:
        int _value;
    };
} // namespace sample

#endif