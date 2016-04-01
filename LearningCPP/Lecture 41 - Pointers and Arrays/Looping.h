#pragma once
#ifndef LOOPING_H_
#define LOOPING_H_

#include <string>

class Looping
{
private:
	std::string favoriteGames[3] = { "Counter-Strike: Global Offensive", "DooM", "DotA 2" };
	int limit;

public:
	Looping();

	void loop1();
	void loop2();
};

#endif // !LOOPING_H_



