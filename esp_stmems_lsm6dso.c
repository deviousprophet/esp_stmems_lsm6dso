#include "esp_stmems_lsm6dso.h"
#include "esp_check.h"
#include "esp_log.h"

static const char* TAG = "lsm6dso";

esp_err_t lsm6dso_read_reg(stmdev_ctx_t* ctx, uint8_t reg, uint8_t* data, uint16_t len) {
    esp_err_t ret = ctx->read_reg(ctx->handle, reg, data, len);
    ESP_RETURN_ON_FALSE(ret == ESP_OK, ret, TAG, "read reg failed");
    return ESP_OK;
}

esp_err_t lsm6dso_write_reg(stmdev_ctx_t* ctx, uint8_t reg, uint8_t* data, uint16_t len) {
    esp_err_t ret = ctx->write_reg(ctx->handle, reg, data, len);
    ESP_RETURN_ON_FALSE(ret == ESP_OK, ret, TAG, "write reg failed");
    return ESP_OK;
}