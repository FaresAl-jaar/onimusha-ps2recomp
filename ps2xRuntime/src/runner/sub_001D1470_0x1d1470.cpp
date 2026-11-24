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

// Function: sub_001D1470
// Address: 0x1d1470 - 0x1d1528
void sub_001D1470_0x1d1470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1470_0x1d1470");
#endif

    switch (ctx->pc) {
        case 0x1d1490u: goto label_1d1490;
        case 0x1d14a0u: goto label_1d14a0;
        case 0x1d14acu: goto label_1d14ac;
        case 0x1d14bcu: goto label_1d14bc;
        case 0x1d1500u: goto label_1d1500;
        default: break;
    }

    ctx->pc = 0x1d1470u;

    // 0x1d1470: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d1470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d1474: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d1474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d1478: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d1478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d147c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d147cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d1480: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d1480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1484: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1488: 0xc074360  jal         func_1D0D80
    ctx->pc = 0x1D1488u;
    SET_GPR_U32(ctx, 31, 0x1D1490u);
    ctx->pc = 0x1D148Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1488u;
    // 0x1d148c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D80u, 0x1D1488u, 0x1D1490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1490u;
label_1d1490:
    // 0x1d1490: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d1490u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d1494: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D1494u;
    {
        const bool branch_taken_0x1d1494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1494) {
            ctx->pc = 0x1D1510u;
            goto label_1d1510;
        }
    }
    ctx->pc = 0x1D149Cu;
    // 0x1d149c: 0x0  nop
    ctx->pc = 0x1d149cu;
    // NOP
label_1d14a0:
    // 0x1d14a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d14a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14a4: 0xc074364  jal         func_1D0D90
    ctx->pc = 0x1D14A4u;
    SET_GPR_U32(ctx, 31, 0x1D14ACu);
    ctx->pc = 0x1D14A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14A4u;
    // 0x1d14a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D90u, 0x1D14A4u, 0x1D14ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D14ACu;
label_1d14ac:
    // 0x1d14ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d14acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d14b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14b4: 0xc07438c  jal         func_1D0E30
    ctx->pc = 0x1D14B4u;
    SET_GPR_U32(ctx, 31, 0x1D14BCu);
    ctx->pc = 0x1D14B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14B4u;
    // 0x1d14b8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0E30u, 0x1D14B4u, 0x1D14BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D14BCu;
label_1d14bc:
    // 0x1d14bc: 0x92060003  lbu         $a2, 0x3($s0)
    ctx->pc = 0x1d14bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1d14c0: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x1d14c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1d14c4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1d14c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1d14c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d14c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d14cc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1d14ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1d14d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d14d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d14d4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d14d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d14d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d14dc: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x1d14dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x1d14e0: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x1d14e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d14e4: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x1d14e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1d14e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1d14e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1d14ec: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x1d14ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d14f0: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x1d14f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x1d14f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d14f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d14f8: 0xc074360  jal         func_1D0D80
    ctx->pc = 0x1D14F8u;
    SET_GPR_U32(ctx, 31, 0x1D1500u);
    ctx->pc = 0x1D14FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D14F8u;
    // 0x1d14fc: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D80u, 0x1D14F8u, 0x1D1500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1500u;
label_1d1500:
    // 0x1d1500: 0x222182a  slt         $v1, $s1, $v0
    ctx->pc = 0x1d1500u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d1504: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1D1504u;
    {
        const bool branch_taken_0x1d1504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1504) {
            ctx->pc = 0x1D14A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d14a0;
        }
    }
    ctx->pc = 0x1D150Cu;
    // 0x1d150c: 0x0  nop
    ctx->pc = 0x1d150cu;
    // NOP
label_1d1510:
    // 0x1d1510: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d1510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d1514: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d1514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d1518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d151c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d151cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1520: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1520u;
        // 0x1d1524: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1528u;
}
