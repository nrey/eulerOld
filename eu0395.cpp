#include"eu0395.h"

#include"principal.h"

void eu0395 :: solucion(){
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


void eu0395 :: printsolution(){
	cout << "Euler 0395\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
