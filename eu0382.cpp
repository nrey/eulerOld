#include"eu0382.h"

#include"principal.h"

void eu0382 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0382 :: printsolution(){
	cout << "Euler 0382\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
