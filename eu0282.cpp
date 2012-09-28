#include"eu0282.h"

#include"principal.h"

void eu0282 :: solucion(){
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


void eu0282 :: printsolution(){
	cout << "Euler 0282\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
