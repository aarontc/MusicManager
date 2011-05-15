#ifndef FLACMETADATA_H
#define FLACMETADATA_H

#include <QObject>
#include <QtTest/QtTest>

#include "../src/freelosslessaudiocodecfilemetadata.h"

class FLACMetadata : public QObject
{
	Q_OBJECT
public:
	explicit FLACMetadata(QObject *parent = 0);

private slots:
	void practice();

};

#endif // FLACMETADATE_H
