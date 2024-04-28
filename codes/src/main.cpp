#ifdef DEBUG
#define DEBUG_IS_ON 1
#else
#define DEBUG_IS_ON 0
#endif


#include <iostream>
#include <ostream>
#include "vector.h"


/**
 * @brief The main entry point of the program.
 *
 * This function is the starting point of the program execution.
 * It takes command-line arguments and returns an integer value.
 *
 * @param argc The number of command-line arguments.
 * @param argv An array of strings representing the command-line arguments.
 * @return An integer value indicating the exit status of the program.
 */


int main(int argc, char* argv[])
{
    if(DEBUG_IS_ON)
    {
        std::cout << "debug mode is on" << std::endl;
    }


    return 0;
}