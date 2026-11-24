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

// Function: sub_0026E050
// Address: 0x26e050 - 0x26e708
void sub_0026E050_0x26e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E050_0x26e050");
#endif

    switch (ctx->pc) {
        case 0x26e0a0u: goto label_26e0a0;
        case 0x26e0f8u: goto label_26e0f8;
        case 0x26e178u: goto label_26e178;
        case 0x26e1d0u: goto label_26e1d0;
        case 0x26e228u: goto label_26e228;
        case 0x26e280u: goto label_26e280;
        case 0x26e2d8u: goto label_26e2d8;
        case 0x26e330u: goto label_26e330;
        case 0x26e378u: goto label_26e378;
        case 0x26e3dcu: goto label_26e3dc;
        case 0x26e430u: goto label_26e430;
        case 0x26e480u: goto label_26e480;
        case 0x26e530u: goto label_26e530;
        case 0x26e57cu: goto label_26e57c;
        case 0x26e5c0u: goto label_26e5c0;
        case 0x26e61cu: goto label_26e61c;
        case 0x26e664u: goto label_26e664;
        case 0x26e6b0u: goto label_26e6b0;
        case 0x26e6f0u: goto label_26e6f0;
        default: break;
    }

    ctx->pc = 0x26e050u;

    // 0x26e050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26e050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26e054: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26e054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26e058: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x26e058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x26e05c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26e05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26e060: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26e060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26e064: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26e064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e068: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26e068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26e06c: 0x908400a1  lbu         $a0, 0xA1($a0)
    ctx->pc = 0x26e06cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 161)));
    // 0x26e070: 0x1083017f  beq         $a0, $v1, . + 4 + (0x17F << 2)
    ctx->pc = 0x26E070u;
    {
        const bool branch_taken_0x26e070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x26E074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E070u;
        // 0x26e074: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e070) {
            ctx->pc = 0x26E670u;
            goto label_26e670;
        }
    }
    ctx->pc = 0x26E078u;
    // 0x26e078: 0x108b0153  beq         $a0, $t3, . + 4 + (0x153 << 2)
    ctx->pc = 0x26E078u;
    {
        const bool branch_taken_0x26e078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 11));
        if (branch_taken_0x26e078) {
            ctx->pc = 0x26E5C8u;
            goto label_26e5c8;
        }
    }
    ctx->pc = 0x26E080u;
    // 0x26e080: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E080u;
    {
        const bool branch_taken_0x26e080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e080) {
            ctx->pc = 0x26E090u;
            goto label_26e090;
        }
    }
    ctx->pc = 0x26E088u;
    // 0x26e088: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x26E088u;
    {
        const bool branch_taken_0x26e088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e088) {
            ctx->pc = 0x26E6F0u;
            goto label_26e6f0;
        }
    }
    ctx->pc = 0x26E090u;
label_26e090:
    // 0x26e090: 0x3c11004e  lui         $s1, 0x4E
    ctx->pc = 0x26e090u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)78 << 16));
    // 0x26e094: 0x26312580  addiu       $s1, $s1, 0x2580
    ctx->pc = 0x26e094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 9600));
    // 0x26e098: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26e098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e09c: 0x0  nop
    ctx->pc = 0x26e09cu;
    // NOP
label_26e0a0:
    // 0x26e0a0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26e0a4: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x26e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x26e0a8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e0ac: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x26e0acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26e0b0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e0b4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26e0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26e0b8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x26e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x26e0bc: 0x824200a5  lb          $v0, 0xA5($s2)
    ctx->pc = 0x26e0bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 165)));
    // 0x26e0c0: 0x96260002  lhu         $a2, 0x2($s1)
    ctx->pc = 0x26e0c0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x26e0c4: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x26e0c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26e0c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E0C8u;
    {
        const bool branch_taken_0x26e0c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0C8u;
        // 0x26e0cc: 0x96250000  lhu         $a1, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0c8) {
            ctx->pc = 0x26E0D8u;
            goto label_26e0d8;
        }
    }
    ctx->pc = 0x26E0D0u;
    // 0x26e0d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26E0D0u;
    {
        const bool branch_taken_0x26e0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E0D0u;
        // 0x26e0d4: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0d0) {
            ctx->pc = 0x26E0DCu;
            goto label_26e0dc;
        }
    }
    ctx->pc = 0x26E0D8u;
label_26e0d8:
    // 0x26e0d8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_26e0dc:
    // 0x26e0dc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e0e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e0e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0e4: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e0e8: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x26e0e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x26e0ec: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x26e0ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26e0f0: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E0F0u;
    SET_GPR_U32(ctx, 31, 0x26E0F8u);
    ctx->pc = 0x26E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E0F0u;
    // 0x26e0f4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E0F0u, 0x26E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E0F8u;
label_26e0f8:
    // 0x26e0f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e0fc: 0x2e02000e  sltiu       $v0, $s0, 0xE
    ctx->pc = 0x26e0fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x26e100: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x26E100u;
    {
        const bool branch_taken_0x26e100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E100u;
        // 0x26e104: 0x26310006  addiu       $s1, $s1, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e100) {
            ctx->pc = 0x26E0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26e0a0;
        }
    }
    ctx->pc = 0x26E108u;
    // 0x26e108: 0x824300a5  lb          $v1, 0xA5($s2)
    ctx->pc = 0x26e108u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 165)));
    // 0x26e10c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e110: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26E110u;
    {
        const bool branch_taken_0x26e110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26E114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E110u;
        // 0x26e114: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e110) {
            ctx->pc = 0x26E11Cu;
            goto label_26e11c;
        }
    }
    ctx->pc = 0x26E118u;
    // 0x26e118: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x26e118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_26e11c:
    // 0x26e11c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x26e11cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26e120: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e124: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26e124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26e128: 0x27838100  addiu       $v1, $gp, -0x7F00
    ctx->pc = 0x26e128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934784));
    // 0x26e12c: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x26e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x26e130: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e134: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e138: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x26e138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x26e13c: 0x8e4c0090  lw          $t4, 0x90($s2)
    ctx->pc = 0x26e13cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x26e140: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e144: 0x2406002f  addiu       $a2, $zero, 0x2F
    ctx->pc = 0x26e144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x26e148: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e14c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x26e14cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e150: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x26e150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x26e154: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x26e154u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26e158: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x26e158u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e15c: 0xc67c2  srl         $t4, $t4, 31
    ctx->pc = 0x26e15cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
    // 0x26e160: 0x318c0001  andi        $t4, $t4, 0x1
    ctx->pc = 0x26e160u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x26e164: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x26e164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x26e168: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x26e168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e16c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26e16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26e170: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E170u;
    SET_GPR_U32(ctx, 31, 0x26E178u);
    ctx->pc = 0x26E174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E170u;
    // 0x26e174: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E170u, 0x26E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E178u;
label_26e178:
    // 0x26e178: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26e178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26e17c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e17cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e180: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x26e180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x26e184: 0x27838100  addiu       $v1, $gp, -0x7F00
    ctx->pc = 0x26e184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934784));
    // 0x26e188: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e18c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e190: 0x8e4c0090  lw          $t4, 0x90($s2)
    ctx->pc = 0x26e190u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x26e194: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e198: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x26e198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x26e19c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x26e19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x26e1a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e1a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1a4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x26e1a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1a8: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x26e1a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x26e1ac: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x26e1acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26e1b0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x26e1b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e1b4: 0xc6782  srl         $t4, $t4, 30
    ctx->pc = 0x26e1b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 30));
    // 0x26e1b8: 0x318c0001  andi        $t4, $t4, 0x1
    ctx->pc = 0x26e1b8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x26e1bc: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x26e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x26e1c0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x26e1c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e1c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26e1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26e1c8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E1C8u;
    SET_GPR_U32(ctx, 31, 0x26E1D0u);
    ctx->pc = 0x26E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E1C8u;
    // 0x26e1cc: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E1C8u, 0x26E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E1D0u;
label_26e1d0:
    // 0x26e1d0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26e1d4: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e1d8: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x26e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x26e1dc: 0x27838108  addiu       $v1, $gp, -0x7EF8
    ctx->pc = 0x26e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934792));
    // 0x26e1e0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e1e4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x26e1e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1e8: 0x8e4c0090  lw          $t4, 0x90($s2)
    ctx->pc = 0x26e1e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x26e1ec: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e1f0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e1f4: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x26e1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x26e1f8: 0x24060061  addiu       $a2, $zero, 0x61
    ctx->pc = 0x26e1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x26e1fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e1fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e200: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x26e200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x26e204: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x26e204u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26e208: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x26e208u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e20c: 0xc6742  srl         $t4, $t4, 29
    ctx->pc = 0x26e20cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 29));
    // 0x26e210: 0x318c0001  andi        $t4, $t4, 0x1
    ctx->pc = 0x26e210u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x26e214: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x26e214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x26e218: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x26e218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e21c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26e21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26e220: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E220u;
    SET_GPR_U32(ctx, 31, 0x26E228u);
    ctx->pc = 0x26E224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E220u;
    // 0x26e224: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E220u, 0x26E228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E228u;
label_26e228:
    // 0x26e228: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26e228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26e22c: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e22cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e230: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x26e230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x26e234: 0x27838108  addiu       $v1, $gp, -0x7EF8
    ctx->pc = 0x26e234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934792));
    // 0x26e238: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e23c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e240: 0x8e4c0090  lw          $t4, 0x90($s2)
    ctx->pc = 0x26e240u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x26e244: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e248: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x26e248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x26e24c: 0x2406007a  addiu       $a2, $zero, 0x7A
    ctx->pc = 0x26e24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x26e250: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e254: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e254u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e258: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x26e258u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x26e25c: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x26e25cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26e260: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x26e260u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e264: 0xc6702  srl         $t4, $t4, 28
    ctx->pc = 0x26e264u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 28));
    // 0x26e268: 0x318c0001  andi        $t4, $t4, 0x1
    ctx->pc = 0x26e268u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x26e26c: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x26e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x26e270: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x26e270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e274: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26e274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26e278: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E278u;
    SET_GPR_U32(ctx, 31, 0x26E280u);
    ctx->pc = 0x26E27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E278u;
    // 0x26e27c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E278u, 0x26E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E280u;
label_26e280:
    // 0x26e280: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26e280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26e284: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e288: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x26e288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x26e28c: 0x27838108  addiu       $v1, $gp, -0x7EF8
    ctx->pc = 0x26e28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934792));
    // 0x26e290: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e294: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e298: 0x8e4c0090  lw          $t4, 0x90($s2)
    ctx->pc = 0x26e298u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x26e29c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e2a0: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x26e2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x26e2a4: 0x24060093  addiu       $a2, $zero, 0x93
    ctx->pc = 0x26e2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x26e2a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e2a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e2ac: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e2acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e2b0: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x26e2b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x26e2b4: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x26e2b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26e2b8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x26e2b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e2bc: 0xc66c2  srl         $t4, $t4, 27
    ctx->pc = 0x26e2bcu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 27));
    // 0x26e2c0: 0x318c0001  andi        $t4, $t4, 0x1
    ctx->pc = 0x26e2c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x26e2c4: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x26e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x26e2c8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x26e2c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e2cc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26e2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26e2d0: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E2D0u;
    SET_GPR_U32(ctx, 31, 0x26E2D8u);
    ctx->pc = 0x26E2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E2D0u;
    // 0x26e2d4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E2D0u, 0x26E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E2D8u;
label_26e2d8:
    // 0x26e2d8: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26e2dc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e2e0: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x26e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x26e2e4: 0x27838108  addiu       $v1, $gp, -0x7EF8
    ctx->pc = 0x26e2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934792));
    // 0x26e2e8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e2ec: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e2f0: 0x8e4c0090  lw          $t4, 0x90($s2)
    ctx->pc = 0x26e2f0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x26e2f4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e2f8: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x26e2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x26e2fc: 0x240600ac  addiu       $a2, $zero, 0xAC
    ctx->pc = 0x26e2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x26e300: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e304: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e304u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e308: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x26e308u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x26e30c: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x26e30cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26e310: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x26e310u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e314: 0xc6682  srl         $t4, $t4, 26
    ctx->pc = 0x26e314u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 26));
    // 0x26e318: 0x318c0001  andi        $t4, $t4, 0x1
    ctx->pc = 0x26e318u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x26e31c: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x26e31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x26e320: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x26e320u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e324: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26e324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26e328: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E328u;
    SET_GPR_U32(ctx, 31, 0x26E330u);
    ctx->pc = 0x26E32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E328u;
    // 0x26e32c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E328u, 0x26E330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E330u;
label_26e330:
    // 0x26e330: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x26e330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x26e334: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e334u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e338: 0x246359c8  addiu       $v1, $v1, 0x59C8
    ctx->pc = 0x26e338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22984));
    // 0x26e33c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e340: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x26e340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x26e344: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e348: 0x82430094  lb          $v1, 0x94($s2)
    ctx->pc = 0x26e348u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x26e34c: 0x24050157  addiu       $a1, $zero, 0x157
    ctx->pc = 0x26e34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 343));
    // 0x26e350: 0x240600c5  addiu       $a2, $zero, 0xC5
    ctx->pc = 0x26e350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
    // 0x26e354: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e358: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e35c: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x26e35cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x26e360: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x26e360u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26e364: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x26e364u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e368: 0x2463002b  addiu       $v1, $v1, 0x2B
    ctx->pc = 0x26e368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 43));
    // 0x26e36c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26e36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26e370: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E370u;
    SET_GPR_U32(ctx, 31, 0x26E378u);
    ctx->pc = 0x26E374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E370u;
    // 0x26e374: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E370u, 0x26E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E378u;
label_26e378:
    // 0x26e378: 0x82420094  lb          $v0, 0x94($s2)
    ctx->pc = 0x26e378u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x26e37c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x26e37cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26e380: 0x14200019  bnez        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x26E380u;
    {
        const bool branch_taken_0x26e380 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E380u;
        // 0x26e384: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e380) {
            ctx->pc = 0x26E3E8u;
            goto label_26e3e8;
        }
    }
    ctx->pc = 0x26E388u;
    // 0x26e388: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e38c: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x26e38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x26e390: 0x2783810c  addiu       $v1, $gp, -0x7EF4
    ctx->pc = 0x26e390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934796));
    // 0x26e394: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e398: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e39c: 0x8e4c0090  lw          $t4, 0x90($s2)
    ctx->pc = 0x26e39cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x26e3a0: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e3a4: 0x24050154  addiu       $a1, $zero, 0x154
    ctx->pc = 0x26e3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x26e3a8: 0x240600de  addiu       $a2, $zero, 0xDE
    ctx->pc = 0x26e3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x26e3ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e3b0: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e3b4: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x26e3b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x26e3b8: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x26e3b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26e3bc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x26e3bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e3c0: 0xc6642  srl         $t4, $t4, 25
    ctx->pc = 0x26e3c0u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 12), 25));
    // 0x26e3c4: 0x318c0001  andi        $t4, $t4, 0x1
    ctx->pc = 0x26e3c4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x26e3c8: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x26e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x26e3cc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x26e3ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e3d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26e3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26e3d4: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E3D4u;
    SET_GPR_U32(ctx, 31, 0x26E3DCu);
    ctx->pc = 0x26E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E3D4u;
    // 0x26e3d8: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E3D4u, 0x26E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E3DCu;
label_26e3dc:
    // 0x26e3dc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26E3DCu;
    {
        const bool branch_taken_0x26e3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e3dc) {
            ctx->pc = 0x26E430u;
            goto label_26e430;
        }
    }
    ctx->pc = 0x26E3E4u;
    // 0x26e3e4: 0x0  nop
    ctx->pc = 0x26e3e4u;
    // NOP
label_26e3e8:
    // 0x26e3e8: 0x8e4b0090  lw          $t3, 0x90($s2)
    ctx->pc = 0x26e3e8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x26e3ec: 0x3c03fdff  lui         $v1, 0xFDFF
    ctx->pc = 0x26e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65023 << 16));
    // 0x26e3f0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26e3f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26e3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26e3f8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e3fc: 0x244259d0  addiu       $v0, $v0, 0x59D0
    ctx->pc = 0x26e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22992));
    // 0x26e400: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e404: 0x24050154  addiu       $a1, $zero, 0x154
    ctx->pc = 0x26e404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
    // 0x26e408: 0x240600de  addiu       $a2, $zero, 0xDE
    ctx->pc = 0x26e408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 222));
    // 0x26e40c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e40cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e410: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e414: 0x1631824  and         $v1, $t3, $v1
    ctx->pc = 0x26e414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x26e418: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x26e418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x26e41c: 0xae430090  sw          $v1, 0x90($s2)
    ctx->pc = 0x26e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 3));
    // 0x26e420: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x26e420u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26e424: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x26e424u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e428: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E428u;
    SET_GPR_U32(ctx, 31, 0x26E430u);
    ctx->pc = 0x26E42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E428u;
    // 0x26e42c: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E428u, 0x26E430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E430u;
label_26e430:
    // 0x26e430: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26e430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26e434: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x26e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x26e438: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e43c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e440: 0x27838110  addiu       $v1, $gp, -0x7EF0
    ctx->pc = 0x26e440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934800));
    // 0x26e444: 0x824c0095  lb          $t4, 0x95($s2)
    ctx->pc = 0x26e444u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 149)));
    // 0x26e448: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e44c: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e450: 0x24050172  addiu       $a1, $zero, 0x172
    ctx->pc = 0x26e450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
    // 0x26e454: 0x240600f7  addiu       $a2, $zero, 0xF7
    ctx->pc = 0x26e454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 247));
    // 0x26e458: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e45c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e460: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x26e460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x26e464: 0x240a0014  addiu       $t2, $zero, 0x14
    ctx->pc = 0x26e464u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26e468: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x26e468u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e46c: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x26e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x26e470: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x26e470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26e474: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26e474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26e478: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E478u;
    SET_GPR_U32(ctx, 31, 0x26E480u);
    ctx->pc = 0x26E47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E478u;
    // 0x26e47c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E478u, 0x26E480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E480u;
label_26e480:
    // 0x26e480: 0x924300a0  lbu         $v1, 0xA0($s2)
    ctx->pc = 0x26e480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x26e484: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x26e484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26e488: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x26E488u;
    {
        const bool branch_taken_0x26e488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E488u;
        // 0x26e48c: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e488) {
            ctx->pc = 0x26E530u;
            goto label_26e530;
        }
    }
    ctx->pc = 0x26E490u;
    // 0x26e490: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x26E490u;
    {
        const bool branch_taken_0x26e490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e490) {
            ctx->pc = 0x26E530u;
            goto label_26e530;
        }
    }
    ctx->pc = 0x26E498u;
    // 0x26e498: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x26e498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26e49c: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x26E49Cu;
    {
        const bool branch_taken_0x26e49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E49Cu;
        // 0x26e4a0: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e49c) {
            ctx->pc = 0x26E530u;
            goto label_26e530;
        }
    }
    ctx->pc = 0x26E4A4u;
    // 0x26e4a4: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26E4A4u;
    {
        const bool branch_taken_0x26e4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e4a4) {
            ctx->pc = 0x26E530u;
            goto label_26e530;
        }
    }
    ctx->pc = 0x26E4ACu;
    // 0x26e4ac: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x26e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26e4b0: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x26E4B0u;
    {
        const bool branch_taken_0x26e4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E4B0u;
        // 0x26e4b4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e4b0) {
            ctx->pc = 0x26E530u;
            goto label_26e530;
        }
    }
    ctx->pc = 0x26E4B8u;
    // 0x26e4b8: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26E4B8u;
    {
        const bool branch_taken_0x26e4b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26e4b8) {
            ctx->pc = 0x26E530u;
            goto label_26e530;
        }
    }
    ctx->pc = 0x26E4C0u;
    // 0x26e4c0: 0x824400a4  lb          $a0, 0xA4($s2)
    ctx->pc = 0x26e4c0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x26e4c4: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x26e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x26e4c8: 0x246325d8  addiu       $v1, $v1, 0x25D8
    ctx->pc = 0x26e4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9688));
    // 0x26e4cc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x26e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26e4d0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x26e4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26e4d4: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E4D4u;
    {
        const bool branch_taken_0x26e4d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x26E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E4D4u;
        // 0x26e4d8: 0x90630000  lbu         $v1, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e4d4) {
            ctx->pc = 0x26E4F0u;
            goto label_26e4f0;
        }
    }
    ctx->pc = 0x26E4DCu;
    // 0x26e4dc: 0x82420094  lb          $v0, 0x94($s2)
    ctx->pc = 0x26e4dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x26e4e0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x26e4e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26e4e4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x26E4E4u;
    {
        const bool branch_taken_0x26e4e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e4e4) {
            ctx->pc = 0x26E4F0u;
            goto label_26e4f0;
        }
    }
    ctx->pc = 0x26E4ECu;
    // 0x26e4ec: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x26e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_26e4f0:
    // 0x26e4f0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26e4f4: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x26e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x26e4f8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e4fc: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e500: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e504: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e508: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x26e508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26e50c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26e50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26e510: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x26e510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x26e514: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x26e514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x26e518: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e51c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e51cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e520: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x26e520u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x26e524: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x26e524u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x26e528: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E528u;
    SET_GPR_U32(ctx, 31, 0x26E530u);
    ctx->pc = 0x26E52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E528u;
    // 0x26e52c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E528u, 0x26E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E530u;
label_26e530:
    // 0x26e530: 0x824200a4  lb          $v0, 0xA4($s2)
    ctx->pc = 0x26e530u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x26e534: 0x28410009  slti        $at, $v0, 0x9
    ctx->pc = 0x26e534u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x26e538: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x26E538u;
    {
        const bool branch_taken_0x26e538 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E538u;
        // 0x26e53c: 0x3c030067  lui         $v1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e538) {
            ctx->pc = 0x26E580u;
            goto label_26e580;
        }
    }
    ctx->pc = 0x26E540u;
    // 0x26e540: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e544: 0x246359c8  addiu       $v1, $v1, 0x59C8
    ctx->pc = 0x26e544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22984));
    // 0x26e548: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e54c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x26e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x26e550: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x26e550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x26e554: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x26e554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x26e558: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e55c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x26e55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26e560: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x26e560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x26e564: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e568: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e56c: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x26e56cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x26e570: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x26e570u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x26e574: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E574u;
    SET_GPR_U32(ctx, 31, 0x26E57Cu);
    ctx->pc = 0x26E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E574u;
    // 0x26e578: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E574u, 0x26E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E57Cu;
label_26e57c:
    // 0x26e57c: 0x0  nop
    ctx->pc = 0x26e57cu;
    // NOP
label_26e580:
    // 0x26e580: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26e580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26e584: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x26e584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x26e588: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e58c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e590: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e594: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e598: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x26e598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x26e59c: 0x34420012  ori         $v0, $v0, 0x12
    ctx->pc = 0x26e59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
    // 0x26e5a0: 0x2406019f  addiu       $a2, $zero, 0x19F
    ctx->pc = 0x26e5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 415));
    // 0x26e5a4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x26e5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x26e5a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e5a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e5ac: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e5acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e5b0: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x26e5b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x26e5b4: 0x240a0013  addiu       $t2, $zero, 0x13
    ctx->pc = 0x26e5b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x26e5b8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E5B8u;
    SET_GPR_U32(ctx, 31, 0x26E5C0u);
    ctx->pc = 0x26E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E5B8u;
    // 0x26e5bc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E5B8u, 0x26E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E5C0u;
label_26e5c0:
    // 0x26e5c0: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x26E5C0u;
    {
        const bool branch_taken_0x26e5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e5c0) {
            ctx->pc = 0x26E6F0u;
            goto label_26e6f0;
        }
    }
    ctx->pc = 0x26E5C8u;
label_26e5c8:
    // 0x26e5c8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x26e5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x26e5cc: 0x9022fc8d  lbu         $v0, -0x373($at)
    ctx->pc = 0x26e5ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x81FC8Du));
    // 0x26e5d0: 0x104b0003  beq         $v0, $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E5D0u;
    {
        const bool branch_taken_0x26e5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        if (branch_taken_0x26e5d0) {
            ctx->pc = 0x26E5E0u;
            goto label_26e5e0;
        }
    }
    ctx->pc = 0x26E5D8u;
    // 0x26e5d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x26E5D8u;
    {
        const bool branch_taken_0x26e5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e5d8) {
            ctx->pc = 0x26E628u;
            goto label_26e628;
        }
    }
    ctx->pc = 0x26E5E0u;
label_26e5e0:
    // 0x26e5e0: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26e5e4: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x26e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x26e5e8: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e5ec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e5f0: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e5f4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e5f8: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x26e5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26e5fc: 0x34420023  ori         $v0, $v0, 0x23
    ctx->pc = 0x26e5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35);
    // 0x26e600: 0x24060144  addiu       $a2, $zero, 0x144
    ctx->pc = 0x26e600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 324));
    // 0x26e604: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x26e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x26e608: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e60c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e60cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e610: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x26e610u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x26e614: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E614u;
    SET_GPR_U32(ctx, 31, 0x26E61Cu);
    ctx->pc = 0x26E618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E614u;
    // 0x26e618: 0x240a0015  addiu       $t2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E614u, 0x26E61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E61Cu;
label_26e61c:
    // 0x26e61c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x26E61Cu;
    {
        const bool branch_taken_0x26e61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e61c) {
            ctx->pc = 0x26E6F0u;
            goto label_26e6f0;
        }
    }
    ctx->pc = 0x26E624u;
    // 0x26e624: 0x0  nop
    ctx->pc = 0x26e624u;
    // NOP
label_26e628:
    // 0x26e628: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26e628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26e62c: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x26e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x26e630: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e634: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e638: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e63c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e640: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x26e640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26e644: 0x34420023  ori         $v0, $v0, 0x23
    ctx->pc = 0x26e644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35);
    // 0x26e648: 0x2406014d  addiu       $a2, $zero, 0x14D
    ctx->pc = 0x26e648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 333));
    // 0x26e64c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x26e64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x26e650: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e654: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e658: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x26e658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x26e65c: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E65Cu;
    SET_GPR_U32(ctx, 31, 0x26E664u);
    ctx->pc = 0x26E660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E65Cu;
    // 0x26e660: 0x240a0015  addiu       $t2, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E65Cu, 0x26E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E664u;
label_26e664:
    // 0x26e664: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x26E664u;
    {
        const bool branch_taken_0x26e664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e664) {
            ctx->pc = 0x26E6F0u;
            goto label_26e6f0;
        }
    }
    ctx->pc = 0x26E66Cu;
    // 0x26e66c: 0x0  nop
    ctx->pc = 0x26e66cu;
    // NOP
label_26e670:
    // 0x26e670: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x26e670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x26e674: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x26e674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
    // 0x26e678: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e67c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x26e67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x26e680: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e684: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e688: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x26e688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26e68c: 0x34420024  ori         $v0, $v0, 0x24
    ctx->pc = 0x26e68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36);
    // 0x26e690: 0x2406014d  addiu       $a2, $zero, 0x14D
    ctx->pc = 0x26e690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 333));
    // 0x26e694: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x26e694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x26e698: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e69c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e69cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e6a0: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x26e6a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x26e6a4: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x26e6a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x26e6a8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E6A8u;
    SET_GPR_U32(ctx, 31, 0x26E6B0u);
    ctx->pc = 0x26E6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E6A8u;
    // 0x26e6ac: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E6A8u, 0x26E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E6B0u;
label_26e6b0:
    // 0x26e6b0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x26e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x26e6b4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x26e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x26e6b8: 0x246359c8  addiu       $v1, $v1, 0x59C8
    ctx->pc = 0x26e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22984));
    // 0x26e6bc: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x26e6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x26e6c0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x26e6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x26e6c4: 0x34420025  ori         $v0, $v0, 0x25
    ctx->pc = 0x26e6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37);
    // 0x26e6c8: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x26e6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x26e6cc: 0x248489c0  addiu       $a0, $a0, -0x7640
    ctx->pc = 0x26e6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    // 0x26e6d0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x26e6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x26e6d4: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x26e6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x26e6d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26e6d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6dc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x26e6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x26e6e0: 0x24090013  addiu       $t1, $zero, 0x13
    ctx->pc = 0x26e6e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x26e6e4: 0x240a0015  addiu       $t2, $zero, 0x15
    ctx->pc = 0x26e6e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x26e6e8: 0xc095fa8  jal         func_257EA0
    ctx->pc = 0x26E6E8u;
    SET_GPR_U32(ctx, 31, 0x26E6F0u);
    ctx->pc = 0x26E6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E6E8u;
    // 0x26e6ec: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257EA0u, 0x26E6E8u, 0x26E6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26E6F0u;
label_26e6f0:
    // 0x26e6f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x26e6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e6f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26e6f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e6f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26e6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e6fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26e6fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e700: 0x3e00008  jr          $ra
    ctx->pc = 0x26E700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E700u;
        // 0x26e704: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E708u;
}
