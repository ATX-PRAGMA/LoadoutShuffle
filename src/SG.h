#ifndef SG_H
#define SG_H
#include <string>

#include "PrimWeapon.h"

class SG : public PrimWeapon {
	public:
		SG();
		void setSights();
		void setAttachments();
		
	private:
		inline static const std::string sg_list[] = {"BY15", "HS0405", "HS2126", "KRM-262", "Striker"};
		inline static const std::string sg_sight_list[] = {"Iron Sights"};
		inline static const std::string sg_attachment_list[] = {"None", "Extended Mag", "Fast Mag", "Suppressor", "Long Barrel", "Laser Sight"};
		
		static const int sights_end = 0;
		static const int attach_end = 5;
};

#endif