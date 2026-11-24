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

// Function: sub_00126868
// Address: 0x126868 - 0x126df8
void sub_00126868_0x126868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126868_0x126868");
#endif

    switch (ctx->pc) {
        case 0x1268e0u: goto label_1268e0;
        case 0x126908u: goto label_126908;
        case 0x126944u: goto label_126944;
        case 0x126990u: goto label_126990;
        case 0x126994u: goto label_126994;
        case 0x1269c4u: goto label_1269c4;
        case 0x1269c8u: goto label_1269c8;
        case 0x126ac0u: goto label_126ac0;
        case 0x126af0u: goto label_126af0;
        case 0x126af8u: goto label_126af8;
        case 0x126b0cu: goto label_126b0c;
        case 0x126b18u: goto label_126b18;
        case 0x126b4cu: goto label_126b4c;
        case 0x126be0u: goto label_126be0;
        case 0x126c20u: goto label_126c20;
        case 0x126c28u: goto label_126c28;
        case 0x126c58u: goto label_126c58;
        case 0x126c6cu: goto label_126c6c;
        case 0x126c7cu: goto label_126c7c;
        case 0x126d50u: goto label_126d50;
        case 0x126d58u: goto label_126d58;
        case 0x126d6cu: goto label_126d6c;
        default: break;
    }

    ctx->pc = 0x126868u;

    // 0x126868: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x126868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12686c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12686cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x126870: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x126870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x126874: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x126874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x126878: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x126878u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12687c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12687cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x126880: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x126880u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126884: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x126884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x126888: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x126888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12688c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12688cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x126890: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x126890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x126894: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x126894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x126898: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x126898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12689c: 0x14a0000e  bnez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x12689Cu;
    {
        const bool branch_taken_0x12689c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1268A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12689Cu;
        // 0x1268a0: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12689c) {
            ctx->pc = 0x1268D8u;
            goto label_1268d8;
        }
    }
    ctx->pc = 0x1268A4u;
    // 0x1268a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1268a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1268a8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1268a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1268ac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1268acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1268b0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1268b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1268b4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1268b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1268b8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1268b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1268bc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1268bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1268c0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1268c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1268c4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1268c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1268c8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1268c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1268cc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1268ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1268d0: 0x80492fe  j           func_124BF8
    ctx->pc = 0x1268D0u;
    ctx->pc = 0x1268D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268D0u;
    // 0x1268d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124BF8u;
    sub_00124BF8_0x124bf8(rdram, ctx, runtime); return;
    ctx->pc = 0x1268D8u;
label_1268d8:
    // 0x1268d8: 0xc0495c0  jal         func_125700
    ctx->pc = 0x1268D8u;
    SET_GPR_U32(ctx, 31, 0x1268E0u);
    ctx->pc = 0x1268DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268D8u;
    // 0x1268dc: 0x2690fff8  addiu       $s0, $s4, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x1268D8u, 0x1268E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268E0u;
label_1268e0:
    // 0x1268e0: 0x8e0d0004  lw          $t5, 0x4($s0)
    ctx->pc = 0x1268e0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1268e4: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x1268e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1268e8: 0x26ac0013  addiu       $t4, $s5, 0x13
    ctx->pc = 0x1268e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), 19));
    // 0x1268ec: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1268ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1268f0: 0x1af9824  and         $s3, $t5, $t7
    ctx->pc = 0x1268f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x1268f4: 0x2d8e001f  sltiu       $t6, $t4, 0x1F
    ctx->pc = 0x1268f4u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1268f8: 0x15c0013d  bnez        $t6, . + 4 + (0x13D << 2)
    ctx->pc = 0x1268F8u;
    {
        const bool branch_taken_0x1268f8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1268FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268F8u;
        // 0x1268fc: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268f8) {
            ctx->pc = 0x126DF0u;
            goto label_126df0;
        }
    }
    ctx->pc = 0x126900u;
    // 0x126900: 0x240ffff0  addiu       $t7, $zero, -0x10
    ctx->pc = 0x126900u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x126904: 0x18fb024  and         $s6, $t4, $t7
    ctx->pc = 0x126904u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
label_126908:
    // 0x126908: 0x236782b  sltu        $t7, $s1, $s6
    ctx->pc = 0x126908u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x12690c: 0x11e000e9  beqz        $t7, . + 4 + (0xE9 << 2)
    ctx->pc = 0x12690Cu;
    {
        const bool branch_taken_0x12690c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12690Cu;
        // 0x126910: 0x3c0f0040  lui         $t7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12690c) {
            ctx->pc = 0x126CB4u;
            goto label_126cb4;
        }
    }
    ctx->pc = 0x126914u;
    // 0x126914: 0x2515821  addu        $t3, $s2, $s1
    ctx->pc = 0x126914u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x126918: 0x25e96058  addiu       $t1, $t7, 0x6058
    ctx->pc = 0x126918u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 24664));
    // 0x12691c: 0x8d2a0008  lw          $t2, 0x8($t1)
    ctx->pc = 0x12691cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x126920: 0x116a0131  beq         $t3, $t2, . + 4 + (0x131 << 2)
    ctx->pc = 0x126920u;
    {
        const bool branch_taken_0x126920 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        ctx->pc = 0x126924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126920u;
        // 0x126924: 0x240ffffe  addiu       $t7, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126920) {
            ctx->pc = 0x126DE8u;
            goto label_126de8;
        }
    }
    ctx->pc = 0x126928u;
    // 0x126928: 0x8d6c0004  lw          $t4, 0x4($t3)
    ctx->pc = 0x126928u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x12692c: 0x18f7824  and         $t7, $t4, $t7
    ctx->pc = 0x12692cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
    // 0x126930: 0x16f7821  addu        $t7, $t3, $t7
    ctx->pc = 0x126930u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
    // 0x126934: 0x8dee0004  lw          $t6, 0x4($t7)
    ctx->pc = 0x126934u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
    // 0x126938: 0x31ce0001  andi        $t6, $t6, 0x1
    ctx->pc = 0x126938u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12693c: 0x55c00128  bnel        $t6, $zero, . + 4 + (0x128 << 2)
    ctx->pc = 0x12693Cu;
    {
        const bool branch_taken_0x12693c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        if (branch_taken_0x12693c) {
            ctx->pc = 0x126940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12693Cu;
            // 0x126940: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126DE0u;
            goto label_126de0;
        }
    }
    ctx->pc = 0x126944u;
label_126944:
    // 0x126944: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x126944u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x126948: 0x156a011a  bne         $t3, $t2, . + 4 + (0x11A << 2)
    ctx->pc = 0x126948u;
    {
        const bool branch_taken_0x126948 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 10));
        ctx->pc = 0x12694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126948u;
        // 0x12694c: 0x18f6024  and         $t4, $t4, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126948) {
            ctx->pc = 0x126DB4u;
            goto label_126db4;
        }
    }
    ctx->pc = 0x126950u;
    // 0x126950: 0x1917021  addu        $t6, $t4, $s1
    ctx->pc = 0x126950u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x126954: 0x26cf0010  addiu       $t7, $s6, 0x10
    ctx->pc = 0x126954u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x126958: 0x1cf782b  sltu        $t7, $t6, $t7
    ctx->pc = 0x126958u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x12695c: 0x55e0001a  bnel        $t7, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x12695Cu;
    {
        const bool branch_taken_0x12695c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12695c) {
            ctx->pc = 0x126960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12695Cu;
            // 0x126960: 0x8e4f0004  lw          $t7, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1269C8u;
            goto label_1269c8;
        }
    }
    ctx->pc = 0x126964u;
    // 0x126964: 0x1d67823  subu        $t7, $t6, $s6
    ctx->pc = 0x126964u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 22)));
    // 0x126968: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x126968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12696c: 0x2567021  addu        $t6, $s2, $s6
    ctx->pc = 0x12696cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 22)));
    // 0x126970: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x126970u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x126974: 0xadcf0004  sw          $t7, 0x4($t6)
    ctx->pc = 0x126974u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 15));
    // 0x126978: 0xad2e0008  sw          $t6, 0x8($t1)
    ctx->pc = 0x126978u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 14));
    // 0x12697c: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x12697cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x126980: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x126980u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x126984: 0x1f67825  or          $t7, $t7, $s6
    ctx->pc = 0x126984u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 22));
    // 0x126988: 0xc0495d6  jal         func_125758
    ctx->pc = 0x126988u;
    SET_GPR_U32(ctx, 31, 0x126990u);
    ctx->pc = 0x12698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126988u;
    // 0x12698c: 0xae4f0004  sw          $t7, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125758u, 0x126988u, 0x126990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126990u;
label_126990:
    // 0x126990: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x126990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_126994:
    // 0x126994: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x126994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126998: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x126998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12699c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12699cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1269a0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1269a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1269a4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1269a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1269a8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1269a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1269ac: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1269acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1269b0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1269b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1269b4: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1269b4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1269b8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1269b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1269bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1269BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1269C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269BCu;
        // 0x1269c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1269BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1269C4u;
label_1269c4:
    // 0x1269c4: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1269c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1269c8:
    // 0x1269c8: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x1269c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x1269cc: 0x15e000a5  bnez        $t7, . + 4 + (0xA5 << 2)
    ctx->pc = 0x1269CCu;
    {
        const bool branch_taken_0x1269cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1269D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269CCu;
        // 0x1269d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269cc) {
            ctx->pc = 0x126C64u;
            goto label_126c64;
        }
    }
    ctx->pc = 0x1269D4u;
    // 0x1269d4: 0x8e4f0000  lw          $t7, 0x0($s2)
    ctx->pc = 0x1269d4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1269d8: 0x24fb823  subu        $s7, $s2, $t7
    ctx->pc = 0x1269d8u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x1269dc: 0x8eee0004  lw          $t6, 0x4($s7)
    ctx->pc = 0x1269dcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1269e0: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x1269e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1269e4: 0x1160004c  beqz        $t3, . + 4 + (0x4C << 2)
    ctx->pc = 0x1269E4u;
    {
        const bool branch_taken_0x1269e4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x1269E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269E4u;
        // 0x1269e8: 0x1cf6824  and         $t5, $t6, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269e4) {
            ctx->pc = 0x126B18u;
            goto label_126b18;
        }
    }
    ctx->pc = 0x1269ECu;
    // 0x1269ec: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x1269ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x1269f0: 0x8dee6060  lw          $t6, 0x6060($t7)
    ctx->pc = 0x1269f0u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x406060u));
    // 0x1269f4: 0x156e00df  bne         $t3, $t6, . + 4 + (0xDF << 2)
    ctx->pc = 0x1269F4u;
    {
        const bool branch_taken_0x1269f4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 14));
        ctx->pc = 0x1269F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269F4u;
        // 0x1269f8: 0x18d7821  addu        $t7, $t4, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269f4) {
            ctx->pc = 0x126D74u;
            goto label_126d74;
        }
    }
    ctx->pc = 0x1269FCu;
    // 0x1269fc: 0x18d7021  addu        $t6, $t4, $t5
    ctx->pc = 0x1269fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x126a00: 0x26cf0010  addiu       $t7, $s6, 0x10
    ctx->pc = 0x126a00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x126a04: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x126a04u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x126a08: 0x1cf782b  sltu        $t7, $t6, $t7
    ctx->pc = 0x126a08u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x126a0c: 0x15e00042  bnez        $t7, . + 4 + (0x42 << 2)
    ctx->pc = 0x126A0Cu;
    {
        const bool branch_taken_0x126a0c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A0Cu;
        // 0x126a10: 0xafae0000  sw          $t6, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a0c) {
            ctx->pc = 0x126B18u;
            goto label_126b18;
        }
    }
    ctx->pc = 0x126A14u;
    // 0x126a14: 0x8eec000c  lw          $t4, 0xC($s7)
    ctx->pc = 0x126a14u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x126a18: 0x2626fffc  addiu       $a2, $s1, -0x4
    ctx->pc = 0x126a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x126a1c: 0x8eea0008  lw          $t2, 0x8($s7)
    ctx->pc = 0x126a1cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x126a20: 0x26f30008  addiu       $s3, $s7, 0x8
    ctx->pc = 0x126a20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x126a24: 0x2ccf0025  sltiu       $t7, $a2, 0x25
    ctx->pc = 0x126a24u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x126a28: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x126a28u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x126a2c: 0x11e00034  beqz        $t7, . + 4 + (0x34 << 2)
    ctx->pc = 0x126A2Cu;
    {
        const bool branch_taken_0x126a2c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A2Cu;
        // 0x126a30: 0xad4c000c  sw          $t4, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a2c) {
            ctx->pc = 0x126B00u;
            goto label_126b00;
        }
    }
    ctx->pc = 0x126A34u;
    // 0x126a34: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x126a34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a38: 0x2ccf0014  sltiu       $t7, $a2, 0x14
    ctx->pc = 0x126a38u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x126a3c: 0x15e00017  bnez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x126A3Cu;
    {
        const bool branch_taken_0x126a3c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A3Cu;
        // 0x126a40: 0x260602d  daddu       $t4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a3c) {
            ctx->pc = 0x126A9Cu;
            goto label_126a9c;
        }
    }
    ctx->pc = 0x126A44u;
    // 0x126a44: 0x8e8f0000  lw          $t7, 0x0($s4)
    ctx->pc = 0x126a44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x126a48: 0x268b0008  addiu       $t3, $s4, 0x8
    ctx->pc = 0x126a48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x126a4c: 0x26ec0010  addiu       $t4, $s7, 0x10
    ctx->pc = 0x126a4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x126a50: 0x2ccd001c  sltiu       $t5, $a2, 0x1C
    ctx->pc = 0x126a50u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x126a54: 0xaeef0008  sw          $t7, 0x8($s7)
    ctx->pc = 0x126a54u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 15));
    // 0x126a58: 0x8e8e0004  lw          $t6, 0x4($s4)
    ctx->pc = 0x126a58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x126a5c: 0x15a0000f  bnez        $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x126A5Cu;
    {
        const bool branch_taken_0x126a5c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x126A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A5Cu;
        // 0x126a60: 0xaeee000c  sw          $t6, 0xC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a5c) {
            ctx->pc = 0x126A9Cu;
            goto label_126a9c;
        }
    }
    ctx->pc = 0x126A64u;
    // 0x126a64: 0x8e8f0008  lw          $t7, 0x8($s4)
    ctx->pc = 0x126a64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x126a68: 0x2ccd0024  sltiu       $t5, $a2, 0x24
    ctx->pc = 0x126a68u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x126a6c: 0x268b0010  addiu       $t3, $s4, 0x10
    ctx->pc = 0x126a6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x126a70: 0x26ec0018  addiu       $t4, $s7, 0x18
    ctx->pc = 0x126a70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x126a74: 0xaeef0010  sw          $t7, 0x10($s7)
    ctx->pc = 0x126a74u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 15));
    // 0x126a78: 0x8e8e000c  lw          $t6, 0xC($s4)
    ctx->pc = 0x126a78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x126a7c: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x126A7Cu;
    {
        const bool branch_taken_0x126a7c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x126A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A7Cu;
        // 0x126a80: 0xaeee0014  sw          $t6, 0x14($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 20), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a7c) {
            ctx->pc = 0x126A9Cu;
            goto label_126a9c;
        }
    }
    ctx->pc = 0x126A84u;
    // 0x126a84: 0x8e8e0010  lw          $t6, 0x10($s4)
    ctx->pc = 0x126a84u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x126a88: 0x268b0018  addiu       $t3, $s4, 0x18
    ctx->pc = 0x126a88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x126a8c: 0x26ec0020  addiu       $t4, $s7, 0x20
    ctx->pc = 0x126a8cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x126a90: 0xaeee0018  sw          $t6, 0x18($s7)
    ctx->pc = 0x126a90u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 14));
    // 0x126a94: 0x8e8f0014  lw          $t7, 0x14($s4)
    ctx->pc = 0x126a94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x126a98: 0xaeef001c  sw          $t7, 0x1C($s7)
    ctx->pc = 0x126a98u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 28), GPR_U32(ctx, 15));
label_126a9c:
    // 0x126a9c: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x126a9cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x126aa0: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x126aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x126aa4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x126aa4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x126aa8: 0x8d6e0000  lw          $t6, 0x0($t3)
    ctx->pc = 0x126aa8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x126aac: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x126aacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x126ab0: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x126ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x126ab4: 0x8d6f0004  lw          $t7, 0x4($t3)
    ctx->pc = 0x126ab4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x126ab8: 0xad8f0004  sw          $t7, 0x4($t4)
    ctx->pc = 0x126ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 15));
    // 0x126abc: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x126abcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_126ac0:
    // 0x126ac0: 0x2f66821  addu        $t5, $s7, $s6
    ctx->pc = 0x126ac0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x126ac4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x126ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126ac8: 0x1d67823  subu        $t7, $t6, $s6
    ctx->pc = 0x126ac8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 22)));
    // 0x126acc: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x126accu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x126ad0: 0x3c0e0040  lui         $t6, 0x40
    ctx->pc = 0x126ad0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)64 << 16));
    // 0x126ad4: 0xadaf0004  sw          $t7, 0x4($t5)
    ctx->pc = 0x126ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
    // 0x126ad8: 0xadcd6060  sw          $t5, 0x6060($t6)
    ctx->pc = 0x126ad8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x406060u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x406060u, _value); } while (0);
    // 0x126adc: 0x8eef0004  lw          $t7, 0x4($s7)
    ctx->pc = 0x126adcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x126ae0: 0x31ef0001  andi        $t7, $t7, 0x1
    ctx->pc = 0x126ae0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)1);
    // 0x126ae4: 0x1f67825  or          $t7, $t7, $s6
    ctx->pc = 0x126ae4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 22));
    // 0x126ae8: 0xaeef0004  sw          $t7, 0x4($s7)
    ctx->pc = 0x126ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 15));
    // 0x126aec: 0x0  nop
    ctx->pc = 0x126aecu;
    // NOP
label_126af0:
    // 0x126af0: 0xc0495d6  jal         func_125758
    ctx->pc = 0x126AF0u;
    SET_GPR_U32(ctx, 31, 0x126AF8u);
    ctx->pc = 0x125758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125758u, 0x126AF0u, 0x126AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126AF8u;
label_126af8:
    // 0x126af8: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
    ctx->pc = 0x126AF8u;
    {
        const bool branch_taken_0x126af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126AF8u;
        // 0x126afc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126af8) {
            ctx->pc = 0x126994u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126994;
        }
    }
    ctx->pc = 0x126B00u;
label_126b00:
    // 0x126b00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x126b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b04: 0xc049522  jal         func_125488
    ctx->pc = 0x126B04u;
    SET_GPR_U32(ctx, 31, 0x126B0Cu);
    ctx->pc = 0x126B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126B04u;
    // 0x126b08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x126B04u, 0x126B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B0Cu;
label_126b0c:
    // 0x126b0c: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x126B0Cu;
    {
        const bool branch_taken_0x126b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B0Cu;
        // 0x126b10: 0x8fae0000  lw          $t6, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b0c) {
            ctx->pc = 0x126AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126ac0;
        }
    }
    ctx->pc = 0x126B14u;
    // 0x126b14: 0x0  nop
    ctx->pc = 0x126b14u;
    // NOP
label_126b18:
    // 0x126b18: 0x12e00051  beqz        $s7, . + 4 + (0x51 << 2)
    ctx->pc = 0x126B18u;
    {
        const bool branch_taken_0x126b18 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B18u;
        // 0x126b1c: 0x1b17021  addu        $t6, $t5, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b18) {
            ctx->pc = 0x126C60u;
            goto label_126c60;
        }
    }
    ctx->pc = 0x126B20u;
    // 0x126b20: 0x1d6782b  sltu        $t7, $t6, $s6
    ctx->pc = 0x126b20u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x126b24: 0x15e0004f  bnez        $t7, . + 4 + (0x4F << 2)
    ctx->pc = 0x126B24u;
    {
        const bool branch_taken_0x126b24 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B24u;
        // 0x126b28: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b24) {
            ctx->pc = 0x126C64u;
            goto label_126c64;
        }
    }
    ctx->pc = 0x126B2Cu;
    // 0x126b2c: 0x8eec000c  lw          $t4, 0xC($s7)
    ctx->pc = 0x126b2cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x126b30: 0x2626fffc  addiu       $a2, $s1, -0x4
    ctx->pc = 0x126b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x126b34: 0x8eea0008  lw          $t2, 0x8($s7)
    ctx->pc = 0x126b34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x126b38: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x126b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b3c: 0x1c0982d  daddu       $s3, $t6, $zero
    ctx->pc = 0x126b3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b40: 0x26f10008  addiu       $s1, $s7, 0x8
    ctx->pc = 0x126b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x126b44: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x126b44u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x126b48: 0x2ccf0025  sltiu       $t7, $a2, 0x25
    ctx->pc = 0x126b48u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
label_126b4c:
    // 0x126b4c: 0x11e0003f  beqz        $t7, . + 4 + (0x3F << 2)
    ctx->pc = 0x126B4Cu;
    {
        const bool branch_taken_0x126b4c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B4Cu;
        // 0x126b50: 0xad4c000c  sw          $t4, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b4c) {
            ctx->pc = 0x126C4Cu;
            goto label_126c4c;
        }
    }
    ctx->pc = 0x126B54u;
    // 0x126b54: 0x280582d  daddu       $t3, $s4, $zero
    ctx->pc = 0x126b54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b58: 0x2ccf0014  sltiu       $t7, $a2, 0x14
    ctx->pc = 0x126b58u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x126b5c: 0x15e00017  bnez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x126B5Cu;
    {
        const bool branch_taken_0x126b5c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B5Cu;
        // 0x126b60: 0x220602d  daddu       $t4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b5c) {
            ctx->pc = 0x126BBCu;
            goto label_126bbc;
        }
    }
    ctx->pc = 0x126B64u;
    // 0x126b64: 0x8e8f0000  lw          $t7, 0x0($s4)
    ctx->pc = 0x126b64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x126b68: 0x268b0008  addiu       $t3, $s4, 0x8
    ctx->pc = 0x126b68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x126b6c: 0x260c0010  addiu       $t4, $s0, 0x10
    ctx->pc = 0x126b6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x126b70: 0x2ccd001c  sltiu       $t5, $a2, 0x1C
    ctx->pc = 0x126b70u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x126b74: 0xae0f0008  sw          $t7, 0x8($s0)
    ctx->pc = 0x126b74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 15));
    // 0x126b78: 0x8e8e0004  lw          $t6, 0x4($s4)
    ctx->pc = 0x126b78u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x126b7c: 0x15a0000f  bnez        $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x126B7Cu;
    {
        const bool branch_taken_0x126b7c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x126B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B7Cu;
        // 0x126b80: 0xae0e000c  sw          $t6, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b7c) {
            ctx->pc = 0x126BBCu;
            goto label_126bbc;
        }
    }
    ctx->pc = 0x126B84u;
    // 0x126b84: 0x8e8f0008  lw          $t7, 0x8($s4)
    ctx->pc = 0x126b84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x126b88: 0x2ccd0024  sltiu       $t5, $a2, 0x24
    ctx->pc = 0x126b88u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x126b8c: 0x268b0010  addiu       $t3, $s4, 0x10
    ctx->pc = 0x126b8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x126b90: 0x260c0018  addiu       $t4, $s0, 0x18
    ctx->pc = 0x126b90u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x126b94: 0xae0f0010  sw          $t7, 0x10($s0)
    ctx->pc = 0x126b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 15));
    // 0x126b98: 0x8e8e000c  lw          $t6, 0xC($s4)
    ctx->pc = 0x126b98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x126b9c: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x126B9Cu;
    {
        const bool branch_taken_0x126b9c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x126BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126B9Cu;
        // 0x126ba0: 0xae0e0014  sw          $t6, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126b9c) {
            ctx->pc = 0x126BBCu;
            goto label_126bbc;
        }
    }
    ctx->pc = 0x126BA4u;
    // 0x126ba4: 0x8e8e0010  lw          $t6, 0x10($s4)
    ctx->pc = 0x126ba4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x126ba8: 0x268b0018  addiu       $t3, $s4, 0x18
    ctx->pc = 0x126ba8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x126bac: 0x260c0020  addiu       $t4, $s0, 0x20
    ctx->pc = 0x126bacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x126bb0: 0xae0e0018  sw          $t6, 0x18($s0)
    ctx->pc = 0x126bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 14));
    // 0x126bb4: 0x8e8f0014  lw          $t7, 0x14($s4)
    ctx->pc = 0x126bb4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x126bb8: 0xae0f001c  sw          $t7, 0x1C($s0)
    ctx->pc = 0x126bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 15));
label_126bbc:
    // 0x126bbc: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x126bbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x126bc0: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x126bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x126bc4: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x126bc4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x126bc8: 0x8d6e0000  lw          $t6, 0x0($t3)
    ctx->pc = 0x126bc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x126bcc: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x126bccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x126bd0: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x126bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x126bd4: 0x8d6f0004  lw          $t7, 0x4($t3)
    ctx->pc = 0x126bd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x126bd8: 0xad8f0004  sw          $t7, 0x4($t4)
    ctx->pc = 0x126bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 15));
    // 0x126bdc: 0x8eed0004  lw          $t5, 0x4($s7)
    ctx->pc = 0x126bdcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_126be0:
    // 0x126be0: 0x2765823  subu        $t3, $s3, $s6
    ctx->pc = 0x126be0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x126be4: 0x2d6f0010  sltiu       $t7, $t3, 0x10
    ctx->pc = 0x126be4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x126be8: 0x15e00011  bnez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x126BE8u;
    {
        const bool branch_taken_0x126be8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BE8u;
        // 0x126bec: 0x31af0001  andi        $t7, $t5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126be8) {
            ctx->pc = 0x126C30u;
            goto label_126c30;
        }
    }
    ctx->pc = 0x126BF0u;
    // 0x126bf0: 0x2167021  addu        $t6, $s0, $s6
    ctx->pc = 0x126bf0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x126bf4: 0x1f67825  or          $t7, $t7, $s6
    ctx->pc = 0x126bf4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 22));
    // 0x126bf8: 0x356c0001  ori         $t4, $t3, 0x1
    ctx->pc = 0x126bf8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1);
    // 0x126bfc: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x126bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
    // 0x126c00: 0x1cb6821  addu        $t5, $t6, $t3
    ctx->pc = 0x126c00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x126c04: 0x25c50008  addiu       $a1, $t6, 0x8
    ctx->pc = 0x126c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x126c08: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x126c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c0c: 0xadcc0004  sw          $t4, 0x4($t6)
    ctx->pc = 0x126c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 12));
    // 0x126c10: 0x8daf0004  lw          $t7, 0x4($t5)
    ctx->pc = 0x126c10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x126c14: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x126c14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
    // 0x126c18: 0xc048f7a  jal         func_123DE8
    ctx->pc = 0x126C18u;
    SET_GPR_U32(ctx, 31, 0x126C20u);
    ctx->pc = 0x126C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C18u;
    // 0x126c1c: 0xadaf0004  sw          $t7, 0x4($t5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123DE8u, 0x126C18u, 0x126C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C20u;
label_126c20:
    // 0x126c20: 0xc0495d6  jal         func_125758
    ctx->pc = 0x126C20u;
    SET_GPR_U32(ctx, 31, 0x126C28u);
    ctx->pc = 0x126C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C20u;
    // 0x126c24: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125758u, 0x126C20u, 0x126C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C28u;
label_126c28:
    // 0x126c28: 0x1000ff5a  b           . + 4 + (-0xA6 << 2)
    ctx->pc = 0x126C28u;
    {
        const bool branch_taken_0x126c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C28u;
        // 0x126c2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c28) {
            ctx->pc = 0x126994u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126994;
        }
    }
    ctx->pc = 0x126C30u;
label_126c30:
    // 0x126c30: 0x1f37825  or          $t7, $t7, $s3
    ctx->pc = 0x126c30u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 19));
    // 0x126c34: 0x2136821  addu        $t5, $s0, $s3
    ctx->pc = 0x126c34u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x126c38: 0xae0f0004  sw          $t7, 0x4($s0)
    ctx->pc = 0x126c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 15));
    // 0x126c3c: 0x8dae0004  lw          $t6, 0x4($t5)
    ctx->pc = 0x126c3cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x126c40: 0x35ce0001  ori         $t6, $t6, 0x1
    ctx->pc = 0x126c40u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)1);
    // 0x126c44: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x126C44u;
    {
        const bool branch_taken_0x126c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C44u;
        // 0x126c48: 0xadae0004  sw          $t6, 0x4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c44) {
            ctx->pc = 0x126C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126c20;
        }
    }
    ctx->pc = 0x126C4Cu;
label_126c4c:
    // 0x126c4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x126c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c50: 0xc049522  jal         func_125488
    ctx->pc = 0x126C50u;
    SET_GPR_U32(ctx, 31, 0x126C58u);
    ctx->pc = 0x126C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C50u;
    // 0x126c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x126C50u, 0x126C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C58u;
label_126c58:
    // 0x126c58: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x126C58u;
    {
        const bool branch_taken_0x126c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C58u;
        // 0x126c5c: 0x8e0d0004  lw          $t5, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c58) {
            ctx->pc = 0x126BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126be0;
        }
    }
    ctx->pc = 0x126C60u;
label_126c60:
    // 0x126c60: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x126c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_126c64:
    // 0x126c64: 0xc0492fe  jal         func_124BF8
    ctx->pc = 0x126C64u;
    SET_GPR_U32(ctx, 31, 0x126C6Cu);
    ctx->pc = 0x126C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C64u;
    // 0x126c68: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124BF8u, 0x126C64u, 0x126C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C6Cu;
label_126c6c:
    // 0x126c6c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x126C6Cu;
    {
        const bool branch_taken_0x126c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C6Cu;
        // 0x126c70: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c6c) {
            ctx->pc = 0x126C84u;
            goto label_126c84;
        }
    }
    ctx->pc = 0x126C74u;
    // 0x126c74: 0xc0495d6  jal         func_125758
    ctx->pc = 0x126C74u;
    SET_GPR_U32(ctx, 31, 0x126C7Cu);
    ctx->pc = 0x126C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C74u;
    // 0x126c78: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125758u, 0x126C74u, 0x126C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C7Cu;
label_126c7c:
    // 0x126c7c: 0x1000ff45  b           . + 4 + (-0xBB << 2)
    ctx->pc = 0x126C7Cu;
    {
        const bool branch_taken_0x126c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C7Cu;
        // 0x126c80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c7c) {
            ctx->pc = 0x126994u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126994;
        }
    }
    ctx->pc = 0x126C84u;
label_126c84:
    // 0x126c84: 0x8e4d0004  lw          $t5, 0x4($s2)
    ctx->pc = 0x126c84u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x126c88: 0x240ffffe  addiu       $t7, $zero, -0x2
    ctx->pc = 0x126c88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x126c8c: 0x2450fff8  addiu       $s0, $v0, -0x8
    ctx->pc = 0x126c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x126c90: 0x1af7824  and         $t7, $t5, $t7
    ctx->pc = 0x126c90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x126c94: 0x24f7821  addu        $t7, $s2, $t7
    ctx->pc = 0x126c94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 15)));
    // 0x126c98: 0x160f0008  bne         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x126C98u;
    {
        const bool branch_taken_0x126c98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x126C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C98u;
        // 0x126c9c: 0x2626fffc  addiu       $a2, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c98) {
            ctx->pc = 0x126CBCu;
            goto label_126cbc;
        }
    }
    ctx->pc = 0x126CA0u;
    // 0x126ca0: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x126ca0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x126ca4: 0x240ffffc  addiu       $t7, $zero, -0x4
    ctx->pc = 0x126ca4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x126ca8: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x126ca8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x126cac: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x126cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126cb0: 0x22e9821  addu        $s3, $s1, $t6
    ctx->pc = 0x126cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 14)));
label_126cb4:
    // 0x126cb4: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x126CB4u;
    {
        const bool branch_taken_0x126cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CB4u;
        // 0x126cb8: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cb4) {
            ctx->pc = 0x126BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126be0;
        }
    }
    ctx->pc = 0x126CBCu;
label_126cbc:
    // 0x126cbc: 0x2ccf0025  sltiu       $t7, $a2, 0x25
    ctx->pc = 0x126cbcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x126cc0: 0x11e00027  beqz        $t7, . + 4 + (0x27 << 2)
    ctx->pc = 0x126CC0u;
    {
        const bool branch_taken_0x126cc0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x126CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CC0u;
        // 0x126cc4: 0x280582d  daddu       $t3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cc0) {
            ctx->pc = 0x126D60u;
            goto label_126d60;
        }
    }
    ctx->pc = 0x126CC8u;
    // 0x126cc8: 0x2ccf0014  sltiu       $t7, $a2, 0x14
    ctx->pc = 0x126cc8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x126ccc: 0x15e00017  bnez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x126CCCu;
    {
        const bool branch_taken_0x126ccc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x126CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CCCu;
        // 0x126cd0: 0x40602d  daddu       $t4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ccc) {
            ctx->pc = 0x126D2Cu;
            goto label_126d2c;
        }
    }
    ctx->pc = 0x126CD4u;
    // 0x126cd4: 0x8e8f0000  lw          $t7, 0x0($s4)
    ctx->pc = 0x126cd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x126cd8: 0x268b0008  addiu       $t3, $s4, 0x8
    ctx->pc = 0x126cd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x126cdc: 0x244c0008  addiu       $t4, $v0, 0x8
    ctx->pc = 0x126cdcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x126ce0: 0x2ccd001c  sltiu       $t5, $a2, 0x1C
    ctx->pc = 0x126ce0u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x126ce4: 0xac4f0000  sw          $t7, 0x0($v0)
    ctx->pc = 0x126ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 15));
    // 0x126ce8: 0x8e8e0004  lw          $t6, 0x4($s4)
    ctx->pc = 0x126ce8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x126cec: 0x15a0000f  bnez        $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x126CECu;
    {
        const bool branch_taken_0x126cec = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x126CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126CECu;
        // 0x126cf0: 0xac4e0004  sw          $t6, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126cec) {
            ctx->pc = 0x126D2Cu;
            goto label_126d2c;
        }
    }
    ctx->pc = 0x126CF4u;
    // 0x126cf4: 0x8e8f0008  lw          $t7, 0x8($s4)
    ctx->pc = 0x126cf4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x126cf8: 0x2ccd0024  sltiu       $t5, $a2, 0x24
    ctx->pc = 0x126cf8u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x126cfc: 0x268b0010  addiu       $t3, $s4, 0x10
    ctx->pc = 0x126cfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x126d00: 0x244c0010  addiu       $t4, $v0, 0x10
    ctx->pc = 0x126d00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x126d04: 0xac4f0008  sw          $t7, 0x8($v0)
    ctx->pc = 0x126d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 15));
    // 0x126d08: 0x8e8e000c  lw          $t6, 0xC($s4)
    ctx->pc = 0x126d08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x126d0c: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x126D0Cu;
    {
        const bool branch_taken_0x126d0c = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x126D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D0Cu;
        // 0x126d10: 0xac4e000c  sw          $t6, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d0c) {
            ctx->pc = 0x126D2Cu;
            goto label_126d2c;
        }
    }
    ctx->pc = 0x126D14u;
    // 0x126d14: 0x8e8e0010  lw          $t6, 0x10($s4)
    ctx->pc = 0x126d14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x126d18: 0x268b0018  addiu       $t3, $s4, 0x18
    ctx->pc = 0x126d18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x126d1c: 0x244c0018  addiu       $t4, $v0, 0x18
    ctx->pc = 0x126d1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x126d20: 0xac4e0010  sw          $t6, 0x10($v0)
    ctx->pc = 0x126d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 14));
    // 0x126d24: 0x8e8f0014  lw          $t7, 0x14($s4)
    ctx->pc = 0x126d24u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x126d28: 0xac4f0014  sw          $t7, 0x14($v0)
    ctx->pc = 0x126d28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 15));
label_126d2c:
    // 0x126d2c: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x126d2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x126d30: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x126d30u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x126d34: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x126d34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x126d38: 0x8d6e0000  lw          $t6, 0x0($t3)
    ctx->pc = 0x126d38u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x126d3c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x126d3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x126d40: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x126d40u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x126d44: 0x8d6f0004  lw          $t7, 0x4($t3)
    ctx->pc = 0x126d44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x126d48: 0xad8f0004  sw          $t7, 0x4($t4)
    ctx->pc = 0x126d48u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 15));
    // 0x126d4c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x126d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_126d50:
    // 0x126d50: 0xc048f7a  jal         func_123DE8
    ctx->pc = 0x126D50u;
    SET_GPR_U32(ctx, 31, 0x126D58u);
    ctx->pc = 0x126D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126D50u;
    // 0x126d54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123DE8u, 0x126D50u, 0x126D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126D58u;
label_126d58:
    // 0x126d58: 0x1000ff65  b           . + 4 + (-0x9B << 2)
    ctx->pc = 0x126D58u;
    {
        const bool branch_taken_0x126d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D58u;
        // 0x126d5c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d58) {
            ctx->pc = 0x126AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126af0;
        }
    }
    ctx->pc = 0x126D60u;
label_126d60:
    // 0x126d60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d64: 0xc049522  jal         func_125488
    ctx->pc = 0x126D64u;
    SET_GPR_U32(ctx, 31, 0x126D6Cu);
    ctx->pc = 0x126D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126D64u;
    // 0x126d68: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125488u, 0x126D64u, 0x126D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126D6Cu;
label_126d6c:
    // 0x126d6c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x126D6Cu;
    {
        const bool branch_taken_0x126d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D6Cu;
        // 0x126d70: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d6c) {
            ctx->pc = 0x126D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126d50;
        }
    }
    ctx->pc = 0x126D74u;
label_126d74:
    // 0x126d74: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x126d74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x126d78: 0x1f6702b  sltu        $t6, $t7, $s6
    ctx->pc = 0x126d78u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x126d7c: 0x15c0ff66  bnez        $t6, . + 4 + (-0x9A << 2)
    ctx->pc = 0x126D7Cu;
    {
        const bool branch_taken_0x126d7c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x126D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126D7Cu;
        // 0x126d80: 0x2626fffc  addiu       $a2, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126d7c) {
            ctx->pc = 0x126B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126b18;
        }
    }
    ctx->pc = 0x126D84u;
    // 0x126d84: 0x8d6a0008  lw          $t2, 0x8($t3)
    ctx->pc = 0x126d84u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x126d88: 0x8d6c000c  lw          $t4, 0xC($t3)
    ctx->pc = 0x126d88u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x126d8c: 0x1e0982d  daddu       $s3, $t7, $zero
    ctx->pc = 0x126d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d90: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x126d90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126d94: 0x26f10008  addiu       $s1, $s7, 0x8
    ctx->pc = 0x126d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
    // 0x126d98: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x126d98u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x126d9c: 0x2ccf0025  sltiu       $t7, $a2, 0x25
    ctx->pc = 0x126d9cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x126da0: 0xad4c000c  sw          $t4, 0xC($t2)
    ctx->pc = 0x126da0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 12));
    // 0x126da4: 0x8eea0008  lw          $t2, 0x8($s7)
    ctx->pc = 0x126da4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x126da8: 0x8eec000c  lw          $t4, 0xC($s7)
    ctx->pc = 0x126da8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x126dac: 0x1000ff67  b           . + 4 + (-0x99 << 2)
    ctx->pc = 0x126DACu;
    {
        const bool branch_taken_0x126dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DACu;
        // 0x126db0: 0xad8a0008  sw          $t2, 0x8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dac) {
            ctx->pc = 0x126B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126b4c;
        }
    }
    ctx->pc = 0x126DB4u;
label_126db4:
    // 0x126db4: 0x1917021  addu        $t6, $t4, $s1
    ctx->pc = 0x126db4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 17)));
    // 0x126db8: 0x1d6782b  sltu        $t7, $t6, $s6
    ctx->pc = 0x126db8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x126dbc: 0x55e0ff02  bnel        $t7, $zero, . + 4 + (-0xFE << 2)
    ctx->pc = 0x126DBCu;
    {
        const bool branch_taken_0x126dbc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x126dbc) {
            ctx->pc = 0x126DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126DBCu;
            // 0x126dc0: 0x8e4f0004  lw          $t7, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1269C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1269c8;
        }
    }
    ctx->pc = 0x126DC4u;
    // 0x126dc4: 0x8d6a0008  lw          $t2, 0x8($t3)
    ctx->pc = 0x126dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x126dc8: 0x1c0982d  daddu       $s3, $t6, $zero
    ctx->pc = 0x126dc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126dcc: 0x8d6c000c  lw          $t4, 0xC($t3)
    ctx->pc = 0x126dccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x126dd0: 0x26510008  addiu       $s1, $s2, 0x8
    ctx->pc = 0x126dd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x126dd4: 0xad8a0008  sw          $t2, 0x8($t4)
    ctx->pc = 0x126dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 10));
    // 0x126dd8: 0x1000ff81  b           . + 4 + (-0x7F << 2)
    ctx->pc = 0x126DD8u;
    {
        const bool branch_taken_0x126dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DD8u;
        // 0x126ddc: 0xad4c000c  sw          $t4, 0xC($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126dd8) {
            ctx->pc = 0x126BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126be0;
        }
    }
    ctx->pc = 0x126DE0u;
label_126de0:
    // 0x126de0: 0x1000fef8  b           . + 4 + (-0x108 << 2)
    ctx->pc = 0x126DE0u;
    {
        const bool branch_taken_0x126de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DE0u;
        // 0x126de4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126de0) {
            ctx->pc = 0x1269C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1269c4;
        }
    }
    ctx->pc = 0x126DE8u;
label_126de8:
    // 0x126de8: 0x1000fed6  b           . + 4 + (-0x12A << 2)
    ctx->pc = 0x126DE8u;
    {
        const bool branch_taken_0x126de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DE8u;
        // 0x126dec: 0x8d6c0004  lw          $t4, 0x4($t3) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126de8) {
            ctx->pc = 0x126944u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126944;
        }
    }
    ctx->pc = 0x126DF0u;
label_126df0:
    // 0x126df0: 0x1000fec5  b           . + 4 + (-0x13B << 2)
    ctx->pc = 0x126DF0u;
    {
        const bool branch_taken_0x126df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126DF0u;
        // 0x126df4: 0x24160010  addiu       $s6, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126df0) {
            ctx->pc = 0x126908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126908;
        }
    }
    ctx->pc = 0x126DF8u;
}
