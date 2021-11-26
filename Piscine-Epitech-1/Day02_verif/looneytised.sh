#!/bin/bash
sed -z 's/theo1/Wile E. Coyote/g' | sed -z 's/steven1/Daffy Duck/g' | sed -z 's/arnaud1/Porky Pig/g' | sed 's/pierre-jean/Marvin the Martian/g' | grep -e "Wile E. Coyote" -e "Daffy Duck" -e "Porky Pig" -e "Marvin the Martian"
