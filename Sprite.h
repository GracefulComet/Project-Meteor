//
//Creator:: Randall/ Randy Bresaw(handle GracefulComet)
//
//Please Add your name befor you commit   :)
//Contributers::
//
//
//
//
#pragma once
#include <SDL2/SDL.h>
#include <string>
#include "TexL.h"
#include"vmath.h"
#include "TileMap.h"
#include "Timer.h"


class Sprite // small graphics object
{
public:

	Sprite();
	~Sprite();
    void load(float PosX, float PosY, int width, int height,  int Row, int Collumn,
	std::string textureID);
	void draw(SDL_Renderer* pRenderer);
    void update(SDL_Event Ev,float DeltaTime);
	void animate(float DurPerFrame, int NumOfFrames ); 	
	
	void animatecycle(float DurPerFrame, int NumOfFrames ); 	
	

protected:
	bool reverse;
	int m_currentCol;
	int m_currentRow;
	Vector m_position;
	std::string m_textureID; 
	int m_animOffset;
	int m_width;
	int m_height;
	TileMap m_tiles;
	TimerF m_timer;	
private:

};

