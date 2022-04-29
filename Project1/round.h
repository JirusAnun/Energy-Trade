#pragma once
float roundValue(float var) {
	float value = (int)(var * 100 + .5);
	return (float)value / 100;
}