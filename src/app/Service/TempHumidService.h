#ifndef __TEMPHUMIDSERVICE_H__
#define __TEMPHUMIDSERVICE_H__

#include "DHT_Data.h"
#include "TempHumidView.h"
#include "View.h"
#include "ClockView.h"


class TempHumidService
{
private:
    TempHumidView *tempHumiView;
    View *view;
public:
    TempHumidService(TempHumidView *tempHumiView, View *view);
    virtual ~TempHumidService();
    void updateEvent(DHT_Data dhtData);
};

#endif /* __TEMPHUMIDSERVICE_H__ */