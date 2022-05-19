#include <stdio.h>
#include <esp_log.h>
#include <Freertos/FreeRTOS.h>
#include <Freertos/Task.h>

#define TAG "Delay"

void app_main(void)
{
 int i=0;
 while(1)
 {
   vTaskDelay(1000 / portTICK_PERIOD_MS);
   ESP_LOGI(TAG, "NUMBER IS= %d",i++);
 }
}
