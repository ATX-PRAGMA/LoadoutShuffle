#ifndef SMG_H
#define SMG_H
#include <string>

#include "PrimWeapon.h"

class SMG : public PrimWeapon {
	public:
		SMG();
		virtual void setSights();
		virtual void setAttachments();
		
	private:
		inline static const std::string smg_list[] = {"MSMC", "RUS-79U", "PDW-57/Razorback", "Pharo", "Chicom", "HG 40"};
		inline static const std::string smg_sight_list[] = {"Iron Sights", "Reflex Sight", "Holographic Sight"};
		inline static const std::string smg_attachment_list[] = {"None", "Quickdraw", "Stock", "Extended Mag", "Fast Mag", "Foregrip", "Suppressor", 
"Long Barrel", "Laser Sight", "FMJ"};
		
		static const int sights_end = 2;
		static const int attach_end = 9;
};

#endif