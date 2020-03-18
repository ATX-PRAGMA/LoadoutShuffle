#include "generateRandomNumber.h"
#include "SR.h"
SR::SR() {};
void SR::setSights() {
	int list_index;
	
	list_index = ((int) generateRandomNumber(0, (double) sights_end));
	sight = sr_sight_list[list_index];
}

void SR::setAttachments() {
	int list_index[3];
	
	for (int i = 0; i <= 2; i++)
		{list_index[i] = ((int) generateRandomNumber(0, (double) attach_end));}
		
	first_attach = sr_attachment_list[list_index[0]];
	second_attach = sr_attachment_list[list_index[1]];
	third_attach = sr_attachment_list[list_index[2]];
}
