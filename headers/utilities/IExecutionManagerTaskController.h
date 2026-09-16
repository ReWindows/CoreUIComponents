#pragma once
#include "../windissect_forwards.h"

// Reconstructed from CoreUIComponents.dll by Windissect. 2 member(s).
namespace Microsoft::CoreUI::Navigation::Client {
class IExecutionManagerTaskController {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskURI@IExecutionManagerTaskController@Client@Navigation@CoreUI@Microsoft@@QEAAPEAXUTaskInstanceId@345@@Z
    void * GetTaskURI(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskRunning@IExecutionManagerTaskController@Client@Navigation@CoreUI@Microsoft@@QEAAXUTaskInstanceId@345@@Z
    void TaskRunning(WindissectOpaque);
};
} // namespace Microsoft::CoreUI::Navigation::Client
