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

// Function: sub_00303950
// Address: 0x303950 - 0x3039f0
void sub_00303950_0x303950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303950_0x303950");
#endif

    ctx->pc = 0x303950u;

    // 0x303950: 0x8c871d04  lw          $a3, 0x1D04($a0)
    ctx->pc = 0x303950u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7428)));
    // 0x303954: 0x10e00024  beqz        $a3, . + 4 + (0x24 << 2)
    ctx->pc = 0x303954u;
    {
        const bool branch_taken_0x303954 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x303954) {
            ctx->pc = 0x3039E8u;
            goto label_3039e8;
        }
    }
    ctx->pc = 0x30395Cu;
    // 0x30395c: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x30395cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x303960: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x303960u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x303964: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x303964u;
    {
        const bool branch_taken_0x303964 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x303964) {
            ctx->pc = 0x3039E8u;
            goto label_3039e8;
        }
    }
    ctx->pc = 0x30396Cu;
    // 0x30396c: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x30396Cu;
    {
        const bool branch_taken_0x30396c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x30396c) {
            ctx->pc = 0x3039D0u;
            goto label_3039d0;
        }
    }
    ctx->pc = 0x303974u;
    // 0x303974: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x303974u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x303978: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x303978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x30397c: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x30397cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x303980: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x303980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x303984: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x303984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x303988: 0xa0a30001  sb          $v1, 0x1($a1)
    ctx->pc = 0x303988u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30398c: 0x8c841d04  lw          $a0, 0x1D04($a0)
    ctx->pc = 0x30398cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7428)));
    // 0x303990: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x303990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x303994: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x303994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x303998: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x303998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x30399c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x30399cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3039a0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3039A0u;
    {
        const bool branch_taken_0x3039a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3039a0) {
            ctx->pc = 0x3039E8u;
            goto label_3039e8;
        }
    }
    ctx->pc = 0x3039A8u;
    // 0x3039a8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x3039a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3039ac: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x3039acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3039b0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3039B0u;
    {
        const bool branch_taken_0x3039b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3039b0) {
            ctx->pc = 0x3039E8u;
            goto label_3039e8;
        }
    }
    ctx->pc = 0x3039B8u;
    // 0x3039b8: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x3039b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3039bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3039bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3039c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3039c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3039c4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3039c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3039c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3039C8u;
    {
        const bool branch_taken_0x3039c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3039CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3039C8u;
        // 0x3039cc: 0xa4600008  sh          $zero, 0x8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3039c8) {
            ctx->pc = 0x3039E8u;
            goto label_3039e8;
        }
    }
    ctx->pc = 0x3039D0u;
label_3039d0:
    // 0x3039d0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3039d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3039d4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3039d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3039d8: 0x8c640018  lw          $a0, 0x18($v1)
    ctx->pc = 0x3039d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3039dc: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x3039dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x3039e0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3039e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x3039e4: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x3039e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_3039e8:
    // 0x3039e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3039E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3039E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3039F0u;
}
