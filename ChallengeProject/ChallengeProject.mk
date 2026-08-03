##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=ChallengeProject
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=/home/vboxuser/Workspaces/Workspace2
ProjectPath            :=/home/vboxuser/Workspaces/Workspace2/ChallengeProject
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=vboxuser
Date                   :=02/08/26
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
ObjectsFileList        :="ChallengeProject.txt"
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
Objects0=$(IntermediateDirectory)/WeatherProgram.c$(ObjectSuffix) $(IntermediateDirectory)/test.c$(ObjectSuffix) $(IntermediateDirectory)/PrimeNumber.c$(ObjectSuffix) 



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
$(IntermediateDirectory)/WeatherProgram.c$(ObjectSuffix): WeatherProgram.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/WeatherProgram.c$(ObjectSuffix) -MF$(IntermediateDirectory)/WeatherProgram.c$(DependSuffix) -MM WeatherProgram.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/ChallengeProject/WeatherProgram.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/WeatherProgram.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/WeatherProgram.c$(PreprocessSuffix): WeatherProgram.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/WeatherProgram.c$(PreprocessSuffix) WeatherProgram.c

$(IntermediateDirectory)/test.c$(ObjectSuffix): test.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/test.c$(ObjectSuffix) -MF$(IntermediateDirectory)/test.c$(DependSuffix) -MM test.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/ChallengeProject/test.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/test.c$(PreprocessSuffix): test.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/test.c$(PreprocessSuffix) test.c

$(IntermediateDirectory)/PrimeNumber.c$(ObjectSuffix): PrimeNumber.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/PrimeNumber.c$(ObjectSuffix) -MF$(IntermediateDirectory)/PrimeNumber.c$(DependSuffix) -MM PrimeNumber.c
	$(CC) $(SourceSwitch) "/home/vboxuser/Workspaces/Workspace2/ChallengeProject/PrimeNumber.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/PrimeNumber.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/PrimeNumber.c$(PreprocessSuffix): PrimeNumber.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/PrimeNumber.c$(PreprocessSuffix) PrimeNumber.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


