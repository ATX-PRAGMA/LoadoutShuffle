#include <iostream>
#include <string>
#include "generateRandomNumber.h"
#include "Weapon.h"
#include "PrimWeapon.h"
#include "SMG.h"
#include "AR.h"
#include "SG.h"
#include "LMG.h"
#include "SR.h"



int main() {

	
	PrimWeapon *Primary = new PrimWeapon();
	//SecWeapon *Secondary = new Secondary();
	int prim_list_index;

	prim_list_index = ((int) generateRandomNumber(0, (double) Primary->prim_weapon_list_end));
	
	
	//establish which category the randomly selected primary belongs to and create the appropriate object
	if ((prim_list_index >= Primary->smg_bounds[0]) && (prim_list_index <= Primary->smg_bounds[1]))
	{ Weapon *PrimaryWeap = new SMG(); }
	else if ((prim_list_index >= Primary->ar_bounds[0]) && (prim_list_index <= Primary->ar_bounds[1]))
	{ Weapon *PrimaryWeap = new AR(); }
	else if ((prim_list_index >= Primary->sg_bounds[0]) && (prim_list_index <= Primary->sg_bounds[1]))
	{ Weapon *PrimaryWeap = new SG(); }
	else if ((prim_list_index >= Primary->lmg_bounds[0]) && (prim_list_index <= Primary->lmg_bounds[1]))
	{ Weapon *PrimaryWeap = new LMG(); }
	else if ((prim_list_index >= Primary->sr_bounds[0]) && (prim_list_index <= Primary->sr_bounds[1]))
	{ Weapon *PrimaryWeap = new SR(); }
	else { std::cout << "Error" << std::endl; return 1; }
	
	
	
	PrimaryWeap->setSights();
	PrimaryWeap->setAttachments();
	
	PrimaryWeap->weapon_name = Primary->prim_weapon_list[prim_list_index];
	std::cout << PrimaryWeap->weapon_name << "\n" 
	          << PrimaryWeap->sight << "\n" 
	          << PrimaryWeap->first_attach << "\n"
	          << PrimaryWeap->second_attach << "\n"
	          << PrimaryWeap->third_attach << "\n"
	          << std::endl;
	
	return 0;
}
