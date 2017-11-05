@ECHO OFF
SET CONFIG_PATH=%CD%
CD..
CD..
CD..
SET DLLS_SOURCE_LOCATION=%CD%\Debug
SET DLLS_TARGET_LOCATION=%CONFIG_PATH%

echo Dll's copy from : %DLLS_SOURCE_LOCATION%
echo Dll's copy to   : %DLLS_TARGET_LOCATION%

set DEBUG_DLLS_LIST=(cppbusinesslogic.dll)
for %%i in %DEBUG_DLLS_LIST% do @xcopy "%DLLS_SOURCE_LOCATION%\%%i" "%DLLS_TARGET_LOCATION%" /d /y

set RELEASE_DLLS_LIST=(cppbusinesslogic.dll)
for %%i in %RELEASE_DLLS_LIST% do @xcopy "%DLLS_SOURCE_LOCATION%\%%i" "%DLLS_TARGET_LOCATION%" /d /y