#include"eu0330.h"

#include"principal.h"

void eu0330 :: solucion(){
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


void eu0330 :: printsolution(){
	cout << "Euler 0330\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
