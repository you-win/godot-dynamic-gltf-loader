#include "dynamic_gltf_loader.h"
#include "custom_editor_scene_importer_gltf.h"

Node *DynamicGLTFLoader::import_scene(const String &p_path, uint32_t p_flags, int p_bake_fps) {
	// EditorSceneImporterGLTF builtinImporter = EditorSceneImporterGLTF::EditorSceneImporterGLTF();
	Ref<CustomEditorSceneImporterGLTF> gltf_importer;
	gltf_importer.instance();
	Node *node = gltf_importer.ptr()->import_scene(p_path, p_flags, p_bake_fps);
	// Node *node = builtinImporter.import_scene(p_path, p_flags, p_bake_fps);
	return node;
}

void DynamicGLTFLoader::_bind_methods() {
	ClassDB::bind_method(D_METHOD("import_scene", "path", "flags", "bake_fps"), &DynamicGLTFLoader::import_scene);
}

DynamicGLTFLoader::DynamicGLTFLoader() {}
