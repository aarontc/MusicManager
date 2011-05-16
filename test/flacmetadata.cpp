#include "flacmetadata.h"

#include <QString>

FLACMetadata::FLACMetadata(QObject *parent) :
	QObject(parent)
{
}

void FLACMetadata::practice() {

	FreeLosslessAudioCodecFileMetadata blah;
//	QString artist = blah.GetArtist("/tmp/blah.flac");

//	QCOMPARE(artist, QString("Test Artist"));
}
