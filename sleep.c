#include <unistd.h>
#define SPINS	(10 * 1000 * 1000)	/* tune to ~1% CPU */

void func_l(){
	int i, j;
	for(;;) {
		usleep(1000 * 1000);
		for (i = 0, j = 0; i < SPINS; i++) { j++; }
	}
}

int main(int argc, char *argv[]){
	func_l();
	return (0);
}