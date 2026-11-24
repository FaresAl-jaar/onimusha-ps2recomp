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

// Function: sub_0012E490
// Address: 0x12e490 - 0x12e4e4
void sub_0012E490_0x12e490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E490_0x12e490");
#endif

    ctx->pc = 0x12e490u;

    // 0x12e490: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x12e490u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12e494: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x12e494u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x12e498: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x12e498u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x12e49c: 0xf67c2  srl         $t4, $t7, 31
    ctx->pc = 0x12e49cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x12e4a0: 0xf75c2  srl         $t6, $t7, 23
    ctx->pc = 0x12e4a0u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 15), 23));
    // 0x12e4a4: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x12e4a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x12e4a8: 0xacac0004  sw          $t4, 0x4($a1)
    ctx->pc = 0x12e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 12));
    // 0x12e4ac: 0xf69c0  sll         $t5, $t7, 7
    ctx->pc = 0x12e4acu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 15), 7));
    // 0x12e4b0: 0x31ce00ff  andi        $t6, $t6, 0xFF
    ctx->pc = 0x12e4b0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x12e4b4: 0x15c00004  bnez        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E4B4u;
    {
        const bool branch_taken_0x12e4b4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4B4u;
        // 0x12e4b8: 0x25cfff81  addiu       $t7, $t6, -0x7F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e4b4) {
            ctx->pc = 0x12E4C8u;
            goto label_12e4c8;
        }
    }
    ctx->pc = 0x12E4BCu;
    // 0x12e4bc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x12e4bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12e4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x12E4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4C0u;
        // 0x12e4c4: 0xacaf0000  sw          $t7, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E4C8u;
label_12e4c8:
    // 0x12e4c8: 0xacaf0008  sw          $t7, 0x8($a1)
    ctx->pc = 0x12e4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 15));
    // 0x12e4cc: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x12e4ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12e4d0: 0xacae0000  sw          $t6, 0x0($a1)
    ctx->pc = 0x12e4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 14));
    // 0x12e4d4: 0x3c0f4000  lui         $t7, 0x4000
    ctx->pc = 0x12e4d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16384 << 16));
    // 0x12e4d8: 0x1af7825  or          $t7, $t5, $t7
    ctx->pc = 0x12e4d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
    // 0x12e4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x12E4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E4DCu;
        // 0x12e4e0: 0xacaf000c  sw          $t7, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E4E4u;
}
