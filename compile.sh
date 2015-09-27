pushd $1
echo compiling $1
g++ -std=c++14 *.cpp
popd
