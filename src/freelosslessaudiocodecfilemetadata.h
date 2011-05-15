#ifndef FREELOSSLESSAUDIOCODECFILEMETADATA_H
#define FREELOSSLESSAUDIOCODECFILEMETADATA_H

#include <QObject>

#include <QString>
#include <FLAC++/metadata.h>

class FreeLosslessAudioCodecFileMetadata : public QObject
{
	Q_OBJECT
public:
	explicit FreeLosslessAudioCodecFileMetadata(QObject *parent = 0);
	QString GetArtist(QString filename);


signals:

public slots:

};

#endif // FREELOSSLESSAUDIOCODECFILEMETADATA_H
