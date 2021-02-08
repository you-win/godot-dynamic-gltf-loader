#ifndef D_GLTF_LOADER_H
#define D_GLTF_LOADER_H

#include "core/reference.h"

class DynamicGLTFLoader : public Reference {
	GDCLASS(DynamicGLTFLoader, Reference);

protected:
	static void _bind_methods();

public:
	// Node *import_scene(const String &p_path, uint32_t p_flags, int p_bake_fps, List<String> *r_missing_deps = NULL, Error *r_err = NULL);
	Node *import_scene(const String &p_path, uint32_t p_flags, int p_bake_fps);

	DynamicGLTFLoader();
};

#endif // D_GLTF_LOADER_H
