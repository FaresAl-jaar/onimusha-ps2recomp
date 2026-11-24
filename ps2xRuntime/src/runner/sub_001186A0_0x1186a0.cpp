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

// Function: sub_001186A0
// Address: 0x1186a0 - 0x118710
void sub_001186A0_0x1186a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001186A0_0x1186a0");
#endif

    switch (ctx->pc) {
        case 0x1186d4u: goto label_1186d4;
        case 0x1186dcu: goto label_1186dc;
        case 0x1186f8u: goto label_1186f8;
        default: break;
    }

    ctx->pc = 0x1186a0u;

    // 0x1186a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1186a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1186a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1186a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1186a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1186a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1186acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1186b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1186b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1186b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1186b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1186b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186bc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x1186bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x1186c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1186c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1186c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1186c8: 0x24842a10  addiu       $a0, $a0, 0x2A10
    ctx->pc = 0x1186c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10768));
    // 0x1186cc: 0xc046160  jal         func_118580
    ctx->pc = 0x1186CCu;
    SET_GPR_U32(ctx, 31, 0x1186D4u);
    ctx->pc = 0x1186D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186CCu;
    // 0x1186d0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118580u, 0x1186CCu, 0x1186D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186D4u;
label_1186d4:
    // 0x1186d4: 0xc0461a6  jal         func_118698
    ctx->pc = 0x1186D4u;
    SET_GPR_U32(ctx, 31, 0x1186DCu);
    ctx->pc = 0x118698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118698u, 0x1186D4u, 0x1186DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186DCu;
label_1186dc:
    // 0x1186dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1186dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1186e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1186e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186e4: 0x8c472ee0  lw          $a3, 0x2EE0($v0)
    ctx->pc = 0x1186e4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x402EE0u));
    // 0x1186e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1186e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1186ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186f0: 0xc04370c  jal         func_10DC30
    ctx->pc = 0x1186F0u;
    SET_GPR_U32(ctx, 31, 0x1186F8u);
    ctx->pc = 0x1186F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1186F0u;
    // 0x1186f4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DC30u, 0x1186F0u, 0x1186F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1186F8u;
label_1186f8:
    // 0x1186f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1186f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1186fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1186fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118700: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118704: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118704u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118708: 0x3e00008  jr          $ra
    ctx->pc = 0x118708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118708u;
        // 0x11870c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118710u;
}
