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

// Function: sub_00143EC0
// Address: 0x143ec0 - 0x143fe8
void sub_00143EC0_0x143ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143EC0_0x143ec0");
#endif

    switch (ctx->pc) {
        case 0x143ef4u: goto label_143ef4;
        case 0x143f28u: goto label_143f28;
        case 0x143f38u: goto label_143f38;
        case 0x143f54u: goto label_143f54;
        case 0x143fa0u: goto label_143fa0;
        case 0x143fd0u: goto label_143fd0;
        default: break;
    }

    ctx->pc = 0x143ec0u;

    // 0x143ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x143ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x143ec4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x143ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ec8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x143ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x143ecc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x143eccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ed0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x143ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143ed4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143edc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x143edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ee0: 0x90a50001  lbu         $a1, 0x1($a1)
    ctx->pc = 0x143ee0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x143ee4: 0x90460002  lbu         $a2, 0x2($v0)
    ctx->pc = 0x143ee4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x143ee8: 0x90470003  lbu         $a3, 0x3($v0)
    ctx->pc = 0x143ee8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x143eec: 0xc050ed4  jal         func_143B50
    ctx->pc = 0x143EECu;
    SET_GPR_U32(ctx, 31, 0x143EF4u);
    ctx->pc = 0x143EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143EECu;
    // 0x143ef0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x143EECu, 0x143EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143EF4u;
label_143ef4:
    // 0x143ef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x143ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ef8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143EF8u;
    {
        const bool branch_taken_0x143ef8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x143ef8) {
            ctx->pc = 0x143F08u;
            goto label_143f08;
        }
    }
    ctx->pc = 0x143F00u;
    // 0x143f00: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x143F00u;
    {
        const bool branch_taken_0x143f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F00u;
        // 0x143f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f00) {
            ctx->pc = 0x143FD0u;
            goto label_143fd0;
        }
    }
    ctx->pc = 0x143F08u;
label_143f08:
    // 0x143f08: 0x92070026  lbu         $a3, 0x26($s0)
    ctx->pc = 0x143f08u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x143f0c: 0x240800fe  addiu       $t0, $zero, 0xFE
    ctx->pc = 0x143f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x143f10: 0x14e80025  bne         $a3, $t0, . + 4 + (0x25 << 2)
    ctx->pc = 0x143F10u;
    {
        const bool branch_taken_0x143f10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x143f10) {
            ctx->pc = 0x143FA8u;
            goto label_143fa8;
        }
    }
    ctx->pc = 0x143F18u;
    // 0x143f18: 0x92050024  lbu         $a1, 0x24($s0)
    ctx->pc = 0x143f18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x143f1c: 0x92060025  lbu         $a2, 0x25($s0)
    ctx->pc = 0x143f1cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x143f20: 0xc050ed4  jal         func_143B50
    ctx->pc = 0x143F20u;
    SET_GPR_U32(ctx, 31, 0x143F28u);
    ctx->pc = 0x143F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F20u;
    // 0x143f24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B50u, 0x143F20u, 0x143F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F28u;
label_143f28:
    // 0x143f28: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x143F28u;
    {
        const bool branch_taken_0x143f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143f28) {
            ctx->pc = 0x143F68u;
            goto label_143f68;
        }
    }
    ctx->pc = 0x143F30u;
    // 0x143f30: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x143F30u;
    {
        const bool branch_taken_0x143f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F30u;
        // 0x143f34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f30) {
            ctx->pc = 0x143FD0u;
            goto label_143fd0;
        }
    }
    ctx->pc = 0x143F38u;
label_143f38:
    // 0x143f38: 0x92060024  lbu         $a2, 0x24($s0)
    ctx->pc = 0x143f38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x143f3c: 0x92070025  lbu         $a3, 0x25($s0)
    ctx->pc = 0x143f3cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x143f40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f44: 0x92080026  lbu         $t0, 0x26($s0)
    ctx->pc = 0x143f44u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x143f48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x143f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f4c: 0xc050f00  jal         func_143C00
    ctx->pc = 0x143F4Cu;
    SET_GPR_U32(ctx, 31, 0x143F54u);
    ctx->pc = 0x143F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F4Cu;
    // 0x143f50: 0x240900fe  addiu       $t1, $zero, 0xFE (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C00u, 0x143F4Cu, 0x143F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F54u;
label_143f54:
    // 0x143f54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143F54u;
    {
        const bool branch_taken_0x143f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143f54) {
            ctx->pc = 0x143F68u;
            goto label_143f68;
        }
    }
    ctx->pc = 0x143F5Cu;
    // 0x143f5c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x143F5Cu;
    {
        const bool branch_taken_0x143f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F5Cu;
        // 0x143f60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f5c) {
            ctx->pc = 0x143FD0u;
            goto label_143fd0;
        }
    }
    ctx->pc = 0x143F64u;
    // 0x143f64: 0x0  nop
    ctx->pc = 0x143f64u;
    // NOP
label_143f68:
    // 0x143f68: 0x90460024  lbu         $a2, 0x24($v0)
    ctx->pc = 0x143f68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x143f6c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x143f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x143f70: 0x10c3fff1  beq         $a2, $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x143F70u;
    {
        const bool branch_taken_0x143f70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x143f70) {
            ctx->pc = 0x143F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143f38;
        }
    }
    ctx->pc = 0x143F78u;
    // 0x143f78: 0x90430026  lbu         $v1, 0x26($v0)
    ctx->pc = 0x143f78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x143f7c: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x143f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x143f80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x143f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143f84: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x143f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x143f88: 0x90420025  lbu         $v0, 0x25($v0)
    ctx->pc = 0x143f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 37)));
    // 0x143f8c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x143f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x143f90: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x143f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x143f94: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x143f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143f98: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x143F98u;
    SET_GPR_U32(ctx, 31, 0x143FA0u);
    ctx->pc = 0x143F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F98u;
    // 0x143f9c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x143F98u, 0x143FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143FA0u;
label_143fa0:
    // 0x143fa0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x143FA0u;
    {
        const bool branch_taken_0x143fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143fa0) {
            ctx->pc = 0x143FD0u;
            goto label_143fd0;
        }
    }
    ctx->pc = 0x143FA8u;
label_143fa8:
    // 0x143fa8: 0x92060025  lbu         $a2, 0x25($s0)
    ctx->pc = 0x143fa8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x143fac: 0x3c040082  lui         $a0, 0x82
    ctx->pc = 0x143facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)130 << 16));
    // 0x143fb0: 0x92020024  lbu         $v0, 0x24($s0)
    ctx->pc = 0x143fb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x143fb4: 0x71c00  sll         $v1, $a3, 16
    ctx->pc = 0x143fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x143fb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x143fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143fbc: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x143fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x143fc0: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x143fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x143fc4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x143fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x143fc8: 0xc04cd28  jal         func_1334A0
    ctx->pc = 0x143FC8u;
    SET_GPR_U32(ctx, 31, 0x143FD0u);
    ctx->pc = 0x143FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143FC8u;
    // 0x143fcc: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1334A0u, 0x143FC8u, 0x143FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143FD0u;
label_143fd0:
    // 0x143fd0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x143fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143fd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143fd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x143FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FE0u;
        // 0x143fe4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143FE8u;
}
