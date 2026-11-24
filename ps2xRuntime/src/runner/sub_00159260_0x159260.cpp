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

// Function: sub_00159260
// Address: 0x159260 - 0x159338
void sub_00159260_0x159260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159260_0x159260");
#endif

    switch (ctx->pc) {
        case 0x1592a8u: goto label_1592a8;
        case 0x1592b0u: goto label_1592b0;
        case 0x1592ecu: goto label_1592ec;
        case 0x159324u: goto label_159324;
        default: break;
    }

    ctx->pc = 0x159260u;

    // 0x159260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x159264: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x159264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x159268: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x159268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15926c: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x15926cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x159270: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x159270u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x159274: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x159274u;
    {
        const bool branch_taken_0x159274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x159278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159274u;
        // 0x159278: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159274) {
            ctx->pc = 0x159328u;
            goto label_159328;
        }
    }
    ctx->pc = 0x15927Cu;
    // 0x15927c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x15927cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x159280: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x159280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x159284: 0x24845110  addiu       $a0, $a0, 0x5110
    ctx->pc = 0x159284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20752));
    // 0x159288: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x159288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15928c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159290: 0x600008  jr          $v1
    ctx->pc = 0x159290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x159298u: goto label_159298;
            case 0x1592A8u: goto label_1592a8;
            case 0x1592C8u: goto label_1592c8;
            case 0x1592D8u: goto label_1592d8;
            case 0x1592F8u: goto label_1592f8;
            case 0x159328u: goto label_159328;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159290u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x159298u;
label_159298:
    // 0x159298: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x159298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15929c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x15929cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x1592a0: 0xc056568  jal         func_1595A0
    ctx->pc = 0x1592A0u;
    SET_GPR_U32(ctx, 31, 0x1592A8u);
    ctx->pc = 0x1592A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1592A0u;
    // 0x1592a4: 0xa6000004  sh          $zero, 0x4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595A0u, 0x1592A0u, 0x1592A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1592A8u;
label_1592a8:
    // 0x1592a8: 0xc056584  jal         func_159610
    ctx->pc = 0x1592A8u;
    SET_GPR_U32(ctx, 31, 0x1592B0u);
    ctx->pc = 0x159610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159610u, 0x1592A8u, 0x1592B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1592B0u;
label_1592b0:
    // 0x1592b0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1592B0u;
    {
        const bool branch_taken_0x1592b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1592b0) {
            ctx->pc = 0x159328u;
            goto label_159328;
        }
    }
    ctx->pc = 0x1592B8u;
    // 0x1592b8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x1592b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1592bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1592bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1592c0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1592C0u;
    {
        const bool branch_taken_0x1592c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1592C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592C0u;
        // 0x1592c4: 0xa6030002  sh          $v1, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592c0) {
            ctx->pc = 0x159328u;
            goto label_159328;
        }
    }
    ctx->pc = 0x1592C8u;
label_1592c8:
    // 0x1592c8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1592c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1592cc: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x1592ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1592d0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1592D0u;
    {
        const bool branch_taken_0x1592d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1592D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592D0u;
        // 0x1592d4: 0xa6000004  sh          $zero, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592d0) {
            ctx->pc = 0x159328u;
            goto label_159328;
        }
    }
    ctx->pc = 0x1592D8u;
label_1592d8:
    // 0x1592d8: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x1592d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x1592dc: 0x3c0200f0  lui         $v0, 0xF0
    ctx->pc = 0x1592dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)240 << 16));
    // 0x1592e0: 0x2484cea0  addiu       $a0, $a0, -0x3160
    ctx->pc = 0x1592e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954656));
    // 0x1592e4: 0xc05e390  jal         func_178E40
    ctx->pc = 0x1592E4u;
    SET_GPR_U32(ctx, 31, 0x1592ECu);
    ctx->pc = 0x1592E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1592E4u;
    // 0x1592e8: 0x34456000  ori         $a1, $v0, 0x6000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178E40u, 0x1592E4u, 0x1592ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1592ECu;
label_1592ec:
    // 0x1592ec: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x1592ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1592f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1592f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1592f4: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1592f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1592f8:
    // 0x1592f8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x1592f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x1592fc: 0x8c23ceb8  lw          $v1, -0x3148($at)
    ctx->pc = 0x1592fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x159300: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x159300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x159304: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x159304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x159308: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x159308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x15930c: 0x2484fca0  addiu       $a0, $a0, -0x360
    ctx->pc = 0x15930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966432));
    // 0x159310: 0x24a589a0  addiu       $a1, $a1, -0x7660
    ctx->pc = 0x159310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936992));
    // 0x159314: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x159314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x159318: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x159318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x15931c: 0xc04c910  jal         func_132440
    ctx->pc = 0x15931Cu;
    SET_GPR_U32(ctx, 31, 0x159324u);
    ctx->pc = 0x159320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15931Cu;
    // 0x159320: 0xac22ceb8  sw          $v0, -0x3148($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294954680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132440u, 0x15931Cu, 0x159324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159324u;
label_159324:
    // 0x159324: 0x0  nop
    ctx->pc = 0x159324u;
    // NOP
label_159328:
    // 0x159328: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x159328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15932c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15932cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159330: 0x3e00008  jr          $ra
    ctx->pc = 0x159330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159330u;
        // 0x159334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159338u;
}
