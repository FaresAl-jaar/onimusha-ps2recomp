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

// Function: sub_00387990
// Address: 0x387990 - 0x387a88
void sub_00387990_0x387990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387990_0x387990");
#endif

    switch (ctx->pc) {
        case 0x3879b8u: goto label_3879b8;
        case 0x3879d4u: goto label_3879d4;
        case 0x3879f0u: goto label_3879f0;
        case 0x3879f8u: goto label_3879f8;
        case 0x387a28u: goto label_387a28;
        case 0x387a30u: goto label_387a30;
        case 0x387a40u: goto label_387a40;
        case 0x387a48u: goto label_387a48;
        default: break;
    }

    ctx->pc = 0x387990u;

    // 0x387990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x387990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x387994: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x387994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x387998: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x387998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38799c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38799cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3879a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3879a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3879a4: 0x90832b0b  lbu         $v1, 0x2B0B($a0)
    ctx->pc = 0x3879a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11019)));
    // 0x3879a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3879A8u;
    {
        const bool branch_taken_0x3879a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3879ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879A8u;
        // 0x3879ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3879a8) {
            ctx->pc = 0x3879C0u;
            goto label_3879c0;
        }
    }
    ctx->pc = 0x3879B0u;
    // 0x3879b0: 0xc0a47c0  jal         func_291F00
    ctx->pc = 0x3879B0u;
    SET_GPR_U32(ctx, 31, 0x3879B8u);
    ctx->pc = 0x291F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291F00u, 0x3879B0u, 0x3879B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3879B8u;
label_3879b8:
    // 0x3879b8: 0xa2022b0e  sb          $v0, 0x2B0E($s0)
    ctx->pc = 0x3879b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11022), (uint8_t)GPR_U32(ctx, 2));
    // 0x3879bc: 0x0  nop
    ctx->pc = 0x3879bcu;
    // NOP
label_3879c0:
    // 0x3879c0: 0x92032b62  lbu         $v1, 0x2B62($s0)
    ctx->pc = 0x3879c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11106)));
    // 0x3879c4: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x3879C4u;
    {
        const bool branch_taken_0x3879c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3879C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3879C4u;
        // 0x3879c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3879c4) {
            ctx->pc = 0x387A70u;
            goto label_387a70;
        }
    }
    ctx->pc = 0x3879CCu;
    // 0x3879cc: 0xc0a47c0  jal         func_291F00
    ctx->pc = 0x3879CCu;
    SET_GPR_U32(ctx, 31, 0x3879D4u);
    ctx->pc = 0x291F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291F00u, 0x3879CCu, 0x3879D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3879D4u;
label_3879d4:
    // 0x3879d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3879D4u;
    {
        const bool branch_taken_0x3879d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3879d4) {
            ctx->pc = 0x3879E8u;
            goto label_3879e8;
        }
    }
    ctx->pc = 0x3879DCu;
    // 0x3879dc: 0x92022b63  lbu         $v0, 0x2B63($s0)
    ctx->pc = 0x3879dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11107)));
    // 0x3879e0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3879E0u;
    {
        const bool branch_taken_0x3879e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3879e0) {
            ctx->pc = 0x387A38u;
            goto label_387a38;
        }
    }
    ctx->pc = 0x3879E8u;
label_3879e8:
    // 0x3879e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3879e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3879ec: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3879ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3879f0:
    // 0x3879f0: 0xc0c0890  jal         func_302240
    ctx->pc = 0x3879F0u;
    SET_GPR_U32(ctx, 31, 0x3879F8u);
    ctx->pc = 0x3879F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3879F0u;
    // 0x3879f4: 0x8e242b20  lw          $a0, 0x2B20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x3879F0u, 0x3879F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3879F8u;
label_3879f8:
    // 0x3879f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3879F8u;
    {
        const bool branch_taken_0x3879f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3879f8) {
            ctx->pc = 0x387A10u;
            goto label_387a10;
        }
    }
    ctx->pc = 0x387A00u;
    // 0x387a00: 0x8c440148  lw          $a0, 0x148($v0)
    ctx->pc = 0x387a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x387a04: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x387a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x387a08: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x387a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x387a0c: 0xac430148  sw          $v1, 0x148($v0)
    ctx->pc = 0x387a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 3));
label_387a10:
    // 0x387a10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x387a10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x387a14: 0x2a420006  slti        $v0, $s2, 0x6
    ctx->pc = 0x387a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x387a18: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x387A18u;
    {
        const bool branch_taken_0x387a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A18u;
        // 0x387a1c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a18) {
            ctx->pc = 0x3879F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3879f0;
        }
    }
    ctx->pc = 0x387A20u;
    // 0x387a20: 0xc0a4774  jal         func_291DD0
    ctx->pc = 0x387A20u;
    SET_GPR_U32(ctx, 31, 0x387A28u);
    ctx->pc = 0x387A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A20u;
    // 0x387a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291DD0u, 0x387A20u, 0x387A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A28u;
label_387a28:
    // 0x387a28: 0xc0a4788  jal         func_291E20
    ctx->pc = 0x387A28u;
    SET_GPR_U32(ctx, 31, 0x387A30u);
    ctx->pc = 0x387A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A28u;
    // 0x387a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291E20u, 0x387A28u, 0x387A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A30u;
label_387a30:
    // 0x387a30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x387A30u;
    {
        const bool branch_taken_0x387a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x387a30) {
            ctx->pc = 0x387A70u;
            goto label_387a70;
        }
    }
    ctx->pc = 0x387A38u;
label_387a38:
    // 0x387a38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x387a38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387a3c: 0x0  nop
    ctx->pc = 0x387a3cu;
    // NOP
label_387a40:
    // 0x387a40: 0xc0c0890  jal         func_302240
    ctx->pc = 0x387A40u;
    SET_GPR_U32(ctx, 31, 0x387A48u);
    ctx->pc = 0x387A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387A40u;
    // 0x387a44: 0x8e042b20  lw          $a0, 0x2B20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11040)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302240u, 0x387A40u, 0x387A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387A48u;
label_387a48:
    // 0x387a48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x387A48u;
    {
        const bool branch_taken_0x387a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x387a48) {
            ctx->pc = 0x387A60u;
            goto label_387a60;
        }
    }
    ctx->pc = 0x387A50u;
    // 0x387a50: 0x8c430148  lw          $v1, 0x148($v0)
    ctx->pc = 0x387a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
    // 0x387a54: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x387a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x387a58: 0xac430148  sw          $v1, 0x148($v0)
    ctx->pc = 0x387a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 3));
    // 0x387a5c: 0x0  nop
    ctx->pc = 0x387a5cu;
    // NOP
label_387a60:
    // 0x387a60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x387a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x387a64: 0x2a230006  slti        $v1, $s1, 0x6
    ctx->pc = 0x387a64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x387a68: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x387A68u;
    {
        const bool branch_taken_0x387a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A68u;
        // 0x387a6c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387a68) {
            ctx->pc = 0x387A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387a40;
        }
    }
    ctx->pc = 0x387A70u;
label_387a70:
    // 0x387a70: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x387a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x387a74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x387a74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x387a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x387a7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x387a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387a80: 0x3e00008  jr          $ra
    ctx->pc = 0x387A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387A80u;
        // 0x387a84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387A88u;
}
