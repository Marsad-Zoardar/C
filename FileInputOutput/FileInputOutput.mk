##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=FileInputOutput
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/home/vboxuser/Workspaces/Workspace2
ProjectPath            :=/home/vboxuser/Workspaces/Workspace2/FileInputOutput
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=vboxuser
Date                   :=15/08/26
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
ObjectsFileList        :="FileInputOutput.txt"
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
Objects0=$(IntermediateDirectory)/FileChallenge2Jason.c$(ObjectSuffix) $(IntermediateDirectory)/main.c$(ObjectSuffix) $(IntermediateDirectory)/Write.c$(ObjectSuffix) $(IntermediateDirectory)/FileChallenge2.c$(ObjectSuffix) $(IntermediateDirectory)/FileChallenge.c$(ObjectSuffix) 



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
$(IntermediateDirectory)/FileChallenge2Jason.c$(ObjectSuffix): FileChallenge2Jason.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/FileChallenge2Jason.c$(ObjectSuffix) -MF$(IntermediateDirectory)/FileChallenge2Jason.c$(DependSuffix) -MM FileChallenge2Jason.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/FileInputOutput/FileChallenge2Jason.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FileChallenge2Jason.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FileChallenge2Jason.c$(PreprocessSuffix): FileChallenge2Jason.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/FileChallenge2Jason.c$(PreprocessSuffix) FileChallenge2Jason.c

$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM main.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/FileInputOutput/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) main.c

$(IntermediateDirectory)/Write.c$(ObjectSuffix): Write.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Write.c$(ObjectSuffix) -MF$(IntermediateDirectory)/Write.c$(DependSuffix) -MM Write.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/FileInputOutput/Write.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Write.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Write.c$(PreprocessSuffix): Write.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Write.c$(PreprocessSuffix) Write.c

$(IntermediateDirectory)/FileChallenge2.c$(ObjectSuffix): FileChallenge2.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/FileChallenge2.c$(ObjectSuffix) -MF$(IntermediateDirectory)/FileChallenge2.c$(DependSuffix) -MM FileChallenge2.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/FileInputOutput/FileChallenge2.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FileChallenge2.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FileChallenge2.c$(PreprocessSuffix): FileChallenge2.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/FileChallenge2.c$(PreprocessSuffix) FileChallenge2.c

$(IntermediateDirectory)/FileChallenge.c$(ObjectSuffix): FileChallenge.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/FileChallenge.c$(ObjectSuffix) -MF$(IntermediateDirectory)/FileChallenge.c$(DependSuffix) -MM FileChallenge.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/FileInputOutput/FileChallenge.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/FileChallenge.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/FileChallenge.c$(PreprocessSuffix): FileChallenge.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/FileChallenge.c$(PreprocessSuffix) FileChallenge.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


