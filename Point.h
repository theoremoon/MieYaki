#pragma once

/// (x, y)をintで持つ
class Point
{
public:
	using T = int;		// あとで型を変えたくなるかもしれない

	T x, y;				// 座標

	Point() {}
	Point(T x, T y) : x(x), y(y) {}
	~Point() {}
};

