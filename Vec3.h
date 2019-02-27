
#ifndef VEC3_H
#define VEC3_H
class Vec3
{
  public :
    Vec3()=default;
    Vec3(float _x, float _y, float _z):
        m_x{_x}, m_y{_y}, m_z{_z} {}
    ~Vec3() noexcept =default;
    Vec3(const Vec3 &)=default;
    Vec3 & operator=(const Vec3 &)=default;
    Vec3(Vec3 &&)=default;
    Vec3 & operator=(Vec3 &&)=default;
    void set(float _x, float _y, float _z);
    float m_x = 0.0f;
    float m_y = 0.0f;
    float m_z = 0.0f;
};

#endif
