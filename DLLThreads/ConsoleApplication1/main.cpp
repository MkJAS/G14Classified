// App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Threader.h"
#include <Windows.h>



void loop(std::shared_ptr<Threader> threader)
{
    std::cout << "Loop thread created" << std::endl;
    int k = 2000;
    while (k > 1)
    {
        Sleep(10);
        k--;
        std::unique_lock<std::mutex> lck(threader->mtx_);
        std::cout << "k = "<< k << std::endl;
        std::cout << "i = " << threader->i << "\n";
        lck.unlock();
    }
    std::cout << "Telling Class thread to end" << std::endl;
    threader->running = false;
}

int main()
{
    std::vector<std::thread> threads;
    //std::mutex Threader::mtx_;
    //std::unique_lock<std::mutex> lck(Threader::mtx_);


    int i = 0;
    double j = 0;
    std::cout << "Hello World!\n";
    //__declspec(dllimport) class Threader;
    //__declspec(dllimport) int MakeThread();
    std::shared_ptr<Threader> threader(new Threader);
    std::shared_ptr<Threader> threadertoo(new Threader);
    //Threader threader;
    Sleep(2000);
    //threads.push_back(std::thread(loop, threader));
    std::cout << "WakaWaka" << std::endl;
    threader->makeThread();
    threadertoo->makeThread();
    Sleep(2000);


    //j = threadtoo.makeThread();
    //delete &threader;
    //i = MakeThread();
    
    for (auto& t : threads) {
        t.join();
        std::cout << "Joining loop thread" << std::endl;
    }




    //system("pause");
    return i;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
