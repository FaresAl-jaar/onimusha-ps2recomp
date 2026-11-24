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

// Function: sub_00126110
// Address: 0x126110 - 0x12628c
void sub_00126110_0x126110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126110_0x126110");
#endif

    switch (ctx->pc) {
        case 0x126140u: goto label_126140;
        case 0x126150u: goto label_126150;
        case 0x12615cu: goto label_12615c;
        case 0x12619cu: goto label_12619c;
        case 0x1261c8u: goto label_1261c8;
        case 0x126220u: goto label_126220;
        case 0x126268u: goto label_126268;
        default: break;
    }

    ctx->pc = 0x126110u;

    // 0x126110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126114: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126118: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x126118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12611c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12611cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x126120: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x126120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126124: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x126124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12612c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12612cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x126130: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x126130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126134: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x126134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126138: 0xc04982a  jal         func_1260A8
    ctx->pc = 0x126138u;
    SET_GPR_U32(ctx, 31, 0x126140u);
    ctx->pc = 0x12613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126138u;
    // 0x12613c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1260A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1260A8u, 0x126138u, 0x126140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126140u;
label_126140:
    // 0x126140: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x126140u;
    {
        const bool branch_taken_0x126140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126140u;
        // 0x126144: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126140) {
            ctx->pc = 0x126178u;
            goto label_126178;
        }
    }
    ctx->pc = 0x126148u;
    // 0x126148: 0xc0495ec  jal         func_1257B0
    ctx->pc = 0x126148u;
    SET_GPR_U32(ctx, 31, 0x126150u);
    ctx->pc = 0x12614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126148u;
    // 0x12614c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1257B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1257B0u, 0x126148u, 0x126150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126150u;
label_126150:
    // 0x126150: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x126150u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126154: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x126154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x126158: 0xac4f0010  sw          $t7, 0x10($v0)
    ctx->pc = 0x126158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 15));
label_12615c:
    // 0x12615c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12615cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x126164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126168: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x126168u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12616c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12616cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126170: 0x3e00008  jr          $ra
    ctx->pc = 0x126170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126170u;
        // 0x126174: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126178u;
label_126178:
    // 0x126178: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x126178u;
    {
        const bool branch_taken_0x126178 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x12617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126178u;
        // 0x12617c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126178) {
            ctx->pc = 0x126190u;
            goto label_126190;
        }
    }
    ctx->pc = 0x126180u;
    // 0x126180: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x126180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126184: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x126184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126188: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x126188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12618c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12618cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126190:
    // 0x126190: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x126190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x126194: 0xc0495ec  jal         func_1257B0
    ctx->pc = 0x126194u;
    SET_GPR_U32(ctx, 31, 0x12619Cu);
    ctx->pc = 0x126198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126194u;
    // 0x126198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1257B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1257B0u, 0x126194u, 0x12619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12619Cu;
label_12619c:
    // 0x12619c: 0x8e290010  lw          $t1, 0x10($s1)
    ctx->pc = 0x12619cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1261a0: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1261a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1261a4: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1261a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1261a8: 0x26450014  addiu       $a1, $s2, 0x14
    ctx->pc = 0x1261a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1261ac: 0x97080  sll         $t6, $t1, 2
    ctx->pc = 0x1261acu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1261b0: 0xac50000c  sw          $s0, 0xC($v0)
    ctx->pc = 0x1261b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
    // 0x1261b4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1261b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1261b8: 0x8e3821  addu        $a3, $a0, $t6
    ctx->pc = 0x1261b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x1261bc: 0xaf4021  addu        $t0, $a1, $t7
    ctx->pc = 0x1261bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1261c0: 0x244a0014  addiu       $t2, $v0, 0x14
    ctx->pc = 0x1261c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1261c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1261c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1261c8:
    // 0x1261c8: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x1261c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1261cc: 0x8caf0000  lw          $t7, 0x0($a1)
    ctx->pc = 0x1261ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1261d0: 0x31aeffff  andi        $t6, $t5, 0xFFFF
    ctx->pc = 0x1261d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x1261d4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1261d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1261d8: 0x31ecffff  andi        $t4, $t7, 0xFFFF
    ctx->pc = 0x1261d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x1261dc: 0xd6c02  srl         $t5, $t5, 16
    ctx->pc = 0x1261dcu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x1261e0: 0x1cc7023  subu        $t6, $t6, $t4
    ctx->pc = 0x1261e0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x1261e4: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x1261e4u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x1261e8: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x1261e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x1261ec: 0x1af6823  subu        $t5, $t5, $t7
    ctx->pc = 0x1261ecu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x1261f0: 0xe5c03  sra         $t3, $t6, 16
    ctx->pc = 0x1261f0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 14), 16));
    // 0x1261f4: 0xa54e0000  sh          $t6, 0x0($t2)
    ctx->pc = 0x1261f4u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x1261f8: 0x1ab6821  addu        $t5, $t5, $t3
    ctx->pc = 0x1261f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x1261fc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1261fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x126200: 0xa54d0002  sh          $t5, 0x2($t2)
    ctx->pc = 0x126200u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 13));
    // 0x126204: 0xd5c03  sra         $t3, $t5, 16
    ctx->pc = 0x126204u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 13), 16));
    // 0x126208: 0xa8782b  sltu        $t7, $a1, $t0
    ctx->pc = 0x126208u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x12620c: 0x15e0ffee  bnez        $t7, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12620Cu;
    {
        const bool branch_taken_0x12620c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12620Cu;
        // 0x126210: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12620c) {
            ctx->pc = 0x1261C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1261c8;
        }
    }
    ctx->pc = 0x126214u;
    // 0x126214: 0x87782b  sltu        $t7, $a0, $a3
    ctx->pc = 0x126214u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x126218: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x126218u;
    {
        const bool branch_taken_0x126218 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126218u;
        // 0x12621c: 0x140702d  daddu       $t6, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126218) {
            ctx->pc = 0x126258u;
            goto label_126258;
        }
    }
    ctx->pc = 0x126220u;
label_126220:
    // 0x126220: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x126220u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x126224: 0x31eeffff  andi        $t6, $t7, 0xFFFF
    ctx->pc = 0x126224u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65535);
    // 0x126228: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x126228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12622c: 0x1cb7021  addu        $t6, $t6, $t3
    ctx->pc = 0x12622cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x126230: 0xf7c02  srl         $t7, $t7, 16
    ctx->pc = 0x126230u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 16));
    // 0x126234: 0xe5c03  sra         $t3, $t6, 16
    ctx->pc = 0x126234u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 14), 16));
    // 0x126238: 0xa54e0000  sh          $t6, 0x0($t2)
    ctx->pc = 0x126238u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x12623c: 0x1eb6821  addu        $t5, $t7, $t3
    ctx->pc = 0x12623cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x126240: 0xa54d0002  sh          $t5, 0x2($t2)
    ctx->pc = 0x126240u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 13));
    // 0x126244: 0x87702b  sltu        $t6, $a0, $a3
    ctx->pc = 0x126244u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x126248: 0xd5c03  sra         $t3, $t5, 16
    ctx->pc = 0x126248u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 13), 16));
    // 0x12624c: 0x15c0fff4  bnez        $t6, . + 4 + (-0xC << 2)
    ctx->pc = 0x12624Cu;
    {
        const bool branch_taken_0x12624c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x126250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12624Cu;
        // 0x126250: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12624c) {
            ctx->pc = 0x126220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126220;
        }
    }
    ctx->pc = 0x126254u;
    // 0x126254: 0x140702d  daddu       $t6, $t2, $zero
    ctx->pc = 0x126254u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_126258:
    // 0x126258: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x126258u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x12625c: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x12625cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x126260: 0x55e0ffbe  bnel        $t7, $zero, . + 4 + (-0x42 << 2)
    ctx->pc = 0x126260u;
    {
        const bool branch_taken_0x126260 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x126260) {
            ctx->pc = 0x126264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126260u;
            // 0x126264: 0xac490010  sw          $t1, 0x10($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12615Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12615c;
        }
    }
    ctx->pc = 0x126268u;
label_126268:
    // 0x126268: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x126268u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x12626c: 0x8dcf0000  lw          $t7, 0x0($t6)
    ctx->pc = 0x12626cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x126270: 0x0  nop
    ctx->pc = 0x126270u;
    // NOP
    // 0x126274: 0x0  nop
    ctx->pc = 0x126274u;
    // NOP
    // 0x126278: 0x0  nop
    ctx->pc = 0x126278u;
    // NOP
    // 0x12627c: 0x11e0fffa  beqz        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12627Cu;
    {
        const bool branch_taken_0x12627c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12627Cu;
        // 0x126280: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12627c) {
            ctx->pc = 0x126268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126268;
        }
    }
    ctx->pc = 0x126284u;
    // 0x126284: 0x1000ffb5  b           . + 4 + (-0x4B << 2)
    ctx->pc = 0x126284u;
    {
        const bool branch_taken_0x126284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126284u;
        // 0x126288: 0xac490010  sw          $t1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126284) {
            ctx->pc = 0x12615Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12615c;
        }
    }
    ctx->pc = 0x12628Cu;
}
