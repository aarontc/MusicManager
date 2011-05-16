#ifndef FREELOSSLESSAUDIOCODECFILEMETADATA_H
#define FREELOSSLESSAUDIOCODECFILEMETADATA_H

#include <QObject>

#include <QString>
#include <FLAC++/metadata.h>

#include <QHash>
#include <QStringList>

class FreeLosslessAudioCodecFileMetadata : public QObject
{
	Q_OBJECT
public:
	explicit FreeLosslessAudioCodecFileMetadata(QObject *parent = 0);

	bool ReadFileProperties(QString fileName);
	QStringList GetPropertyValues(QString propertyName);
	QString GetPropertyValue(QString propertyName);


signals:

public slots:


private:
	QHash<QString, QStringList> properties;
};

#endif // FREELOSSLESSAUDIOCODECFILEMETADATA_H
