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

// Function: sub_001453D0
// Address: 0x1453d0 - 0x1454d4
void sub_001453D0_0x1453d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001453D0_0x1453d0");
#endif

    switch (ctx->pc) {
        case 0x145440u: goto label_145440;
        case 0x145454u: goto label_145454;
        case 0x145478u: goto label_145478;
        case 0x14548cu: goto label_14548c;
        case 0x1454a4u: goto label_1454a4;
        case 0x1454b8u: goto label_1454b8;
        default: break;
    }

    ctx->pc = 0x1453d0u;

    // 0x1453d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1453d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1453d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1453d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1453d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1453d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1453dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1453dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1453e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1453e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1453e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1453e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1453e8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1453e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1453ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1453ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1453f0: 0x8cf00004  lw          $s0, 0x4($a3)
    ctx->pc = 0x1453f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1453f4: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1453F4u;
    {
        const bool branch_taken_0x1453f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1453F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1453F4u;
        // 0x1453f8: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453f4) {
            ctx->pc = 0x145408u;
            goto label_145408;
        }
    }
    ctx->pc = 0x1453FCu;
    // 0x1453fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1453fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x145400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x145400u;
    {
        const bool branch_taken_0x145400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145400u;
        // 0x145404: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145400) {
            ctx->pc = 0x145410u;
            goto label_145410;
        }
    }
    ctx->pc = 0x145408u;
label_145408:
    // 0x145408: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x145408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14540c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x14540cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_145410:
    // 0x145410: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x145410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x145414: 0x14510002  bne         $v0, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x145414u;
    {
        const bool branch_taken_0x145414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x145414) {
            ctx->pc = 0x145420u;
            goto label_145420;
        }
    }
    ctx->pc = 0x14541Cu;
    // 0x14541c: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x14541cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
label_145420:
    // 0x145420: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x145420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x145424: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x145424u;
    {
        const bool branch_taken_0x145424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145424u;
        // 0x145428: 0x92330008  lbu         $s3, 0x8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145424) {
            ctx->pc = 0x145440u;
            goto label_145440;
        }
    }
    ctx->pc = 0x14542Cu;
    // 0x14542c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x14542cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x145430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x145430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145434: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x145434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x145438: 0xc051608  jal         func_145820
    ctx->pc = 0x145438u;
    SET_GPR_U32(ctx, 31, 0x145440u);
    ctx->pc = 0x14543Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145438u;
    // 0x14543c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145820u, 0x145438u, 0x145440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145440u;
label_145440:
    // 0x145440: 0x8e060068  lw          $a2, 0x68($s0)
    ctx->pc = 0x145440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x145444: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x145444u;
    {
        const bool branch_taken_0x145444 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x145448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145444u;
        // 0x145448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145444) {
            ctx->pc = 0x145458u;
            goto label_145458;
        }
    }
    ctx->pc = 0x14544Cu;
    // 0x14544c: 0xc051608  jal         func_145820
    ctx->pc = 0x14544Cu;
    SET_GPR_U32(ctx, 31, 0x145454u);
    ctx->pc = 0x145450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14544Cu;
    // 0x145450: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145820u, 0x14544Cu, 0x145454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145454u;
label_145454:
    // 0x145454: 0x0  nop
    ctx->pc = 0x145454u;
    // NOP
label_145458:
    // 0x145458: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x145458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x14545c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14545Cu;
    {
        const bool branch_taken_0x14545c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14545c) {
            ctx->pc = 0x145478u;
            goto label_145478;
        }
    }
    ctx->pc = 0x145464u;
    // 0x145464: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x145464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x145468: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x145468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14546c: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x14546cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x145470: 0xc051608  jal         func_145820
    ctx->pc = 0x145470u;
    SET_GPR_U32(ctx, 31, 0x145478u);
    ctx->pc = 0x145474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145470u;
    // 0x145474: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145820u, 0x145470u, 0x145478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145478u;
label_145478:
    // 0x145478: 0x8e06006c  lw          $a2, 0x6C($s0)
    ctx->pc = 0x145478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x14547c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x14547Cu;
    {
        const bool branch_taken_0x14547c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x145480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14547Cu;
        // 0x145480: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14547c) {
            ctx->pc = 0x145490u;
            goto label_145490;
        }
    }
    ctx->pc = 0x145484u;
    // 0x145484: 0xc051608  jal         func_145820
    ctx->pc = 0x145484u;
    SET_GPR_U32(ctx, 31, 0x14548Cu);
    ctx->pc = 0x145488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145484u;
    // 0x145488: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145820u, 0x145484u, 0x14548Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14548Cu;
label_14548c:
    // 0x14548c: 0x0  nop
    ctx->pc = 0x14548cu;
    // NOP
label_145490:
    // 0x145490: 0x8e060074  lw          $a2, 0x74($s0)
    ctx->pc = 0x145490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x145494: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x145494u;
    {
        const bool branch_taken_0x145494 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x145498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145494u;
        // 0x145498: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145494) {
            ctx->pc = 0x1454A8u;
            goto label_1454a8;
        }
    }
    ctx->pc = 0x14549Cu;
    // 0x14549c: 0xc051608  jal         func_145820
    ctx->pc = 0x14549Cu;
    SET_GPR_U32(ctx, 31, 0x1454A4u);
    ctx->pc = 0x1454A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14549Cu;
    // 0x1454a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145820u, 0x14549Cu, 0x1454A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454A4u;
label_1454a4:
    // 0x1454a4: 0x0  nop
    ctx->pc = 0x1454a4u;
    // NOP
label_1454a8:
    // 0x1454a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1454a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1454ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1454acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1454b0: 0xc051608  jal         func_145820
    ctx->pc = 0x1454B0u;
    SET_GPR_U32(ctx, 31, 0x1454B8u);
    ctx->pc = 0x1454B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1454B0u;
    // 0x1454b4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145820u, 0x1454B0u, 0x1454B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1454B8u;
label_1454b8:
    // 0x1454b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1454b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1454bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1454bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1454c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1454c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1454c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1454c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1454c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1454c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1454cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1454CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1454D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1454CCu;
        // 0x1454d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1454CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1454D4u;
}
