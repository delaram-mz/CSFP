
# # CXX = g++
# # CC := $(CXX)

# # TARGET_EXEC := sc_main

# # SRC_DIRS := $(shell pwd)
# # BUILD_DIR := $(SRC_DIRS)/obj

# # # # FRAMEWORK_SRC_DIR := /Users/ebinouri/Documents/UNi/OpenSourceTools/fault-injection-framework/core/src

# # # # Find all the C and C++ files we want to compile
# # # # Note the single quotes around the * expressions. The shell will incorrectly expand these otherwise, but we want to send the * directly to the find command.
# # SRCS := $(shell find $(SRC_DIRS) -name '*.cpp' -or -name '*.c')
# # # # FRAMEWORK_SRC := $(shell find $(FRAMEWORK_SRC_DIR) -name '*.cpp' -or -name '*.c')


# # # # Prepends BUILD_DIR and appends .o to every src file
# # # # As an example, ./your_dir/hello.cpp turns into ./build/./your_dir/hello.cpp.o
# # OBJS_DIR := $(subst $(SRC_DIRS),$(BUILD_DIR),$(SRCS))
# # OBJS := $(addsuffix .o, $(OBJS_DIR))
# # # # OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)


# # # # Every folder in ./src will need to be passed to GCC so that it can find header files
# # INC_DIRS := $(shell find $(SRC_DIRS) -type d | grep -v "\.")
# # # # Add a prefix to INC_DIRS. So moduleA would become -ImoduleA. GCC understands this -I flag
# # INC_FLAGS := $(addprefix -I,$(INC_DIRS))
# # # # FRAMEWORK_INC_FLAGS := $(addprefix -I,$(FRAMEWORK_SRC))

# # LDFLAGS := -L /home/delaram/systemc-2.3.1a/SystemC
# # LDLIBS := -l systemc
# # CPPFLAGS :=  -std=c++03 -I /home/delaram/systemc-2.3.1a/include/

# # # # The -MMD and -MP flags together generate Makefiles for us!
# # # # These files will have .d instead of .o as the output.
# # CPPFLAGS += $(INC_FLAGS)

# # .PHONY:all
# # all: clean run


# # # # The final build step.
# # $(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
# # 	$(CXX) $(OBJS) -o $@ $(LDFLAGS) $(LDLIBS)

# # # # Build step for C++ source
# # $(BUILD_DIR)/%.cpp.o: %.cpp
# # 	mkdir -p $(dir $@)
# # 	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@


# # .PHONY: run
# # run: $(BUILD_DIR)/$(TARGET_EXEC)
# # 	$(BUILD_DIR)/$(TARGET_EXEC)

# # .PHONY: clean
# # clean:
# # 	rm -rf $(BUILD_DIR)
# #*************************************************

# # CXX = g++
# # CC := $(CXX)

# # TARGET_EXEC := main

# # SRC_DIRS := $(shell pwd)
# # BUILD_DIR := $(SRC_DIRS)/obj
# # # BUILD_DIR := $(SRC_DIRS)


# # # Find all the C and C++ files we want to compile
# # # Note the single quotes around the * expressions. The shell will incorrectly expand these otherwise, but we want to send the * directly to the find command.
# # SRCS := $(shell find $(SRC_DIRS) -name '*.cpp' -or -name '*.c')


# # # Prepends BUILD_DIR and appends .o to every src file
# # # As an example, ./your_dir/hello.cpp turns into ./build/./your_dir/hello.cpp.o
# # OBJS_DIR := $(subst $(SRC_DIRS),$(BUILD_DIR),$(SRCS))
# # OBJS := $(addsuffix .o, $(OBJS_DIR))
# # # OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)


# # # Every folder in ./src will need to be passed to GCC so that it can find header files
# # INC_DIRS := $(shell find $(SRC_DIRS) -type d | grep -v "\.")
# # # Add a prefix to INC_DIRS. So moduleA would become -ImoduleA. GCC understands this -I flag
# # INC_FLAGS := $(addprefix -I,$(INC_DIRS))

# # LDFLAGS := -L /Users/yaraghib/systemc-2.3.2/lib-macosx64
# # LDLIBS := -l systemc
# # CPPFLAGS :=  -stdlib=libc++ -I /Users/yaraghib/systemc-2.3.2/include

# # # The -MMD and -MP flags together generate Makefiles for us!
# # # These files will have .d instead of .o as the output.
# # CPPFLAGS += $(INC_FLAGS)

# # .PHONY:all
# # all: clean run


# # # The final build step.
# # $(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
# # 	$(CXX) $(OBJS) -o $@ $(LDFLAGS) $(LDLIBS)

# # # Build step for C++ source
# # $(BUILD_DIR)/%.cpp.o: %.cpp
# # 	mkdir -p $(dir $@)
# # 	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@


# # .PHONY: run
# # run: $(BUILD_DIR)/$(TARGET_EXEC)
# # 	$(BUILD_DIR)/$(TARGET_EXEC) > out.txt
# # 	# ./$(BUILD_DIR)/main > out.txt

# # .PHONY: clean
# # clean:
# # 	rm -rf $(BUILD_DIR)
# #****************************************

















# CXX = g++
# CC := $(CXX)
# TARGET := main

# # LDFLAGS := -L /Users/yaraghib/systemc-2.3.2/lib-macosx64 
# LD := /lib-linux64
# LDFLAGS := -L $(LD)

# LDLIBS := -l systemc
# # CPPFLAGS := -stdlib=libc++ -I /home/delaram/systemc-2.3.3/include
# CP := /usr/local/systemc-2.3.1
# CPPFLAGS := -std=c++11 -I $(CP)/include

# # SRC_DIR := .../src
# OBJ_DIR := .

# # $(wildcard *.cpp) $(wildcard */*.cpp): get all .cpp files from the current directory and dir "/xxx/xxx/"
# SRCS = $(wildcard *.cpp)
# SRCS += $(wildcard **/*.cpp)
# # $(patsubst %.cpp,%.o,$(SRCS)): substitute all ".cpp" file name strings to ".o" file name strings
# OBJS := $(patsubst %.cpp,%.o,$(SRCS))

# .PHONY:all
# all: clean build 

# .PHONY: build
# build: $(TARGET)
# $(TARGET): $(OBJS)
# 	$(CXX) $(LDFLAGS) -o  main.o
# # $(CXX) $(LDFLAGS) $(LDLIBS) -o main.o

# # $(CXX) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) -dynamiclib -o $(LIBRARY) main.cpp
# # $(CXX)  --verbose -stdlib=libc++ $(LIB_TARGET) -L./ -lYourLibrary

# # first is to compile all cpp files into .o files and generate a dynamic library for DUT
# %.o: %.cpp
# 	$(CXX) -fPIC -c -g $(CPPFLAGS) main.cpp
# # $(CXX) -fPIC $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) -shared -o $(LIBRARY) main.cpp
# # $(CXX) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) -shared -o $(LIBRARY) main.cpp

# # $(CXX) $(CPPFLAGS) -o $@ -c $<
# # $(CXX) -c -g $(CPPFLAGS) DUT.cpp

# # .PHONY: link
# # link: $(LIB_TARGET)
# # $(LIB_TARGET): $(LIBRARY)
# # 	$(CXX)  -stdlib=libc++ $(LIB_TARGET) -L./ -lmylib

# # $(LIBRARY): 
# # 	echo "do we even get here?"
# # 	$(CXX) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) -dynamiclib  -o $(LIBRARY) DUT.o


# # $(LIBRARY): 
# # 	echo "do we even get here?"
# # 	$(CXX) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) -dynamiclib  -o $(LIBRARY) DUT.o


# .PHONY: run
# run: main
# 	./main > out.txt

# clean:
# 	rm -rf $(TARGET)
# 	rm -rf *.o

# rm_o:
# 	rm -rf *.o


















# # # Name of the executable
# # TARGET = my_systemc_project

# # Compiler and linker
# CXX = g++
# CXXFLAGS := -std=c++11 -Wall -Wextra -std=c++11
# SYSTEMC_PATH = /usr/local/systemc-2.3.1

# SRC_DIR := src
# OBJ_DIR := obj
# BIN_DIR := bin
# EXECUTABLE := program.out

# SOURCES := $(wildcard $(SRC_DIR)/*.cpp)
# OBJECTS := $(patsubst $(SRC_DIR)/*.cpp, $(OBJ_DIR)/*.c, $(SOURCES))

# SYSTEMC_INCLUDE := -I$(SYSTEMC_PATH)/include
# LD_FLAG := -L$(SYSTEMC_PATH)/lib-linux64
# SYSTEMC_LIB := -lsystemc -lm

# all: $(BIN_DIR)/$(EXECUTABLE)

# $(BIN_DIR)/$(EXECUTABLE): $(OBJECTS) | $(BIN_DIR)
# 	$(CXX) $(CXXFLAGS) -I. $(SYSTEMC_INCLUDE) -L. $(LD_FLAG) -Wl,-rpath=$(LD_FLAG) -o $(SOURCES) $(SYSTEMC_LIB)

# $(OBJ_DIR)/*.o: $(SRC_DIR)/*.cpp | $(OBJ_DIR)
# 	$(CXX) $(CXXFLAGS) -I. $(SYSTEMC_INCLUDE) -c -o $@ $<

# $(OBJ_DIR):
# 	mkdir -p $(OBJ_DIR)

# $(BIN_DIR):
# 	mkdir -p $(BIN_DIR)

# clean:
# 	rm -rf $(OBJ_DIR) $(BIN_DIR)

# .PHONY: clean all




# g++ -std=c++11 -I. -I$SYSTEMC_HOME/include -L. -L$SYSTEMC_HOME/lib-linux64 -Wl,-rpath=$SYSTEMC_HOME/lib-linux64 -o hello hello.cpp -lsystemc -lm
# g++ -std=c++11 -I. -I$SYSTEMC_HOME/include -L. -L$SYSTEMC_HOME/lib-linux64 -Wl,-rpath=$SYSTEMC_HOME/lib-linux64 -o rts main.cpp -lsystemc -lm







# LD = g++

# # SystemC installation path (set this to your SystemC installation)
# # You might need to adjust these paths depending on where SystemC is installed on your system
# INCLUDE_DIR = $(SYSTEMC_PATH)/include
# LIB_DIR = $(SYSTEMC_PATH)/lib-linux64  # Adjust according to your system

# # Compiler flags
# CXXFLAGS = -std=c++11 -I$(INCLUDE_DIR) -O2 # Optimization level 2
# LDFLAGS = -L$(LIB_DIR) -lsystemc  # Link against the SystemC library

# # Source files
# SRCS = main.cpp  # Add more source files if needed
# OBJS = $(SRCS:.cpp=.o)  # Object files derived from source files

# # Default target: Build the executable
# all: $(TARGET)

# # Compile source files to object files
# %.o: %.cpp
# 	$(CXX) $(CXXFLAGS) -c $< -o $@

# # Link object files into the final executable
# $(TARGET): $(OBJS)
# 	$(LD) $(OBJS) $(LDFLAGS) -o 

# # Clean up object files and executable
# clean:
# 	rm -f $(OBJS) $(TARGET)

# # Rebuild the project
# rebuild: clean all






# SystemC installation path
SYSTEMC_HOME=/usr/local/systemc-2.3.1

# Compiler
CXX := g++

# Compiler flags
CXXFLAGS := -I. -I$(SYSTEMC_HOME)/include -Wall -Wextra -std=c++11
LDFLAGS := -L. -L$(SYSTEMC_HOME)/lib-linux64 -Wl,-rpath=$(SYSTEMC_HOME)/lib-linux64 -lsystemc -lm
LINK := Wl ,-rpath=/usr/local/systemc-2.3.1/lib-linux64
SYSC_LIB := -lsystemc -lm
# Source directory
SRC_DIR := src

# Object directory
OBJ_DIR := obj

# Binary directory
BIN_DIR := bin

# Target executable name
TARGET := $(BIN_DIR)/c432_netlist

# Source files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)

# Object files
OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Default target
all: build

# Build target
build: $(TARGET)

# Rule to link the target executable
$(TARGET): $(OBJS) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $^ -o $@ 

# Rule to compile the source files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) -O3 $(CXXFLAGS) -c $< -o $@

# Create binary and object directories
$(BIN_DIR) $(OBJ_DIR):
	mkdir -p $@

# Debug build
debug: CXXFLAGS += -g
debug: build

# Clean target to remove build artifacts
clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

.PHONY: all build debug clean


# g++ -std=c++11 -I. -I$SYSTEMC_HOME/include -L. -L$SYSTEMC_HOME/lib-linux64 -Wl,-rpath=$SYSTEMC_HOME/lib-linux64 -o hello hello.cpp -lsystemc -lm
# g++ -std=c++11 -I. -I$SYSTEMC_HOME/include -L. -L$SYSTEMC_HOME/lib-linux64 -Wl,-rpath=$SYSTEMC_HOME/lib-linux64 -o rts main.cpp -lsystemc -lm

