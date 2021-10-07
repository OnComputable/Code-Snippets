/* ----------------------------------------------------------------------
 * File Name: Smallest_Multiple.cpp
 * Purpose       :https://projecteuler.net/problem=5
 * Creation Date :30-09-21
 * Modified Date :
 * Created By    : Swiss
 * ----------------------------------------------------------------------
 * VIM Commands : 1) To open multiple files in tab without exiting->
 * 		   :tabedit Path_or_filename(if in same folder)
 * 		  2) To switch between tabs -> gt (in visual mode)
 * ----------------------------------------------------------------------
 * Cpp Commands : 1) g++-9 -std=c++17 -Wall -Weffc++ -Wextra 
 *		     -Wsign-conversion -Werro FileName.cpp
 * ----------------------------------------------------------------------
*/
// This was a trial and error method to get the limit of i and not recommended
#include <iostream>

using namespace std;

int main()
{
	for(unsigned int i = 2; i <= 300000000; i++)
	{
	
		if(i%1 == 0)
		{
			if(i%2 == 0)
			{
				if(i%3 == 0)
				{
					if(i%4 == 0)
					{
						if(i%5 == 0)
						{
							if(i%6 == 0)
							{
								if(i%7 == 0)
								{
									if(i%8 == 0)
									{
										if(i%9 == 0)
										{
											if(i%10 == 0)
											{
												if(i%11 == 0)
												{	
													if(i%12 == 0)
													{
														if(i%13 == 0)
														{
															if(i%14 == 0)
															{
																if(i%15 == 0)
																{
																	if(i%16 == 0)
																	{
																		if(i%17 == 0)
																		{
																			if(i%18 == 0)
																			{
																				if(i%19 == 0)
																				{
																					if(i%20 == 0)
																					{
																						cout << i << "\n\n";
																						return 0;
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}	
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}

		}
	}	


	return 0;
}
