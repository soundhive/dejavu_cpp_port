# Dejavu C++ port (audio fingerprinting)

This is a C++ implementation of the fingerprinting algorithm suggested in the dejavu audio fingerprinting project (https://github.com/worldveil/dejavu specifically: the `fingerprint.py` file). [link on how dejavu works](http://willdrevo.com/fingerprinting-and-audio-recognition-with-python/)

## Prerequisites

The "fingerprint" function will accept array of floats as an input (raw audio PCM data). It will returns a list of hashes with offsets (as a json string).

### Dependencies

- [OpenCV](https://opencv.org/) (>= 3.2)
- [Boost](https://www.boost.org/) (>= 1.60)
- C++14
- For demo only: [ffmpeg](https://ffmpeg.org/)

### Example usage on Debian

```sh
apt install build-essential ffmpeg libopencv-dev libboost-thread-dev
```

```sh
cd dejavu_cpp_port
mkdir build
cd build
cmake ..
make
cd ../
```

Example run:

```sh
~/dejavu_cpp_port ~> ./build/bin/fingerprint
[{"hash":"8736b04e6e0fbc58d032","offset":"7"}
,{"hash":"b4e63c079f54ffc5ef12","offset":"7"}
,{"hash":"7520c79e12d590fee83b","offset":"7"}
,{"hash":"62623d0877ac8a92b053","offset":"7"}
,{"hash":"a8f58a0df43f5b3af85a","offset":"7"}
,{"hash":"8083728131d5f7a23734","offset":"7"}
,{"hash":"f30372836464cd40e237","offset":"7"}
,{"hash":"faa8ce3862e0b94cd2c6","offset":"7"}
,{"hash":"74f8e1601a5598a18eb5","offset":"7"}
,{"hash":"2cfbc298df696dd3d841","offset":"7"}
...
```

## Why the C++ port?

1. You can run C++ code on iOS or Android (tested it myself, works Flawlessly).
2. In theory: performance boost. In practice: didn't see much difference.

## Demo

The main function will load a test mp3 file, uncompressed it using ffmpeg (as a mono channel, 22050 sample rate), feed it to fingerprint function, then prints the list of hashes-offsets.

## Update 2020: Include it in react-native/iOS/Android

Now a sample code is provided in a [different repository](https://github.com/salsowelim/mobileAfp) that demonstrates how to include this function in a react-native project. [Blog post](http://en.suliman.ws/posts/mafp) is available that explains how to do it.

## Final notes

- I wrote this code initially for prototype purposes. while I have tested the correctness of the algorithm output, I didn't optimise the code to C++ best standards. If you want to improve the code in this manner I will gladly accept pull requests.
- Performance (speed wise) is really slow when the audio input is large. However on small audio files (<10 seconds) it is similar or better than python implementation. For now, I'm not interested to look after this issue. If you have a fix, PR.
