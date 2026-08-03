##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SwitchStatement
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/home/vboxuser/Workspaces/Workspace2
ProjectPath            :=/home/vboxuser/Workspaces/Workspace2/SwitchStatement
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=vboxuser
Date                   :=30/07/26
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
ObjectsFileList        :="SwitchStatement.txt"
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
Objects0=$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IntermediateDirectory)/whileDo.c$(ObjectSuffix) $(IntermediateDirectory)/guessTheNumber.c$(ObjectSuffix) $(IntermediateDirectory)/GuessSolution.c$(ObjectSuffix) 



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
$(IntermediateDirectory)/main.c$(ObjectSuffix): main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/main.c$(DependSuffix) -MM main.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/SwitchStatement/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.c$(PreprocessSuffix): main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.c$(PreprocessSuffix) main.c

$(IntermediateDirectory)/whileDo.c$(ObjectSuffix): whileDo.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/whileDo.c$(ObjectSuffix) -MF$(IntermediateDirectory)/whileDo.c$(DependSuffix) -MM whileDo.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/SwitchStatement/whileDo.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/whileDo.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/whileDo.c$(PreprocessSuffix): whileDo.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/whileDo.c$(PreprocessSuffix) whileDo.c

$(IntermediateDirectory)/guessTheNumber.c$(ObjectSuffix): guessTheNumber.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/guessTheNumber.c$(ObjectSuffix) -MF$(IntermediateDirectory)/guessTheNumber.c$(DependSuffix) -MM guessTheNumber.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/SwitchStatement/guessTheNumber.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/guessTheNumber.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/guessTheNumber.c$(PreprocessSuffix): guessTheNumber.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/guessTheNumber.c$(PreprocessSuffix) guessTheNumber.c

$(IntermediateDirectory)/GuessSolution.c$(ObjectSuffix): GuessSolution.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/GuessSolution.c$(ObjectSuffix) -MF$(IntermediateDirectory)/GuessSolution.c$(DependSuffix) -MM GuessSolution.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/SwitchStatement/GuessSolution.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/GuessSolution.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/GuessSolution.c$(PreprocessSuffix): GuessSolution.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/GuessSolution.c$(PreprocessSuffix) GuessSolution.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


