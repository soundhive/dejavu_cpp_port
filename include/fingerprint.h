#include <opencv2/opencv.hpp>
#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <iterator>
#include <iostream>
#include <typeinfo>
#include <math.h>
#include <chrono>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/uuid/sha1.hpp>
#include <fstream>

// int DEFAULT_FAN_VALUE = 15;
// int MIN_HASH_TIME_DELTA = 0;
// int MAX_HASH_TIME_DELTA = 200;
// int FINGERPRINT_REDUCTION = 20;
// int PEAK_NEIGHBORHOOD_SIZE = 20;
// float DEFAULT_AMP_MIN = 10;
// int DEFAULT_WINDOW_SIZE = 4096;
// float DEFAULT_OVERLAP_RATIO = 0.5;
// float FS = 44100.0;



namespace fingerprint {
    std::string fingerprint (float *data, size_t data_size,
                            float samplerate);

}

