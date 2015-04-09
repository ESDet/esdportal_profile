# Download the data for the Ledger

EC_WORKBOOK_BASE='https://docs.google.com/spreadsheets/d/1smYR13Ge7YSMgPBoLrfQn3nG2wNA8kKeT5m-x8ITVoA/export?format=csv&gid=';

WGET=`which wget`

DESTDIR=/tmp/migrate_ec

mkdir -p $DESTDIR

$WGET -O $DESTDIR/esd-ec-gsexport.csv "${EC_WORKBOOK_BASE}878101549"

head -11 $DESTDIR/esd-ec-gsexport.csv $DESTDIR/esd-ec-gsexport-test.csv
