void scroll_rr_dl_water_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 14;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	static int timeY;
	float amplitudeY = 0.4000000059604645;
	float frequencyY = -0.30000001192092896;
	float offsetY = 0.0;
	Vtx *vertices = segmented_to_virtual(rr_dl_water_mesh_layer_1_vtx_0);

	deltaX = (int)(-0.30000001192092896 * 0x20) % width;
	deltaY = (int)(amplitudeY * frequencyY * coss((frequencyY * timeY + offsetY) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;	timeY += 1;
}

void scroll_rr_dl_waterfall_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 92;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	static int timeY;
	float amplitudeY = 0.4000000059604645;
	float frequencyY = -0.30000001192092896;
	float offsetY = 0.0;
	Vtx *vertices = segmented_to_virtual(rr_dl_waterfall_mesh_layer_1_vtx_0);

	deltaX = (int)(-0.30000001192092896 * 0x20) % width;
	deltaY = (int)(amplitudeY * frequencyY * coss((frequencyY * timeY + offsetY) * (1024 * 16 - 1) / 6.28318530718) * 0x20);

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;	timeY += 1;
}

void scroll_rr() {
	scroll_rr_dl_water_mesh_layer_1_vtx_0();
	scroll_rr_dl_waterfall_mesh_layer_1_vtx_0();
}
