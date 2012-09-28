#include"eu0383.h"

#include"principal.h"

void eu0383 :: solucion(){
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


void eu0383 :: printsolution(){
	cout << "Euler 0383\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
