/*
This file is part of Compare plugin for Notepad++
Copyright (C)2013 Jean-Sébastien Leroy (jean.sebastien.leroy@gmail.com)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#pragma once


#include "Compare.h"
#include <shlwapi.h>
#include "sqlite/SqliteHelper.h"
#include "libgit2/LibGit2Helper.h"

bool GetScmBaseFolder(const TCHAR* baseDirName, const TCHAR* currentDir, TCHAR* svnDir, unsigned svnDirSize);
void GetLocalScmPath(const TCHAR* curDir, const TCHAR* scmDir, const TCHAR* filename, TCHAR* scmFilePath);
bool GetSvnBaseFile(const TCHAR* curDir, const TCHAR* svnDir, const TCHAR* filename,
		TCHAR* svnBaseFile, unsigned svnBaseFileSize);
HGLOBAL GetContentFromGitRepo(const TCHAR *gitDir, const TCHAR *gitFilePath, long *size);
