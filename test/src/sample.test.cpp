//
//
#include <iostream>
#include <vector>

#include "sample.h"
#include "gtest/gtest.h"
#include "gflags/gflags.h"

#include "macros.h"
#include "args.h"

using namespace std;
using namespace sample;

namespace sample
{
    namespace test
    {
        // Add utility functions here
        /*
        vector<int> generateRandomSequence(const int &N, const int &M, int seed)
        {
            vector<int> A(N);
            if ( !seed ) {
                seed = time(0);
            }
            cout << "Generating random sequence using " << seed << endl;
            srand(seed);

            for (int i=0; i<N; i++) {
                A[i] = rand() % (M+1);
            }
            return A;
        }
        */
    } // namespace test
} // namespace sample

TEST(Sample, Init)
{
    Sample sample;
    ASSERT_EQ(sample.init(5), true);
}

TEST(Sample, Method)
{
    Sample sample;
    bool val = false;

    ASSERT_EQ(sample.method(val), val);
}

TEST(Sample, getValue)
{
    int value = 5;
    Sample sample;
    sample.init(5);

    ASSERT_EQ(sample.getValue(), value);
}