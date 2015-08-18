REM @echo off
del filelist.mk
del filelist.txt
del filelist.mk.d
set Cr_PATH=%~dp0
del %Cr_PATH%..\includes
mkdir %Cr_PATH%..\includes
set path=%path%;%Cr_PATH%..\..\..\tools\perl\perl\bin
set ROOT=../../../..
set PREFIX=./
cd ..\..\..\tools\builder\FileList\bin

Perl GenerateTxtFileList.pl ..\..\..\..\606_BaguaLed\project\builder\Project.flist -prefix=$(ROOT) -root=%ROOT% -o=..\..\..\..\606_BaguaLed\project\builder\filelist.txt
echo Pasing file list is done.
Perl GenerateFileMakef.pl ..\..\..\..\606_BaguaLed\project\builder\Project.flist -compiler=DCOM_GNU -root=%ROOT% -o=..\..\..\..\606_BaguaLed\project\builder\filelist.mk
echo Initialization is done.

REM Creating header file
set CYGWIN_PATH=%Cr_PATH%..\..\..\tools\cygwin\bin
set PATH=%CYGWIN_PATH%;%PATH%
cd %Cr_PATH%\make
echo Creating header file
REM make clean
make header
pause