#include <stdio.h>
#include <windows.h>

int main()
{
  char CurrentPath[FILENAME_MAX];
  
  _getcwd(CurrentPath, sizeof(CurrentPath));
  SetCurrentDirectory("_bin_olr_");
  _getcwd(CurrentPath, sizeof(CurrentPath));

  system("XR_3DA.exe -smap4096");

  return 0;
}
