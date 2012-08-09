/*
 * Ship.h
 *
 *  Created on: Dec 27, 2010
 *      Author: bryan
 */

#ifndef SHIP_H_
#define SHIP_H_

#include "Entity.h"
#include "Projectile.h"
#include <list>
//standard class for the player's ship and enemy aircrafts
class Ship {

	int hp;
  int maxHP;
	Entity entity;
	std::list<Projectile> missiles;

public:
	Ship();
	Ship(int x, int y);
	virtual ~Ship();

	int getHP();
  void setHP();

  int getMaxHP();
  int setMaxHP();

	Entity & getEntity();
	std::list<Projectile> & getMissiles();

	void fireMissile();
	void fireLaser();


};

#endif /* SHIP_H_ */
