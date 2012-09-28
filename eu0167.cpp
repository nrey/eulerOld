#include"eu0167.h"

#include"principal.h"

void eu0167 :: solucion(){
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


void eu0167 :: printsolution(){
	cout << "Euler 0167\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
