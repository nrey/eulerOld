#include"eu0251.h"

#include"principal.h"

void eu0251 :: solucion(){
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


void eu0251 :: printsolution(){
	cout << "Euler 0251\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
