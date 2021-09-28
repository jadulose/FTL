project(ftl)

# Project target_sources
set(PROJECT_SOURCES
        farraylist.cpp farraylist.h
        flist.h
        main.cpp)

#add_library(${PROJECT_NAME} SHARED ${PROJECT_SOURCES})
add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})
