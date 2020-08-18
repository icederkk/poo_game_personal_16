#include "FrameTimer.h"

FrameTimer::FrameTimer()
{
    last = std::chrono::steady_clock::now();
}

float FrameTimer::Mark()
{
    const auto old = last;
    last = std::chrono::steady_clock::now();
    const std::chrono::duration<float> frame_time = last - old;
    return frame_time.count();
}
