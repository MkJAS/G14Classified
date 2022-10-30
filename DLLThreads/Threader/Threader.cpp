#include "Threader.h"

Threader::Threader()
{
}

Threader::~Threader()
{
	running = false;
	for (auto& t : threads)
	{
		t->join();
	}

}

void Threader::makeThread()
{
	std::cout << "Making thread" << std::endl;
	std::thread thread(&Threader::ThreadFunc, this);
	std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";
	threads.push_back(&thread);
	std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	//thread.join();
	//return 0;
}

int Threader::ThreadFunc()
{
	std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
	int i = 0;

	while (running)
	{
		
		while (i < 500)
		{
			std::cout << i << "\n";
			i++;
		}
		//running = false;
	}
	return 0;
}
