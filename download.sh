# Download the data for the Ledger

EC_WORKBOOK_BASE='https://docs.google.com/spreadsheets/d/1smYR13Ge7YSMgPBoLrfQn3nG2wNA8kKeT5m-x8ITVoA/export?format=csv&gid=';
EC_ESD_2015_BASE='https://docs.google.com/spreadsheets/d/1e7VHAaySfJuZtpaygi2kuKj0gdUquRgNqn8EQhMNXcg/export?format=csv&gid=';

WGET=`which wget`

DESTDIR=/tmp/migrate_ec

mkdir -p $DESTDIR

$WGET -O $DESTDIR/esd-ec-gsexport.csv "${EC_WORKBOOK_BASE}878101549"

head -11 $DESTDIR/esd-ec-gsexport.csv > $DESTDIR/esd-ec-gsexport-test.csv

$WGET -O $DESTDIR/esd-ec-2015.csv "${EC_ESD_2015_BASE}1032706107"

head -11 $DESTDIR/esd-ec-2015.csv > $DESTDIR/esd-ec-2015-test.csv
