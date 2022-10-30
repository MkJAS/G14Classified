#pragma once
#include <thread>
#include <iostream>
#include <vector>
#include <atomic>
#include <mutex>


class __declspec(dllexport) Threader
{
public:

	Threader();
	~Threader();
	void makeThread();
	int ThreadFunc();
	std::vector<std::thread> threads;
	std::atomic<bool> running = true;
	static std::mutex mtx_;
	std::atomic<int> i = 0;

private:
	
	

};



//int __declspec(dllexport) ThreadFunc()
//{
//	int i = 0;
//	while (i < 500)
//	{
//		std::cout << i << "\n";
//		i++;
//	}
//	bool na = true;
//	return 0;
//}


//int __declspec(dllexport) MakeThread()
//{
//	std::thread thread(ThreadFunc);
//	thread.join();
//	return 0;
//}
