#ifndef PRIMWEAPON_H
#define PRIMWEAPON_H
#include <string>
#include "Weapon.h"

class PrimWeapon : public Weapon {
	
	//Mainly an initialization class to jumpstart randomization, subclasses are for sight & attachment randomization and output.
	public:
		PrimWeapon();
		
		virtual void setSights();
		virtual void setAttachments();
		
		//Init list
		inline static const std::string prim_weapon_list[] = {"MSMC", "RUS-79U", "PDW-57/Razorback", "Pharo", "Chicom", "HG 40", "AK117", "AK-47", "ASM10", "BK57", "HBRa3", "ICR-1", "KN-44", "LK24", "M16", "M4", "Man-O-War", "Type 25", "BY15", "HS0405", "HS2126", "KRM-262", "Striker", "M4LMG", "RPD", "S36", "UL376", "Arctic .50", "DL Q33", "Locus", "M21 EBR", "XPR-50"};
		
		static const int prim_weapon_list_end = 31;
		
};


#endif