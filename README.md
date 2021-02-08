# Godot Dynamic GLTF Loader
A module for Godot that allows for loading gltf/glb data at runtime for Godot 3.2.4+

## Quickstart
Clone the Godot repository and switch to the 3.2 branch. Place the `dynamic_gltf_loader` folder into the `modules` folder in Godot's directory. Compile the engine for your platform (e.g. Windows: `scons platform=windows target=release_debug bits=64`). Run the resulting binary that was generated in the `bin` folder. The `DynamicGLTFLoader` class will be exposed in GDScript.

```
var loader = DynamicGLTFLoader.new()
# Params are "path", "flags", "bake_fps"
# Not sure what flags or bake_fps are really supposed to be right now
var model = loader.import_scene("C:\\my\\path.glb", 1, 1)
```

The result should be close to what the editor generates.

