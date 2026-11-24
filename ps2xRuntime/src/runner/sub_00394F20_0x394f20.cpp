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

// Function: sub_00394F20
// Address: 0x394f20 - 0x395004
void sub_00394F20_0x394f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394F20_0x394f20");
#endif

    switch (ctx->pc) {
        case 0x394f20u: goto label_394f20;
        case 0x394f24u: goto label_394f24;
        case 0x394f28u: goto label_394f28;
        case 0x394f2cu: goto label_394f2c;
        case 0x394f30u: goto label_394f30;
        case 0x394f34u: goto label_394f34;
        case 0x394f38u: goto label_394f38;
        case 0x394f3cu: goto label_394f3c;
        case 0x394f40u: goto label_394f40;
        case 0x394f44u: goto label_394f44;
        case 0x394f48u: goto label_394f48;
        case 0x394f4cu: goto label_394f4c;
        case 0x394f50u: goto label_394f50;
        case 0x394f54u: goto label_394f54;
        case 0x394f58u: goto label_394f58;
        case 0x394f5cu: goto label_394f5c;
        case 0x394f60u: goto label_394f60;
        case 0x394f64u: goto label_394f64;
        case 0x394f68u: goto label_394f68;
        case 0x394f6cu: goto label_394f6c;
        case 0x394f70u: goto label_394f70;
        case 0x394f74u: goto label_394f74;
        case 0x394f78u: goto label_394f78;
        case 0x394f7cu: goto label_394f7c;
        case 0x394f80u: goto label_394f80;
        case 0x394f84u: goto label_394f84;
        case 0x394f88u: goto label_394f88;
        case 0x394f8cu: goto label_394f8c;
        case 0x394f90u: goto label_394f90;
        case 0x394f94u: goto label_394f94;
        case 0x394f98u: goto label_394f98;
        case 0x394f9cu: goto label_394f9c;
        case 0x394fa0u: goto label_394fa0;
        case 0x394fa4u: goto label_394fa4;
        case 0x394fa8u: goto label_394fa8;
        case 0x394facu: goto label_394fac;
        case 0x394fb0u: goto label_394fb0;
        case 0x394fb4u: goto label_394fb4;
        case 0x394fb8u: goto label_394fb8;
        case 0x394fbcu: goto label_394fbc;
        case 0x394fc0u: goto label_394fc0;
        case 0x394fc4u: goto label_394fc4;
        case 0x394fc8u: goto label_394fc8;
        case 0x394fccu: goto label_394fcc;
        case 0x394fd0u: goto label_394fd0;
        case 0x394fd4u: goto label_394fd4;
        case 0x394fd8u: goto label_394fd8;
        case 0x394fdcu: goto label_394fdc;
        case 0x394fe0u: goto label_394fe0;
        case 0x394fe4u: goto label_394fe4;
        case 0x394fe8u: goto label_394fe8;
        case 0x394fecu: goto label_394fec;
        case 0x394ff0u: goto label_394ff0;
        case 0x394ff4u: goto label_394ff4;
        case 0x394ff8u: goto label_394ff8;
        case 0x394ffcu: goto label_394ffc;
        case 0x395000u: goto label_395000;
        default: break;
    }

    ctx->pc = 0x394f20u;

label_394f20:
    // 0x394f20: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x394f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_394f24:
    // 0x394f24: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x394f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_394f28:
    // 0x394f28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x394f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_394f2c:
    // 0x394f2c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x394f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_394f30:
    // 0x394f30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x394f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_394f34:
    // 0x394f34: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x394f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_394f38:
    // 0x394f38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x394f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_394f3c:
    // 0x394f3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x394f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394f40:
    // 0x394f40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x394f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_394f44:
    // 0x394f44: 0xc097080  jal         func_25C200
label_394f48:
    if (ctx->pc == 0x394F48u) {
        ctx->pc = 0x394F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F44u;
        // 0x394f48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F4Cu;
        goto label_394f4c;
    }
    ctx->pc = 0x394F44u;
    SET_GPR_U32(ctx, 31, 0x394F4Cu);
    ctx->pc = 0x394F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394F44u;
    // 0x394f48: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C200u, 0x394F44u, 0x394F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394F4Cu;
label_394f4c:
    // 0x394f4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x394f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394f50:
    // 0x394f50: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x394f50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_394f54:
    // 0x394f54: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_394f58:
    if (ctx->pc == 0x394F58u) {
        ctx->pc = 0x394F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F54u;
        // 0x394f58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394F5Cu;
        goto label_394f5c;
    }
    ctx->pc = 0x394F54u;
    {
        const bool branch_taken_0x394f54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x394F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394F54u;
        // 0x394f58: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f54) {
            ctx->pc = 0x394FE8u;
            goto label_394fe8;
        }
    }
    ctx->pc = 0x394F5Cu;
label_394f5c:
    // 0x394f5c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x394f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_394f60:
    // 0x394f60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x394f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_394f64:
    // 0x394f64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x394f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_394f68:
    // 0x394f68: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x394f68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_394f6c:
    // 0x394f6c: 0x14a3001a  bne         $a1, $v1, . + 4 + (0x1A << 2)
label_394f70:
    if (ctx->pc == 0x394F70u) {
        ctx->pc = 0x394F74u;
        goto label_394f74;
    }
    ctx->pc = 0x394F6Cu;
    {
        const bool branch_taken_0x394f6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x394f6c) {
            ctx->pc = 0x394FD8u;
            goto label_394fd8;
        }
    }
    ctx->pc = 0x394F74u;
label_394f74:
    // 0x394f74: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x394f74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_394f78:
    // 0x394f78: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x394f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
label_394f7c:
    // 0x394f7c: 0x10a30016  beq         $a1, $v1, . + 4 + (0x16 << 2)
label_394f80:
    if (ctx->pc == 0x394F80u) {
        ctx->pc = 0x394F84u;
        goto label_394f84;
    }
    ctx->pc = 0x394F7Cu;
    {
        const bool branch_taken_0x394f7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x394f7c) {
            ctx->pc = 0x394FD8u;
            goto label_394fd8;
        }
    }
    ctx->pc = 0x394F84u;
label_394f84:
    // 0x394f84: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x394f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_394f88:
    // 0x394f88: 0x14a2000b  bne         $a1, $v0, . + 4 + (0xB << 2)
label_394f8c:
    if (ctx->pc == 0x394F8Cu) {
        ctx->pc = 0x394F90u;
        goto label_394f90;
    }
    ctx->pc = 0x394F88u;
    {
        const bool branch_taken_0x394f88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x394f88) {
            ctx->pc = 0x394FB8u;
            goto label_394fb8;
        }
    }
    ctx->pc = 0x394F90u;
label_394f90:
    // 0x394f90: 0xc0e5900  jal         func_396400
label_394f94:
    if (ctx->pc == 0x394F94u) {
        ctx->pc = 0x394F98u;
        goto label_394f98;
    }
    ctx->pc = 0x394F90u;
    SET_GPR_U32(ctx, 31, 0x394F98u);
    ctx->pc = 0x396400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396400u, 0x394F90u, 0x394F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x394F98u;
label_394f98:
    // 0x394f98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x394f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_394f9c:
    // 0x394f9c: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x394f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_394fa0:
    // 0x394fa0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x394fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_394fa4:
    // 0x394fa4: 0x320f809  jalr        $t9
label_394fa8:
    if (ctx->pc == 0x394FA8u) {
        ctx->pc = 0x394FACu;
        goto label_394fac;
    }
    ctx->pc = 0x394FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x394FACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394FA4u, 0x394FACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394FACu;
label_394fac:
    // 0x394fac: 0x1000000a  b           . + 4 + (0xA << 2)
label_394fb0:
    if (ctx->pc == 0x394FB0u) {
        ctx->pc = 0x394FB4u;
        goto label_394fb4;
    }
    ctx->pc = 0x394FACu;
    {
        const bool branch_taken_0x394fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x394fac) {
            ctx->pc = 0x394FD8u;
            goto label_394fd8;
        }
    }
    ctx->pc = 0x394FB4u;
label_394fb4:
    // 0x394fb4: 0x0  nop
    ctx->pc = 0x394fb4u;
    // NOP
label_394fb8:
    // 0x394fb8: 0x8c9904d4  lw          $t9, 0x4D4($a0)
    ctx->pc = 0x394fb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1236)));
label_394fbc:
    // 0x394fbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x394fbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394fc0:
    // 0x394fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x394fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394fc4:
    // 0x394fc4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x394fc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_394fc8:
    // 0x394fc8: 0x320f809  jalr        $t9
label_394fcc:
    if (ctx->pc == 0x394FCCu) {
        ctx->pc = 0x394FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FC8u;
        // 0x394fcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FD0u;
        goto label_394fd0;
    }
    ctx->pc = 0x394FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x394FD0u);
        ctx->pc = 0x394FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FC8u;
        // 0x394fcc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394FC8u, 0x394FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x394FD0u;
label_394fd0:
    // 0x394fd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x394fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_394fd4:
    // 0x394fd4: 0xa6630786  sh          $v1, 0x786($s3)
    ctx->pc = 0x394fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1926), (uint16_t)GPR_U32(ctx, 3));
label_394fd8:
    // 0x394fd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x394fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_394fdc:
    // 0x394fdc: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x394fdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_394fe0:
    // 0x394fe0: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_394fe4:
    if (ctx->pc == 0x394FE4u) {
        ctx->pc = 0x394FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FE0u;
        // 0x394fe4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x394FE8u;
        goto label_394fe8;
    }
    ctx->pc = 0x394FE0u;
    {
        const bool branch_taken_0x394fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x394FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FE0u;
        // 0x394fe4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394fe0) {
            ctx->pc = 0x394F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394f60;
        }
    }
    ctx->pc = 0x394FE8u;
label_394fe8:
    // 0x394fe8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x394fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_394fec:
    // 0x394fec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x394fecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_394ff0:
    // 0x394ff0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x394ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_394ff4:
    // 0x394ff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x394ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_394ff8:
    // 0x394ff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x394ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_394ffc:
    // 0x394ffc: 0x3e00008  jr          $ra
label_395000:
    if (ctx->pc == 0x395000u) {
        ctx->pc = 0x395000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FFCu;
        // 0x395000: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395004u;
        goto label_fallthrough_0x394ffc;
    }
    ctx->pc = 0x394FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394FFCu;
        // 0x395000: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x394ffc:
    ctx->pc = 0x395004u;
}
