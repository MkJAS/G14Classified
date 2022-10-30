#include "ThreadToo.h"

ThreadToo::ThreadToo()
{
}

ThreadToo::~ThreadToo()
{
	running = false;
	for (auto& t : threads)
	{
		t->join();
	}
}

int ThreadToo::makeThread()
{
	std::cout << "Making thread Too" << std::endl;
	std::thread thread(&ThreadToo::ThreadFunc, this);
	threads.push_back(&thread);
	//thread.join();
	return 0;
}

int ThreadToo::ThreadFunc()
{
	while (running)
	{
		int i = 500;
		while (i > 1)
		{
			std::cout << i << "\n";
			i--;
		}
		bool na = true;
	}
	return 0;
}
