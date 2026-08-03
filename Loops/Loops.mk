##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Loops
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/home/vboxuser/Workspaces/Workspace2
ProjectPath            :=/home/vboxuser/Workspaces/Workspace2/Loops
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=vboxuser
Date                   :=27/07/26
CodeLitePath           :=/home/vboxuser/.codelite
LinkerName             :=/bin/g++-13
SharedObjectLinkerName :=/bin/g++-13 -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=$(IntermediateDirectory)
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Loops.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  -static
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := /usr/bin/ar rcu
CXX      := /bin/g++-13
CC       := /bin/gcc-13
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -O0 -gdwarf-2 -std=c99 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/solution.c$(ObjectSuffix) $(IntermediateDirectory)/challenge.c$(ObjectSuffix) $(IntermediateDirectory)/main.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/solution.c$(ObjectSuffix): solution.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/solution.c$(ObjectSuffix) -MF$(IntermediateDirectory)/solution.c$(DependSuffix) -MM solution.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/Loops/solution.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/solution.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/solution.c$(PreprocessSuffix): solution.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/solution.c$(PreprocessSuffix) solution.c

$(IntermediateDirectory)/challenge.c$(ObjectSuffix): challenge.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/challenge.c$(ObjectSuffix) -MF$(IntermediateDirectory)/challenge.c$(DependSuffix) -MM challenge.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/Loops/challenge.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/challenge.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/challenge.c$(PreprocessSuffix): challenge.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/challenge.c$(PreprocessSuffix) challenge.c

$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM main.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/Loops/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) main.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


