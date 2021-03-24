#include <iostream>
#include "Direction.hpp"
#include <string>
using namespace std;
namespace ariel {
        class Board{
            public : 
            Board();
           string read(unsigned int row, unsigned int col, Direction direction, unsigned int length);
            void post(unsigned int row, unsigned int col, Direction direction, const string &msg);
            void show();
        };
 }