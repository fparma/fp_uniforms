#!/bin/bash
rm -rf build
mkdir build

for d in FP_* ; do
	echo .
	echo Building $d
	echo .
    makepbo -p -W -@=$d $d build/$d
done

echo .
echo Building sim_extra_gear
echo .
makepbo -p -W -u -@=sim_extra_gear sim_extra_gear build/sim_extra_gear 

echo .
echo Build done