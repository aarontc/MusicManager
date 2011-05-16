#include "freelosslessaudiocodecfilemetadata.h"

using namespace FLAC::Metadata;

FreeLosslessAudioCodecFileMetadata::FreeLosslessAudioCodecFileMetadata(QObject *parent) :
	QObject(parent)
{
}


//QString FreeLosslessAudioCodecFileMetadata::GetArtist(QString filename) {

//	FLAC::Metadata::Chain blah;
//	FLAC::Metadata::Iterator myiterator;

//	if(!blah.is_valid()) {
//		return("");
//	}

//	if(blah.read(filename.toLatin1(), false)) {
//		// do stuff with iterator
//		if(!myiterator.is_valid()) {
//			return("");
//		}

//		myiterator.init(blah);

//		while(myiterator.next()) {
//			Prototype* blah2 = myiterator.get_block();
//			if(blah2->get_type() == FLAC__METADATA_TYPE_VORBIS_COMMENT) {
//				VorbisComment* c = dynamic_cast<VorbisComment*>(blah2);

//				for(unsigned int i(0); i < c->get_num_comments(); ++i) {
//					VorbisComment::Entry e = c->get_comment(i);
//					QString fname(e.get_field_name());

//					if(fname.toLower() == "artist")
//						return(QString(e.get_field_value()));
//				}


//				return("Found Vorbis Comment block, no ARTIST specified");
//			}

//		}
//	}

//	return("Unable to retrieve artist");
//}





bool FreeLosslessAudioCodecFileMetadata::ReadFileProperties(QString fileName) {
	Chain chain;
	Iterator iterator;

	properties.clear();

	if(chain.is_valid() && iterator.is_valid()) {
		if(chain.read(fileName.toLatin1(), false)) {
			do {
				if(iterator.get_block_type() == FLAC__METADATA_TYPE_VORBIS_COMMENT) {
					VorbisComment* comment = dynamic_cast<VorbisComment*>(iterator.get_block());
					for(unsigned int i(0); i<comment->get_num_comments(); ++i) {
						VorbisComment::Entry entry = comment->get_comment(i);
						properties[entry.get_field_name()] += QString(entry.get_field_value());
					}
				}
			} while(iterator.next());
		}
		return(true);
	}

	return(false);
}
