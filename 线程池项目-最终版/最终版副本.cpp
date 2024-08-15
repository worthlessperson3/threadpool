//#include <iostream>
//#include <functional>
//#include <thread>
//#include <future>
//#include <chrono>
//using namespace std;
//
//#include "threadpool.h"
//
//int sum1(int a, int b)
//{
//	return a + b;
//}
//
//int sum2(int a, int b, int c)
//{
//	return a + b + c;
//}
//
//int main()
//{
//	packaged_task<int(int, int)>task(sum1);
//	future<int>res = task.get_future();
//	task(10, 20);
//
//	cout << res.get() << endl;
//}