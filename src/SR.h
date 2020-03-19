#ifndef SR_H
#define SR_H
#include <string>

#include "PrimWeapon.h"

class SR : public PrimWeapon {
	public:
		SR();
		void setSights();
		void setAttachments();
		
	private:
		inline static const std::string sr_list[] = {"Arctic .50", "DL Q33", "Locus", "M21 EBR", "XPR-50"};
		inline static const std::string sr_sight_list[] = {"Default Scope", "Tactical Scope"};
		inline static const std::string sr_attachment_list[] = {"None", "Stock", "Extended Mag", "Fast Mag", "Suppressor", "FMJ"};
		
		static const int sights_end = 1;
		static const int attach_end = 5;
};

#endif