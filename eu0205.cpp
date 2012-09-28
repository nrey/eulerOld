#include"eu0205.h"

#include"principal.h"

void eu0205 :: solucion(){
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


void eu0205 :: printsolution(){
	cout << "Euler 0205\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
