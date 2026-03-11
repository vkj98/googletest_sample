add_library(maths_lib
    maths.cpp
    maths.h
)

target_include_directories(maths_lib
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
)

# Application executable
add_executable(maths_app
    main.cpp
)

target_link_libraries(maths_app
    maths_lib
)

