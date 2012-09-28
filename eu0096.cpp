#include"eu0096.h"

#include"principal.h"

void eu0096 :: solucion(){
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


void eu0096 :: printsolution(){
	cout << "Euler 0096\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
