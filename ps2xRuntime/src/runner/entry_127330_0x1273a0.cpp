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

// Function: entry_127330
// Address: 0x127330 - 0x1273a0
void entry_127330_0x1273a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_127330_0x1273a0");
#endif

    switch (ctx->pc) {
        case 0x127388u: goto label_127388;
        default: break;
    }

    ctx->pc = 0x127330u;

    // 0x127330: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x127330u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x127334: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x127334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x127338: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x127338u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12733c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12733cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x127340: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x127340u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127344: 0xffa70078  sd          $a3, 0x78($sp)
    ctx->pc = 0x127344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
    // 0x127348: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x127348u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x12734c: 0xffa80080  sd          $t0, 0x80($sp)
    ctx->pc = 0x12734cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x127350: 0x240f0208  addiu       $t7, $zero, 0x208
    ctx->pc = 0x127350u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x127354: 0xffa90088  sd          $t1, 0x88($sp)
    ctx->pc = 0x127354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x127358: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x127358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12735c: 0xa7af000c  sh          $t7, 0xC($sp)
    ctx->pc = 0x12735cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 15));
    // 0x127360: 0xffaa0090  sd          $t2, 0x90($sp)
    ctx->pc = 0x127360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x127364: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x127364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x127368: 0xffab0098  sd          $t3, 0x98($sp)
    ctx->pc = 0x127368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    // 0x12736c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12736cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127370: 0xafad0010  sw          $t5, 0x10($sp)
    ctx->pc = 0x127370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 13));
    // 0x127374: 0xafae0014  sw          $t6, 0x14($sp)
    ctx->pc = 0x127374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 14));
    // 0x127378: 0xafac0054  sw          $t4, 0x54($sp)
    ctx->pc = 0x127378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    // 0x12737c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x12737cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x127380: 0xc04a672  jal         func_1299C8
    ctx->pc = 0x127380u;
    SET_GPR_U32(ctx, 31, 0x127388u);
    ctx->pc = 0x127384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127380u;
    // 0x127384: 0xafae0008  sw          $t6, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299C8u, 0x127380u, 0x127388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127388u;
label_127388:
    // 0x127388: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x127388u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12738c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12738cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127390: 0xa1e00000  sb          $zero, 0x0($t7)
    ctx->pc = 0x127390u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x127394: 0x3e00008  jr          $ra
    ctx->pc = 0x127394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127394u;
        // 0x127398: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12739Cu;
    // 0x12739c: 0x0  nop
    ctx->pc = 0x12739cu;
    // NOP
    ctx->pc = 0x1273a0u;
}
