// Copyright 2014-2017 Oxford University Innovation Limited and the authors of InfiniTAM

#include "ITMLibDefines.h"
#include "Core/ITMBasicEngine.tpp"
#include "Core/ITMDenseMapper.tpp"
#include "Core/ITMDenseSurfelMapper.tpp"
#include "Engines/Meshing/CPU/ITMMeshingEngine_CPU.tpp"
#include "Engines/Reconstruction/ITMSurfelSceneReconstructionEngineFactory.tpp"
#include "Engines/Reconstruction/CPU/ITMSceneReconstructionEngine_CPU.tpp"
#include "Engines/Reconstruction/CPU/ITMSurfelSceneReconstructionEngine_CPU.tpp"
#include "Engines/Reconstruction/Interface/ITMSurfelSceneReconstructionEngine.tpp"
#include "Engines/Swapping/CPU/ITMSwappingEngine_CPU.tpp"
#include "Engines/Visualisation/ITMSurfelVisualisationEngineFactory.tpp"
#include "Engines/Visualisation/CPU/ITMSurfelVisualisationEngine_CPU.tpp"
#include "Engines/Visualisation/CPU/ITMVisualisationEngine_CPU.tpp"
#include "Engines/Visualisation/Interface/ITMSurfelVisualisationEngine.tpp"
#include "Engines/Visualisation/Interface/ITMVisualisationEngine.h"
#include "Trackers/ITMTrackerFactory.h"

namespace ITMLib
{
	template class ITMBasicEngine<ITMVoxel, ITMVoxelIndex>;
	template class ITMDenseMapper<ITMVoxel, ITMVoxelIndex>;
	template class ITMMeshingEngine_CPU<ITMVoxel, ITMVoxelIndex>;
	template class ITMSceneReconstructionEngine_CPU<ITMVoxel, ITMVoxelIndex>;
	template class ITMSwappingEngine_CPU<ITMVoxel, ITMVoxelIndex>;
	template class ITMTrackerFactory<ITMVoxel, ITMVoxelIndex>;
	template class ITMVisualisationEngine<ITMVoxel, ITMVoxelIndex>;
	template class ITMVisualisationEngine_CPU<ITMVoxel, ITMVoxelIndex>;

	template class ITMDenseSurfelMapper<ITMSurfel_grey>;
	template class ITMDenseSurfelMapper<ITMSurfel_rgb>;
	template class ITMSurfelSceneReconstructionEngine<ITMSurfel_grey>;
	template class ITMSurfelSceneReconstructionEngine<ITMSurfel_rgb>;
	template class ITMSurfelSceneReconstructionEngine_CPU<ITMSurfel_grey>;
	template class ITMSurfelSceneReconstructionEngine_CPU<ITMSurfel_rgb>;
	template struct ITMSurfelSceneReconstructionEngineFactory<ITMSurfel_grey>;
	template struct ITMSurfelSceneReconstructionEngineFactory<ITMSurfel_rgb>;
	template class ITMSurfelVisualisationEngine<ITMSurfel_grey>;
	template class ITMSurfelVisualisationEngine<ITMSurfel_rgb>;
	template class ITMSurfelVisualisationEngine_CPU<ITMSurfel_grey>;
	template class ITMSurfelVisualisationEngine_CPU<ITMSurfel_rgb>;
	template struct ITMSurfelVisualisationEngineFactory<ITMSurfel_grey>;
	template struct ITMSurfelVisualisationEngineFactory<ITMSurfel_rgb>;
}
