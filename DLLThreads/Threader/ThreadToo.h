#pragma once
#include <thread>
#include <iostream>
#include <vector>

class __declspec(dllexport) ThreadToo
{
public:

	ThreadToo();
	~ThreadToo();
	int makeThread();
	int ThreadFunc();
	std::vector<std::thread*> threads;
	bool running = true;
	

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
