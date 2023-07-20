#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <vector>

namespace Turku       
{
    class Point_in_space {  // effectively a "3D vector"
        
        public:
            int x{};
            int y{};
            int z{};

        // overload operator functions - member and friend

        Point_in_space& operator+=(const Point_in_space& point) {
            x += point.x;
            y += point.y;
            z += point.z;

            return *this;
        }

        friend Point_in_space operator+(Point_in_space p1, const Point_in_space& p2)
        {
            p1 += p2;
            return p1;
        }

        Point_in_space& operator-=(const Point_in_space& point) {
            x -= point.x;
            y -= point.y;
            z -= point.z;

            return *this;
        }

        friend Point_in_space operator-(Point_in_space p1, const Point_in_space& p2)
        {
            p1 -= p2;
            return p1;
        }      
    };

    // this overload can be in this namespace or the global - works the same
    std::ostream& operator<<(std::ostream& stream, const Turku::Point_in_space& point) 
    {
        stream << point.x << ", " << point.y << ", " << point.z << '\n';
        return stream;
    }
}

#endif

