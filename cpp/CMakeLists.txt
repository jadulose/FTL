project(ftl)

# Project target_sources
set(PROJECT_SOURCES
        farraylist.cpp farraylist.h
        flist.h)

add_library(${PROJECT_NAME} SHARED ${PROJECT_SOURCES})
