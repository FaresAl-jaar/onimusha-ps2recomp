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

// Function: sub_00382F50
// Address: 0x382f50 - 0x3836a8
void sub_00382F50_0x382f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382F50_0x382f50");
#endif

    switch (ctx->pc) {
        case 0x383040u: goto label_383040;
        case 0x383130u: goto label_383130;
        case 0x3835acu: goto label_3835ac;
        case 0x3835c4u: goto label_3835c4;
        case 0x383684u: goto label_383684;
        default: break;
    }

    ctx->pc = 0x382f50u;

    // 0x382f50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x382f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x382f54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x382f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x382f58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x382f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x382f5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x382f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x382f60: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x382f60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382f64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x382f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x382f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x382f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x382f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x382f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x382f70: 0x30d000ff  andi        $s0, $a2, 0xFF
    ctx->pc = 0x382f70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x382f74: 0x2e010002  sltiu       $at, $s0, 0x2
    ctx->pc = 0x382f74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x382f78: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x382F78u;
    {
        const bool branch_taken_0x382f78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x382F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F78u;
        // 0x382f7c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382f78) {
            ctx->pc = 0x382F90u;
            goto label_382f90;
        }
    }
    ctx->pc = 0x382F80u;
    // 0x382f80: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x382f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x382f84: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x382F84u;
    {
        const bool branch_taken_0x382f84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x382f84) {
            ctx->pc = 0x382F98u;
            goto label_382f98;
        }
    }
    ctx->pc = 0x382F8Cu;
    // 0x382f8c: 0x0  nop
    ctx->pc = 0x382f8cu;
    // NOP
label_382f90:
    // 0x382f90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x382F90u;
    {
        const bool branch_taken_0x382f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F90u;
        // 0x382f94: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x382f90) {
            ctx->pc = 0x382FA0u;
            goto label_382fa0;
        }
    }
    ctx->pc = 0x382F98u;
label_382f98:
    // 0x382f98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x382f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382f9c: 0x0  nop
    ctx->pc = 0x382f9cu;
    // NOP
label_382fa0:
    // 0x382fa0: 0x92640010  lbu         $a0, 0x10($s3)
    ctx->pc = 0x382fa0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x382fa4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x382fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x382fa8: 0x10830075  beq         $a0, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x382FA8u;
    {
        const bool branch_taken_0x382fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x382FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382FA8u;
        // 0x382fac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382fa8) {
            ctx->pc = 0x383180u;
            goto label_383180;
        }
    }
    ctx->pc = 0x382FB0u;
    // 0x382fb0: 0x16040003  bne         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x382FB0u;
    {
        const bool branch_taken_0x382fb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x382fb0) {
            ctx->pc = 0x382FC0u;
            goto label_382fc0;
        }
    }
    ctx->pc = 0x382FB8u;
    // 0x382fb8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x382FB8u;
    {
        const bool branch_taken_0x382fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382FB8u;
        // 0x382fbc: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x382fb8) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x382FC0u;
label_382fc0:
    // 0x382fc0: 0x12400033  beqz        $s2, . + 4 + (0x33 << 2)
    ctx->pc = 0x382FC0u;
    {
        const bool branch_taken_0x382fc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x382FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382FC0u;
        // 0x382fc4: 0x2883000a  slti        $v1, $a0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x382fc0) {
            ctx->pc = 0x383090u;
            goto label_383090;
        }
    }
    ctx->pc = 0x382FC8u;
    // 0x382fc8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x382FC8u;
    {
        const bool branch_taken_0x382fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x382fc8) {
            ctx->pc = 0x382FDCu;
            goto label_382fdc;
        }
    }
    ctx->pc = 0x382FD0u;
    // 0x382fd0: 0x2883000e  slti        $v1, $a0, 0xE
    ctx->pc = 0x382fd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x382fd4: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x382FD4u;
    {
        const bool branch_taken_0x382fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x382fd4) {
            ctx->pc = 0x383070u;
            goto label_383070;
        }
    }
    ctx->pc = 0x382FDCu;
label_382fdc:
    // 0x382fdc: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x382fdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x382fe0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x382FE0u;
    {
        const bool branch_taken_0x382fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x382FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382FE0u;
        // 0x382fe4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382fe0) {
            ctx->pc = 0x382FF8u;
            goto label_382ff8;
        }
    }
    ctx->pc = 0x382FE8u;
    // 0x382fe8: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x382fe8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x382fec: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x382FECu;
    {
        const bool branch_taken_0x382fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x382fec) {
            ctx->pc = 0x383050u;
            goto label_383050;
        }
    }
    ctx->pc = 0x382FF4u;
    // 0x382ff4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x382ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_382ff8:
    // 0x382ff8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x382FF8u;
    {
        const bool branch_taken_0x382ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x382ff8) {
            ctx->pc = 0x383018u;
            goto label_383018;
        }
    }
    ctx->pc = 0x383000u;
    // 0x383000: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x383000u;
    {
        const bool branch_taken_0x383000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x383000) {
            ctx->pc = 0x383010u;
            goto label_383010;
        }
    }
    ctx->pc = 0x383008u;
    // 0x383008: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x383008u;
    {
        const bool branch_taken_0x383008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383008) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x383010u;
label_383010:
    // 0x383010: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x383010u;
    {
        const bool branch_taken_0x383010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383010u;
        // 0x383014: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383010) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x383018u;
label_383018:
    // 0x383018: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x383018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38301c: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38301Cu;
    {
        const bool branch_taken_0x38301c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x38301c) {
            ctx->pc = 0x383030u;
            goto label_383030;
        }
    }
    ctx->pc = 0x383024u;
    // 0x383024: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x383024u;
    {
        const bool branch_taken_0x383024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383024u;
        // 0x383028: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383024) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x38302Cu;
    // 0x38302c: 0x0  nop
    ctx->pc = 0x38302cu;
    // NOP
label_383030:
    // 0x383030: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x383030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383034: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x383034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383038: 0xc0e0e98  jal         func_383A60
    ctx->pc = 0x383038u;
    SET_GPR_U32(ctx, 31, 0x383040u);
    ctx->pc = 0x38303Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383038u;
    // 0x38303c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383A60u, 0x383038u, 0x383040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383040u;
label_383040:
    // 0x383040: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x383040u;
    {
        const bool branch_taken_0x383040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383040) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x383048u;
    // 0x383048: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x383048u;
    {
        const bool branch_taken_0x383048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383048u;
        // 0x38304c: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383048) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x383050u;
label_383050:
    // 0x383050: 0x2483fffa  addiu       $v1, $a0, -0x6
    ctx->pc = 0x383050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967290));
    // 0x383054: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x383054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x383058: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x383058u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x38305c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x38305cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x383060: 0x14830045  bne         $a0, $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x383060u;
    {
        const bool branch_taken_0x383060 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x383060) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x383068u;
    // 0x383068: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x383068u;
    {
        const bool branch_taken_0x383068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383068u;
        // 0x38306c: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383068) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x383070u;
label_383070:
    // 0x383070: 0x2483fff6  addiu       $v1, $a0, -0xA
    ctx->pc = 0x383070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967286));
    // 0x383074: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x383074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x383078: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x383078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x38307c: 0x1460003e  bnez        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x38307Cu;
    {
        const bool branch_taken_0x38307c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38307c) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x383084u;
    // 0x383084: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x383084u;
    {
        const bool branch_taken_0x383084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383084u;
        // 0x383088: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383084) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x38308Cu;
    // 0x38308c: 0x0  nop
    ctx->pc = 0x38308cu;
    // NOP
label_383090:
    // 0x383090: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x383090u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x383094: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x383094u;
    {
        const bool branch_taken_0x383094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x383098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383094u;
        // 0x383098: 0x28830006  slti        $v1, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383094) {
            ctx->pc = 0x3830ACu;
            goto label_3830ac;
        }
    }
    ctx->pc = 0x38309Cu;
    // 0x38309c: 0x2883000e  slti        $v1, $a0, 0xE
    ctx->pc = 0x38309cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x3830a0: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x3830A0u;
    {
        const bool branch_taken_0x3830a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3830a0) {
            ctx->pc = 0x383160u;
            goto label_383160;
        }
    }
    ctx->pc = 0x3830A8u;
    // 0x3830a8: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x3830a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_3830ac:
    // 0x3830ac: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3830ACu;
    {
        const bool branch_taken_0x3830ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3830B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3830ACu;
        // 0x3830b0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3830ac) {
            ctx->pc = 0x3830C4u;
            goto label_3830c4;
        }
    }
    ctx->pc = 0x3830B4u;
    // 0x3830b4: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x3830b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3830b8: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3830B8u;
    {
        const bool branch_taken_0x3830b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3830b8) {
            ctx->pc = 0x383140u;
            goto label_383140;
        }
    }
    ctx->pc = 0x3830C0u;
    // 0x3830c0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3830c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3830c4:
    // 0x3830c4: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3830C4u;
    {
        const bool branch_taken_0x3830c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3830c4) {
            ctx->pc = 0x383108u;
            goto label_383108;
        }
    }
    ctx->pc = 0x3830CCu;
    // 0x3830cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3830CCu;
    {
        const bool branch_taken_0x3830cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3830cc) {
            ctx->pc = 0x3830E0u;
            goto label_3830e0;
        }
    }
    ctx->pc = 0x3830D4u;
    // 0x3830d4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3830D4u;
    {
        const bool branch_taken_0x3830d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3830d4) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x3830DCu;
    // 0x3830dc: 0x0  nop
    ctx->pc = 0x3830dcu;
    // NOP
label_3830e0:
    // 0x3830e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3830e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3830e4: 0x16030002  bne         $s0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3830E4u;
    {
        const bool branch_taken_0x3830e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3830e4) {
            ctx->pc = 0x3830F0u;
            goto label_3830f0;
        }
    }
    ctx->pc = 0x3830ECu;
    // 0x3830ec: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3830ecu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3830f0:
    // 0x3830f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3830f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3830f4: 0x16030020  bne         $s0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3830F4u;
    {
        const bool branch_taken_0x3830f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3830f4) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x3830FCu;
    // 0x3830fc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3830FCu;
    {
        const bool branch_taken_0x3830fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3830FCu;
        // 0x383100: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3830fc) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x383104u;
    // 0x383104: 0x0  nop
    ctx->pc = 0x383104u;
    // NOP
label_383108:
    // 0x383108: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x383108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38310c: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38310Cu;
    {
        const bool branch_taken_0x38310c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x38310c) {
            ctx->pc = 0x383120u;
            goto label_383120;
        }
    }
    ctx->pc = 0x383114u;
    // 0x383114: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x383114u;
    {
        const bool branch_taken_0x383114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383114u;
        // 0x383118: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383114) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x38311Cu;
    // 0x38311c: 0x0  nop
    ctx->pc = 0x38311cu;
    // NOP
label_383120:
    // 0x383120: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x383120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383124: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x383124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383128: 0xc0e0e98  jal         func_383A60
    ctx->pc = 0x383128u;
    SET_GPR_U32(ctx, 31, 0x383130u);
    ctx->pc = 0x38312Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383128u;
    // 0x38312c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383A60u, 0x383128u, 0x383130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383130u;
label_383130:
    // 0x383130: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x383130u;
    {
        const bool branch_taken_0x383130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383130) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x383138u;
    // 0x383138: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x383138u;
    {
        const bool branch_taken_0x383138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383138u;
        // 0x38313c: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383138) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x383140u;
label_383140:
    // 0x383140: 0x2483fffa  addiu       $v1, $a0, -0x6
    ctx->pc = 0x383140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967290));
    // 0x383144: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x383144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x383148: 0x90840001  lbu         $a0, 0x1($a0)
    ctx->pc = 0x383148u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x38314c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x38314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x383150: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x383150u;
    {
        const bool branch_taken_0x383150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x383150) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x383158u;
    // 0x383158: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x383158u;
    {
        const bool branch_taken_0x383158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383158u;
        // 0x38315c: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383158) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x383160u;
label_383160:
    // 0x383160: 0x2483fff6  addiu       $v1, $a0, -0xA
    ctx->pc = 0x383160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967286));
    // 0x383164: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x383164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x383168: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x383168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x38316c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38316Cu;
    {
        const bool branch_taken_0x38316c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38316c) {
            ctx->pc = 0x383178u;
            goto label_383178;
        }
    }
    ctx->pc = 0x383174u;
    // 0x383174: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x383174u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_383178:
    // 0x383178: 0x12200143  beqz        $s1, . + 4 + (0x143 << 2)
    ctx->pc = 0x383178u;
    {
        const bool branch_taken_0x383178 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x383178) {
            ctx->pc = 0x383688u;
            goto label_383688;
        }
    }
    ctx->pc = 0x383180u;
label_383180:
    // 0x383180: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x383180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x383184: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x383184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x383188: 0x10620111  beq         $v1, $v0, . + 4 + (0x111 << 2)
    ctx->pc = 0x383188u;
    {
        const bool branch_taken_0x383188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383188u;
        // 0x38318c: 0x2862000d  slti        $v0, $v1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383188) {
            ctx->pc = 0x3835D0u;
            goto label_3835d0;
        }
    }
    ctx->pc = 0x383190u;
    // 0x383190: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x383190u;
    {
        const bool branch_taken_0x383190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383190) {
            ctx->pc = 0x3831A4u;
            goto label_3831a4;
        }
    }
    ctx->pc = 0x383198u;
    // 0x383198: 0x28620023  slti        $v0, $v1, 0x23
    ctx->pc = 0x383198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)35) ? 1 : 0);
    // 0x38319c: 0x144000fe  bnez        $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x38319Cu;
    {
        const bool branch_taken_0x38319c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38319c) {
            ctx->pc = 0x383598u;
            goto label_383598;
        }
    }
    ctx->pc = 0x3831A4u;
label_3831a4:
    // 0x3831a4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3831a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3831a8: 0x106200e9  beq         $v1, $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x3831A8u;
    {
        const bool branch_taken_0x3831a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3831ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831A8u;
        // 0x3831ac: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3831a8) {
            ctx->pc = 0x383550u;
            goto label_383550;
        }
    }
    ctx->pc = 0x3831B0u;
    // 0x3831b0: 0x106200d5  beq         $v1, $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x3831B0u;
    {
        const bool branch_taken_0x3831b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3831b0) {
            ctx->pc = 0x383508u;
            goto label_383508;
        }
    }
    ctx->pc = 0x3831B8u;
    // 0x3831b8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3831b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3831bc: 0x106200c4  beq         $v1, $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x3831BCu;
    {
        const bool branch_taken_0x3831bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3831C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831BCu;
        // 0x3831c0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3831bc) {
            ctx->pc = 0x3834D0u;
            goto label_3834d0;
        }
    }
    ctx->pc = 0x3831C4u;
    // 0x3831c4: 0x106200b4  beq         $v1, $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x3831C4u;
    {
        const bool branch_taken_0x3831c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3831c4) {
            ctx->pc = 0x383498u;
            goto label_383498;
        }
    }
    ctx->pc = 0x3831CCu;
    // 0x3831cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3831ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3831d0: 0x106200a3  beq         $v1, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x3831D0u;
    {
        const bool branch_taken_0x3831d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3831D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831D0u;
        // 0x3831d4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3831d0) {
            ctx->pc = 0x383460u;
            goto label_383460;
        }
    }
    ctx->pc = 0x3831D8u;
    // 0x3831d8: 0x1062008f  beq         $v1, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x3831D8u;
    {
        const bool branch_taken_0x3831d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3831d8) {
            ctx->pc = 0x383418u;
            goto label_383418;
        }
    }
    ctx->pc = 0x3831E0u;
    // 0x3831e0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3831e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3831e4: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x3831E4u;
    {
        const bool branch_taken_0x3831e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3831E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831E4u;
        // 0x3831e8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3831e4) {
            ctx->pc = 0x3833D0u;
            goto label_3833d0;
        }
    }
    ctx->pc = 0x3831ECu;
    // 0x3831ec: 0x10620066  beq         $v1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x3831ECu;
    {
        const bool branch_taken_0x3831ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3831ec) {
            ctx->pc = 0x383388u;
            goto label_383388;
        }
    }
    ctx->pc = 0x3831F4u;
    // 0x3831f4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3831f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3831f8: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x3831F8u;
    {
        const bool branch_taken_0x3831f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3831FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831F8u;
        // 0x3831fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3831f8) {
            ctx->pc = 0x383320u;
            goto label_383320;
        }
    }
    ctx->pc = 0x383200u;
    // 0x383200: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x383200u;
    {
        const bool branch_taken_0x383200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x383200) {
            ctx->pc = 0x3832D8u;
            goto label_3832d8;
        }
    }
    ctx->pc = 0x383208u;
    // 0x383208: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x383208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38320c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x38320Cu;
    {
        const bool branch_taken_0x38320c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x383210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38320Cu;
        // 0x383210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38320c) {
            ctx->pc = 0x383270u;
            goto label_383270;
        }
    }
    ctx->pc = 0x383214u;
    // 0x383214: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x383214u;
    {
        const bool branch_taken_0x383214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x383214) {
            ctx->pc = 0x383228u;
            goto label_383228;
        }
    }
    ctx->pc = 0x38321Cu;
    // 0x38321c: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x38321Cu;
    {
        const bool branch_taken_0x38321c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38321c) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383224u;
    // 0x383224: 0x0  nop
    ctx->pc = 0x383224u;
    // NOP
label_383228:
    // 0x383228: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x383228u;
    {
        const bool branch_taken_0x383228 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x383228) {
            ctx->pc = 0x383250u;
            goto label_383250;
        }
    }
    ctx->pc = 0x383230u;
    // 0x383230: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x383230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x383234: 0x86640008  lh          $a0, 0x8($s3)
    ctx->pc = 0x383234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x383238: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x383238u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x38323c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x38323cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x383240: 0x846200a0  lh          $v0, 0xA0($v1)
    ctx->pc = 0x383240u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x383244: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x383244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x383248: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x383248u;
    {
        const bool branch_taken_0x383248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38324Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383248u;
        // 0x38324c: 0xa46200a0  sh          $v0, 0xA0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 160), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383248) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383250u;
label_383250:
    // 0x383250: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x383250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x383254: 0x86640008  lh          $a0, 0x8($s3)
    ctx->pc = 0x383254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x383258: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x383258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x38325c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x38325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x383260: 0x846200a0  lh          $v0, 0xA0($v1)
    ctx->pc = 0x383260u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x383264: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x383264u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x383268: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x383268u;
    {
        const bool branch_taken_0x383268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383268u;
        // 0x38326c: 0xa46200a0  sh          $v0, 0xA0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 160), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383268) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383270u;
label_383270:
    // 0x383270: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x383270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x383274: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x383274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x383278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x383278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38327c: 0x0  nop
    ctx->pc = 0x38327cu;
    // NOP
    // 0x383280: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x383280u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x383284: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x383284u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x383288: 0x0  nop
    ctx->pc = 0x383288u;
    // NOP
    // 0x38328c: 0x0  nop
    ctx->pc = 0x38328cu;
    // NOP
    // 0x383290: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x383290u;
    {
        const bool branch_taken_0x383290 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x383290) {
            ctx->pc = 0x3832B8u;
            goto label_3832b8;
        }
    }
    ctx->pc = 0x383298u;
    // 0x383298: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x383298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x38329c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38329cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3832a0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3832a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3832a4: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x3832a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3832a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3832a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3832ac: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x3832ACu;
    {
        const bool branch_taken_0x3832ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3832B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3832ACu;
        // 0x3832b0: 0xe4400030  swc1        $f0, 0x30($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3832ac) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x3832B4u;
    // 0x3832b4: 0x0  nop
    ctx->pc = 0x3832b4u;
    // NOP
label_3832b8:
    // 0x3832b8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3832b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3832bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3832bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3832c0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x3832c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3832c4: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x3832c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3832c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3832c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3832cc: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x3832CCu;
    {
        const bool branch_taken_0x3832cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3832D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3832CCu;
        // 0x3832d0: 0xe4400030  swc1        $f0, 0x30($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3832cc) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x3832D4u;
    // 0x3832d4: 0x0  nop
    ctx->pc = 0x3832d4u;
    // NOP
label_3832d8:
    // 0x3832d8: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3832D8u;
    {
        const bool branch_taken_0x3832d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3832d8) {
            ctx->pc = 0x383300u;
            goto label_383300;
        }
    }
    ctx->pc = 0x3832E0u;
    // 0x3832e0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3832e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3832e4: 0x86640008  lh          $a0, 0x8($s3)
    ctx->pc = 0x3832e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3832e8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3832e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3832ec: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x3832ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3832f0: 0x846200bc  lh          $v0, 0xBC($v1)
    ctx->pc = 0x3832f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3832f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3832f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3832f8: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x3832F8u;
    {
        const bool branch_taken_0x3832f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3832FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3832F8u;
        // 0x3832fc: 0xa46200bc  sh          $v0, 0xBC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3832f8) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383300u;
label_383300:
    // 0x383300: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x383300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x383304: 0x86640008  lh          $a0, 0x8($s3)
    ctx->pc = 0x383304u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x383308: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x383308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x38330c: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x38330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x383310: 0x846200bc  lh          $v0, 0xBC($v1)
    ctx->pc = 0x383310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x383314: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x383314u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x383318: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x383318u;
    {
        const bool branch_taken_0x383318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383318u;
        // 0x38331c: 0xa46200bc  sh          $v0, 0xBC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383318) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383320u;
label_383320:
    // 0x383320: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x383320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x383324: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x383324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x383328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x383328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38332c: 0x0  nop
    ctx->pc = 0x38332cu;
    // NOP
    // 0x383330: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x383330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x383334: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x383334u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x383338: 0x0  nop
    ctx->pc = 0x383338u;
    // NOP
    // 0x38333c: 0x0  nop
    ctx->pc = 0x38333cu;
    // NOP
    // 0x383340: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x383340u;
    {
        const bool branch_taken_0x383340 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x383340) {
            ctx->pc = 0x383368u;
            goto label_383368;
        }
    }
    ctx->pc = 0x383348u;
    // 0x383348: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x383348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x38334c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38334cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x383350: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x383350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x383354: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x383354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x383358: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x383358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x38335c: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x38335Cu;
    {
        const bool branch_taken_0x38335c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38335Cu;
        // 0x383360: 0xe4400068  swc1        $f0, 0x68($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38335c) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383364u;
    // 0x383364: 0x0  nop
    ctx->pc = 0x383364u;
    // NOP
label_383368:
    // 0x383368: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x383368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x38336c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38336cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x383370: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x383370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x383374: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x383374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x383378: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x383378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x38337c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x38337Cu;
    {
        const bool branch_taken_0x38337c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38337Cu;
        // 0x383380: 0xe4400068  swc1        $f0, 0x68($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38337c) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383384u;
    // 0x383384: 0x0  nop
    ctx->pc = 0x383384u;
    // NOP
label_383388:
    // 0x383388: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x383388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x38338c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x38338cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x383390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x383390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x383394: 0x0  nop
    ctx->pc = 0x383394u;
    // NOP
    // 0x383398: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x383398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x38339c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x38339cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3833a0: 0x0  nop
    ctx->pc = 0x3833a0u;
    // NOP
    // 0x3833a4: 0x0  nop
    ctx->pc = 0x3833a4u;
    // NOP
    // 0x3833a8: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3833A8u;
    {
        const bool branch_taken_0x3833a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3833a8) {
            ctx->pc = 0x3833C0u;
            goto label_3833c0;
        }
    }
    ctx->pc = 0x3833B0u;
    // 0x3833b0: 0xc68000e0  lwc1        $f0, 0xE0($s4)
    ctx->pc = 0x3833b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3833b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3833b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3833b8: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x3833B8u;
    {
        const bool branch_taken_0x3833b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3833BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3833B8u;
        // 0x3833bc: 0xe68000e0  swc1        $f0, 0xE0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3833b8) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x3833C0u;
label_3833c0:
    // 0x3833c0: 0xc68000e0  lwc1        $f0, 0xE0($s4)
    ctx->pc = 0x3833c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3833c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3833c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3833c8: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x3833C8u;
    {
        const bool branch_taken_0x3833c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3833CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3833C8u;
        // 0x3833cc: 0xe68000e0  swc1        $f0, 0xE0($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3833c8) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x3833D0u;
label_3833d0:
    // 0x3833d0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3833d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3833d4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x3833d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3833d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3833d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3833dc: 0x0  nop
    ctx->pc = 0x3833dcu;
    // NOP
    // 0x3833e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3833e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3833e4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3833e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3833e8: 0x0  nop
    ctx->pc = 0x3833e8u;
    // NOP
    // 0x3833ec: 0x0  nop
    ctx->pc = 0x3833ecu;
    // NOP
    // 0x3833f0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3833F0u;
    {
        const bool branch_taken_0x3833f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3833f0) {
            ctx->pc = 0x383408u;
            goto label_383408;
        }
    }
    ctx->pc = 0x3833F8u;
    // 0x3833f8: 0xc68000d8  lwc1        $f0, 0xD8($s4)
    ctx->pc = 0x3833f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3833fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3833fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x383400: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x383400u;
    {
        const bool branch_taken_0x383400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383400u;
        // 0x383404: 0xe68000d8  swc1        $f0, 0xD8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383400) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383408u;
label_383408:
    // 0x383408: 0xc68000d8  lwc1        $f0, 0xD8($s4)
    ctx->pc = 0x383408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38340c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38340cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x383410: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x383410u;
    {
        const bool branch_taken_0x383410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383410u;
        // 0x383414: 0xe68000d8  swc1        $f0, 0xD8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383410) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383418u;
label_383418:
    // 0x383418: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x383418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x38341c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x38341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x383420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x383420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x383424: 0x0  nop
    ctx->pc = 0x383424u;
    // NOP
    // 0x383428: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x383428u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x38342c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x38342cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x383430: 0x0  nop
    ctx->pc = 0x383430u;
    // NOP
    // 0x383434: 0x0  nop
    ctx->pc = 0x383434u;
    // NOP
    // 0x383438: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x383438u;
    {
        const bool branch_taken_0x383438 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x383438) {
            ctx->pc = 0x383450u;
            goto label_383450;
        }
    }
    ctx->pc = 0x383440u;
    // 0x383440: 0xc68000dc  lwc1        $f0, 0xDC($s4)
    ctx->pc = 0x383440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x383444: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x383444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x383448: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x383448u;
    {
        const bool branch_taken_0x383448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383448u;
        // 0x38344c: 0xe68000dc  swc1        $f0, 0xDC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383448) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383450u;
label_383450:
    // 0x383450: 0xc68000dc  lwc1        $f0, 0xDC($s4)
    ctx->pc = 0x383450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x383454: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x383454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x383458: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x383458u;
    {
        const bool branch_taken_0x383458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383458u;
        // 0x38345c: 0xe68000dc  swc1        $f0, 0xDC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383458) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383460u;
label_383460:
    // 0x383460: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x383460u;
    {
        const bool branch_taken_0x383460 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x383460) {
            ctx->pc = 0x383480u;
            goto label_383480;
        }
    }
    ctx->pc = 0x383468u;
    // 0x383468: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x383468u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x38346c: 0x968200ec  lhu         $v0, 0xEC($s4)
    ctx->pc = 0x38346cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x383470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x383470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x383474: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x383474u;
    {
        const bool branch_taken_0x383474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383474u;
        // 0x383478: 0xa68200ec  sh          $v0, 0xEC($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 236), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383474) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x38347Cu;
    // 0x38347c: 0x0  nop
    ctx->pc = 0x38347cu;
    // NOP
label_383480:
    // 0x383480: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x383480u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x383484: 0x968200ec  lhu         $v0, 0xEC($s4)
    ctx->pc = 0x383484u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x383488: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x383488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38348c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x38348Cu;
    {
        const bool branch_taken_0x38348c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38348Cu;
        // 0x383490: 0xa68200ec  sh          $v0, 0xEC($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 236), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38348c) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383494u;
    // 0x383494: 0x0  nop
    ctx->pc = 0x383494u;
    // NOP
label_383498:
    // 0x383498: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x383498u;
    {
        const bool branch_taken_0x383498 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x383498) {
            ctx->pc = 0x3834B8u;
            goto label_3834b8;
        }
    }
    ctx->pc = 0x3834A0u;
    // 0x3834a0: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x3834a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3834a4: 0x968200ee  lhu         $v0, 0xEE($s4)
    ctx->pc = 0x3834a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 238)));
    // 0x3834a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3834a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3834ac: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3834ACu;
    {
        const bool branch_taken_0x3834ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3834B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834ACu;
        // 0x3834b0: 0xa68200ee  sh          $v0, 0xEE($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 238), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3834ac) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x3834B4u;
    // 0x3834b4: 0x0  nop
    ctx->pc = 0x3834b4u;
    // NOP
label_3834b8:
    // 0x3834b8: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x3834b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3834bc: 0x968200ee  lhu         $v0, 0xEE($s4)
    ctx->pc = 0x3834bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 238)));
    // 0x3834c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3834c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3834c4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3834C4u;
    {
        const bool branch_taken_0x3834c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3834C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834C4u;
        // 0x3834c8: 0xa68200ee  sh          $v0, 0xEE($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 238), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3834c4) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x3834CCu;
    // 0x3834cc: 0x0  nop
    ctx->pc = 0x3834ccu;
    // NOP
label_3834d0:
    // 0x3834d0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3834D0u;
    {
        const bool branch_taken_0x3834d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3834d0) {
            ctx->pc = 0x3834F0u;
            goto label_3834f0;
        }
    }
    ctx->pc = 0x3834D8u;
    // 0x3834d8: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x3834d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3834dc: 0x968200f0  lhu         $v0, 0xF0($s4)
    ctx->pc = 0x3834dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x3834e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3834e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3834e4: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x3834E4u;
    {
        const bool branch_taken_0x3834e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3834E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834E4u;
        // 0x3834e8: 0xa68200f0  sh          $v0, 0xF0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 240), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3834e4) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x3834ECu;
    // 0x3834ec: 0x0  nop
    ctx->pc = 0x3834ecu;
    // NOP
label_3834f0:
    // 0x3834f0: 0x96630004  lhu         $v1, 0x4($s3)
    ctx->pc = 0x3834f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3834f4: 0x968200f0  lhu         $v0, 0xF0($s4)
    ctx->pc = 0x3834f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x3834f8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3834f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3834fc: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3834FCu;
    {
        const bool branch_taken_0x3834fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834FCu;
        // 0x383500: 0xa68200f0  sh          $v0, 0xF0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 240), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3834fc) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383504u;
    // 0x383504: 0x0  nop
    ctx->pc = 0x383504u;
    // NOP
label_383508:
    // 0x383508: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x383508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x38350c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x38350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x383510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x383510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x383514: 0x0  nop
    ctx->pc = 0x383514u;
    // NOP
    // 0x383518: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x383518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x38351c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x38351cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x383520: 0x0  nop
    ctx->pc = 0x383520u;
    // NOP
    // 0x383524: 0x0  nop
    ctx->pc = 0x383524u;
    // NOP
    // 0x383528: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x383528u;
    {
        const bool branch_taken_0x383528 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x383528) {
            ctx->pc = 0x383540u;
            goto label_383540;
        }
    }
    ctx->pc = 0x383530u;
    // 0x383530: 0xc68000e4  lwc1        $f0, 0xE4($s4)
    ctx->pc = 0x383530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x383534: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x383534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x383538: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x383538u;
    {
        const bool branch_taken_0x383538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383538u;
        // 0x38353c: 0xe68000e4  swc1        $f0, 0xE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383538) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383540u;
label_383540:
    // 0x383540: 0xc68000e4  lwc1        $f0, 0xE4($s4)
    ctx->pc = 0x383540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x383544: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x383544u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x383548: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x383548u;
    {
        const bool branch_taken_0x383548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383548u;
        // 0x38354c: 0xe68000e4  swc1        $f0, 0xE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383548) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383550u;
label_383550:
    // 0x383550: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x383550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x383554: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x383554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x383558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x383558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x38355c: 0x0  nop
    ctx->pc = 0x38355cu;
    // NOP
    // 0x383560: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x383560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x383564: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x383564u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x383568: 0x0  nop
    ctx->pc = 0x383568u;
    // NOP
    // 0x38356c: 0x0  nop
    ctx->pc = 0x38356cu;
    // NOP
    // 0x383570: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x383570u;
    {
        const bool branch_taken_0x383570 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x383570) {
            ctx->pc = 0x383588u;
            goto label_383588;
        }
    }
    ctx->pc = 0x383578u;
    // 0x383578: 0xc68000e8  lwc1        $f0, 0xE8($s4)
    ctx->pc = 0x383578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38357c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x38357cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x383580: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x383580u;
    {
        const bool branch_taken_0x383580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383580u;
        // 0x383584: 0xe68000e8  swc1        $f0, 0xE8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383580) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383588u;
label_383588:
    // 0x383588: 0xc68000e8  lwc1        $f0, 0xE8($s4)
    ctx->pc = 0x383588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x38358c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x38358cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x383590: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x383590u;
    {
        const bool branch_taken_0x383590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383590u;
        // 0x383594: 0xe68000e8  swc1        $f0, 0xE8($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x383590) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383598u;
label_383598:
    // 0x383598: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x383598u;
    {
        const bool branch_taken_0x383598 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x383598) {
            ctx->pc = 0x3835B8u;
            goto label_3835b8;
        }
    }
    ctx->pc = 0x3835A0u;
    // 0x3835a0: 0x82650000  lb          $a1, 0x0($s3)
    ctx->pc = 0x3835a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3835a4: 0xc0e0b50  jal         func_382D40
    ctx->pc = 0x3835A4u;
    SET_GPR_U32(ctx, 31, 0x3835ACu);
    ctx->pc = 0x3835A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3835A4u;
    // 0x3835a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382D40u, 0x3835A4u, 0x3835ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3835ACu;
label_3835ac:
    // 0x3835ac: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3835ACu;
    {
        const bool branch_taken_0x3835ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3835ac) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x3835B4u;
    // 0x3835b4: 0x0  nop
    ctx->pc = 0x3835b4u;
    // NOP
label_3835b8:
    // 0x3835b8: 0x82650000  lb          $a1, 0x0($s3)
    ctx->pc = 0x3835b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3835bc: 0xc0e0b6c  jal         func_382DB0
    ctx->pc = 0x3835BCu;
    SET_GPR_U32(ctx, 31, 0x3835C4u);
    ctx->pc = 0x3835C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3835BCu;
    // 0x3835c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382DB0u, 0x3835BCu, 0x3835C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3835C4u;
label_3835c4:
    // 0x3835c4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3835C4u;
    {
        const bool branch_taken_0x3835c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3835c4) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x3835CCu;
    // 0x3835cc: 0x0  nop
    ctx->pc = 0x3835ccu;
    // NOP
label_3835d0:
    // 0x3835d0: 0x92620010  lbu         $v0, 0x10($s3)
    ctx->pc = 0x3835d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x3835d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3835D4u;
    {
        const bool branch_taken_0x3835d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3835D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835D4u;
        // 0x3835d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3835d4) {
            ctx->pc = 0x3835E8u;
            goto label_3835e8;
        }
    }
    ctx->pc = 0x3835DCu;
    // 0x3835dc: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3835DCu;
    {
        const bool branch_taken_0x3835dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3835dc) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x3835E4u;
    // 0x3835e4: 0x0  nop
    ctx->pc = 0x3835e4u;
    // NOP
label_3835e8:
    // 0x3835e8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3835e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3835ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3835ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3835f0: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x3835f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3835f4: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3835F4u;
    {
        const bool branch_taken_0x3835f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3835F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3835F4u;
        // 0x3835f8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3835f4) {
            ctx->pc = 0x383660u;
            goto label_383660;
        }
    }
    ctx->pc = 0x3835FCu;
    // 0x3835fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3835fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x383600: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x383600u;
    {
        const bool branch_taken_0x383600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x383604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383600u;
        // 0x383604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383600) {
            ctx->pc = 0x383648u;
            goto label_383648;
        }
    }
    ctx->pc = 0x383608u;
    // 0x383608: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x383608u;
    {
        const bool branch_taken_0x383608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x383608) {
            ctx->pc = 0x383630u;
            goto label_383630;
        }
    }
    ctx->pc = 0x383610u;
    // 0x383610: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x383610u;
    {
        const bool branch_taken_0x383610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x383610) {
            ctx->pc = 0x383620u;
            goto label_383620;
        }
    }
    ctx->pc = 0x383618u;
    // 0x383618: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x383618u;
    {
        const bool branch_taken_0x383618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383618) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383620u;
label_383620:
    // 0x383620: 0x941021  addu        $v0, $a0, $s4
    ctx->pc = 0x383620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x383624: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x383624u;
    {
        const bool branch_taken_0x383624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383624u;
        // 0x383628: 0xa0450001  sb          $a1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383624) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x38362Cu;
    // 0x38362c: 0x0  nop
    ctx->pc = 0x38362cu;
    // NOP
label_383630:
    // 0x383630: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x383630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x383634: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x383634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x383638: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x383638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x38363c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38363cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x383640: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x383640u;
    {
        const bool branch_taken_0x383640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383640u;
        // 0x383644: 0xa0820001  sb          $v0, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383640) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383648u;
label_383648:
    // 0x383648: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x383648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x38364c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x38364cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x383650: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x383650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x383654: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x383654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x383658: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x383658u;
    {
        const bool branch_taken_0x383658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383658u;
        // 0x38365c: 0xa0820001  sb          $v0, 0x1($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383658) {
            ctx->pc = 0x383678u;
            goto label_383678;
        }
    }
    ctx->pc = 0x383660u;
label_383660:
    // 0x383660: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x383660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x383664: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x383664u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x383668: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x383668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x38366c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x38366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x383670: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x383670u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x383674: 0x0  nop
    ctx->pc = 0x383674u;
    // NOP
label_383678:
    // 0x383678: 0x82650000  lb          $a1, 0x0($s3)
    ctx->pc = 0x383678u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x38367c: 0xc0e0dac  jal         func_3836B0
    ctx->pc = 0x38367Cu;
    SET_GPR_U32(ctx, 31, 0x383684u);
    ctx->pc = 0x383680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38367Cu;
    // 0x383680: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3836B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3836B0u, 0x38367Cu, 0x383684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383684u;
label_383684:
    // 0x383684: 0x0  nop
    ctx->pc = 0x383684u;
    // NOP
label_383688:
    // 0x383688: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x383688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38368c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x38368cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x383690: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x383690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x383694: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x383694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x383698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x383698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38369c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38369cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3836a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3836A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3836A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3836A0u;
        // 0x3836a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3836A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3836A8u;
}
