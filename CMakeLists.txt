cmake_minimum_required(VERSION 3.31)
project(chapter_01)

set(CMAKE_CXX_STANDARD 23)

# Include the headers from the include/ directory
include_directories(include)

# Add the executable and specify source files from src/
add_executable(chapter_01
        src/main.cpp
        src/Book.cpp
        src/Category.cpp
        src/BookManagement.cpp
        src/BookPublishingInfo.cpp
        src/BookInventoryState.cpp
        src/Member.cpp
        include/Member.h
        src/MemberManagement.cpp
        include/MemberManagement.h
)
