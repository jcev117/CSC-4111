# DO NOT EDIT
# This makefile makes sure all linkable targets are
# up-to-date with anything they link to
default:
	echo "Do not invoke directly"

# Rules to remove targets that are older than anything to which they
# link.  This forces Xcode to relink the targets from scratch.  It
# does not seem to check these dependencies itself.
PostBuild.easypaint.Debug:
/Users/joy/Documents/WSU/Fall\ 2018/CSC\ 4111/Homework/A6/EasyPaint/bin/Debug/easypaint:\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtPrintSupport.framework/QtPrintSupport\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtWidgets.framework/QtWidgets\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtGui.framework/QtGui\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtCore.framework/QtCore
	/bin/rm -f /Users/joy/Documents/WSU/Fall\ 2018/CSC\ 4111/Homework/A6/EasyPaint/bin/Debug/easypaint


PostBuild.easypaint.Release:
/Users/joy/Documents/WSU/Fall\ 2018/CSC\ 4111/Homework/A6/EasyPaint/bin/Release/easypaint:\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtPrintSupport.framework/QtPrintSupport\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtWidgets.framework/QtWidgets\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtGui.framework/QtGui\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtCore.framework/QtCore
	/bin/rm -f /Users/joy/Documents/WSU/Fall\ 2018/CSC\ 4111/Homework/A6/EasyPaint/bin/Release/easypaint


PostBuild.easypaint.MinSizeRel:
/Users/joy/Documents/WSU/Fall\ 2018/CSC\ 4111/Homework/A6/EasyPaint/bin/MinSizeRel/easypaint:\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtPrintSupport.framework/QtPrintSupport\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtWidgets.framework/QtWidgets\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtGui.framework/QtGui\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtCore.framework/QtCore
	/bin/rm -f /Users/joy/Documents/WSU/Fall\ 2018/CSC\ 4111/Homework/A6/EasyPaint/bin/MinSizeRel/easypaint


PostBuild.easypaint.RelWithDebInfo:
/Users/joy/Documents/WSU/Fall\ 2018/CSC\ 4111/Homework/A6/EasyPaint/bin/RelWithDebInfo/easypaint:\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtPrintSupport.framework/QtPrintSupport\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtWidgets.framework/QtWidgets\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtGui.framework/QtGui\
	/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtCore.framework/QtCore
	/bin/rm -f /Users/joy/Documents/WSU/Fall\ 2018/CSC\ 4111/Homework/A6/EasyPaint/bin/RelWithDebInfo/easypaint




# For each target create a dummy ruleso the target does not have to exist
/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtCore.framework/QtCore:
/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtGui.framework/QtGui:
/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtPrintSupport.framework/QtPrintSupport:
/Users/joy/Qt5.9.1/5.9.1/clang_64/lib/QtWidgets.framework/QtWidgets:
