#include<stdio.h>

int main()
{	

	int Choice, Veg_Dish, Non_Veg_Dish;

	/* Greetings */
	printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||| SHRI. DATTAGURU PRASANNA ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n");

	printf("What would you like to EAT? :\n");
	printf("We have VEG and NON-VEG please select (1 - VEG, 2 - NON-VEG)\n");
	scanf("%d", &Choice);


	   if(Choice == 1)
           {
		    printf("-----------Select a type of food from below: -----------------\n");
                    printf("1. Sandwich(Veg)                       5. Rice(Veg)\n");
                    printf("2. Burgers & Pizza(Veg)                6. Noodles(Veg)\n");
                    printf("3. Rolls(Veg)                          7. Biryani & Pulav(Veg)\n");
                    printf("4. Starters(Veg)                       8. Punjabi Dishes(Veg)\n");
 		    printf("                                       9. Milkshakes(Veg)\n\n");

                    printf("Enter your choice as Numerical form:\n");
                    scanf("%d", &Veg_Dish);

                   switch(Veg_Dish)
        	   {
		    
		   case 1: printf("||||||||||| Sandwich||||||||||||\n");
                            printf("1. Bread Butter.\n");
                            printf("2. Veg Cheese Sandwich.\n");
                            printf("3. Veg Cheese Club Sandwich.\n");
                            printf("4. Choclate Toast Sandwich.\n");
                            printf("5. French Fries.\n\n");
    
                            break;
    
                    case 2: printf("||||||||||| Burgers & Pizza ||||||||||||\n");
                            printf("1. Veg Burger. \n");
                            printf("2. Veg Cheese Burger.\n");
                            printf("3. Veg Cheese Barbeque Burger..\n");
                            printf("4. Margarita Pizza.\n");
                            printf("5. Veg Mix Pizza.\n");
                            printf("6. Yummy Special Pizza.\n");
                            printf("7. Plain Cheese Pizza.\n\n");
    
                            break;
 		
 		     case 3: printf("||||||||||| Rolls||||||||||||\n");
                             printf("1. Veg Cheese Roll.\n");
                             printf("2. Aloo Tikki Roll.\n");
                             printf("3. Veg Manchurian Roll.\n");
                             printf("4. Paneer Cheese Roll.\n");
                             printf("5. Paneer Butter Masala Roll.\n");
 			     printf("6. Paneer Chilly Roll.\n");
			     printf("7. Paneer Barbeque Roll.\n");
			     printf("8. Soya Chap Roll.\n");
			     printf("9. Mashroom Masala Roll.\n\n");
                             
                             break;

 		    case 4: printf("||||||||||| Starters||||||||||||\n");
                            printf("1. Veg Machurian.\n");
                            printf("2. Paneer Chilly.\n");
                            printf("3. Paneer 65.\n");
                            printf("4. Mashroom Chilly.\n\n");
                           
                            break;
			
	            case 5: printf("||||||||||| Rice||||||||||||\n");
                            printf("1. Veg Fried Rice.\n");
                            printf("2. Veg Schezwan Rice.\n");
                            printf("3. Veg Combination Rice.\n");
                            printf("4. Veg HongKong Rice.\n");
			    printf("5. Veg Triple Rice.\n");
			    printf("6. Paneer Chilly Rice.\n\n");
       
                            break;

	            case 6: printf("||||||||||| Noodles||||||||||||\n");
                            printf("1. Veg Hakka Noodles.\n");
                            printf("2. Veg Schezwan Noodles.\n");
                            printf("3. Veg HongKong Noodles.\n");
                            printf("4. Veg Triple Noodles.\n");
			    printf("5. Paneer Chilly Noodles.\n\n");
       
                            break;

		     case 7: printf("||||||||||| Biryani & Pulav||||||||||||\n");
                            printf("1. Veg Biryani.\n");
                            printf("2. Veg Pulav.\n");
                            printf("3. Paneer Soya Chap Biryani.\n");
                            printf("4. Dal Khichadi.\n");
			    printf("5. Jeera Rice.\n\n");
       
                            break;

		      case 8: printf("||||||||||| Punjabi Dishes||||||||||||\n");
                            printf("1. Shahi Soya Chap Masala.\n");
                            printf("2. Paneer Masala.\n");
                            printf("3. Paneer Butter Masala.\n");
                            printf("4. Mix Veg.\n");
			    printf("5. Mashroom Masala.\n");
			    printf("6. Shev Bhaji.\n");
			    printf("7. Dal Tadka.\n\n");
       
                            break;

		      case 9: printf("||||||||||| Milkshake||||||||||||\n");
                            printf("1. Banana Milkshake.\n");
                            printf("2. Pineapple Milkshake.\n");
                            printf("3. Pan Masala Milkshake.\n");
                            printf("4. Strawberry Milkshake.\n");
			    printf("5. Cold Coffee.\n\n");
       
                            break;
			
		     default: printf("Enter a valid choice!!\n");

       		   }

          }

	 else if(Choice == 2)
	 {
		printf("-----------Select a type of food from below: -----------------\n");
		printf("1. Sandwich(Non-Veg)                       5. Omletes(Non-Veg)\n");
		printf("2. Special Rolls(Non-Veg)                  6. Special Rice(Non-Veg)\n");
		printf("3. Special Starters(Non-Veg)               7. Special Noodles(Non-Veg)\n");
		printf("4. Special Burgers & Pizza(Non-Veg)        8. Curry and Biryani(Non-Veg)\n\n");
		printf("Enter your choice as Numerical form:\n");
		scanf("%d", &Non_Veg_Dish);

	  	switch(Non_Veg_Dish)
		{
		
	 	case 1: printf("||||||||||| Sandwich||||||||||||\n");
			printf("1. EGG SANDWICH\n");
			printf("2. EGG CHEESE GRILLED SANDWICH\n");
			printf("3. CHI. CLUB SANDWICH\n");
			printf("4. CHI. CHEESE GRILLED SANDWICH\n");
			printf("5. CHI. KHEEMA BREAD\n\n");
			
			break;

		case 2: printf("||||||||||| Special Rolls ||||||||||||\n");
                        printf("1. Chicken Roll. \n");
                        printf("2. Chicken Tikka Roll.\n");
                        printf("3. Chicken Masala Roll.\n");
                        printf("4. Chicken Cheese Roll.\n");
                        printf("5. Chicken Double Roll.\n\n");
			printf("6. Chicken Chilly Roll.\n\n");
			printf("7. Chicken Machurian Roll.\n\n");
			printf("8. Chicken Barbaque Roll.\n\n");

                        break;

		case 3: printf("||||||||||| Special Starters ||||||||||||\n");
                        printf("1. Chicken Manchurian. \n");
                        printf("2. Chicken Chilly.\n");
                        printf("3. Chicken 65.\n");
                        printf("4. Chicken Lollypop Oil Fry.\n");
                        printf("5. Chicken Lolly Pop Medium/Small.\n\n");

                        break;

		case 4: printf("||||||||||| Special Burgers & Pizza ||||||||||||\n");
                        printf("1. Egg Burger. \n");
                        printf("2. Egg Cheese Burger.\n");
                        printf("3. Egg Cheese Barbaque Burger.\n");
                        printf("4. Chicken Burger.\n");
                        printf("5. Chicken Cheese Barbaque Burger.\n\n");

                        break;

		case 5: printf("||||||||||| Omlets ||||||||||||\n");
                        printf("1. Bread Omlet. \n");
                        printf("2. Cheese Omlet.\n");
                        printf("3. Half Fry.\n");
                        printf("4. Full Fry.\n\n");

                        break;

		case 6: printf("||||||||||| Special Rice ||||||||||||\n");
                        printf("1. EGG Fried Rice. \n");
                        printf("2. Chicken Fried Rice.\n");
                        printf("3. Chicken Schezwan Rice.\n");
                        printf("4. Chicken HongKong Rice.\n");
                        printf("5. Chicken Combination Rice.\n");
			printf("6. Chicken Triple Rice.\n\n");

                        break;

		case 7: printf("||||||||||| Special Noodles ||||||||||||\n");
                        printf("1. Egg Hakka Noodles. \n");
                        printf("2. Chicken Hakka Noodles.\n");
                        printf("3. Chicken Schezwan Noodles.\n");
                        printf("4. Chicken HongKong Noodles.\n");
                        printf("5. Chicken Triple Noodles.\n\n");

                        break;

		case 8: printf("||||||||||| Curry & Biryani ||||||||||||\n");
                        printf("1. Egg Bhurji. \n");
                        printf("2. Egg Curry.\n");
                        printf("3. Egg Masala.\n");
                        printf("4. Chicken Masala.\n");
                        printf("5. Chicken Curry.\n");
			printf("6. Butter Chicken Masala.\n");
			printf("7. Chicken Biryani.\n\n");

                        break;


		Default: printf("Enter the valid choice!!\n");


		}

	}


	
	

	return 0;

}
