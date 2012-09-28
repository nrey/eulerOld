#include"eu0289.h"

#include"principal.h"

void eu0289 :: solucion(){
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


void eu0289 :: printsolution(){
	cout << "Euler 0289\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
