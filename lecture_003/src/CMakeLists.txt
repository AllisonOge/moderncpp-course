add_library(lecture_003 lecture_003.cpp)
add_library(another_lecture_003 another_lecture_003.cpp)

add_executable(main main.cpp)

# link libraries to target
target_link_libraries(main 
                      lecture_003
                      another_lecture_003)