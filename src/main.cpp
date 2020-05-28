#include <iostream>
#include <gflags/gflags.h>

#include "sample.h"

using namespace std;

DEFINE_int32(seed, 0, "Use given seed to repeat previous result, 0 means use current time as seed");

int main(int argc, char **argv)
{
  gflags::SetUsageMessage("A sample executable");
  gflags::ParseCommandLineFlags(&argc, &argv, true);

  if (argc > 1)
  {
    cerr << "Command line arguments not recognized, please see following for usage:" << endl;
    cerr << "  " << argv[0] << " --help" << endl;
    exit(1);
  }

  sample::Sample sample;
  if (sample.init(5))
  {
    cout << "My value is " << sample.getValue() << endl;
  }

  return 0;
}
