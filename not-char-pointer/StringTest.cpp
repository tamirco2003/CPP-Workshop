#include "String.h"
#include <iostream>

int main() {
	String cyber = String("cyber");
	String time = String("time");

	std::cout << cyber.getStr() << time.getStr() << std::endl;

	std::cout << "cyber str : " << cyber.getStr() << std::endl;
	std::cout << "cyber length: " << cyber.length() << std::endl;
	std::cout << "cyber capacity: " << cyber.capacity() << std::endl;
	cyber.setStr("very epic gamer ");
	std::cout << "cyber str : " << cyber.getStr() << std::endl;
	std::cout << "cyber length: " << cyber.length() << std::endl;
	std::cout << "cyber capacity: " << cyber.capacity() << std::endl;
	
	std::cout << "time str : " << time.getStr() << std::endl;
	std::cout << "time length: " << time.length() << std::endl;
	std::cout << "time capacity: " << time.capacity() << std::endl;
	time.insert(cyber, 2);
	std::cout << "time str : " << time.getStr() << std::endl;
	std::cout << "time length: " << time.length() << std::endl;
	std::cout << "time capacity: " << time.capacity() << std::endl;
	time.replace(String("e"), String("EEEEE"));
	std::cout << "time str : " << time.getStr() << std::endl;
	std::cout << "time length: " << time.length() << std::endl;
	std::cout << "time capacity: " << time.capacity() << std::endl;
}