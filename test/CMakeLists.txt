add_executable(maths_test
    math_test.cpp
)

target_link_libraries(maths_test
    maths_lib
    gtest_main
)

include(GoogleTest)
gtest_discover_tests(maths_test)
