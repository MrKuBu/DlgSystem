// Copyright 2017-2018 Csaba Molnar, Daniel Butum
#pragma once
#include "CoreMinimal.h"

#include "DialogueBrowserTreeVariableProperties.h"
#include "TreeViewHelpers/DlgTreeViewParticipantProperties.h"

class UDlgDialogue;
class FDialogueBrowserTreeParticipantProperties;

/** Used as a key in the fast lookup table. */
class FDialogueBrowserTreeParticipantProperties : public FDlgTreeViewParticipantProperties<FDialogueBrowserTreeVariableProperties>
{
	typedef FDialogueBrowserTreeParticipantProperties Self;
	typedef FDlgTreeViewParticipantProperties Super;

public:
	FDialogueBrowserTreeParticipantProperties(const TSet<TWeakObjectPtr<UDlgDialogue>>& InDialogues) : Super(InDialogues) {}
	FDialogueBrowserTreeParticipantProperties(const TSet<TWeakObjectPtr<UDlgDialogue>>&& InDialogues) : Super(InDialogues) {}
};
