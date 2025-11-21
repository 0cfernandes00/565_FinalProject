# VSCode and RenderDoc KTX2 Viewer

University of Pennsylvania, CIS 565: GPU Programming and Architecture Fall 2025, Final Project.

_A project by Caroline Fernandes, Harris Kokkinakos, Christina Qiu, and Rachel Lin._

## Demos

# Sections 
- [Introduction]()
- [Technical Overview]()
- [Milestone Development]()
- [Setup]()
- [References]()

## Introduction
KTX2Viewer was created to provide an open-source open-source cross-platform SDR + HDR viewer that allows developers and artists to accurately visualize KTX2 textures. The project aims to extend RenderDoc and WebGPU/VSCode's gLTF plugin. Users will have access to information such as channels, alpha blending, mipmap visualization, and tonemapping to interact with.

Our motivation for this project came from Binomial co-founders Steph Hurlburt and Rich Geldreich. They pointed out the need in the industry for a tool that would allow previewing of KTX2 textures and provided guidance throughout.

## Technical Overview

**What is KTX2?**
KTX2 is 

## Milestone Development

### Milestone 1
[Milestone 1 PPT](https://docs.google.com/presentation/d/1itA7_H42KUoN_OxyCpAzT4X0u9w1Le3G9WOGZeSx79Q/edit?usp=sharing)
For Milestone 1, our goal was to render ktx2 textures in each of our pipelines.

Outcome:
- Setup rendering pipeline on WebGPU/VSCode
- Enable RenderDoc to accept KTX2 files
- Parse KTX2 files in both pipelines and successfully view files with BC1,2,3,4,5,7 compression 

### Milestone 2
include ppt
For Milestone 2, our goal was to support HDR accurately and add mobile GPU texture formats

Outcome:


## Setup

### VSCode
Users will clone the repo from this [link](). 
Open the root of the folder in VSCode.
npm install
npm run compile
press F5 to open an new window
ctrl+shift+p will open the search bar
type WebGPU and select the first option
Click the file selection to open a texture

### RenderDoc
Users can clone the repo, which will contain all of the external RenderDoc source code and binomial's transcoder.
Then they can simply open the solution file and build.

To preview a texture, drag and drop it into the texture field of the RenderDoc's viewport.

## References

- [KTX File Format Specification](https://registry.khronos.org/KTX/specs/2.0/ktxspec.v2.html)
- [KTX Parse](https://github.com/donmccurdy/KTX-Parse)
- [KTX Textures](https://github.com/donmccurdy/KTX2-Samples)
- [Example KTX2 Files](https://github.com/KhronosGroup/KTX-Software/tree/main/tests/testimages)
- [.dds Textures](https://opengameart.org/content/0-ad-textures)
- [VSCode Extension Guides](https://code.visualstudio.com/api/extension-guides/webview)
