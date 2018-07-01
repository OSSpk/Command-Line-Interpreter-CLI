#include <iostream>
#include <cstdio>
#include <string.h>
#include <unistd.h>
#include <cstdlib>

using namespace std;

int main()
{
	bool cont = true;
		
	char buffer[100] = {};

	while (cont)
	{
		cout << "\n\nEnter a command: ";
		
		cin.get (buffer, 90);
	
		//REMOVE
		if (strstr (buffer,"remove") != NULL)
		{
			char* t = strchr (buffer,' ');

			if(t != NULL)
			{
				if(remove( t+1 ) != 0)
					cout << "\n\nError deleting the file.";
				else
					cout << "\n\nThe file has successfully been deleted.";
			}
	
			else
				cout << "\n\nInvalid command. Filename not entered.";

		}

		//EXIT
		else if (strstr (buffer,"exit") != NULL)
			cont = false;
		

		//RENAME
		else if (strstr (buffer,"rename") != NULL)
		{
			char* t = strchr (buffer,' ');
			
			if (t != NULL)
			{
				char* oldName = t + 1;	
	         		char* newName = strchr (oldName, ' ');


				if (newName != NULL)
				{
					char temp[30] = {};
					
					int i = 0;
					for(char* start = oldName; start != newName; start++)
					{
						temp[i] = *start;
						i++;
					}

					newName++;
				

					if(rename( temp , newName ) != 0)
						cout << "\nError renaming the file.";
				     	else
						cout << "\nThe file has successfully been renamed.";
				}	
					
				else
					cout << "\n\nNew Name of the file not entered.";
			}
			
			else
				cout << "\n\nInvalid command.";

		}


		//RMDIR
		else if (strstr (buffer,"rmdir") != NULL)
		{
			char* t = strchr (buffer,' ');

			if(t != NULL)
			{
				if(rmdir( t+1 ) != 0)
					cout << "\n\nError deleting the directory.";
				else
					cout << "\n\nThe directory has successfully been removed.";
			}
	
			else
				cout << "\n\nInvalid command. DirectoryName not entered.";

		}
		

		//ECHO
		else if (strstr (buffer,"echo") != NULL)
		{
			char* t = strchr (buffer,'"');

			if (t != NULL)
			{
				char* data = t + 1;	

				//Extracting the data
				char temp[200] = {};
				
				int i = 0;

				for(; data[i] != '"'; i++)
				{
					temp[i] = data[i];
				}


				//Checking if filename is given or not
	         		char* fileN = strchr (data + i, ' ') ;

				if (fileN != NULL)
				{
					fileN++;
				
					// create a FILE typed pointer
					FILE *file_pointer; 
	
					// open the file for writing
					file_pointer = fopen (fileN, "w");
					
					if (file_pointer != NULL)
				 	{
						// Write to the file
						fprintf (file_pointer,"%s", temp);
	
						// Close the file
						fclose (file_pointer); 
					
						cout << "\n\nThe file has been successfully created.";
					}
					
					else
						cout << "\n\nCould not create the file.";
				}	
					
				//If filename isn't given then simply print the data on console
				else
				{
					cout << endl << endl << temp;
				}
			}
	
			else
				cout << "\n\nInvalid command. Data not given";
		}

		//UNZIP
		else if (strstr (buffer,"unzip") != NULL)
		{
			char* t = strchr (buffer,' ');

			if(t != NULL)
			{
				char temp[50] = "tar xvf";
	
				if( system( strcat(temp,t) ) != 0 )
					cout << "\n\nError unzipping the file.";
				else
					cout << "\n\nThe file has been successfully unzipped.";
			}
	
			else
				cout << "\n\nInvalid command. FileName not entered.";	
		}

		
		//ZIP
		else if (strstr (buffer,"zip") != NULL)
		{
			char* t = strchr (buffer,' ');

			if(t != NULL)
			{
				char temp[50] = "tar cvf";

				if( system( strcat( temp,t) ) != 0 )
					cout << "\n\nError zipping the file.";
				else
					cout << "\n\nThe file has been successfully zipped.";
			}
	
			else
				cout << "\n\nInvalid command.";	
		}

		
		else if (strstr (buffer,"out") != NULL)
		{
			int i = 1;
	
			//Checking '-l'
			bool lineByLine = false;
			char* lpos = strstr (buffer,"-l");				
			
			if (lpos != NULL)
			{	
				lineByLine = true;
				i++;
			}
	
			string s(buffer);
			string fileN = "";				
					
			string delimiter = " ";	
			size_t pos = 0;
		
			while ( i > 0 )
			{	
				pos = s.find(delimiter);
				s.erase(0, pos + delimiter.length());
				i--;
			}
			

			//Now extracting the file names
			string f[3] = " ";
			
			i = 0;

			while ( (pos = s.find(delimiter)) != -1)
			{
				f[i] = s.substr(0, pos);
    				s.erase(0, pos + delimiter.length());
				i++;
			}

			//if atleast one filename is present
				
			if ( s != "out" && s != "-l" && s != "" )
			{
				f[i] = s;
		
				//Opening the files and printing the contents
	
				int c;
				FILE *file;
				
				int j = 0;
	
				bool delay = false;
				char x;			

				while ( j <= i)
				{				
					char fName[50];
					strcpy(fName, f[j].c_str());

					//Printing the contents of the file(s)

					file = fopen(fName, "r");
					char line[256];
					
					cout << "\n\nThe contents of the file " << fName << " are as follows : \n\n";

					if (file)
					{
						if (lineByLine)
						{	
							while (fgets(line, sizeof(line), file)) 
							{
	       				        		printf("%s", line);
								
								//Delay loop
								delay = true;
				
								while(delay)
								{	
									cout << "\n\nPress some key to print the next line\n\n";
									getchar();
									delay = false;	
								}						 
    							}

						}
				
						else
						{
    							while ((c = getc(file)) != EOF)
        						putchar(c);
						}

						
    						fclose(file);
					}
	
					else
						cout << "\n\nCould not open the file " << fName << " .";
	
					j++;
	
					//Delay loop
					delay = true;
				
					while(delay)
					{	
						cout << "\n\nPress some key to continue\n\n";
						getchar();
						delay = false;	
					}
				}
			}
			
			else
				cout << "\n\nNo filename entered.\n\n";			
		}

		else
			cout << "\n\nInvalid Command. Kindly enter a valid command.";


		cin.ignore();
	}



	cout << "\n\n\nExiting the CLI.\n\n";
	
	return 0;
}
