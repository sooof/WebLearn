
#ifndef INCLUDED_UTILS_SAFE_MAIN_HPP
#define INCLUDED_UTILS_SAFE_MAIN_HPP

#include <iostream>
#include <stdexcept>

/*!
 * Defines a safe wrapper that places a catch-all around main.
 * If an exception is thrown, it prints to stderr and returns.
 * Usage: int SAFE_MAIN(int argc, char *argv[]){ main code here }
 * \param _argc the declaration for argc
 * \param _argv the declaration for argv
 */
#define SAFE_MAIN(_argc, _argv) _main(int, char*[]); \
int main(int argc, char *argv[]){ \
    try { \
        return _main(argc, argv); \
    } catch(const std::exception &e) { \
        std::cerr << "Error: " << e.what() << std::endl; \
    } catch(...) { \
        std::cerr << "Error: unknown exception" << std::endl; \
    } \
    return ~0; \
} int _main(_argc, _argv)

#endif /* INCLUDED_UTILS_SAFE_MAIN_HPP */
