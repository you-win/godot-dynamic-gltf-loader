Archived! Use the latest Godot release instead or the V-Sekai [module](https://github.com/V-Sekai/godot-gltf-module/tree/gdnative) or [GDNative plugin](https://github.com/V-Sekai/godot-vrm/tree/godot3/addons/godot_gltf).

# Godot Dynamic GLTF Loader
A module for Godot that allows for loading `gltf`/`glb` data at runtime for Godot 3.2.4+

## Quickstart
Clone the Godot repository and switch to the 3.2 branch. Place the `dynamic_gltf_loader` folder into the `modules` folder in Godot's directory. Compile the engine for your platform (e.g. Windows: `scons platform=windows target=release_debug bits=64`). Run the resulting binary that was generated in the `bin` folder. The `DynamicGLTFLoader` class will be exposed in GDScript.

```
var loader = DynamicGLTFLoader.new()
# Params are "path", "flags", "bake_fps"
# Not sure what flags or bake_fps are really supposed to be right now
var model = loader.import_scene("C:\\my\\path.glb", 1, 1)
```

The result should be close to what the editor generates.

In order to export your game, you will need to compile new export templates. Please refer to the Godot documentation on how to do that for your platform.

## Motivation
[openseeface-gd](https://github.com/you-win/openseeface-gd) needed the ability to load models at runtime, so I ripped out the gltf loader from Godot and made it into a proper module so it wouldn't be stripped out during export.

## Technical Implementation
I copy pasted the relevant resource importers, changed the names to prevent name conflicts, and stripped out extraneous references to editor-specific code lmao

`dynamic_gltf_loader.cpp` exposes the single method needed to import a `gltf` or `glb` file.

Godot 4.0 has a dynamic gltf loader written for it so this was a hack to avoid wasting time on porting it back to 3.2.4.

