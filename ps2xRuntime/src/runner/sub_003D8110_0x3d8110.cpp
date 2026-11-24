#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D8110
// Address: 0x3d8110 - 0x3d8188
void sub_003D8110_0x3d8110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8110_0x3d8110");
#endif

    switch (ctx->pc) {
        case 0x3d8158u: goto label_3d8158;
        default: break;
    }

    ctx->pc = 0x3d8110u;

    // 0x3d8110: 0x90822bdb  lbu         $v0, 0x2BDB($a0)
    ctx->pc = 0x3d8110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11227)));
    // 0x3d8114: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3d8114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3d8118: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3D8118u;
    {
        const bool branch_taken_0x3d8118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8118) {
            ctx->pc = 0x3D8180u;
            goto label_3d8180;
        }
    }
    ctx->pc = 0x3D8120u;
    // 0x3d8120: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x3d8120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d8124: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3d8124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d8128: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x3d8128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3d812c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3d812cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3d8130: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x3d8130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x3d8134: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x3d8134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x3d8138: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3d8138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3d813c: 0xac820148  sw          $v0, 0x148($a0)
    ctx->pc = 0x3d813cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 2));
    // 0x3d8140: 0x90822ab0  lbu         $v0, 0x2AB0($a0)
    ctx->pc = 0x3d8140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 10928)));
    // 0x3d8144: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3d8144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3d8148: 0xa0822ab0  sb          $v0, 0x2AB0($a0)
    ctx->pc = 0x3d8148u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10928), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d814c: 0x8c8206cc  lw          $v0, 0x6CC($a0)
    ctx->pc = 0x3d814cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1740)));
    // 0x3d8150: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3d8150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3d8154: 0xac8206cc  sw          $v0, 0x6CC($a0)
    ctx->pc = 0x3d8154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1740), GPR_U32(ctx, 2));
label_3d8158:
    // 0x3d8158: 0x8c650858  lw          $a1, 0x858($v1)
    ctx->pc = 0x3d8158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2136)));
    // 0x3d815c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D815Cu;
    {
        const bool branch_taken_0x3d815c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d815c) {
            ctx->pc = 0x3D8170u;
            goto label_3d8170;
        }
    }
    ctx->pc = 0x3D8164u;
    // 0x3d8164: 0x8ca20148  lw          $v0, 0x148($a1)
    ctx->pc = 0x3d8164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 328)));
    // 0x3d8168: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3d8168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3d816c: 0xaca20148  sw          $v0, 0x148($a1)
    ctx->pc = 0x3d816cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 328), GPR_U32(ctx, 2));
label_3d8170:
    // 0x3d8170: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3d8170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3d8174: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x3d8174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3d8178: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3D8178u;
    {
        const bool branch_taken_0x3d8178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8178u;
        // 0x3d817c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8178) {
            ctx->pc = 0x3D8158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d8158;
        }
    }
    ctx->pc = 0x3D8180u;
label_3d8180:
    // 0x3d8180: 0x80a4e30  j           func_2938C0
    ctx->pc = 0x3D8180u;
    ctx->pc = 0x2938C0u;
    sub_002938C0_0x2938c0(rdram, ctx, runtime); return;
    ctx->pc = 0x3D8188u;
}
