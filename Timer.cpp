//
//Creator:: Randall/ Randy Bresaw(handle GracefulComet)
//
//Please Add your name befor you commit   :)
//Contributers::
//
//
//
//
#include"Timer.h"

bool TimerF::cooldown(float duration){
	
	m_prevTime = m_currTime;
	m_currTime = SDL_GetTicks();
	m_deltaTime = (m_currTime - m_prevTime);
	if(m_deltaTime >= duration)
	{
		m_ready = true;
	}
	else{
		m_ready = false;
	}
	if (m_deltaTime <=0 ){
	m_deltaTime = 0;
	}

	return m_ready;
}

