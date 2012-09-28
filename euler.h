#ifndef euler_h
#define euler_h

#include"principal.h"
#include"infinite_precition.h"

class euler{

	public:

		euler();
		~euler();
		virtual void solucion(){}; //NO FUI CAPAZ DE HACERLA VIRTUAL
		virtual void printsolution(){};
// 		
		void write_primefile( unsigned long long input );
		bool isprime( unsigned long long* input );
		void isprime_readfile_open( ); // Es un experimento para leer de una tabla los numeros primos, pero resulta mas lento
						// la dejo como referencia, pues siempre me parecio interesante esta prueba
		bool isprime_readfile( unsigned long long* input );
		bool ispalin( unsigned long long* input );
		unsigned long long sumprop( unsigned long long input );
// 		void sumbignum( unsigned long long* input, unsigned long long* output, unsigned long long* size );
		bool ispalind( unsigned long long* input, unsigned long long base );
// 		bool ispandigital( unsigned long long* input );
		bool ispandigital( unsigned long long* input, unsigned long long size );
// 		bool issize( unsigned long long* input, unsigned long long* size );
		unsigned long long size( unsigned long long* input );
		unsigned long long factorial( unsigned long long input );
		unsigned long long digits( unsigned long long*input, unsigned long long* output );
		void digits( unsigned long long*input, unsigned long long size, unsigned long long* output );
		
		bool isPermuDigits( unsigned long long*input1, unsigned long long*input2, unsigned long long size );
		double combinaDou( unsigned long long nnn, unsigned long long rrr);
// 
		unsigned long long minimum( unsigned long long cantidad, ... );
		unsigned long long maximum( unsigned long long cantidad, ... );
		
		unsigned long long minimum( unsigned long long* input, unsigned long long cantidad );
		unsigned long long maximum( unsigned long long* input, unsigned long long cantidad );
		
		void descoprimos( unsigned long long numero, unsigned long long* primos_in, unsigned long long tamprimo_in, unsigned long long* primos_out, unsigned long long* multiplici_out, unsigned long long tammaxi_out /*indica el tamno del vector de salida*/, unsigned long long* tamprimo_out );
		
// 		void pausar(
		
		
		
		unsigned long long output;
		double tstart, tstop, ttime;
		
		unsigned long long temp_1; // variable de proposito general //9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
		unsigned long long temp_2; // variable de proposito general
		unsigned long long temp_3; // variable de proposito general
		unsigned long long temp_4; // variable de proposito general
		unsigned long long temp_5; // variable de proposito general
		unsigned long long temp_6; // variable de proposito general
		unsigned long long temp_7; // variable de proposito general
		unsigned long long temp_8; // variable de proposito general
		unsigned long long temp_9; // variable de proposito general
		unsigned long long temp_10; // variable de proposito general
		unsigned long long temp_11; // variable de proposito general
		unsigned long long temp_12; // variable de proposito general
		unsigned long long temp_13; // variable de proposito general
		unsigned long long temp_14; // variable de proposito general
		unsigned long long temp_15; // variable de proposito general
		unsigned long long temp_16; // variable de proposito general
		unsigned long long temp_17; // variable de proposito general
		
		double tedo_1; // variable de proposito general
		double tedo_2; // variable de proposito general
		double tedo_3; // variable de proposito general
		double tedo_4; // variable de proposito general
		double tedo_5; // variable de proposito general
		double tedo_6; // variable de proposito general
		double tedo_7; // variable de proposito general
		double tedo_8; // variable de proposito general
		
		unsigned long long *tem_1d_1; // variable de proposito general
		unsigned long long *tem_1d_2; // variable de proposito general
		unsigned long long *tem_1d_3; // variable de proposito general
		unsigned long long *tem_1d_4; // variable de proposito general
		unsigned long long *tem_1d_5; // variable de proposito general
		
		unsigned long long **tem_2d_1; // variable de proposito general
		unsigned long long **tem_2d_2; // variable de proposito general
		unsigned long long **tem_2d_3; // variable de proposito general
		unsigned long long **tem_2d_4; // variable de proposito general
		
		unsigned long long ***tem_3d_1; // variable de proposito general
		unsigned long long ***tem_3d_2; // variable de proposito general
		unsigned long long ***tem_3d_3; // variable de proposito general
		unsigned long long ***tem_3d_4; // variable de proposito general
		
		bool flag_1; // variable de proposito general
		bool flag_2; // variable de proposito general
		
		ifstream myfile_read_1;
		ifstream myfile_read_2;
		
		ofstream myfile_writ_1;
		ofstream myfile_writ_2;
		
		infinite_precition * infivar_1;
		infinite_precition * infivar_2;
		infinite_precition * infivar_3;
		infinite_precition * infivar_4;
		
		long long temp_sig_1;
		long long temp_sig_2;
		long long temp_sig_3;
		long long temp_sig_4;
		long long temp_sig_5;
		long long temp_sig_6;
		long long temp_sig_7;
		long long temp_sig_8;
		long long temp_sig_9;
		long long temp_sig_10;
		
		long long *temp_sig_1d_1;
		long long *temp_sig_1d_2;
		long long *temp_sig_1d_3;
		long long *temp_sig_1d_4;
		long long *temp_sig_1d_5;
		long long *temp_sig_1d_6;
		
		long long **temp_sig_2d_1;
		long long **temp_sig_2d_2;
		long long **temp_sig_2d_3;
		
		
	private:
		

		
// 		int probl;	// El numero de problema
// 		int enunc;	// Si se muestra o no el enunciado de cada problema
// 		char parar;	// variable de entrada usada para parar

// 		unsigned long long temp_1_[1000]; // variable de proposito general
// 		unsigned long long temp_2_[20][20]; // variable de proposito general
// 		unsigned long long temp_3_[56]; // variable de proposito general
// 		unsigned long long temp_4_[20]; // variable de proposito general
// 		unsigned long long iter[100]; // variable de proposito general
// 		

		unsigned long long* tem_1d_1_; // variable de proposito general
// 		unsigned long long tem_1d_2[1000]; // variable de proposito general
// 		unsigned long long tem_1d_3[1000]; // variable de proposito general
// 		unsigned long long tem_1d_4[1000]; // variable de proposito general

		unsigned long long temp_1_; // variable de proposito general
		unsigned long long temp_2_; // variable de proposito general
		unsigned long long temp_3_; // variable de proposito general
		unsigned long long temp_4_; // variable de proposito general
		unsigned long long temp_5_; // variable de proposito general
		
		double tedo_1_; // variable de proposito general
		double tedo_2_; // variable de proposito general
		double tedo_3_; // variable de proposito general
		double tedo_4_; // variable de proposito general
		double tedo_5_; // variable de proposito general
		
		ostringstream ostvar_1_;
		ostringstream ostvar_2_;
		ostringstream ostvar_3_;
		ostringstream ostvar_4_;
		ostringstream ostvar_5_;
		
		string strvar_1_;
		string strvar_2_;
		string strvar_3_;
		string strvar_4_;
		string strvar_5_;
		
		ifstream myfile_read_1_;
		ifstream myfile_read_2_;
		
		ofstream myfile_writ_1_;
		ofstream myfile_writ_2_;
	
};


#endif