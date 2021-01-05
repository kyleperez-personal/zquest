# Name of the executable
EXECUTABLE = race_select
# Name of the cpp file the executable is based on
EXECUTABLE_FILE = $(EXECUTABLE).cpp

# Name of the dependent file
DEPENDENT_FILE_1 = output_format.cpp
# Directory we find the file in
#	'..' implies we go up by one directory from where the Makefile is located
DIRECTORY_FILE_1 = ../../globals/strings
# Location of the file (including its name)
LOCATION_FILE_1 = $(DIRECTORY_FILE_1)/$(DEPENDENT_FILE_1)

# Same as above, for another file
DEPENDENT_FILE_2 = proper_cap.cpp
DIRECTORY_FILE_2 = ../../globals/capitalization
LOCATION_FILE_2 = $(DIRECTORY_FILE_2)/$(DEPENDENT_FILE_2)

DEPENDENT_FILE_3 = race_select_functions.cpp

#DEPENDENT_FILE_4 = race_pick_functions.cpp
#DIRECTORY_FILE_3 = ../globals/userflow
#LOCATION_FILE_3 = $(DIRECTORY_FILE_3)/$(DEPENDENT_FILE_3)

# We include the directories in which the dependent files are located
INCLUDED_PATHS = -I $(DIRECTORY_FILE_1) \
	-I $(DIRECTORY_FILE_2)
	
# All the files needed to produce the executable
INCLUDED_FILES = $(EXECUTABLE_FILE) \
	$(LOCATION_FILE_1) \
	$(LOCATION_FILE_2) \
	$(DEPENDENT_FILE_3)

# What the executable depends on
$(EXECUTABLE) : $(INCLUDED_FILES)
	# The terminal command run to produce the executable
	g++ \
	$(INCLUDED_PATHS) \
	-o $(EXECUTABLE) \
	$(INCLUDED_FILES)
		
# Enter 'make clean' to remove the executable
clean :
	rm $(EXECUTABLE)
