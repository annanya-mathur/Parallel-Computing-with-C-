#include <thread>
#include <chrono>
#include <unistd.h>
# include<iostream>
using namespace std;

void cpu() {
    cout<<"Process ID:"<< getpid()<<endl;
    cout<<"Thread ID "<< std::this_thread::get_id()<<endl;
    while(true) continue;
}

int main() {
    cout<<"Main Process ID: "<< getpid()<<endl;
    cout<<"Main Thread ID: "<< std::this_thread::get_id()<<endl;
    std::thread thread1(cpu);
    std::thread thread2(cpu); 

    while(true) { 
        std::this_thread::sleep_for(std::chrono::seconds(1))<<endl;
    }
}
