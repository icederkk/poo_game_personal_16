#pragma once

#include <chrono>

class FrameTimer
{
public:
	FrameTimer::FrameTimer();
	float Mark();
private:
	std::chrono::steady_clock::time_point last = std::chrono::steady_clock::now();
};