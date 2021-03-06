#include "utils.h"

float util::rad(const float deg) {
    return (PI*deg/180.0);
}

float util::deg(const float rad) {
    return (180.0*rad/PI);
}

float util::wrap(const float ang) {
    return (fmod(ang + 5 * PI, 2 * PI) - PI);
}

float util::dist(const Vec3 pose1, const Vec3 pose2) {
    const float dx_2 = (pose1.x_-pose2.x_)*(pose1.x_-pose2.x_);
    const float dy_2 = (pose1.y_-pose2.y_)*(pose1.y_-pose2.y_);
    return sqrt(dx_2+dy_2);
}
float util::dist2(const Vec3 pose1, const Vec3 pose2) {
    const float dx_2 = (pose1.x_-pose2.x_)*(pose1.x_-pose2.x_);
    const float dy_2 = (pose1.y_-pose2.y_)*(pose1.y_-pose2.y_);
    return (dx_2+dy_2);
}


float util::mod(const float val){
    return val>0?val:-val;
}

float util::aim(const Vec3 shooter, const Vec3 target){
    const float x = target.x_ - shooter.x_;
    const float y = target.y_ - shooter.y_;
    return atan2(y,x);
}
