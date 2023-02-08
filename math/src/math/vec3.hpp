#pragma once

namespace Math {

    template<typename T>
    class Vec3 {
    public:
        constexpr Vec3(T x, T y, T z): x(x), y(y), z(z) {}
    
    public:
        T x,y,z;
    };

}