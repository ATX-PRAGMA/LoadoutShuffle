#ifndef WEAPON_H
#define WEAPON_H
#include <string>

class Weapon {
	
	public:
		Weapon();
		
		virtual void setSights();
		virtual void setAttachments();
		
	protected:
		
		//Universal to all Weapon subclass objects
		std::string weapon_name;
		std::string sight;
		std::string first_attach;
		std::string second_attach;
		std::string third_attach;
};


#endif