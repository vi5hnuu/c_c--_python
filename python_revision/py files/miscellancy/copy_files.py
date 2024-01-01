import sys
import shutil
argc=len(sys.argv)
if argc!=3:
    print('incorrect usage')
    print('correct usage :filecopy  source target')
else:
    source=sys.argv[1]
    target=sys.argv[2]
    shutil.copyfile(source,target)