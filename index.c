#include <stdio.h>
#include <string.h>

void selected_conversion (char form[], char to[], double multipliedValue); // Function Declaration

void main () { // Main Function Start
	
	char close;
	
	int i, select_conversion, select_convertValue;
	
	char currencyConversion[8][20] = {
		"PKR Rupee",
		"IND Rupee",
		"Dollar",
		"Pounds",
		"Euro",
		"Canadian Dollar",
		"UAE Dirham",
		"Saudi Riyal"
	};
	
	char pkrrupee[7][40] = {
		"IND Rupee",
		"Dollar",
		"Pounds",
		"Euro",
		"Canadian Dollar",
		"UAE Dirham",
		"Saudi Riyal"
	};
	
	double pkrrupeeto[7] = {
		0.41, // IND 
		0.0054, // Dollar
		0.0043, // Pound 
		0.0051, // Euro
		0.0069, // Canadian Dollar
		0.020, // United Arab Emirates Dirham
		0.020, // Saudi Riyal
	};
	
	char indrupee[7][40] = {
		"PKR Rupee",
		"Dollar",
		"Pounds",
		"Euro",
		"Canadian Dollar",
		"UAE Dirham",
		"Saudi Riyal"
	};	
	
	double indrupeeto[7] = {
		2.42, // PKR 
		0.013, // Dollar
		0.011, // Pound 
		0.012, // Euro
		0.017, // Canadian Dollar
		0.048, // United Arab Emirates Dirham
		0.049, // Saudi Riyal
	};
	
	char dollar[7][40] = {
		"PKR Rupee",
		"IND Rupee",
		"Pounds",
		"Euro",
		"Canadian Dollar",
		"UAE Dirham",
		"Saudi Riyal"
	};
	
	double dollarto[7] = {
		187.70, // PKR 
		76.96, // IND
		0.81, // Pound 
		0.95, // Euro
		1.29, // Canadian Dollar
		3.67, // United Arab Emirates Dirham
		3.75, // Saudi Riyal
	};
	
	
	char pound[7][40] = {
		"PKR Rupee",
		"IND Rupee",
		"Dollar",
		"Euro",
		"Canadian Dollar",
		"UAE Dirham",
		"Saudi Riyal"
	};
	
	double poundto[7] = {
		230.41, // PKR 
		95.02, // IND
		1.23, // Dollar 
		1.17, // Euro
		1.59, // Canadian Dollar
		4.53, // United Arab Emirates Dirham
		4.63, // Saudi Riyal
	};
	
	char euro[7][40] = {
		"PKR Rupee",
		"IND Rupee",
		"Dollar",
		"Pounds",
		"Canadian Dollar",
		"UAE Dirham",
		"Saudi Riyal"
	};
	
	double euroto[7] = {
		196.88, // PKR 
		81.19, // IND
		1.06, // Dollar 
		0.86, // Pound
		1.36, // Canadian Dollar
		3.88, // United Arab Emirates Dirham
		3.96, // Saudi Riyal
	};
	
	char canadian_dollar[7][40] = {
		"PKR Rupee",
		"IND Rupee",
		"Dollar",
		"Pounds",
		"Euro",
		"UAE Dirham",
		"Saudi Riyal"
	};
	
	double canadian_dollarto[7] = {
		144.66, // PKR 
		59.66, // IND
		0.78, // Dollar 
		0.63, // Pound
		0.73, // Euro
		2.85, // United Arab Emirates Dirham
		2.91, // Saudi Riyal
	};
	
	char uae_dirham[7][40] = {
		"PKR Rupee",
		"IND Rupee",
		"Dollar",
		"Pounds",
		"Euro",
		"Canadian Dollar",
		"Saudi Riyal"
	};
	
	double uae_dirhamto[7] = {
		50.80, // PKR 
		20.95, // IND
		0.27, // Dollar 
		0.22, // Pound
		0.26, // Euro
		0.35, // Canadian Dollar
		1.02, // Saudi Riyal
	};
	
	char saudi_riyal[7][40] = {
		"PKR Rupee",
		"IND Rupee",
		"Dollar",
		"Pounds",
		"Euro",
		"Canadian Dollar",
		"UAE Dirham",
	};
	
	double saudi_riyalto[7] = {
		49.74, // PKR 
		20.51, // IND
		0.27, // Dollar 
		0.22, // Pound
		0.25, // Euro
		0.34, // Canadian Dollar
		0.98, // United Arab Emirates Dirham
	};
	
	do { // Do while loop perform again continue program
		
		printf("'Welcome to Currency Conversion'\n");
		
		for (i = 0; i < 8; i++) {
			printf("%d. %s \n", i+1, currencyConversion[i]);
		}
		
		printf("\n'Select Only One Currency to Convert': ");
		scanf("%d", &select_conversion);
		
		switch (select_conversion) {
			case 1:
				
				for (i = 0; i < 7; i++) {
					printf("%d. %s to %s \n", i+1, currencyConversion[select_conversion-1], pkrrupee[i]);
				}
				
				printf("\n'Select Currency to Convert': ");
				scanf("%d", &select_convertValue);
				
				// PKR Rupee to Others Currency
				switch (select_convertValue) {
					
					// Pkr Rupee to IND Rupee
					case 1:
						
						selected_conversion(currencyConversion[select_conversion-1], pkrrupee[select_convertValue-1], pkrrupeeto[select_convertValue-1]);
						
					break;
					
					// Pkr Rupee to Dollar
					case 2:
						
						selected_conversion(currencyConversion[select_conversion-1], pkrrupee[select_convertValue-1], pkrrupeeto[select_convertValue-1]);
						
					break;
					
					// Pkr Rupee to Pounds
					case 3:
						
						selected_conversion(currencyConversion[select_conversion-1], pkrrupee[select_convertValue-1], pkrrupeeto[select_convertValue-1]);
						
					break;
					
					// Pkr Rupee to Euro
					case 4:
						
						selected_conversion(currencyConversion[select_conversion-1], pkrrupee[select_convertValue-1], pkrrupeeto[select_convertValue-1]);
						
					break;
					
					// Pkr Rupee to Canadian Dollar
					case 5:
						
						selected_conversion(currencyConversion[select_conversion-1], pkrrupee[select_convertValue-1], pkrrupeeto[select_convertValue-1]);
						
					break;
					
					// Pkr Rupee to United Arab Emirates Dirham
					case 6:
						
						selected_conversion(currencyConversion[select_conversion-1], pkrrupee[select_convertValue-1], pkrrupeeto[select_convertValue-1]);
						
					break;
					
					// Pkr Rupee to Saudi Riyal
					case 7:
						
						selected_conversion(currencyConversion[select_conversion-1], pkrrupee[select_convertValue-1], pkrrupeeto[select_convertValue-1]);
						
					break;
					
					default: 
						printf("'Select Valid Number'\n");
					break;
				}
				
			break;
			
			// IND Rupee to other currency			
			case 2:
				
				for (i = 0; i < 7; i++) {
					printf("%d. %s to %s \n", i+1, currencyConversion[select_conversion-1], indrupee[i]);
				}
				
				printf("\n'Select Currency to Convert': ");
				scanf("%d", &select_convertValue);
				
				// IND Rupee to Others Currency
				switch (select_convertValue) {
					
					// IND Rupee to Pkr Rupee
					case 1:
						
						selected_conversion(currencyConversion[select_conversion-1], indrupee[select_convertValue-1], indrupeeto[select_convertValue-1]);
						
					break;
					
					// IND Rupee  to Dollar
					case 2:
						
						selected_conversion(currencyConversion[select_conversion-1], indrupee[select_convertValue-1], indrupeeto[select_convertValue-1]);
						
					break;
					
					// IND Rupee  to Pounds
					case 3:
						
						selected_conversion(currencyConversion[select_conversion-1], indrupee[select_convertValue-1], indrupeeto[select_convertValue-1]);
						
					break;
					
					// IND Rupee  to Euro
					case 4:
						
						selected_conversion(currencyConversion[select_conversion-1], indrupee[select_convertValue-1], indrupeeto[select_convertValue-1]);
						
					break;
					
					// Pkr Rupee to Canadian Dollar
					case 5:
						
						selected_conversion(currencyConversion[select_conversion-1], indrupee[select_convertValue-1], indrupeeto[select_convertValue-1]);
						
					break;
					
					// Pkr Rupee to United Arab Emirates Dirham
					case 6:
						
						selected_conversion(currencyConversion[select_conversion-1], indrupee[select_convertValue-1], indrupeeto[select_convertValue-1]);
						
					break;
					
					// Pkr Rupee to Saudi Riyal
					case 7:
						
						selected_conversion(currencyConversion[select_conversion-1], indrupee[select_convertValue-1], indrupeeto[select_convertValue-1]);
						
					break;
					
					default: 
						printf("'Select Valid Number'\n");
					break;
				}
				
			break;
			
			// Dollar to Others Currency
			case 3:
				
				for (i = 0; i < 7; i++) {
					printf("%d. %s to %s \n", i+1, currencyConversion[select_conversion-1], dollar[i]);
				}
				
				printf("\n'Select Currency to Convert': ");
				scanf("%d", &select_convertValue);
				
				// Dollar to Others Currency
				switch (select_convertValue) {
					
					// Dollar to PKR Rupee
					case 1:
						
						selected_conversion(currencyConversion[select_conversion-1], dollar[select_convertValue-1], dollarto[select_convertValue-1]);
						
					break;
					
					// Dollar to IND Rupee
					case 2:
						
						selected_conversion(currencyConversion[select_conversion-1], dollar[select_convertValue-1], dollarto[select_convertValue-1]);
						
					break;
					
					// Dollar to Pound
					case 3:
						
						selected_conversion(currencyConversion[select_conversion-1], dollar[select_convertValue-1], dollarto[select_convertValue-1]);
						
					break;
					
					// Dollar to Euro
					case 4:
						
						selected_conversion(currencyConversion[select_conversion-1], dollar[select_convertValue-1], dollarto[select_convertValue-1]);
						
					break;
					
					// Dollar to Canadian Dollar
					case 5:
						
						selected_conversion(currencyConversion[select_conversion-1], dollar[select_convertValue-1], dollarto[select_convertValue-1]);
						
					break;
					
					// Dollar to United Arab Emirates Dirham
					case 6:
						
						selected_conversion(currencyConversion[select_conversion-1], dollar[select_convertValue-1], dollarto[select_convertValue-1]);
						
					break;
					
					// Dollar to Saudi Riyal
					case 7:
						
						selected_conversion(currencyConversion[select_conversion-1], dollar[select_convertValue-1], dollarto[select_convertValue-1]);
						
					break;
					
					default: 
						printf("'Select Valid Number'\n");
					break;
				}
				
			break;
			
			// Pound to Others Currency
			case 4:
				
				for (i = 0; i < 7; i++) {
					printf("%d. %s to %s \n", i+1, currencyConversion[select_conversion-1], pound[i]);
				}
				
				printf("\n'Select Currency to Convert': ");
				scanf("%d", &select_convertValue);
				
				// Pound to Others Currency
				switch (select_convertValue) {
					
					// Pound to PKR Rupee
					case 1:
						
						selected_conversion(currencyConversion[select_conversion-1], pound[select_convertValue-1], poundto[select_convertValue-1]);
						
					break;
					
					// Pound to IND Rupee
					case 2:
						
						selected_conversion(currencyConversion[select_conversion-1], pound[select_convertValue-1], poundto[select_convertValue-1]);
						
					break;
					
					// Pound to Dollar
					case 3:
						
						selected_conversion(currencyConversion[select_conversion-1], pound[select_convertValue-1], poundto[select_convertValue-1]);
						
					break;
					
					// Pound to Euro
					case 4:
						
						selected_conversion(currencyConversion[select_conversion-1], pound[select_convertValue-1], poundto[select_convertValue-1]);
						
					break;
					
					// Pound to Canadian Dollar
					case 5:
						
						selected_conversion(currencyConversion[select_conversion-1], pound[select_convertValue-1], poundto[select_convertValue-1]);
						
					break;
					
					// Pound to United Arab Emirates Dirham
					case 6:
						
						selected_conversion(currencyConversion[select_conversion-1], pound[select_convertValue-1], poundto[select_convertValue-1]);
						
					break;
					
					// Pound to Saudi Riyal
					case 7:
						
						selected_conversion(currencyConversion[select_conversion-1], pound[select_convertValue-1], poundto[select_convertValue-1]);
						
					break;
					
					default: 
						printf("'Select Valid Number'\n");
					break;
				}
				
			break;
			
			// Euro to Others Currency
			case 5:
				
				for (i = 0; i < 7; i++) {
					printf("%d. %s to %s \n", i+1, currencyConversion[select_conversion-1], euro[i]);
				}
				
				printf("\n'Select Currency to Convert': ");
				scanf("%d", &select_convertValue);
				
				// Euro to Others Currency
				switch (select_convertValue) {
					
					// Euro to PKR Rupee
					case 1:
						
						selected_conversion(currencyConversion[select_conversion-1], euro[select_convertValue-1], euroto[select_convertValue-1]);
						
					break;
					
					// Euro to IND Rupee
					case 2:
						
						selected_conversion(currencyConversion[select_conversion-1], euro[select_convertValue-1], euroto[select_convertValue-1]);
						
					break;
					
					// Euro to Dollar
					case 3:
						
						selected_conversion(currencyConversion[select_conversion-1], euro[select_convertValue-1], euroto[select_convertValue-1]);
						
					break;
					
					// Euro to Pound
					case 4:
						
						selected_conversion(currencyConversion[select_conversion-1], euro[select_convertValue-1], euroto[select_convertValue-1]);
						
					break;
					
					// Euro to Canadian Dollar
					case 5:
						
						selected_conversion(currencyConversion[select_conversion-1], euro[select_convertValue-1], euroto[select_convertValue-1]);
						
					break;
					
					// Euro to United Arab Emirates Dirham
					case 6:
						
						selected_conversion(currencyConversion[select_conversion-1], euro[select_convertValue-1], euroto[select_convertValue-1]);
						
					break;
					
					// Euro to Saudi Riyal
					case 7:
						
						selected_conversion(currencyConversion[select_conversion-1], euro[select_convertValue-1], euroto[select_convertValue-1]);
						
					break;
					
					default: 
						printf("'Select Valid Number'\n");
					break;
				}
				
			break;
			
			// Canadian Dollar to Others Currency
			case 6:
				
				for (i = 0; i < 7; i++) {
					printf("%d. %s to %s \n", i+1, currencyConversion[select_conversion-1], canadian_dollar[i]);
				}
				
				printf("\n'Select Currency to Convert': ");
				scanf("%d", &select_convertValue);
				
				// Canadian Dollar to Others Currency
				switch (select_convertValue) {
					
					// Canadian Dollar to PKR Rupee
					case 1:
						
						selected_conversion(currencyConversion[select_conversion-1], canadian_dollar[select_convertValue-1], canadian_dollarto[select_convertValue-1]);
								
					break;
					
					// Canadian Dollar to IND Rupee
					case 2:
						
						selected_conversion(currencyConversion[select_conversion-1], canadian_dollar[select_convertValue-1], canadian_dollarto[select_convertValue-1]);
						
					break;
					
					// Canadian Dollar to Dollar
					case 3:
						
						selected_conversion(currencyConversion[select_conversion-1], canadian_dollar[select_convertValue-1], canadian_dollarto[select_convertValue-1]);
						
					break;
					
					// Canadian Dollar to Pound
					case 4:
						
						selected_conversion(currencyConversion[select_conversion-1], canadian_dollar[select_convertValue-1], canadian_dollarto[select_convertValue-1]);
						
					break;
					
					// Canadian Dollar to Euro
					case 5:
						
						selected_conversion(currencyConversion[select_conversion-1], canadian_dollar[select_convertValue-1], canadian_dollarto[select_convertValue-1]);
						
					break;
					
					// Canadian Dollar to United Arab Emirates Dirham
					case 6:
						
						selected_conversion(currencyConversion[select_conversion-1], canadian_dollar[select_convertValue-1], canadian_dollarto[select_convertValue-1]);
						
					break;
					
					// Canadian Dollar to Saudi Riyal
					case 7:
						
						selected_conversion(currencyConversion[select_conversion-1], canadian_dollar[select_convertValue-1], canadian_dollarto[select_convertValue-1]);
						
					break;
					
					default: 
						printf("'Select Valid Number'\n");
					break;
				}
				
			break;
			
			// United Arab Emirates Dirham to Others Currency
			case 7:
				
				for (i = 0; i < 7; i++) {
					printf("%d. %s to %s \n", i+1, currencyConversion[select_conversion-1], uae_dirham[i]);
				}
				
				printf("\n'Select Currency to Convert': ");
				scanf("%d", &select_convertValue);
				
				// United Arab Emirates Dirham to Others Currency
				switch (select_convertValue) {
					
					// United Arab Emirates Dirham to PKR Rupee
					case 1:
						
						selected_conversion(currencyConversion[select_conversion-1], uae_dirham[select_convertValue-1], uae_dirhamto[select_convertValue-1]);
						
					break;
					
					// United Arab Emirates Dirham to IND Rupee
					case 2:
						
						selected_conversion(currencyConversion[select_conversion-1], uae_dirham[select_convertValue-1], uae_dirhamto[select_convertValue-1]);
						
					break;
					
					// United Arab Emirates Dirham to Dollar
					case 3:
						
						selected_conversion(currencyConversion[select_conversion-1], uae_dirham[select_convertValue-1], uae_dirhamto[select_convertValue-1]);
						
					break;
					
					// United Arab Emirates Dirham to Pound
					case 4:
						
						selected_conversion(currencyConversion[select_conversion-1], uae_dirham[select_convertValue-1], uae_dirhamto[select_convertValue-1]);
						
					break;
					
					// United Arab Emirates Dirham to Euro
					case 5:
						
						selected_conversion(currencyConversion[select_conversion-1], uae_dirham[select_convertValue-1], uae_dirhamto[select_convertValue-1]);
						
					break;
					
					// United Arab Emirates Dirham to Canadian Dollar
					case 6:
						
						selected_conversion(currencyConversion[select_conversion-1], uae_dirham[select_convertValue-1], uae_dirhamto[select_convertValue-1]);
						
					break;
					
					// United Arab Emirates Dirham to Saudi Riyal
					case 7:
						
						selected_conversion(currencyConversion[select_conversion-1], uae_dirham[select_convertValue-1], uae_dirhamto[select_convertValue-1]);
						
					break;
					
					default: 
						printf("'Select Valid Number'\n");
					break;
				}
				
			break;
			
			// Saudi Riyal to Others Currency
			case 8:
				
				for (i = 0; i < 7; i++) {
					printf("%d. %s to %s \n", i+1, currencyConversion[select_conversion-1], saudi_riyal[i]);
				}
				
				printf("\n'Select Currency to Convert': ");
				scanf("%d", &select_convertValue);
				
				// Saudi Riyal to Others Currency
				switch (select_convertValue) {
					
					// Saudi Riyal to PKR Rupee
					case 1:
						
						selected_conversion(currencyConversion[select_conversion-1], saudi_riyal[select_convertValue-1], saudi_riyalto[select_convertValue-1]);
						
					break;
					
					// Saudi Riyal to IND Rupee
					case 2:
						
						selected_conversion(currencyConversion[select_conversion-1], saudi_riyal[select_convertValue-1], saudi_riyalto[select_convertValue-1]);
						
					break;
					
					// Saudi Riyal to Dollar
					case 3:
						
						selected_conversion(currencyConversion[select_conversion-1], saudi_riyal[select_convertValue-1], saudi_riyalto[select_convertValue-1]);
						
					break;
					
					// Saudi Riyal to Pound
					case 4:
						
						selected_conversion(currencyConversion[select_conversion-1], saudi_riyal[select_convertValue-1], saudi_riyalto[select_convertValue-1]);
						
					break;
					
					// Saudi Riyal to Euro
					case 5:
						
						selected_conversion(currencyConversion[select_conversion-1], saudi_riyal[select_convertValue-1], saudi_riyalto[select_convertValue-1]);
						
					break;
					
					// Saudi Riyal to Canadian Dollar
					case 6:
						
						selected_conversion(currencyConversion[select_conversion-1], saudi_riyal[select_convertValue-1], saudi_riyalto[select_convertValue-1]);
						
					break;
					
					// Saudi Riyal to United Arab Emirates Dirham
					case 7:
						
						selected_conversion(currencyConversion[select_conversion-1], saudi_riyal[select_convertValue-1], saudi_riyalto[select_convertValue-1]);
						
					break;
					
					default: 
						printf("'Select Valid Number'\n");
					break;
				}
				
			break;
			
			default: 
				printf("'Select Valid Number'");
				
			break;
		}
		
		
		printf("\n\nDo you want to continue Y/N: ");
		scanf(" %c", &close);
		
		
		if (close == 'Y' || close == 'y') {
			system("cls");
		}
			
	} while (close == 'Y' || close == 'y');
	
	
} // Main Function End

void selected_conversion (char form[], char to[], double multipliedValue) { // Function Body

	float enterValue;
	double convertValue;
		
	printf("%s to %s: ", form, to);
	
	scanf("%f", &enterValue);
	
	convertValue =  enterValue * multipliedValue;
	
	printf("%s %.2f to %s %.4lf", form, enterValue, to, convertValue);	
				
}
