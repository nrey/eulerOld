#include"eu0269.h"

#include"principal.h"

void eu0269 :: solucion(){
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


void eu0269 :: printsolution(){
	cout << "Euler 0269\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
