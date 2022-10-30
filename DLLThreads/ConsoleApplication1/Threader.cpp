#include "Threader.h"
#include <Windows.h>

std::mutex Threader::mtx_;

Threader::Threader()
{
}

Threader::~Threader()
{
	//running = false;
	std::cout << "Killing Class and joining threads" << std::endl;
	for (auto& t : threads)
	{
		t.join();
	}

}

void Threader::makeThread()
{
	std::cout << "Making Class thread" << std::endl;
	//std::thread thread(&Threader::ThreadFunc, this);
	threads.push_back(std::thread(&Threader::ThreadFunc, this));
	//thread.join();
	//return 0;
}

int Threader::ThreadFunc()
{
	
	std::cout << "Class Thread Started" << std::endl;
	while (running)
	{

		while (i < 500)
		{
			std::lock_guard<std::mutex> lck(mtx_);
			std::cout << "i = "<< i << "\n";
			i++;
			Sleep(100);
		}
		running = false;
	}
	std::cout << "Class Thread Ending" << std::endl;
	return 0;
}
