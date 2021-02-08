#include "register_types.h"

#include "core/class_db.h"
#include "dynamic_gltf_loader.h"

void register_dynamic_gltf_loader_types() {
	ClassDB::register_class<DynamicGLTFLoader>();
}

void unregister_dynamic_gltf_loader_types() {
}
