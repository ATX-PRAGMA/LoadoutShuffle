#include "generateRandomNumber.h"
#include "AR.h"
AR::AR() {};
void AR::setSights() {
	int list_index;
	
	list_index = ((int) generateRandomNumber(0, (double) sights_end));
	sight = ar_sight_list[list_index];
}

void AR::setAttachments() {
	int list_index[3];
	
	for (int i = 0; i <= 2; i++)
		{list_index[i] = ((int) generateRandomNumber(0, (double) attach_end));}
		
	first_attach = ar_attachment_list[list_index[0]];
	second_attach = ar_attachment_list[list_index[1]];
	third_attach = ar_attachment_list[list_index[2]];
}
