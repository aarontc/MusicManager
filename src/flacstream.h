#ifndef FLACSTREAM_H
#define FLACSTREAM_H

#include <QObject>
#include <QString>
#include <FLAC++/decoder.h>


class FLACStream : public QObject, public FLAC::Decoder::File {

	Q_OBJECT


public:
	explicit FLACStream(QObject *parent = 0);
	FLACStream(FILE *f);

	static bool write_little_endian_uint16(FILE *f, FLAC__uint16 x);
	static bool write_little_endian_int16(FILE *f, FLAC__int16 x);
	static bool write_little_endian_uint32(FILE *f, FLAC__uint32 x);
	int transcode(QString in, QString out);

signals:

public slots:

protected:

	virtual ::FLAC__StreamDecoderWriteStatus write_callback(const ::FLAC__Frame *frame, const FLAC__int32 * const buffer[]);
	virtual void metadata_callback(const ::FLAC__StreamMetadata *metadata);
	virtual void error_callback(::FLAC__StreamDecoderErrorStatus status);

private:
	static FLAC__uint64 total_samples;
	static unsigned sample_rate;
	static unsigned channels;
	static unsigned bps;

	FILE *f;

};

#endif // FLACStream_H
