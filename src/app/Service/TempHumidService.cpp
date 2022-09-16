#include "TempHumidService.h"

TempHumidService::TempHumidService(TempHumidView *tempHumiView, View *view)
{
    this -> tempHumiView = tempHumiView;
    this -> view = view;
}

TempHumidService::~TempHumidService()
{
}

void TempHumidService::updateEvent(DHT_Data dhtData)
{
    float temp, humid;
    temp = (float)dhtData.Temp + (float)(dhtData.TempDec/10.0);
    humid = (float)dhtData.RH + (float)(dhtData.RHDec/10.0);
    
    if(temp >= 20) tempHumiView->TempWarning(temp, humid);
    if(temp < 20) tempHumiView->setTempHumidData(temp, humid);
}