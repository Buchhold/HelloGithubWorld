add_executable(MyClassTest MyClassTest.cpp)
add_executable(MyClassOtherTest MyClassOtherTest.cpp)
# Create dependency on googletest
add_dependencies(MyClassTest googletest)
add_dependencies(MyClassOtherTest googletest)

target_link_libraries(MyClassTest ${GTEST_LIBRARY} util -pthread)
target_link_libraries(MyClassOtherTest ${GTEST_LIBRARY} util -pthread)

add_library(tests MyClassTest MyClassOtherTest)