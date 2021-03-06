#pragma once

#include <iostream>
#include <math.h>
#include "vec3.h"

namespace sparky { namespace maths {

	struct vec2
	{
		float x, y;

		vec2();
		vec2(const float& x, const float& y);
		vec2(const vec3& vector);

		vec2& Add(const vec2& other);
		vec2& Subtract(const vec2& other);
		vec2& Multiply(const vec2& other);
		vec2& Divide(const vec2& other);

		friend vec2 operator+(vec2 left, const vec2& right);
		friend vec2 operator-(vec2 left, const vec2& right);
		friend vec2 operator*(vec2 left, const vec2& right);
		friend vec2 operator/(vec2 left, const vec2& right);

		friend vec2 operator+(vec2 left, float value);
		friend vec2 operator*(vec2 left, float value);

		bool operator==(const vec2& other);
		bool operator!=(const vec2& other);

		vec2& operator+=(const vec2& other);
		vec2& operator-=(const vec2& other);
		vec2& operator*=(const vec2& other);
		vec2& operator/=(const vec2& other);

		float Magnitude() const;
		vec2 Normalise() const;
		float Distance(const vec2& other) const;
		float Dot(const vec2& other) const;

		friend std::ostream& operator<<(std::ostream& stream, const vec2& vector);
	};

} }