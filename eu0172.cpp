#include"eu0172.h"

#include"principal.h"

void eu0172 :: solucion(){
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


void eu0172 :: printsolution(){
	cout << "Euler 0172\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
