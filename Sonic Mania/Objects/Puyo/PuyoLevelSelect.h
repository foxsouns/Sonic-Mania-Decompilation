#ifndef OBJ_PUYOLEVELSELECT_H
#define OBJ_PUYOLEVELSELECT_H

#include "SonicMania.h"

// Object Class
typedef struct {
    RSDK_OBJECT
    uint16 aniFrames;
    uint16 sfxMenuBleep;
    uint16 sfxMenuAccept;
} ObjectPuyoLevelSelect;

// Entity Class
typedef struct {
    RSDK_ENTITY
    StateMachine(state);
    int32 playerID;
    bool32 flag;
    bool32 ready;
    int32 optionID;
    Animator animator1;
    Animator animator2;
    bool32 up;
    bool32 down;
    bool32 confirmPress;
    bool32 backPress;
} EntityPuyoLevelSelect;

// Object Struct
extern ObjectPuyoLevelSelect *PuyoLevelSelect;

// Standard Entity Events
void PuyoLevelSelect_Update(void);
void PuyoLevelSelect_LateUpdate(void);
void PuyoLevelSelect_StaticUpdate(void);
void PuyoLevelSelect_Draw(void);
void PuyoLevelSelect_Create(void* data);
void PuyoLevelSelect_StageLoad(void);
void PuyoLevelSelect_EditorDraw(void);
void PuyoLevelSelect_EditorLoad(void);
void PuyoLevelSelect_Serialize(void);

// Extra Entity Functions
void PuyoLevelSelect_DrawSprites(void);
void PuyoLevelSelect_HandleMenuMovement(void);

#endif //!OBJ_PUYOLEVELSELECT_H
