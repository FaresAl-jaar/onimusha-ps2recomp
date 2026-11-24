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

// Function: sub_003B5090
// Address: 0x3b5090 - 0x3b5374
void sub_003B5090_0x3b5090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5090_0x3b5090");
#endif

    switch (ctx->pc) {
        case 0x3b511cu: goto label_3b511c;
        case 0x3b5124u: goto label_3b5124;
        case 0x3b5160u: goto label_3b5160;
        case 0x3b51a4u: goto label_3b51a4;
        case 0x3b51e8u: goto label_3b51e8;
        case 0x3b5268u: goto label_3b5268;
        case 0x3b5270u: goto label_3b5270;
        case 0x3b52c8u: goto label_3b52c8;
        case 0x3b52d8u: goto label_3b52d8;
        case 0x3b5320u: goto label_3b5320;
        case 0x3b5330u: goto label_3b5330;
        case 0x3b534cu: goto label_3b534c;
        case 0x3b535cu: goto label_3b535c;
        default: break;
    }

    ctx->pc = 0x3b5090u;

    // 0x3b5090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b5090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b5094: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b5094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b5098: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b5098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b509c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b509cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b50a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b50a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b50a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b50a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b50a8: 0x9084000b  lbu         $a0, 0xB($a0)
    ctx->pc = 0x3b50a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
    // 0x3b50ac: 0x108300a4  beq         $a0, $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x3B50ACu;
    {
        const bool branch_taken_0x3b50ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50ACu;
        // 0x3b50b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b50ac) {
            ctx->pc = 0x3B5340u;
            goto label_3b5340;
        }
    }
    ctx->pc = 0x3B50B4u;
    // 0x3b50b4: 0x1085008a  beq         $a0, $a1, . + 4 + (0x8A << 2)
    ctx->pc = 0x3B50B4u;
    {
        const bool branch_taken_0x3b50b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x3b50b4) {
            ctx->pc = 0x3B52E0u;
            goto label_3b52e0;
        }
    }
    ctx->pc = 0x3B50BCu;
    // 0x3b50bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B50BCu;
    {
        const bool branch_taken_0x3b50bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b50bc) {
            ctx->pc = 0x3B50D0u;
            goto label_3b50d0;
        }
    }
    ctx->pc = 0x3B50C4u;
    // 0x3b50c4: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x3B50C4u;
    {
        const bool branch_taken_0x3b50c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b50c4) {
            ctx->pc = 0x3B5360u;
            goto label_3b5360;
        }
    }
    ctx->pc = 0x3B50CCu;
    // 0x3b50cc: 0x0  nop
    ctx->pc = 0x3b50ccu;
    // NOP
label_3b50d0:
    // 0x3b50d0: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3b50d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3b50d4: 0x8c24ea24  lw          $a0, -0x15DC($at)
    ctx->pc = 0x3b50d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EEA24u));
    // 0x3b50d8: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x3b50d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x3b50dc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3B50DCu;
    {
        const bool branch_taken_0x3b50dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b50dc) {
            ctx->pc = 0x3B5168u;
            goto label_3b5168;
        }
    }
    ctx->pc = 0x3B50E4u;
    // 0x3b50e4: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x3b50e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b50e8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B50E8u;
    {
        const bool branch_taken_0x3b50e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B50ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B50E8u;
        // 0x3b50ec: 0x3c040083  lui         $a0, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b50e8) {
            ctx->pc = 0x3B5130u;
            goto label_3b5130;
        }
    }
    ctx->pc = 0x3B50F0u;
    // 0x3b50f0: 0x3c020500  lui         $v0, 0x500
    ctx->pc = 0x3b50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1280 << 16));
    // 0x3b50f4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3b50f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3b50f8: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b50f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b50fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b50fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5100: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3b5100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3b5104: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b5104u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5108: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b5108u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b510c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b510cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5110: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b5110u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5114: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B5114u;
    SET_GPR_U32(ctx, 31, 0x3B511Cu);
    ctx->pc = 0x3B5118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5114u;
    // 0x3b5118: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B5114u, 0x3B511Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B511Cu;
label_3b511c:
    // 0x3b511c: 0xc0ed3c4  jal         func_3B4F10
    ctx->pc = 0x3B511Cu;
    SET_GPR_U32(ctx, 31, 0x3B5124u);
    ctx->pc = 0x3B5120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B511Cu;
    // 0x3b5120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4F10u, 0x3B511Cu, 0x3B5124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5124u;
label_3b5124:
    // 0x3b5124: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x3B5124u;
    {
        const bool branch_taken_0x3b5124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5124) {
            ctx->pc = 0x3B5360u;
            goto label_3b5360;
        }
    }
    ctx->pc = 0x3B512Cu;
    // 0x3b512c: 0x0  nop
    ctx->pc = 0x3b512cu;
    // NOP
label_3b5130:
    // 0x3b5130: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b5130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3b5134: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x3b5134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x3b5138: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3b5138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3b513c: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b513cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b5140: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3b5140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3b5144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b5144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5148: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b5148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b514c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b514cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5150: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b5150u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5154: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b5154u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5158: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B5158u;
    SET_GPR_U32(ctx, 31, 0x3B5160u);
    ctx->pc = 0x3B515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5158u;
    // 0x3b515c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B5158u, 0x3B5160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5160u;
label_3b5160:
    // 0x3b5160: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x3B5160u;
    {
        const bool branch_taken_0x3b5160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5160) {
            ctx->pc = 0x3B5360u;
            goto label_3b5360;
        }
    }
    ctx->pc = 0x3B5168u;
label_3b5168:
    // 0x3b5168: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x3b5168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x3b516c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B516Cu;
    {
        const bool branch_taken_0x3b516c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b516c) {
            ctx->pc = 0x3B51B8u;
            goto label_3b51b8;
        }
    }
    ctx->pc = 0x3B5174u;
    // 0x3b5174: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b5174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3b5178: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3b5178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3b517c: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3b517cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3b5180: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b5180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b5184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b5184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5188: 0x3445030f  ori         $a1, $v0, 0x30F
    ctx->pc = 0x3b5188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)783);
    // 0x3b518c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b518cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5190: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b5190u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5194: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b5194u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5198: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b5198u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b519c: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B519Cu;
    SET_GPR_U32(ctx, 31, 0x3B51A4u);
    ctx->pc = 0x3B51A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B519Cu;
    // 0x3b51a0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B519Cu, 0x3B51A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B51A4u;
label_3b51a4:
    // 0x3b51a4: 0x9203000b  lbu         $v1, 0xB($s0)
    ctx->pc = 0x3b51a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3b51a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b51ac: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x3B51ACu;
    {
        const bool branch_taken_0x3b51ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B51B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51ACu;
        // 0x3b51b0: 0xa203000b  sb          $v1, 0xB($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b51ac) {
            ctx->pc = 0x3B5360u;
            goto label_3b5360;
        }
    }
    ctx->pc = 0x3B51B4u;
    // 0x3b51b4: 0x0  nop
    ctx->pc = 0x3b51b4u;
    // NOP
label_3b51b8:
    // 0x3b51b8: 0x3c01008f  lui         $at, 0x8F
    ctx->pc = 0x3b51b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)143 << 16));
    // 0x3b51bc: 0x8c23ea28  lw          $v1, -0x15D8($at)
    ctx->pc = 0x3b51bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EEA28u));
    // 0x3b51c0: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3b51c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x3b51c4: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x3b51c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x3b51c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b51c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b51cc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3B51CCu;
    {
        const bool branch_taken_0x3b51cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51CCu;
        // 0x3b51d0: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b51cc) {
            ctx->pc = 0x3B5270u;
            goto label_3b5270;
        }
    }
    ctx->pc = 0x3B51D4u;
    // 0x3b51d4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3b51d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b51d8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x3b51d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x3b51dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b51dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b51e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b51e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b51e4: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x3b51e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_3b51e8:
    // 0x3b51e8: 0x8202000f  lb          $v0, 0xF($s0)
    ctx->pc = 0x3b51e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x3b51ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3b51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3b51f0: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x3b51f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3b51f4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B51F4u;
    {
        const bool branch_taken_0x3b51f4 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x3B51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B51F4u;
        // 0x3b51f8: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b51f4) {
            ctx->pc = 0x3B5208u;
            goto label_3b5208;
        }
    }
    ctx->pc = 0x3B51FCu;
    // 0x3b51fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B51FCu;
    {
        const bool branch_taken_0x3b51fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b51fc) {
            ctx->pc = 0x3B5208u;
            goto label_3b5208;
        }
    }
    ctx->pc = 0x3B5204u;
    // 0x3b5204: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3b5204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3b5208:
    // 0x3b5208: 0xa202000f  sb          $v0, 0xF($s0)
    ctx->pc = 0x3b5208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b520c: 0x8202000f  lb          $v0, 0xF($s0)
    ctx->pc = 0x3b520cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x3b5210: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x3b5210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x3b5214: 0x451004  sllv        $v0, $a1, $v0
    ctx->pc = 0x3b5214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x3b5218: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b5218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b521c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B521Cu;
    {
        const bool branch_taken_0x3b521c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b521c) {
            ctx->pc = 0x3B5238u;
            goto label_3b5238;
        }
    }
    ctx->pc = 0x3B5224u;
    // 0x3b5224: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b5224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b5228: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x3b5228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x3b522c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3B522Cu;
    {
        const bool branch_taken_0x3b522c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b522c) {
            ctx->pc = 0x3B51E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b51e8;
        }
    }
    ctx->pc = 0x3B5234u;
    // 0x3b5234: 0x0  nop
    ctx->pc = 0x3b5234u;
    // NOP
label_3b5238:
    // 0x3b5238: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b5238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b523c: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x3b523cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x3b5240: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3b5240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3b5244: 0x2484d200  addiu       $a0, $a0, -0x2E00
    ctx->pc = 0x3b5244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955520));
    // 0x3b5248: 0x2405030f  addiu       $a1, $zero, 0x30F
    ctx->pc = 0x3b5248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 783));
    // 0x3b524c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b524cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5250: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3b5250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5254: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3b5254u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5258: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b5258u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b525c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3b525cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5260: 0xc05e9e8  jal         func_17A7A0
    ctx->pc = 0x3B5260u;
    SET_GPR_U32(ctx, 31, 0x3B5268u);
    ctx->pc = 0x3B5264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5260u;
    // 0x3b5264: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7A0u, 0x3B5260u, 0x3B5268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5268u;
label_3b5268:
    // 0x3b5268: 0xc0b78d0  jal         func_2DE340
    ctx->pc = 0x3B5268u;
    SET_GPR_U32(ctx, 31, 0x3B5270u);
    ctx->pc = 0x3B526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5268u;
    // 0x3b526c: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE340u, 0x3B5268u, 0x3B5270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5270u;
label_3b5270:
    // 0x3b5270: 0x8204000f  lb          $a0, 0xF($s0)
    ctx->pc = 0x3b5270u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x3b5274: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x3b5274u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3b5278: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b5278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b527c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x3b527cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x3b5280: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b5280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b5284: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B5284u;
    {
        const bool branch_taken_0x3b5284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5284u;
        // 0x3b5288: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5284) {
            ctx->pc = 0x3B5298u;
            goto label_3b5298;
        }
    }
    ctx->pc = 0x3B528Cu;
    // 0x3b528c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B528Cu;
    {
        const bool branch_taken_0x3b528c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B528Cu;
        // 0x3b5290: 0x34510012  ori         $s1, $v0, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b528c) {
            ctx->pc = 0x3B52C0u;
            goto label_3b52c0;
        }
    }
    ctx->pc = 0x3B5294u;
    // 0x3b5294: 0x0  nop
    ctx->pc = 0x3b5294u;
    // NOP
label_3b5298:
    // 0x3b5298: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B5298u;
    {
        const bool branch_taken_0x3b5298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5298) {
            ctx->pc = 0x3B52B8u;
            goto label_3b52b8;
        }
    }
    ctx->pc = 0x3B52A0u;
    // 0x3b52a0: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x3b52a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3b52a4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3b52a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3b52a8: 0x24630013  addiu       $v1, $v1, 0x13
    ctx->pc = 0x3b52a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x3b52ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B52ACu;
    {
        const bool branch_taken_0x3b52ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B52B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B52ACu;
        // 0x3b52b0: 0x628825  or          $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b52ac) {
            ctx->pc = 0x3B52C0u;
            goto label_3b52c0;
        }
    }
    ctx->pc = 0x3B52B4u;
    // 0x3b52b4: 0x0  nop
    ctx->pc = 0x3b52b4u;
    // NOP
label_3b52b8:
    // 0x3b52b8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3b52b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3b52bc: 0x34510010  ori         $s1, $v0, 0x10
    ctx->pc = 0x3b52bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_3b52c0:
    // 0x3b52c0: 0xc0d8fc4  jal         func_363F10
    ctx->pc = 0x3B52C0u;
    SET_GPR_U32(ctx, 31, 0x3B52C8u);
    ctx->pc = 0x3B52C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B52C0u;
    // 0x3b52c4: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x363F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363F10u, 0x3B52C0u, 0x3B52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B52C8u;
label_3b52c8:
    // 0x3b52c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b52c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b52cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b52ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b52d0: 0xc0ed5f0  jal         func_3B57C0
    ctx->pc = 0x3B52D0u;
    SET_GPR_U32(ctx, 31, 0x3B52D8u);
    ctx->pc = 0x3B52D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B52D0u;
    // 0x3b52d4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B57C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B57C0u, 0x3B52D0u, 0x3B52D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B52D8u;
label_3b52d8:
    // 0x3b52d8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3B52D8u;
    {
        const bool branch_taken_0x3b52d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b52d8) {
            ctx->pc = 0x3B5360u;
            goto label_3b5360;
        }
    }
    ctx->pc = 0x3B52E0u;
label_3b52e0:
    // 0x3b52e0: 0x8204000f  lb          $a0, 0xF($s0)
    ctx->pc = 0x3b52e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    // 0x3b52e4: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x3b52e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3b52e8: 0x851004  sllv        $v0, $a1, $a0
    ctx->pc = 0x3b52e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
    // 0x3b52ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b52ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b52f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B52F0u;
    {
        const bool branch_taken_0x3b52f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B52F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B52F0u;
        // 0x3b52f4: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b52f0) {
            ctx->pc = 0x3B5308u;
            goto label_3b5308;
        }
    }
    ctx->pc = 0x3B52F8u;
    // 0x3b52f8: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3b52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3b52fc: 0xa2030011  sb          $v1, 0x11($s0)
    ctx->pc = 0x3b52fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b5300: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B5300u;
    {
        const bool branch_taken_0x3b5300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5300u;
        // 0x3b5304: 0x34510013  ori         $s1, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5300) {
            ctx->pc = 0x3B5318u;
            goto label_3b5318;
        }
    }
    ctx->pc = 0x3B5308u;
label_3b5308:
    // 0x3b5308: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3b5308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x3b530c: 0xa2040011  sb          $a0, 0x11($s0)
    ctx->pc = 0x3b530cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 4));
    // 0x3b5310: 0x34510011  ori         $s1, $v0, 0x11
    ctx->pc = 0x3b5310u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x3b5314: 0x0  nop
    ctx->pc = 0x3b5314u;
    // NOP
label_3b5318:
    // 0x3b5318: 0xc0d8fc4  jal         func_363F10
    ctx->pc = 0x3B5318u;
    SET_GPR_U32(ctx, 31, 0x3B5320u);
    ctx->pc = 0x3B531Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5318u;
    // 0x3b531c: 0x9204000f  lbu         $a0, 0xF($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363F10u, 0x3B5318u, 0x3B5320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5320u;
label_3b5320:
    // 0x3b5320: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b5320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b5324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b5328: 0xc0ed5f0  jal         func_3B57C0
    ctx->pc = 0x3B5328u;
    SET_GPR_U32(ctx, 31, 0x3B5330u);
    ctx->pc = 0x3B532Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5328u;
    // 0x3b532c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B57C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B57C0u, 0x3B5328u, 0x3B5330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B5330u;
label_3b5330:
    // 0x3b5330: 0x9203000b  lbu         $v1, 0xB($s0)
    ctx->pc = 0x3b5330u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x3b5334: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b5334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3b5338: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3B5338u;
    {
        const bool branch_taken_0x3b5338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5338u;
        // 0x3b533c: 0xa203000b  sb          $v1, 0xB($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5338) {
            ctx->pc = 0x3B5360u;
            goto label_3b5360;
        }
    }
    ctx->pc = 0x3B5340u;
label_3b5340:
    // 0x3b5340: 0x3c040089  lui         $a0, 0x89
    ctx->pc = 0x3b5340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)137 << 16));
    // 0x3b5344: 0xc095150  jal         func_254540
    ctx->pc = 0x3B5344u;
    SET_GPR_U32(ctx, 31, 0x3B534Cu);
    ctx->pc = 0x3B5348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5344u;
    // 0x3b5348: 0x248489c0  addiu       $a0, $a0, -0x7640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254540u, 0x3B5344u, 0x3B534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B534Cu;
label_3b534c:
    // 0x3b534c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B534Cu;
    {
        const bool branch_taken_0x3b534c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B534Cu;
        // 0x3b5350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b534c) {
            ctx->pc = 0x3B5360u;
            goto label_3b5360;
        }
    }
    ctx->pc = 0x3B5354u;
    // 0x3b5354: 0xc0ed3c4  jal         func_3B4F10
    ctx->pc = 0x3B5354u;
    SET_GPR_U32(ctx, 31, 0x3B535Cu);
    ctx->pc = 0x3B4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4F10u, 0x3B5354u, 0x3B535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B535Cu;
label_3b535c:
    // 0x3b535c: 0x0  nop
    ctx->pc = 0x3b535cu;
    // NOP
label_3b5360:
    // 0x3b5360: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b5360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b5364: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b5364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b5368: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b5368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b536c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B536Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B536Cu;
        // 0x3b5370: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B536Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B5374u;
}
