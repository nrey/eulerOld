#include"eu0065.h"

#include"principal.h"

void eu0065 :: solucion(){
	// ---------------------------------------------------- //
	tstart = (double)clock()/CLOCKS_PER_SEC;
	// ---------------------------------------------------- //
	
	output = 0;
	
	// ---------------------------------------------------- //
	
	infivar_1 = new infinite_precition(60); 
	infivar_2 = new infinite_precition(60);
	infivar_3 = new infinite_precition(60);
	infivar_1->setvalue(1); //num
	infivar_2->setvalue(1); //den
	temp_4 = 1;
	for( long long i=33; i>=2; i-- ){
		infivar_1->copyto(infivar_3);
		infivar_1->mul(infivar_1,2*i);
		infivar_1->add(infivar_1,infivar_2);
		infivar_3->copyto(infivar_2);
		temp_4++;
		
		infivar_1->copyto(infivar_3);
		infivar_1->mul(infivar_1,1);
		infivar_1->add(infivar_1,infivar_2);
		infivar_3->copyto(infivar_2);
		temp_4++;

		infivar_1->copyto(infivar_3);
		infivar_1->mul(infivar_1,1);
		infivar_1->add(infivar_1,infivar_2);
		infivar_3->copyto(infivar_2);
		temp_4++;

	}
	infivar_1->copyto(infivar_3);
	infivar_1->mul(infivar_1,2);
	infivar_1->add(infivar_1,infivar_2);
	infivar_3->copyto(infivar_2);
	temp_4++;

	infivar_1->copyto(infivar_3);
	infivar_1->mul(infivar_1,1);
	infivar_1->add(infivar_1,infivar_2);
	infivar_3->copyto(infivar_2);
	temp_4++;

	infivar_1->copyto(infivar_3);
	infivar_1->mul(infivar_1,2);
	infivar_1->add(infivar_1,infivar_2);
	infivar_3->copyto(infivar_2);
	temp_4++;
	output = infivar_1->sumdig();
	
	// ---------------------------------------------------- //
	tstop = (double)clock()/CLOCKS_PER_SEC;
	ttime= tstop-tstart;
	// ---------------------------------------------------- //
}


void eu0065 :: printsolution(){
	cout << "Euler 0065\n";
	cout << "Time: " << ttime << "\n";
	cout << output;
}
