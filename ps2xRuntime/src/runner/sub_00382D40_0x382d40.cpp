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

// Function: sub_00382D40
// Address: 0x382d40 - 0x382db0
void sub_00382D40_0x382d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382D40_0x382d40");
#endif

    ctx->pc = 0x382d40u;

    // 0x382d40: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x382d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x382d44: 0x2468fff3  addiu       $t0, $v1, -0xD
    ctx->pc = 0x382d44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967283));
    // 0x382d48: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x382d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x382d4c: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x382D4Cu;
    {
        const bool branch_taken_0x382d4c = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x382d4c) {
            ctx->pc = 0x382DA8u;
            goto label_382da8;
        }
    }
    ctx->pc = 0x382D54u;
    // 0x382d54: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x382D54u;
    {
        const bool branch_taken_0x382d54 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x382D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D54u;
        // 0x382d58: 0x30650001  andi        $a1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x382d54) {
            ctx->pc = 0x382D68u;
            goto label_382d68;
        }
    }
    ctx->pc = 0x382D5Cu;
    // 0x382d5c: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x382D5Cu;
    {
        const bool branch_taken_0x382d5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x382d5c) {
            ctx->pc = 0x382D68u;
            goto label_382d68;
        }
    }
    ctx->pc = 0x382D64u;
    // 0x382d64: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x382d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_382d68:
    // 0x382d68: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x382d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x382d6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x382d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x382d70: 0xe52823  subu        $a1, $a3, $a1
    ctx->pc = 0x382d70u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x382d74: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x382d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x382d78: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x382d78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x382d7c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x382d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x382d80: 0xa71804  sllv        $v1, $a3, $a1
    ctx->pc = 0x382d80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
    // 0x382d84: 0x1072804  sllv        $a1, $a3, $t0
    ctx->pc = 0x382d84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 8) & 0x1F));
    // 0x382d88: 0x33e3c  dsll32      $a3, $v1, 24
    ctx->pc = 0x382d88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 24));
    // 0x382d8c: 0x80c30100  lb          $v1, 0x100($a2)
    ctx->pc = 0x382d8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 256)));
    // 0x382d90: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x382d90u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x382d94: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x382d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x382d98: 0xa0c30100  sb          $v1, 0x100($a2)
    ctx->pc = 0x382d98u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x382d9c: 0x8c8300f4  lw          $v1, 0xF4($a0)
    ctx->pc = 0x382d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x382da0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x382da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x382da4: 0xac8300f4  sw          $v1, 0xF4($a0)
    ctx->pc = 0x382da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 244), GPR_U32(ctx, 3));
label_382da8:
    // 0x382da8: 0x3e00008  jr          $ra
    ctx->pc = 0x382DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382DB0u;
}
