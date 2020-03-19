#ifndef AR_H
#define AR_H
#include <string>

#include "PrimWeapon.h"

class AR : public PrimWeapon {
	public:
		AR();
		void setSights();
		void setAttachments();
		
	private:
		inline static const std::string ar_list[] = { "AK117", "AK-47", "ASM10", "BK57", "HBRa3", "ICR-1", "KN-44", "LK24", "M16", "M4", "Man-O-War", "Type 25" };
		inline static const std::string ar_sight_list[] = {"Iron Sights", "Reflex Sight", "Holographic Sight", "Tactical Scope" };
		inline static const std::string ar_attachment_list[] = {"None", "Quickdraw", "Stock", "Extended Mag", "Fast Mag", "Foregrip", "Suppressor", "Laser Sight", "FMJ"};
		
		static const int sights_end = 3;
		static const int attach_end = 8;
};

#endif