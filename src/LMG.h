#ifndef LMG_H
#define LMG_H
#include <string>

#include "PrimWeapon.h"

class LMG : public PrimWeapon {
	public:
		LMG();
		void setSights();
		void setAttachments();
		
	private:
		inline static const std::string lmg_list[] = {"M4LMG", "RPD", "S36", "UL376"};
		inline static const std::string lmg_sight_list[] = {"Iron Sights", "Reflex Sight", "Holographic Sight", "Tactical Scope"};
		inline static const std::string lmg_attachment_list[] = {"None", "Quickdraw", "Stock", "Extended Mag", "Fast Mag", "Foregrip", "Suppressor", "Laser Sight", "FMJ"};
		
		static const int sights_end = 3;
		static const int attach_end = 8;
};

#endif