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
