#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <vector>

namespace Turku       
{
    class Point_in_space {  // effectively a "3D vector"
        
        public:
            int x{20};
            int y{32};
            int z{68};

        private:

    };

    // this overload can be in this namespace or the global - works the same!
    std::ostream& operator<<(std::ostream& stream, const Turku::Point_in_space& point) 
    {
        stream << point.x << ", " << point.y << ", " << point.z << '\n';
        return stream;
    }
}






#endif

