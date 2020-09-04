#ifndef TIMER_HPP
#define TIMER_HPP

#include <chrono>
#include <iostream>

/// <summary>
/// Simple Chrono Timer used to measure the time it takes to run programs in C++
/// Uses scope to test the wanted function by enclosing the code in {}
/// </summary>
class Timer
{
public:
	Timer();
	~Timer();
	void Stop();

private:
	std::chrono::time_point< std::chrono::high_resolution_clock> timeStartPoint;
	std::chrono::time_point<std::chrono::high_resolution_clock> timeEndPoint;
};

Timer::Timer()
{

	timeStartPoint = std::chrono::high_resolution_clock::now();
}

Timer::~Timer()
{
	Stop();

}

void Timer::Stop()
{
	timeEndPoint = std::chrono::high_resolution_clock::now();

	auto start = std::chrono::time_point_cast<std::chrono::microseconds>(timeStartPoint).time_since_epoch().count();
	auto end = std::chrono::time_point_cast<std::chrono::microseconds>(timeEndPoint).time_since_epoch().count();
	auto duration = end - start;
	double ms = duration * 0.001;

	std::cout << "Method took to run in nanoseconds: " << duration << " and in ms: " << ms << "\n";


}
#endif // !TIMER_HPP