#!/bin/bash

ls -hl
touch script3.sh
echo -e '#!/bin/bash'"\n"'rm -r dir1 dir2 file1 link1' > script3.sh
bash script3.sh
ls -hl

