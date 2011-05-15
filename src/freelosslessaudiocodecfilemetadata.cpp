#include "freelosslessaudiocodecfilemetadata.h"

using namespace FLAC::Metadata;

FreeLosslessAudioCodecFileMetadata::FreeLosslessAudioCodecFileMetadata(QObject *parent) :
	QObject(parent)
{
}


QString FreeLosslessAudioCodecFileMetadata::GetArtist(QString &filename) {

	FLAC::Metadata::Chain blah;
	FLAC::Metadata::Iterator myiterator;

	if(!blah.is_valid()) {
		return("");
	}

	if(blah.read(filename.toLatin1(), false)) {
		// do stuff with iterator
		if(!myiterator.is_valid()) {
			return("");
		}

		myiterator.init(blah);

		while(myiterator.next()) {
			Prototype* blah2 = myiterator.get_block();
			if(blah2->get_type() == FLAC__METADATA_TYPE_VORBIS_COMMENT) {

			}

		}
	}

	return("FUCKYOU");
}
