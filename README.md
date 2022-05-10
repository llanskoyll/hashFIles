# Run to programm you need

#### to go to the
````
../build/src/fileHash_run
````
#### passing the absolute address of the .json file and the required number of threads. An example .json file is in src/listFiles.json.
example:
````
./fileHash_run "/home/user/desktop/list.json" 4
````
## Performance
#### A 33Mb file was used in the measurement. xlabel - the number of processed files, ylabel - the time it took (see benchmark code) PC :
#### CPU:Intel core i3-1005G1 1.2GHz, RAM: 8 GB, GPU: Intel Corporation Device 8a5b, SDD: M.2 PCIe
![Image alt](https://github.com/llanskoyll/hashFIles/blob/master/exampleFiles/graphic.png)

## Unit-test (gtest)
#### To check unit tests, you need to go to
````
.../build/test/fileHash_test
````
example unit-test:
![Image alt](https://github.com/llanskoyll/hashFIles/blob/master/exampleFiles/ex_unit.png)

## Benchmark (google benchmark)
#### to run benchamark
````c++
.../benchmark  //open folder

g++ hash_bench.cpp -lbenchmark -lpthread -o hash_bench // compile file benchmark

./hash_bench // start benchmark
````
#### Below are screenshots of the runtime for 1 and 4 threads.

![Image alt](https://github.com/llanskoyll/hashFIles/blob/master/exampleFiles/ex_bench.png)
