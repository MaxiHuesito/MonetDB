# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0.  If a copy of the MPL was not distributed with this
# file, You can obtain one at http://mozilla.org/MPL/2.0/.
#
# Copyright 1997 - July 2008 CWI, August 2008 - 2019 MonetDB B.V.

sed '/^$/q' $0			# copy copyright from this file

cat <<EOF
# This file was generated by using the script ${0##*/}.

module batcalc;

EOF

for func in '<:lt' '<=:le' '>:gt' '>=:ge' '==:eq' '!=:ne'; do
    op=${func%:*}
    func=${func#*:}
    for tp in date daytime timestamp; do
	cat <<EOF
pattern $op(b1:bat[:$tp],b2:bat[:$tp]) :bat[:bit]
address CMDbat${func^^}
comment "Return B1 $op B2";
pattern $op(b1:bat[:$tp],b2:bat[:$tp],s:bat[:oid]) :bat[:bit]
address CMDbat${func^^}
comment "Return B1 $op B2 with candidates list";
pattern $op(b:bat[:$tp],v:$tp) :bat[:bit]
address CMDbat${func^^}
comment "Return B $op V";
pattern $op(b:bat[:$tp],v:$tp,s:bat[:oid]) :bat[:bit]
address CMDbat${func^^}
comment "Return B $op V with candidates list";
pattern $op(v:$tp,b:bat[:$tp]) :bat[:bit]
address CMDbat${func^^}
comment "Return V $op B";
pattern $op(v:$tp,b:bat[:$tp],s:bat[:oid]) :bat[:bit]
address CMDbat${func^^}
comment "Return V $op B with candidates list";

EOF
    done
done

cat <<EOF
module batmtime;

EOF

for tp in date:int timestamp:lng; do
    rtp=${tp#*:}
    tp=${tp%:*}
    cat <<EOF
command diff(b1:bat[:$tp],b2:bat[:$tp]) :bat[:$rtp]
address MTIME${tp}_diff_bulk
comment "Difference of two sets of $tp.";

EOF
done
