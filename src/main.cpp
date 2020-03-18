#include <iostream>

#include "generateRandomNumber.h"

/* 
SMG
MSMC, RUS-79U, PDW-57/Razorback, Pharo, Chicom, HG 40
Iron Sight, Reflex sight, Holographic Sight
None, Quickdraw, Stock, Extended Mag, Fast Mag, Foregrip, Suppressor, 
Long Barrel, Laser Sight, FMJ

AR
AK117, AK-47, ASM10, BK57, HBRa3, ICR-1, KN-44, LK24, M16, M4, Man-O-War
Type 25.
Iron Sight, Reflex Sight, Holographic Sight, Tactical Scope
None, Stock, Laser Sight, Quickdraw, FMJ, Suppressor, Foregrip, Fast Mag, Extended Mag

Shotgun
BY15, HS0405, HS2126, KRM-262, Striker.
Iron sight.
None, Laser Sight, Long Barrel, Fast Mag, Suppressor, Extended Mag

LMG
M4LMG, RPD, S36, UL376.
Iron Sight, Reflex Sight, Holographic Sight, Tactical Scope
None, Stock, Laser Sight, Quickdraw, FMJ, Suppressor, Foregrip, Fast Mag, Extended Mag

Sniper
Arctic .50, DL Q33, Locus, M21 EBR, XPR-50
Default Scope, Tactical Scope
None, Stock, FMJ, Fast Mag, Suppresor, Extended Mag

Secondary
Axe, Baseball bat, FHJ-18, Ice Axe, J358, Karambit, Knife, MW11, SMRS
J358 & MW11 Attachments:
Iron Sight
None, Laser Sight, FMJ, Fast Mag, Suppressor, Extended Mag

Operator Skills
Tempest, Sparrow, Gravity Spikes, H.I.V.E, War Machine, Purifier, 
Transform Shield, Death Machine/Scythe

Lethal
Frag Grenade, Trip Mine, Sticky Grenade, Combat Axe

Tactical
Smoke Grenade, Flashbang Grenade, Concussion Grenade, EMP, Trophy System

Perks
RED:
Lightweight, Fast Recover, Persistence, Flak Jacket, Skulker, Agile
GREEN:
Hard Wired, Vulture, Toughness, Tracker, Ghost, Cold-Blooded
BLUE:
Dead Silence, Hardline, Demo Expert, Tactical Mask, Alert, Engineer

Find a C++ construct that will allow choosing strings by means of numbers
Perhaps a string array?
Implement OOP loadout generator
*/

int main() {

	
	PrimWeapon *Primary = new Primary();
	SecWeapon *Secondary = new Secondary();
	
	return 0;
}
