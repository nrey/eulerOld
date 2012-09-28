#include"eu0207.h"

#include"principal.h"

void eu0207 :: solucion(){
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


void eu0207 :: printsolution(){
	cout << "Euler 0207\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
