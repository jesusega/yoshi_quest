#ifndef GOOMBA_H
#define GOOMBA_H
#include "thing.h"
/**
A class for Goomba objects

@author Jesus Garcia
*/
class Goomba : public Thing
{
	public:
		Goomba(QPixmap *pm, int lx, int ly, bool r);
		~Goomba();
		void move();
	private:
		/**Goomba image*/
		QPixmap *goomba1;
};
#endif
