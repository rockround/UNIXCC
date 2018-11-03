#!/bin/bash
ls -hl
touch script3.sh
echo -e '#!/bin/bash'"\n"'rm -r workspace' > script3.sh
bash script3.sh
ls -hl
cd ../

