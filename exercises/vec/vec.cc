#include<iostream>
#include<cmath>
#include<string>
#include"vec.h"
#define SELF (*this)

namespace pp {
vec& vec::operator+=(const vec& other){
	x+=other.x;
	y+=other.y;
	z+=other.z;
	return (*this);
}

vec& vec::operator-=(const vec& other){
	x-=other.x;
	y-=other.y;
	z-=other.z;
	return (*this);
}

vec& vec::operator*=(double n){
	x*=n;
	y*=n;
	z*=n;
	return (*this);
}

vec& vec::operator/=(double n){
	x/=n;
	y/=n;
	z/=n;
	return (*this);
}

vec operator+(vec a, const vec& b){
	a += b;
	return a;
}

vec operator-(vec a){
	vec r=a;
	a.x=-a.x;
	a.y=-a.y;
	a.z=-a.z;
	return a;
}

vec operator-(vec a, const vec& b){
	a -= b;
	return a;
}

vec operator*(vec a, double n){
	a *= n;
	return a;
}

vec operator*(double n, vec a){
	a *= n;
	return a;
}

bool approx(double a,double b,double acc=1e-6,double eps=1e-6){
	if(std::fabs(a-b)<acc)return true;
	if(std::fabs(a-b)<eps*(std::fabs(a)+std::fabs(b)))return true;
	return false;
	}

bool approx(const vec& u, const vec& v, double acc, double eps){
	if(!approx(u.x,v.x,acc,eps))return false;
	if(!approx(u.y,v.y,acc,eps))return false;
	if(!approx(u.z,v.z,acc,eps))return false;
	return true;
	}

std::ostream& operator<<(std::ostream& os, const vec& v){
    os << "{ " << v.x << ", " << v.y << ", " << v.z << " } ";
    return os;
    }


void vec::print(const std::string& s) const {
	std::cout << s << x << " " << y << " " << z << std::endl;
	}
}