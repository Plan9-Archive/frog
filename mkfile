</$objtype/mkfile

TARG=frog acc change
PROGS=${TARG:%=$O.%}
BIN=$home/bin/$objtype

all:V:  $PROGS

^([$OS])\.(.*):R:	\2.\1
	$stem1^l $LDFLAGS -o $target $stem2.$stem1

.*\.[$OS]:R:	$HFILES

(.*)\.([$OS])'$':R:	\1.c
	$stem2^c $CFLAGS $stem1.c

clean:
	rm $PROGS *.$O

