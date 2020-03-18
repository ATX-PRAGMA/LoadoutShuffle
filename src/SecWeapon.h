#ifndef SECWEAPON_H
#define SECWEAPON_H
#include <string>

class PrimWeapon : public Weapon {
	
	//Mainly an initialization class, subclasses are for actual randomization and output.
	public:
		PrimWeapon();
		
		virtual void setSights();
		virtual void setAttachments();
		
	protected:
		//Init list
		static const std::string sec_weapon_list[] = {};
		
};


#endif