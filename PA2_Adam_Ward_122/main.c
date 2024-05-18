#include "Header.h"

int main(void) {
	//declarations
	Record* data = NULL; 
	Node* head = NULL;
	FILE* input = NULL;
	FILE* output = NULL;
	while (1) {
		system("cls");
		int c = menu();
		switch (c) {
		case 1:
			//load
			system("cls");
			input = openFR("musicPlayListCOPY.csv");
			head = load(input);
			system("pause");
			break;
		case 2:
			//store
			system("cls");
			output = openFW("musicPlaylist.csv");
			store(output, head);
			system("pause");
			break;
		case 3:
			//display
			system("cls");
			display(head);
			break;
		case 6:
			//edit
			system("cls");
			edit(head);
			break;
		case 11:
			fclose(input);
			fclose(output);
			exit(1);
			break;
		}
	}
	
	
}