#include "generateRandomNumber.h"

virtual void SMG::setSights() {
	int list_index;
	
	list_index = ((int) generateRandomNumber(0, (double) sights_end));
	sight = smg_sight_list[list_index];
}

virtual void SMG::setAttachments() {
	int list_index[3];
	
	for (int i = 0; i <= 2; i++)
		{list_index[i] = ((int) generateRandomNumber(0, (double) attach_end));}
		
	first_attach = smg_attachment_list[list_index[0]];
	second_attach = smg_attachment_list[list_index[1]];
	third_attach = smg_attqchment_list[list_index[2]];
}
