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

// Function: sub_00210378
// Address: 0x210378 - 0x210408
void sub_00210378_0x210378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210378_0x210378");
#endif

    switch (ctx->pc) {
        case 0x210378u: goto label_210378;
        case 0x21037cu: goto label_21037c;
        case 0x210380u: goto label_210380;
        case 0x210384u: goto label_210384;
        case 0x210388u: goto label_210388;
        case 0x21038cu: goto label_21038c;
        case 0x210390u: goto label_210390;
        case 0x210394u: goto label_210394;
        case 0x210398u: goto label_210398;
        case 0x21039cu: goto label_21039c;
        case 0x2103a0u: goto label_2103a0;
        case 0x2103a4u: goto label_2103a4;
        case 0x2103a8u: goto label_2103a8;
        case 0x2103acu: goto label_2103ac;
        case 0x2103b0u: goto label_2103b0;
        case 0x2103b4u: goto label_2103b4;
        case 0x2103b8u: goto label_2103b8;
        case 0x2103bcu: goto label_2103bc;
        case 0x2103c0u: goto label_2103c0;
        case 0x2103c4u: goto label_2103c4;
        case 0x2103c8u: goto label_2103c8;
        case 0x2103ccu: goto label_2103cc;
        case 0x2103d0u: goto label_2103d0;
        case 0x2103d4u: goto label_2103d4;
        case 0x2103d8u: goto label_2103d8;
        case 0x2103dcu: goto label_2103dc;
        case 0x2103e0u: goto label_2103e0;
        case 0x2103e4u: goto label_2103e4;
        case 0x2103e8u: goto label_2103e8;
        case 0x2103ecu: goto label_2103ec;
        case 0x2103f0u: goto label_2103f0;
        case 0x2103f4u: goto label_2103f4;
        case 0x2103f8u: goto label_2103f8;
        case 0x2103fcu: goto label_2103fc;
        case 0x210400u: goto label_210400;
        case 0x210404u: goto label_210404;
        default: break;
    }

    ctx->pc = 0x210378u;

label_210378:
    // 0x210378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x210378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21037c:
    // 0x21037c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21037cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210380:
    // 0x210380: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x210380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_210384:
    // 0x210384: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x210384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_210388:
    // 0x210388: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x210388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_21038c:
    // 0x21038c: 0xc09422c  jal         func_2508B0
label_210390:
    if (ctx->pc == 0x210390u) {
        ctx->pc = 0x210390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21038Cu;
        // 0x210390: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210394u;
        goto label_210394;
    }
    ctx->pc = 0x21038Cu;
    SET_GPR_U32(ctx, 31, 0x210394u);
    ctx->pc = 0x210390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21038Cu;
    // 0x210390: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2508B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2508B0u, 0x21038Cu, 0x210394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210394u;
label_210394:
    // 0x210394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x210394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210398:
    // 0x210398: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x210398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21039c:
    // 0x21039c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x21039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2103a0:
    // 0x2103a0: 0x40f809  jalr        $v0
label_2103a4:
    if (ctx->pc == 0x2103A4u) {
        ctx->pc = 0x2103A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103A0u;
        // 0x2103a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2103A8u;
        goto label_2103a8;
    }
    ctx->pc = 0x2103A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2103A8u);
        ctx->pc = 0x2103A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103A0u;
        // 0x2103a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2103A0u, 0x2103A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2103A8u;
label_2103a8:
    // 0x2103a8: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x2103a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
label_2103ac:
    // 0x2103ac: 0xac62fb70  sw          $v0, -0x490($v1)
    ctx->pc = 0x2103acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966128), GPR_U32(ctx, 2));
label_2103b0:
    // 0x2103b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2103b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2103b4:
    // 0x2103b4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2103b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2103b8:
    // 0x2103b8: 0x60f809  jalr        $v1
label_2103bc:
    if (ctx->pc == 0x2103BCu) {
        ctx->pc = 0x2103BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103B8u;
        // 0x2103bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2103C0u;
        goto label_2103c0;
    }
    ctx->pc = 0x2103B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2103C0u);
        ctx->pc = 0x2103BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103B8u;
        // 0x2103bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2103B8u, 0x2103C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2103C0u;
label_2103c0:
    // 0x2103c0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2103c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2103c4:
    // 0x2103c4: 0xc093fa6  jal         func_24FE98
label_2103c8:
    if (ctx->pc == 0x2103C8u) {
        ctx->pc = 0x2103C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103C4u;
        // 0x2103c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2103CCu;
        goto label_2103cc;
    }
    ctx->pc = 0x2103C4u;
    SET_GPR_U32(ctx, 31, 0x2103CCu);
    ctx->pc = 0x2103C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2103C4u;
    // 0x2103c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FE98u, 0x2103C4u, 0x2103CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2103CCu;
label_2103cc:
    // 0x2103cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2103ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2103d0:
    // 0x2103d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2103d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2103d4:
    // 0x2103d4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2103d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2103d8:
    // 0x2103d8: 0x40f809  jalr        $v0
label_2103dc:
    if (ctx->pc == 0x2103DCu) {
        ctx->pc = 0x2103DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103D8u;
        // 0x2103dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2103E0u;
        goto label_2103e0;
    }
    ctx->pc = 0x2103D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2103E0u);
        ctx->pc = 0x2103DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103D8u;
        // 0x2103dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2103D8u, 0x2103E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2103E0u;
label_2103e0:
    // 0x2103e0: 0x3c030088  lui         $v1, 0x88
    ctx->pc = 0x2103e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)136 << 16));
label_2103e4:
    // 0x2103e4: 0xac62fb74  sw          $v0, -0x48C($v1)
    ctx->pc = 0x2103e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966132), GPR_U32(ctx, 2));
label_2103e8:
    // 0x2103e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2103e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2103ec:
    // 0x2103ec: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2103ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2103f0:
    // 0x2103f0: 0x60f809  jalr        $v1
label_2103f4:
    if (ctx->pc == 0x2103F4u) {
        ctx->pc = 0x2103F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103F0u;
        // 0x2103f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2103F8u;
        goto label_2103f8;
    }
    ctx->pc = 0x2103F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2103F8u);
        ctx->pc = 0x2103F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103F0u;
        // 0x2103f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2103F0u, 0x2103F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2103F8u;
label_2103f8:
    // 0x2103f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2103f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2103fc:
    // 0x2103fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2103fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_210400:
    // 0x210400: 0x3e00008  jr          $ra
label_210404:
    if (ctx->pc == 0x210404u) {
        ctx->pc = 0x210404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210400u;
        // 0x210404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210408u;
        goto label_fallthrough_0x210400;
    }
    ctx->pc = 0x210400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210400u;
        // 0x210404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x210400:
    ctx->pc = 0x210408u;
}
