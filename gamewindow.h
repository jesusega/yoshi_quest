#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QApplication>
#include <QtGui>
#include <cstdlib>
#include "mylist.h"
#include "yoshi.h"
#include "bg.h"
#include "heart.h"
#include "coin.h"
#include "goomba.h"
#include "koopa.h"
#include "kamek.h"
#include "bill.h"
#include "magic.h"
#include "bolt.h"
#include "wind.h"

/**
A class for the main game window, which contains all of the 
elements of the actual gameplay

@author Jesus Garcia
*/

class Game : public QGraphicsView
{
	Q_OBJECT
	
	public:
		explicit Game(QTimer *t, QString n);
		~Game();
		QTimer *timer;
		void yoshiW1();
		void yoshiW2();
		void yoshiJ();
		void yoshiC();
		void yoshiI();
		
		int score;
		bool overG;
	private:
		/**Scene of the game*/
		QGraphicsScene *gScene;
		
		/**Pixmap image of different objects*/
		QPixmap *yPix;
		QPixmap *bPix;
		QPixmap *hPix;
		QPixmap *spPix;
		QPixmap *mpPix;
		QPixmap *bpPix;
		QPixmap *coinPix;
		QPixmap *goombaPix;
		QPixmap *koopaPix;
		QPixmap *kamekLPix;
		QPixmap *kamekRPix;
		QPixmap *billLPix;
		QPixmap *billRPix;
		QPixmap *magicPix;
		QPixmap *boltPix;
		QPixmap *windPix;
		
		/**Status Panel Objects*/
		Bg *background;
		Heart *heart;
		Coin *sCoin;
		int lives;
		int nCoins;
		QGraphicsSimpleTextItem* sLabel;
		QGraphicsSimpleTextItem* nameLabel;
		QGraphicsSimpleTextItem* levelLabel;
		QGraphicsSimpleTextItem* sAmount;
		QGraphicsSimpleTextItem* lAmount;
		QGraphicsSimpleTextItem* levelAmount;
		QGraphicsSimpleTextItem* cAmount;
		QGraphicsSimpleTextItem* nLabel;
		QFont font;
		QFont fontT;
		
		/**Playable Character*/
		Yoshi *yoshi;
		
		/**List of other Things*/
		MyList<Thing*> things;
		
		/**Counters*/
		int goombaCnt;
		int koopaCnt;
		int kamekCnt;
		int billCnt;
		int coinCnt;
		int heartCnt;
		int spawnCnt;
		int timeCnt;
		int goombaMax;
		int koopaMax;
		int kamekMax;
		int billMax;
		int coinMax;
		int heartMax;
		int yoshiJCnt;
		int levelCnt;
		int velx, vely;
		int interval;
		bool boolMagic;
		void life(int choice);
		void newMagic(int x, int y, bool r);
		void newBolt(int x, int y, bool r);		
		void newWind(int x, int y, bool r);
		
		
	public slots:
		void animate();
		void newCoin();
		void newGoomba();
		void newKoopa();
		void newKamek();
		void newBill();
		void newHeart();
		void offScreen();
		void collisions();
};

#endif
