project(test_ftl)

# Project target_sources
set(PROJECT_SOURCES
        main.cpp)

add_executable(test_ftl ${PROJECT_SOURCES})
include_directories(..)
target_link_libraries(test_ftl ftl)
