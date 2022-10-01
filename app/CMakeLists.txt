# Make sure the compiler can find include files from our myLib library.
include_directories (${CMAKE_SOURCE_DIR}/include)

# Make sure the linker can find the myLib library once it is built.
link_directories (${CMAKE_BINARY_DIR}/src)

# Add executable called "myApp" that is built from the source files
# "main.cpp".
add_executable (myApp main.cpp)

# Link the library, myLib (eg., libmyLib.a), to the executable myApp.
target_link_libraries (myApp myLib)