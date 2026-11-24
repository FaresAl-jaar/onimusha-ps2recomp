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

// Function: sub_00129A40
// Address: 0x129a40 - 0x12af8c
void sub_00129A40_0x129a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129A40_0x129a40");
#endif

    switch (ctx->pc) {
        case 0x129a80u: goto label_129a80;
        case 0x129abcu: goto label_129abc;
        case 0x129af8u: goto label_129af8;
        case 0x129afcu: goto label_129afc;
        case 0x129b44u: goto label_129b44;
        case 0x129b54u: goto label_129b54;
        case 0x129b6cu: goto label_129b6c;
        case 0x129b74u: goto label_129b74;
        case 0x129bb8u: goto label_129bb8;
        case 0x129be8u: goto label_129be8;
        case 0x129becu: goto label_129bec;
        case 0x129bf8u: goto label_129bf8;
        case 0x129c2cu: goto label_129c2c;
        case 0x129c34u: goto label_129c34;
        case 0x129c48u: goto label_129c48;
        case 0x129c80u: goto label_129c80;
        case 0x129cdcu: goto label_129cdc;
        case 0x129d30u: goto label_129d30;
        case 0x129d78u: goto label_129d78;
        case 0x129d80u: goto label_129d80;
        case 0x129d98u: goto label_129d98;
        case 0x129df4u: goto label_129df4;
        case 0x129df8u: goto label_129df8;
        case 0x129e14u: goto label_129e14;
        case 0x129e48u: goto label_129e48;
        case 0x129e7cu: goto label_129e7c;
        case 0x129ed4u: goto label_129ed4;
        case 0x129ee0u: goto label_129ee0;
        case 0x129f2cu: goto label_129f2c;
        case 0x129f34u: goto label_129f34;
        case 0x129f38u: goto label_129f38;
        case 0x129f50u: goto label_129f50;
        case 0x129f54u: goto label_129f54;
        case 0x129f84u: goto label_129f84;
        case 0x129fb8u: goto label_129fb8;
        case 0x12a010u: goto label_12a010;
        case 0x12a03cu: goto label_12a03c;
        case 0x12a070u: goto label_12a070;
        case 0x12a0c8u: goto label_12a0c8;
        case 0x12a0f4u: goto label_12a0f4;
        case 0x12a100u: goto label_12a100;
        case 0x12a120u: goto label_12a120;
        case 0x12a128u: goto label_12a128;
        case 0x12a12cu: goto label_12a12c;
        case 0x12a15cu: goto label_12a15c;
        case 0x12a190u: goto label_12a190;
        case 0x12a1e4u: goto label_12a1e4;
        case 0x12a218u: goto label_12a218;
        case 0x12a240u: goto label_12a240;
        case 0x12a28cu: goto label_12a28c;
        case 0x12a2f0u: goto label_12a2f0;
        case 0x12a31cu: goto label_12a31c;
        case 0x12a350u: goto label_12a350;
        case 0x12a3e0u: goto label_12a3e0;
        case 0x12a43cu: goto label_12a43c;
        case 0x12a468u: goto label_12a468;
        case 0x12a49cu: goto label_12a49c;
        case 0x12a4f4u: goto label_12a4f4;
        case 0x12a504u: goto label_12a504;
        case 0x12a560u: goto label_12a560;
        case 0x12a590u: goto label_12a590;
        case 0x12a5c4u: goto label_12a5c4;
        case 0x12a61cu: goto label_12a61c;
        case 0x12a688u: goto label_12a688;
        case 0x12a6dcu: goto label_12a6dc;
        case 0x12a764u: goto label_12a764;
        case 0x12a778u: goto label_12a778;
        case 0x12a7b8u: goto label_12a7b8;
        case 0x12a7c4u: goto label_12a7c4;
        case 0x12a7ccu: goto label_12a7cc;
        case 0x12a7d0u: goto label_12a7d0;
        case 0x12a810u: goto label_12a810;
        case 0x12a844u: goto label_12a844;
        case 0x12a878u: goto label_12a878;
        case 0x12a908u: goto label_12a908;
        case 0x12a970u: goto label_12a970;
        case 0x12a998u: goto label_12a998;
        case 0x12a9c0u: goto label_12a9c0;
        case 0x12a9c4u: goto label_12a9c4;
        case 0x12a9ccu: goto label_12a9cc;
        case 0x12aa04u: goto label_12aa04;
        case 0x12aa18u: goto label_12aa18;
        case 0x12aa24u: goto label_12aa24;
        case 0x12aa40u: goto label_12aa40;
        case 0x12aad4u: goto label_12aad4;
        case 0x12aadcu: goto label_12aadc;
        case 0x12aae0u: goto label_12aae0;
        case 0x12ab2cu: goto label_12ab2c;
        case 0x12ab34u: goto label_12ab34;
        case 0x12ab68u: goto label_12ab68;
        case 0x12ab80u: goto label_12ab80;
        case 0x12ab88u: goto label_12ab88;
        case 0x12ac04u: goto label_12ac04;
        case 0x12ac08u: goto label_12ac08;
        case 0x12ac28u: goto label_12ac28;
        case 0x12ac30u: goto label_12ac30;
        case 0x12ac40u: goto label_12ac40;
        case 0x12ac64u: goto label_12ac64;
        case 0x12aca8u: goto label_12aca8;
        case 0x12ad08u: goto label_12ad08;
        case 0x12ad30u: goto label_12ad30;
        case 0x12ad34u: goto label_12ad34;
        case 0x12ae48u: goto label_12ae48;
        case 0x12aef8u: goto label_12aef8;
        case 0x12af14u: goto label_12af14;
        case 0x12af24u: goto label_12af24;
        case 0x12af58u: goto label_12af58;
        default: break;
    }

    ctx->pc = 0x129a40u;

    // 0x129a40: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x129a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x129a44: 0xffb00230  sd          $s0, 0x230($sp)
    ctx->pc = 0x129a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 16));
    // 0x129a48: 0xffb10238  sd          $s1, 0x238($sp)
    ctx->pc = 0x129a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 17));
    // 0x129a4c: 0xffb20240  sd          $s2, 0x240($sp)
    ctx->pc = 0x129a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 18));
    // 0x129a50: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x129a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129a54: 0xffb30248  sd          $s3, 0x248($sp)
    ctx->pc = 0x129a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 19));
    // 0x129a58: 0xffb40250  sd          $s4, 0x250($sp)
    ctx->pc = 0x129a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 20));
    // 0x129a5c: 0xffb50258  sd          $s5, 0x258($sp)
    ctx->pc = 0x129a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 21));
    // 0x129a60: 0xffb60260  sd          $s6, 0x260($sp)
    ctx->pc = 0x129a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 22));
    // 0x129a64: 0xffb70268  sd          $s7, 0x268($sp)
    ctx->pc = 0x129a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 23));
    // 0x129a68: 0xffbe0270  sd          $fp, 0x270($sp)
    ctx->pc = 0x129a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 30));
    // 0x129a6c: 0xffbf0278  sd          $ra, 0x278($sp)
    ctx->pc = 0x129a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
    // 0x129a70: 0xafa501f4  sw          $a1, 0x1F4($sp)
    ctx->pc = 0x129a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 5));
    // 0x129a74: 0xafa401f0  sw          $a0, 0x1F0($sp)
    ctx->pc = 0x129a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 4));
    // 0x129a78: 0xc0491e6  jal         func_124798
    ctx->pc = 0x129A78u;
    SET_GPR_U32(ctx, 31, 0x129A80u);
    ctx->pc = 0x129A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129A78u;
    // 0x129a7c: 0xafa701f8  sw          $a3, 0x1F8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124798u, 0x129A78u, 0x129A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129A80u;
label_129a80:
    // 0x129a80: 0x8fad01f4  lw          $t5, 0x1F4($sp)
    ctx->pc = 0x129a80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x129a84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x129a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129a88: 0x95ae000c  lhu         $t6, 0xC($t5)
    ctx->pc = 0x129a88u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x129a8c: 0xffa00210  sd          $zero, 0x210($sp)
    ctx->pc = 0x129a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 0));
    // 0x129a90: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x129a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    // 0x129a94: 0x31cf0008  andi        $t7, $t6, 0x8
    ctx->pc = 0x129a94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)8);
    // 0x129a98: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x129a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x129a9c: 0xafa00220  sw          $zero, 0x220($sp)
    ctx->pc = 0x129a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
    // 0x129aa0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x129AA0u;
    {
        const bool branch_taken_0x129aa0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AA0u;
        // 0x129aa4: 0xafa001e4  sw          $zero, 0x1E4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129aa0) {
            ctx->pc = 0x129AB4u;
            goto label_129ab4;
        }
    }
    ctx->pc = 0x129AA8u;
    // 0x129aa8: 0x8daf0010  lw          $t7, 0x10($t5)
    ctx->pc = 0x129aa8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x129aac: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x129AACu;
    {
        const bool branch_taken_0x129aac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AACu;
        // 0x129ab0: 0x31ce001a  andi        $t6, $t6, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129aac) {
            ctx->pc = 0x129AD0u;
            goto label_129ad0;
        }
    }
    ctx->pc = 0x129AB4u;
label_129ab4:
    // 0x129ab4: 0xc04b054  jal         func_12C150
    ctx->pc = 0x129AB4u;
    SET_GPR_U32(ctx, 31, 0x129ABCu);
    ctx->pc = 0x129AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129AB4u;
    // 0x129ab8: 0x8fa401f4  lw          $a0, 0x1F4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C150u, 0x129AB4u, 0x129ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129ABCu;
label_129abc:
    // 0x129abc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x129ABCu;
    {
        const bool branch_taken_0x129abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129ABCu;
        // 0x129ac0: 0x240effff  addiu       $t6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129abc) {
            ctx->pc = 0x129AFCu;
            goto label_129afc;
        }
    }
    ctx->pc = 0x129AC4u;
    // 0x129ac4: 0x8faf01f4  lw          $t7, 0x1F4($sp)
    ctx->pc = 0x129ac4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x129ac8: 0x95ee000c  lhu         $t6, 0xC($t7)
    ctx->pc = 0x129ac8u;
    SET_GPR_ZE32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x129acc: 0x31ce001a  andi        $t6, $t6, 0x1A
    ctx->pc = 0x129accu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)26);
label_129ad0:
    // 0x129ad0: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x129ad0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x129ad4: 0x15cf0016  bne         $t6, $t7, . + 4 + (0x16 << 2)
    ctx->pc = 0x129AD4u;
    {
        const bool branch_taken_0x129ad4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x129AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AD4u;
        // 0x129ad8: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ad4) {
            ctx->pc = 0x129B30u;
            goto label_129b30;
        }
    }
    ctx->pc = 0x129ADCu;
    // 0x129adc: 0x8fad01f4  lw          $t5, 0x1F4($sp)
    ctx->pc = 0x129adcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x129ae0: 0x85af000e  lh          $t7, 0xE($t5)
    ctx->pc = 0x129ae0u;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 14)));
    // 0x129ae4: 0x5e00012  bltz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x129AE4u;
    {
        const bool branch_taken_0x129ae4 = (GPR_S64(ctx, 15) < 0);
        ctx->pc = 0x129AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129AE4u;
        // 0x129ae8: 0x8fa401f4  lw          $a0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ae4) {
            ctx->pc = 0x129B30u;
            goto label_129b30;
        }
    }
    ctx->pc = 0x129AECu;
    // 0x129aec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x129aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129af0: 0xc04a646  jal         func_129918
    ctx->pc = 0x129AF0u;
    SET_GPR_U32(ctx, 31, 0x129AF8u);
    ctx->pc = 0x129AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129AF0u;
    // 0x129af4: 0x8fa601f8  lw          $a2, 0x1F8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129918u, 0x129AF0u, 0x129AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129AF8u;
label_129af8:
    // 0x129af8: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x129af8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129afc:
    // 0x129afc: 0xdfb00230  ld          $s0, 0x230($sp)
    ctx->pc = 0x129afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x129b00: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x129b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b04: 0xdfb10238  ld          $s1, 0x238($sp)
    ctx->pc = 0x129b04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x129b08: 0xdfb20240  ld          $s2, 0x240($sp)
    ctx->pc = 0x129b08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x129b0c: 0xdfb30248  ld          $s3, 0x248($sp)
    ctx->pc = 0x129b0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x129b10: 0xdfb40250  ld          $s4, 0x250($sp)
    ctx->pc = 0x129b10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x129b14: 0xdfb50258  ld          $s5, 0x258($sp)
    ctx->pc = 0x129b14u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x129b18: 0xdfb60260  ld          $s6, 0x260($sp)
    ctx->pc = 0x129b18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x129b1c: 0xdfb70268  ld          $s7, 0x268($sp)
    ctx->pc = 0x129b1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x129b20: 0xdfbe0270  ld          $fp, 0x270($sp)
    ctx->pc = 0x129b20u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x129b24: 0xdfbf0278  ld          $ra, 0x278($sp)
    ctx->pc = 0x129b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x129b28: 0x3e00008  jr          $ra
    ctx->pc = 0x129B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B28u;
        // 0x129b2c: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x129B30u;
label_129b30:
    // 0x129b30: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x129b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x129b34: 0xafb40020  sw          $s4, 0x20($sp)
    ctx->pc = 0x129b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
    // 0x129b38: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x129b38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b3c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x129b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x129b40: 0xafa00200  sw          $zero, 0x200($sp)
    ctx->pc = 0x129b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 0));
label_129b44:
    // 0x129b44: 0x2a0b02d  daddu       $s6, $s5, $zero
    ctx->pc = 0x129b44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b48: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x129b48u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x129b4c: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x129b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x129b50: 0x24110025  addiu       $s1, $zero, 0x25
    ctx->pc = 0x129b50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_129b54:
    // 0x129b54: 0x8e646048  lw          $a0, 0x6048($s3)
    ctx->pc = 0x129b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24648)));
    // 0x129b58: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x129b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x129b5c: 0x8e476050  lw          $a3, 0x6050($s2)
    ctx->pc = 0x129b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24656)));
    // 0x129b60: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x129b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b64: 0xc0494b8  jal         func_1252E0
    ctx->pc = 0x129B64u;
    SET_GPR_U32(ctx, 31, 0x129B6Cu);
    ctx->pc = 0x129B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129B64u;
    // 0x129b68: 0x27a801e4  addiu       $t0, $sp, 0x1E4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1252E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1252E0u, 0x129B64u, 0x129B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129B6Cu;
label_129b6c:
    // 0x129b6c: 0x1c400502  bgtz        $v0, . + 4 + (0x502 << 2)
    ctx->pc = 0x129B6Cu;
    {
        const bool branch_taken_0x129b6c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x129B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129B6Cu;
        // 0x129b70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129b6c) {
            ctx->pc = 0x12AF78u;
            goto label_12af78;
        }
    }
    ctx->pc = 0x129B74u;
label_129b74:
    // 0x129b74: 0x2b68823  subu        $s1, $s5, $s6
    ctx->pc = 0x129b74u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x129b78: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x129B78u;
    {
        const bool branch_taken_0x129b78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x129b78) {
            ctx->pc = 0x129BCCu;
            goto label_129bcc;
        }
    }
    ctx->pc = 0x129B80u;
    // 0x129b80: 0xae910004  sw          $s1, 0x4($s4)
    ctx->pc = 0x129b80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 17));
    // 0x129b84: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x129b84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x129b88: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x129b88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x129b8c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x129b8cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x129b90: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x129b90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x129b94: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x129b94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x129b98: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x129b98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x129b9c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x129b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x129ba0: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x129ba0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x129ba4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x129BA4u;
    {
        const bool branch_taken_0x129ba4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BA4u;
        // 0x129ba8: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ba4) {
            ctx->pc = 0x129BC0u;
            goto label_129bc0;
        }
    }
    ctx->pc = 0x129BACu;
    // 0x129bac: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x129bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x129bb0: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x129BB0u;
    SET_GPR_U32(ctx, 31, 0x129BB8u);
    ctx->pc = 0x129BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129BB0u;
    // 0x129bb4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x129BB0u, 0x129BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129BB8u;
label_129bb8:
    // 0x129bb8: 0x144000de  bnez        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x129BB8u;
    {
        const bool branch_taken_0x129bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BB8u;
        // 0x129bbc: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129bb8) {
            ctx->pc = 0x129F34u;
            goto label_129f34;
        }
    }
    ctx->pc = 0x129BC0u;
label_129bc0:
    // 0x129bc0: 0x8fae0200  lw          $t6, 0x200($sp)
    ctx->pc = 0x129bc0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x129bc4: 0x1d17021  addu        $t6, $t6, $s1
    ctx->pc = 0x129bc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
    // 0x129bc8: 0xafae0200  sw          $t6, 0x200($sp)
    ctx->pc = 0x129bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 14));
label_129bcc:
    // 0x129bcc: 0x1a0004dd  blez        $s0, . + 4 + (0x4DD << 2)
    ctx->pc = 0x129BCCu;
    {
        const bool branch_taken_0x129bcc = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x129BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129BCCu;
        // 0x129bd0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129bcc) {
            ctx->pc = 0x12AF44u;
            goto label_12af44;
        }
    }
    ctx->pc = 0x129BD4u;
    // 0x129bd4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x129bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x129bd8: 0xafa001fc  sw          $zero, 0x1FC($sp)
    ctx->pc = 0x129bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 0));
    // 0x129bdc: 0xafa0021c  sw          $zero, 0x21C($sp)
    ctx->pc = 0x129bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
    // 0x129be0: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x129be0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129be4: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x129be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
label_129be8:
    // 0x129be8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x129be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_129bec:
    // 0x129bec: 0x69e00  sll         $s3, $a2, 24
    ctx->pc = 0x129becu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x129bf0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x129bf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x129bf4: 0x139e03  sra         $s3, $s3, 24
    ctx->pc = 0x129bf4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 24));
label_129bf8:
    // 0x129bf8: 0x266effe0  addiu       $t6, $s3, -0x20
    ctx->pc = 0x129bf8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x129bfc: 0x2dcf0059  sltiu       $t7, $t6, 0x59
    ctx->pc = 0x129bfcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x129c00: 0x11e004ca  beqz        $t7, . + 4 + (0x4CA << 2)
    ctx->pc = 0x129C00u;
    {
        const bool branch_taken_0x129c00 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C00u;
        // 0x129c04: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c00) {
            ctx->pc = 0x12AF2Cu;
            goto label_12af2c;
        }
    }
    ctx->pc = 0x129C08u;
    // 0x129c08: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x129c08u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x129c0c: 0x25ce3ec0  addiu       $t6, $t6, 0x3EC0
    ctx->pc = 0x129c0cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16064));
    // 0x129c10: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x129c10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x129c14: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x129c14u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x129c18: 0x1a00008  jr          $t5
    ctx->pc = 0x129C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129C20u: goto label_129c20;
            case 0x129C3Cu: goto label_129c3c;
            case 0x129C50u: goto label_129c50;
            case 0x129C74u: goto label_129c74;
            case 0x129C88u: goto label_129c88;
            case 0x129C90u: goto label_129c90;
            case 0x129D10u: goto label_129d10;
            case 0x129D24u: goto label_129d24;
            case 0x129D58u: goto label_129d58;
            case 0x129D64u: goto label_129d64;
            case 0x12AAA4u: goto label_12aaa4;
            case 0x12AAB4u: goto label_12aab4;
            case 0x12AAC0u: goto label_12aac0;
            case 0x12AB0Cu: goto label_12ab0c;
            case 0x12AB18u: goto label_12ab18;
            case 0x12AB60u: goto label_12ab60;
            case 0x12ABCCu: goto label_12abcc;
            case 0x12ABF4u: goto label_12abf4;
            case 0x12ADE4u: goto label_12ade4;
            case 0x12ADF4u: goto label_12adf4;
            case 0x12AE28u: goto label_12ae28;
            case 0x12AE84u: goto label_12ae84;
            case 0x12AEB8u: goto label_12aeb8;
            case 0x12AEC8u: goto label_12aec8;
            case 0x12AF2Cu: goto label_12af2c;
            case 0x12AF68u: goto label_12af68;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129C18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x129C20u;
label_129c20:
    // 0x129c20: 0x83af0000  lb          $t7, 0x0($sp)
    ctx->pc = 0x129c20u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129c24: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x129C24u;
    {
        const bool branch_taken_0x129c24 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C24u;
        // 0x129c28: 0x240e0020  addiu       $t6, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c24) {
            ctx->pc = 0x129C34u;
            goto label_129c34;
        }
    }
    ctx->pc = 0x129C2Cu;
label_129c2c:
    // 0x129c2c: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x129C2Cu;
    {
        const bool branch_taken_0x129c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C2Cu;
        // 0x129c30: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c2c) {
            ctx->pc = 0x129BECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129bec;
        }
    }
    ctx->pc = 0x129C34u;
label_129c34:
    // 0x129c34: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x129C34u;
    {
        const bool branch_taken_0x129c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C34u;
        // 0x129c38: 0xa3ae0000  sb          $t6, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c34) {
            ctx->pc = 0x129C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129c2c;
        }
    }
    ctx->pc = 0x129C3Cu;
label_129c3c:
    // 0x129c3c: 0x8faf01fc  lw          $t7, 0x1FC($sp)
    ctx->pc = 0x129c3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x129c40: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x129c40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129c44: 0x35ef0001  ori         $t7, $t7, 0x1
    ctx->pc = 0x129c44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1);
label_129c48:
    // 0x129c48: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x129C48u;
    {
        const bool branch_taken_0x129c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C48u;
        // 0x129c4c: 0xafaf01fc  sw          $t7, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c48) {
            ctx->pc = 0x129BECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129bec;
        }
    }
    ctx->pc = 0x129C50u;
label_129c50:
    // 0x129c50: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x129c50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x129c54: 0x8fad01f8  lw          $t5, 0x1F8($sp)
    ctx->pc = 0x129c54u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x129c58: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x129c58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x129c5c: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x129c5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x129c60: 0xafaf0204  sw          $t7, 0x204($sp)
    ctx->pc = 0x129c60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 15));
    // 0x129c64: 0x5e1fff1  bgez        $t7, . + 4 + (-0xF << 2)
    ctx->pc = 0x129C64u;
    {
        const bool branch_taken_0x129c64 = (GPR_S64(ctx, 15) >= 0);
        ctx->pc = 0x129C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C64u;
        // 0x129c68: 0xafad01f8  sw          $t5, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c64) {
            ctx->pc = 0x129C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129c2c;
        }
    }
    ctx->pc = 0x129C6Cu;
    // 0x129c6c: 0xf7823  negu        $t7, $t7
    ctx->pc = 0x129c6cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x129c70: 0xafaf0204  sw          $t7, 0x204($sp)
    ctx->pc = 0x129c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 15));
label_129c74:
    // 0x129c74: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x129c74u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x129c78: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x129c78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129c7c: 0x35ce0004  ori         $t6, $t6, 0x4
    ctx->pc = 0x129c7cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)4);
label_129c80:
    // 0x129c80: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x129C80u;
    {
        const bool branch_taken_0x129c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C80u;
        // 0x129c84: 0xafae01fc  sw          $t6, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c80) {
            ctx->pc = 0x129BECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129bec;
        }
    }
    ctx->pc = 0x129C88u;
label_129c88:
    // 0x129c88: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x129C88u;
    {
        const bool branch_taken_0x129c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C88u;
        // 0x129c8c: 0x240e002b  addiu       $t6, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c88) {
            ctx->pc = 0x129C34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129c34;
        }
    }
    ctx->pc = 0x129C90u;
label_129c90:
    // 0x129c90: 0x82b30000  lb          $s3, 0x0($s5)
    ctx->pc = 0x129c90u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129c94: 0x240f002a  addiu       $t7, $zero, 0x2A
    ctx->pc = 0x129c94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x129c98: 0x166f000b  bne         $s3, $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x129C98u;
    {
        const bool branch_taken_0x129c98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x129C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129C98u;
        // 0x129c9c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c98) {
            ctx->pc = 0x129CC8u;
            goto label_129cc8;
        }
    }
    ctx->pc = 0x129CA0u;
    // 0x129ca0: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x129ca0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x129ca4: 0x8df00000  lw          $s0, 0x0($t7)
    ctx->pc = 0x129ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x129ca8: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x129ca8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x129cac: 0xafaf01f8  sw          $t7, 0x1F8($sp)
    ctx->pc = 0x129cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
    // 0x129cb0: 0x2a0fffff  slti        $t7, $s0, -0x1
    ctx->pc = 0x129cb0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x129cb4: 0x11e0ffdd  beqz        $t7, . + 4 + (-0x23 << 2)
    ctx->pc = 0x129CB4u;
    {
        const bool branch_taken_0x129cb4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CB4u;
        // 0x129cb8: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129cb4) {
            ctx->pc = 0x129C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129c2c;
        }
    }
    ctx->pc = 0x129CBCu;
    // 0x129cbc: 0x1000ffca  b           . + 4 + (-0x36 << 2)
    ctx->pc = 0x129CBCu;
    {
        const bool branch_taken_0x129cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CBCu;
        // 0x129cc0: 0x92a60000  lbu         $a2, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129cbc) {
            ctx->pc = 0x129BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129be8;
        }
    }
    ctx->pc = 0x129CC4u;
    // 0x129cc4: 0x0  nop
    ctx->pc = 0x129cc4u;
    // NOP
label_129cc8:
    // 0x129cc8: 0x266fffd0  addiu       $t7, $s3, -0x30
    ctx->pc = 0x129cc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967248));
    // 0x129ccc: 0x2def000a  sltiu       $t7, $t7, 0xA
    ctx->pc = 0x129cccu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x129cd0: 0x11e0000a  beqz        $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x129CD0u;
    {
        const bool branch_taken_0x129cd0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CD0u;
        // 0x129cd4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129cd0) {
            ctx->pc = 0x129CFCu;
            goto label_129cfc;
        }
    }
    ctx->pc = 0x129CD8u;
    // 0x129cd8: 0x240d000a  addiu       $t5, $zero, 0xA
    ctx->pc = 0x129cd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_129cdc:
    // 0x129cdc: 0x20d7818  mult        $t7, $s0, $t5
    ctx->pc = 0x129cdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x129ce0: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x129ce0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x129ce4: 0x82b30000  lb          $s3, 0x0($s5)
    ctx->pc = 0x129ce4u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129ce8: 0x25f0ffd0  addiu       $s0, $t7, -0x30
    ctx->pc = 0x129ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
    // 0x129cec: 0x266effd0  addiu       $t6, $s3, -0x30
    ctx->pc = 0x129cecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967248));
    // 0x129cf0: 0x2dce000a  sltiu       $t6, $t6, 0xA
    ctx->pc = 0x129cf0u;
    SET_GPR_U64(ctx, 14, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x129cf4: 0x15c0fff9  bnez        $t6, . + 4 + (-0x7 << 2)
    ctx->pc = 0x129CF4u;
    {
        const bool branch_taken_0x129cf4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x129CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129CF4u;
        // 0x129cf8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129cf4) {
            ctx->pc = 0x129CDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129cdc;
        }
    }
    ctx->pc = 0x129CFCu;
label_129cfc:
    // 0x129cfc: 0x2a0fffff  slti        $t7, $s0, -0x1
    ctx->pc = 0x129cfcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x129d00: 0x11e0ffbd  beqz        $t7, . + 4 + (-0x43 << 2)
    ctx->pc = 0x129D00u;
    {
        const bool branch_taken_0x129d00 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D00u;
        // 0x129d04: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d00) {
            ctx->pc = 0x129BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129bf8;
        }
    }
    ctx->pc = 0x129D08u;
    // 0x129d08: 0x1000ffbb  b           . + 4 + (-0x45 << 2)
    ctx->pc = 0x129D08u;
    {
        const bool branch_taken_0x129d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D08u;
        // 0x129d0c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d08) {
            ctx->pc = 0x129BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129bf8;
        }
    }
    ctx->pc = 0x129D10u;
label_129d10:
    // 0x129d10: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x129d10u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x129d14: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x129d14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129d18: 0x35ad0080  ori         $t5, $t5, 0x80
    ctx->pc = 0x129d18u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)128);
    // 0x129d1c: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x129D1Cu;
    {
        const bool branch_taken_0x129d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D1Cu;
        // 0x129d20: 0xafad01fc  sw          $t5, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d1c) {
            ctx->pc = 0x129BECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129bec;
        }
    }
    ctx->pc = 0x129D24u;
label_129d24:
    // 0x129d24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x129d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129d28: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x129d28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x129d2c: 0x20e7818  mult        $t7, $s0, $t6
    ctx->pc = 0x129d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_129d30:
    // 0x129d30: 0x1f37821  addu        $t7, $t7, $s3
    ctx->pc = 0x129d30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 19)));
    // 0x129d34: 0x82b30000  lb          $s3, 0x0($s5)
    ctx->pc = 0x129d34u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x129d38: 0x25f0ffd0  addiu       $s0, $t7, -0x30
    ctx->pc = 0x129d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967248));
    // 0x129d3c: 0x266fffd0  addiu       $t7, $s3, -0x30
    ctx->pc = 0x129d3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967248));
    // 0x129d40: 0xafb00204  sw          $s0, 0x204($sp)
    ctx->pc = 0x129d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 16));
    // 0x129d44: 0x2def000a  sltiu       $t7, $t7, 0xA
    ctx->pc = 0x129d44u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x129d48: 0x11e0ffab  beqz        $t7, . + 4 + (-0x55 << 2)
    ctx->pc = 0x129D48u;
    {
        const bool branch_taken_0x129d48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D48u;
        // 0x129d4c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d48) {
            ctx->pc = 0x129BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129bf8;
        }
    }
    ctx->pc = 0x129D50u;
    // 0x129d50: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x129D50u;
    {
        const bool branch_taken_0x129d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D50u;
        // 0x129d54: 0x20e7818  mult        $t7, $s0, $t6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d50) {
            ctx->pc = 0x129D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129d30;
        }
    }
    ctx->pc = 0x129D58u;
label_129d58:
    // 0x129d58: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x129d58u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x129d5c: 0x35ce0010  ori         $t6, $t6, 0x10
    ctx->pc = 0x129d5cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16);
    // 0x129d60: 0xafae01fc  sw          $t6, 0x1FC($sp)
    ctx->pc = 0x129d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 14));
label_129d64:
    // 0x129d64: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x129d64u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x129d68: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x129d68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x129d6c: 0x11e00344  beqz        $t7, . + 4 + (0x344 << 2)
    ctx->pc = 0x129D6Cu;
    {
        const bool branch_taken_0x129d6c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D6Cu;
        // 0x129d70: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d6c) {
            ctx->pc = 0x12AA80u;
            goto label_12aa80;
        }
    }
    ctx->pc = 0x129D74u;
    // 0x129d74: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x129d74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
label_129d78:
    // 0x129d78: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x129d78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x129d7c: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x129d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_129d80:
    // 0x129d80: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129D80u;
    {
        const bool branch_taken_0x129d80 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x129D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D80u;
        // 0x129d84: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d80) {
            ctx->pc = 0x129D98u;
            goto label_129d98;
        }
    }
    ctx->pc = 0x129D88u;
    // 0x129d88: 0x240e002d  addiu       $t6, $zero, 0x2D
    ctx->pc = 0x129d88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x129d8c: 0x2102f  dsubu       $v0, $zero, $v0
    ctx->pc = 0x129d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x129d90: 0xa3ae0000  sb          $t6, 0x0($sp)
    ctx->pc = 0x129d90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x129d94: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x129d94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_129d98:
    // 0x129d98: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x129D98u;
    {
        const bool branch_taken_0x129d98 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x129D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129D98u;
        // 0x129d9c: 0xafb1021c  sw          $s1, 0x21C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d98) {
            ctx->pc = 0x129DB0u;
            goto label_129db0;
        }
    }
    ctx->pc = 0x129DA0u;
    // 0x129da0: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x129da0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x129da4: 0x240fff7f  addiu       $t7, $zero, -0x81
    ctx->pc = 0x129da4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x129da8: 0x1af6824  and         $t5, $t5, $t7
    ctx->pc = 0x129da8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 15));
    // 0x129dac: 0xafad01fc  sw          $t5, 0x1FC($sp)
    ctx->pc = 0x129dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
label_129db0:
    // 0x129db0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x129DB0u;
    {
        const bool branch_taken_0x129db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DB0u;
        // 0x129db4: 0x27b601cc  addiu       $s6, $sp, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129db0) {
            ctx->pc = 0x129DC4u;
            goto label_129dc4;
        }
    }
    ctx->pc = 0x129DB8u;
    // 0x129db8: 0x8faf021c  lw          $t7, 0x21C($sp)
    ctx->pc = 0x129db8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x129dbc: 0x11e00327  beqz        $t7, . + 4 + (0x327 << 2)
    ctx->pc = 0x129DBCu;
    {
        const bool branch_taken_0x129dbc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x129dbc) {
            ctx->pc = 0x12AA5Cu;
            goto label_12aa5c;
        }
    }
    ctx->pc = 0x129DC4u;
label_129dc4:
    // 0x129dc4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x129dc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129dc8: 0x11cf0310  beq         $t6, $t7, . + 4 + (0x310 << 2)
    ctx->pc = 0x129DC8u;
    {
        const bool branch_taken_0x129dc8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x129DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DC8u;
        // 0x129dcc: 0x2c4f000a  sltiu       $t7, $v0, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129dc8) {
            ctx->pc = 0x12AA0Cu;
            goto label_12aa0c;
        }
    }
    ctx->pc = 0x129DD0u;
    // 0x129dd0: 0x11c002ff  beqz        $t6, . + 4 + (0x2FF << 2)
    ctx->pc = 0x129DD0u;
    {
        const bool branch_taken_0x129dd0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x129DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DD0u;
        // 0x129dd4: 0x304f0007  andi        $t7, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129dd0) {
            ctx->pc = 0x12A9D0u;
            goto label_12a9d0;
        }
    }
    ctx->pc = 0x129DD8u;
    // 0x129dd8: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x129dd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129ddc: 0x11cf02ef  beq         $t6, $t7, . + 4 + (0x2EF << 2)
    ctx->pc = 0x129DDCu;
    {
        const bool branch_taken_0x129ddc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x129DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129DDCu;
        // 0x129de0: 0x304f000f  andi        $t7, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ddc) {
            ctx->pc = 0x12A99Cu;
            goto label_12a99c;
        }
    }
    ctx->pc = 0x129DE4u;
    // 0x129de4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x129de4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x129de8: 0x25f63e48  addiu       $s6, $t7, 0x3E48
    ctx->pc = 0x129de8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 15944));
    // 0x129dec: 0xc049f18  jal         func_127C60
    ctx->pc = 0x129DECu;
    SET_GPR_U32(ctx, 31, 0x129DF4u);
    ctx->pc = 0x129DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129DECu;
    // 0x129df0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x129DECu, 0x129DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129DF4u;
label_129df4:
    // 0x129df4: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x129df4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_129df8:
    // 0x129df8: 0x8fad021c  lw          $t5, 0x21C($sp)
    ctx->pc = 0x129df8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x129dfc: 0x3c0b82d  daddu       $s7, $fp, $zero
    ctx->pc = 0x129dfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129e00: 0x93ae0000  lbu         $t6, 0x0($sp)
    ctx->pc = 0x129e00u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129e04: 0x3cd782a  slt         $t7, $fp, $t5
    ctx->pc = 0x129e04u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x129e08: 0x11c002df  beqz        $t6, . + 4 + (0x2DF << 2)
    ctx->pc = 0x129E08u;
    {
        const bool branch_taken_0x129e08 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x129E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E08u;
        // 0x129e0c: 0x1afb80b  movn        $s7, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e08) {
            ctx->pc = 0x12A988u;
            goto label_12a988;
        }
    }
    ctx->pc = 0x129E10u;
    // 0x129e10: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x129e10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_129e14:
    // 0x129e14: 0x8faf01fc  lw          $t7, 0x1FC($sp)
    ctx->pc = 0x129e14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x129e18: 0x31ef0084  andi        $t7, $t7, 0x84
    ctx->pc = 0x129e18u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)132);
    // 0x129e1c: 0x15e00030  bnez        $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x129E1Cu;
    {
        const bool branch_taken_0x129e1c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E1Cu;
        // 0x129e20: 0xafaf0224  sw          $t7, 0x224($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e1c) {
            ctx->pc = 0x129EE0u;
            goto label_129ee0;
        }
    }
    ctx->pc = 0x129E24u;
    // 0x129e24: 0x8fad0204  lw          $t5, 0x204($sp)
    ctx->pc = 0x129e24u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x129e28: 0x1b78023  subu        $s0, $t5, $s7
    ctx->pc = 0x129e28u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 23)));
    // 0x129e2c: 0x1a00002c  blez        $s0, . + 4 + (0x2C << 2)
    ctx->pc = 0x129E2Cu;
    {
        const bool branch_taken_0x129e2c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x129E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E2Cu;
        // 0x129e30: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e2c) {
            ctx->pc = 0x129EE0u;
            goto label_129ee0;
        }
    }
    ctx->pc = 0x129E34u;
    // 0x129e34: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x129E34u;
    {
        const bool branch_taken_0x129e34 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E34u;
        // 0x129e38: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e34) {
            ctx->pc = 0x129E98u;
            goto label_129e98;
        }
    }
    ctx->pc = 0x129E3Cu;
    // 0x129e3c: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x129e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x129e40: 0x25f13e28  addiu       $s1, $t7, 0x3E28
    ctx->pc = 0x129e40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 15912));
    // 0x129e44: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x129e44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_129e48:
    // 0x129e48: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x129e48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x129e4c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x129e4cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x129e50: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x129e50u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x129e54: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x129e54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x129e58: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x129e58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x129e5c: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x129e5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x129e60: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x129e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x129e64: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x129e64u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x129e68: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x129E68u;
    {
        const bool branch_taken_0x129e68 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E68u;
        // 0x129e6c: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e68) {
            ctx->pc = 0x129E84u;
            goto label_129e84;
        }
    }
    ctx->pc = 0x129E70u;
    // 0x129e70: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x129e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x129e74: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x129E74u;
    SET_GPR_U32(ctx, 31, 0x129E7Cu);
    ctx->pc = 0x129E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129E74u;
    // 0x129e78: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x129E74u, 0x129E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129E7Cu;
label_129e7c:
    // 0x129e7c: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x129E7Cu;
    {
        const bool branch_taken_0x129e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129E7Cu;
        // 0x129e80: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129e7c) {
            ctx->pc = 0x129F34u;
            goto label_129f34;
        }
    }
    ctx->pc = 0x129E84u;
label_129e84:
    // 0x129e84: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x129e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x129e88: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x129e88u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x129e8c: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x129E8Cu;
    {
        const bool branch_taken_0x129e8c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x129e8c) {
            ctx->pc = 0x129E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129E8Cu;
            // 0x129e90: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129e48;
        }
    }
    ctx->pc = 0x129E94u;
    // 0x129e94: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x129e94u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
label_129e98:
    // 0x129e98: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x129e98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x129e9c: 0x25ef3e28  addiu       $t7, $t7, 0x3E28
    ctx->pc = 0x129e9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15912));
    // 0x129ea0: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x129ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x129ea4: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x129ea4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x129ea8: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x129ea8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x129eac: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x129eacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x129eb0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x129eb0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x129eb4: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x129eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x129eb8: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x129eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x129ebc: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x129ebcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x129ec0: 0x15e002af  bnez        $t7, . + 4 + (0x2AF << 2)
    ctx->pc = 0x129EC0u;
    {
        const bool branch_taken_0x129ec0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EC0u;
        // 0x129ec4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ec0) {
            ctx->pc = 0x12A980u;
            goto label_12a980;
        }
    }
    ctx->pc = 0x129EC8u;
    // 0x129ec8: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x129ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x129ecc: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x129ECCu;
    SET_GPR_U32(ctx, 31, 0x129ED4u);
    ctx->pc = 0x129ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129ECCu;
    // 0x129ed0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x129ECCu, 0x129ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129ED4u;
label_129ed4:
    // 0x129ed4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x129ED4u;
    {
        const bool branch_taken_0x129ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129ED4u;
        // 0x129ed8: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ed4) {
            ctx->pc = 0x129F34u;
            goto label_129f34;
        }
    }
    ctx->pc = 0x129EDCu;
    // 0x129edc: 0x93ae0000  lbu         $t6, 0x0($sp)
    ctx->pc = 0x129edcu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_129ee0:
    // 0x129ee0: 0xe7e00  sll         $t7, $t6, 24
    ctx->pc = 0x129ee0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x129ee4: 0xf7e03  sra         $t7, $t7, 24
    ctx->pc = 0x129ee4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 24));
    // 0x129ee8: 0x11e0028b  beqz        $t7, . + 4 + (0x28B << 2)
    ctx->pc = 0x129EE8u;
    {
        const bool branch_taken_0x129ee8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x129EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129EE8u;
        // 0x129eec: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ee8) {
            ctx->pc = 0x12A918u;
            goto label_12a918;
        }
    }
    ctx->pc = 0x129EF0u;
    // 0x129ef0: 0xae9d0000  sw          $sp, 0x0($s4)
    ctx->pc = 0x129ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 29));
    // 0x129ef4: 0xae8f0004  sw          $t7, 0x4($s4)
    ctx->pc = 0x129ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 15));
    // 0x129ef8: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x129ef8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x129efc: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x129efcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x129f00: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x129f00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x129f04: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x129f04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x129f08: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x129f08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x129f0c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x129f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x129f10: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x129f10u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x129f14: 0x15e0000e  bnez        $t7, . + 4 + (0xE << 2)
    ctx->pc = 0x129F14u;
    {
        const bool branch_taken_0x129f14 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F14u;
        // 0x129f18: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f14) {
            ctx->pc = 0x129F50u;
            goto label_129f50;
        }
    }
    ctx->pc = 0x129F1Cu;
    // 0x129f1c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x129f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x129f20: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x129f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x129f24: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x129F24u;
    SET_GPR_U32(ctx, 31, 0x129F2Cu);
    ctx->pc = 0x129F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129F24u;
    // 0x129f28: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x129F24u, 0x129F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129F2Cu;
label_129f2c:
    // 0x129f2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x129F2Cu;
    {
        const bool branch_taken_0x129f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F2Cu;
        // 0x129f30: 0x8fad0224  lw          $t5, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f2c) {
            ctx->pc = 0x129F54u;
            goto label_129f54;
        }
    }
    ctx->pc = 0x129F34u;
label_129f34:
    // 0x129f34: 0x8fad01f4  lw          $t5, 0x1F4($sp)
    ctx->pc = 0x129f34u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_129f38:
    // 0x129f38: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x129f38u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x129f3c: 0x95af000c  lhu         $t7, 0xC($t5)
    ctx->pc = 0x129f3cu;
    SET_GPR_ZE32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 12)));
    // 0x129f40: 0x8fad0200  lw          $t5, 0x200($sp)
    ctx->pc = 0x129f40u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x129f44: 0x31ef0040  andi        $t7, $t7, 0x40
    ctx->pc = 0x129f44u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)64);
    // 0x129f48: 0x1000feec  b           . + 4 + (-0x114 << 2)
    ctx->pc = 0x129F48u;
    {
        const bool branch_taken_0x129f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F48u;
        // 0x129f4c: 0x1af700a  movz        $t6, $t5, $t7 (Delay Slot)
        if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f48) {
            ctx->pc = 0x129AFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129afc;
        }
    }
    ctx->pc = 0x129F50u;
label_129f50:
    // 0x129f50: 0x8fad0224  lw          $t5, 0x224($sp)
    ctx->pc = 0x129f50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_129f54:
    // 0x129f54: 0x240f0080  addiu       $t7, $zero, 0x80
    ctx->pc = 0x129f54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x129f58: 0x15af0030  bne         $t5, $t7, . + 4 + (0x30 << 2)
    ctx->pc = 0x129F58u;
    {
        const bool branch_taken_0x129f58 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 15));
        ctx->pc = 0x129F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F58u;
        // 0x129f5c: 0x8faf021c  lw          $t7, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f58) {
            ctx->pc = 0x12A01Cu;
            goto label_12a01c;
        }
    }
    ctx->pc = 0x129F60u;
    // 0x129f60: 0x8fae0204  lw          $t6, 0x204($sp)
    ctx->pc = 0x129f60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x129f64: 0x1d78023  subu        $s0, $t6, $s7
    ctx->pc = 0x129f64u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 23)));
    // 0x129f68: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x129F68u;
    {
        const bool branch_taken_0x129f68 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x129F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F68u;
        // 0x129f6c: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f68) {
            ctx->pc = 0x12A018u;
            goto label_12a018;
        }
    }
    ctx->pc = 0x129F70u;
    // 0x129f70: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x129F70u;
    {
        const bool branch_taken_0x129f70 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129F70u;
        // 0x129f74: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f70) {
            ctx->pc = 0x129FD4u;
            goto label_129fd4;
        }
    }
    ctx->pc = 0x129F78u;
    // 0x129f78: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x129f78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x129f7c: 0x25f13e38  addiu       $s1, $t7, 0x3E38
    ctx->pc = 0x129f7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 15928));
    // 0x129f80: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x129f80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_129f84:
    // 0x129f84: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x129f84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x129f88: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x129f88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x129f8c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x129f8cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x129f90: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x129f90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x129f94: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x129f94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x129f98: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x129f98u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x129f9c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x129f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x129fa0: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x129fa0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x129fa4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x129FA4u;
    {
        const bool branch_taken_0x129fa4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x129FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129FA4u;
        // 0x129fa8: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fa4) {
            ctx->pc = 0x129FC0u;
            goto label_129fc0;
        }
    }
    ctx->pc = 0x129FACu;
    // 0x129fac: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x129facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x129fb0: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x129FB0u;
    SET_GPR_U32(ctx, 31, 0x129FB8u);
    ctx->pc = 0x129FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129FB0u;
    // 0x129fb4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x129FB0u, 0x129FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129FB8u;
label_129fb8:
    // 0x129fb8: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x129FB8u;
    {
        const bool branch_taken_0x129fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129FB8u;
        // 0x129fbc: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fb8) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x129FC0u;
label_129fc0:
    // 0x129fc0: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x129fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x129fc4: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x129fc4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x129fc8: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x129FC8u;
    {
        const bool branch_taken_0x129fc8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x129fc8) {
            ctx->pc = 0x129FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129FC8u;
            // 0x129fcc: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129F84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f84;
        }
    }
    ctx->pc = 0x129FD0u;
    // 0x129fd0: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x129fd0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
label_129fd4:
    // 0x129fd4: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x129fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x129fd8: 0x25ef3e38  addiu       $t7, $t7, 0x3E38
    ctx->pc = 0x129fd8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15928));
    // 0x129fdc: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x129fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x129fe0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x129fe0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x129fe4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x129fe4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x129fe8: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x129fe8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x129fec: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x129fecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x129ff0: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x129ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x129ff4: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x129ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x129ff8: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x129ff8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x129ffc: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x129FFCu;
    {
        const bool branch_taken_0x129ffc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129FFCu;
        // 0x12a000: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ffc) {
            ctx->pc = 0x12A018u;
            goto label_12a018;
        }
    }
    ctx->pc = 0x12A004u;
    // 0x12a004: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a008: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A008u;
    SET_GPR_U32(ctx, 31, 0x12A010u);
    ctx->pc = 0x12A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A008u;
    // 0x12a00c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A008u, 0x12A010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A010u;
label_12a010:
    // 0x12a010: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x12A010u;
    {
        const bool branch_taken_0x12a010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A010u;
        // 0x12a014: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a010) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A018u;
label_12a018:
    // 0x12a018: 0x8faf021c  lw          $t7, 0x21C($sp)
    ctx->pc = 0x12a018u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_12a01c:
    // 0x12a01c: 0x1fe8023  subu        $s0, $t7, $fp
    ctx->pc = 0x12a01cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 30)));
    // 0x12a020: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12A020u;
    {
        const bool branch_taken_0x12a020 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x12A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A020u;
        // 0x12a024: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a020) {
            ctx->pc = 0x12A0D0u;
            goto label_12a0d0;
        }
    }
    ctx->pc = 0x12A028u;
    // 0x12a028: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12A028u;
    {
        const bool branch_taken_0x12a028 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A028u;
        // 0x12a02c: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a028) {
            ctx->pc = 0x12A08Cu;
            goto label_12a08c;
        }
    }
    ctx->pc = 0x12A030u;
    // 0x12a030: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12a030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12a034: 0x25f13e38  addiu       $s1, $t7, 0x3E38
    ctx->pc = 0x12a034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 15928));
    // 0x12a038: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12a038u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12a03c:
    // 0x12a03c: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12a040: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a040u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a044: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a044u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a048: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12a048u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12a04c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a04cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a050: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12a050u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12a054: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a058: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a058u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a05c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A05Cu;
    {
        const bool branch_taken_0x12a05c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A05Cu;
        // 0x12a060: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a05c) {
            ctx->pc = 0x12A078u;
            goto label_12a078;
        }
    }
    ctx->pc = 0x12A064u;
    // 0x12a064: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a068: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A068u;
    SET_GPR_U32(ctx, 31, 0x12A070u);
    ctx->pc = 0x12A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A068u;
    // 0x12a06c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A068u, 0x12A070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A070u;
label_12a070:
    // 0x12a070: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x12A070u;
    {
        const bool branch_taken_0x12a070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A070u;
        // 0x12a074: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a070) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A078u;
label_12a078:
    // 0x12a078: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12a078u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12a07c: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12a07cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12a080: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12A080u;
    {
        const bool branch_taken_0x12a080 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a080) {
            ctx->pc = 0x12A084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A080u;
            // 0x12a084: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A03Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a03c;
        }
    }
    ctx->pc = 0x12A088u;
    // 0x12a088: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12a088u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
label_12a08c:
    // 0x12a08c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12a08cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12a090: 0x25ef3e38  addiu       $t7, $t7, 0x3E38
    ctx->pc = 0x12a090u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15928));
    // 0x12a094: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12a094u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12a098: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a098u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a09c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a09cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a0a0: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12a0a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12a0a4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a0a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a0a8: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12a0ac: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a0b0: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a0b0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a0b4: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A0B4u;
    {
        const bool branch_taken_0x12a0b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A0B4u;
        // 0x12a0b8: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0b4) {
            ctx->pc = 0x12A0D0u;
            goto label_12a0d0;
        }
    }
    ctx->pc = 0x12A0BCu;
    // 0x12a0bc: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a0c0: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A0C0u;
    SET_GPR_U32(ctx, 31, 0x12A0C8u);
    ctx->pc = 0x12A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A0C0u;
    // 0x12a0c4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A0C0u, 0x12A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A0C8u;
label_12a0c8:
    // 0x12a0c8: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
    ctx->pc = 0x12A0C8u;
    {
        const bool branch_taken_0x12a0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A0C8u;
        // 0x12a0cc: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0c8) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A0D0u;
label_12a0d0:
    // 0x12a0d0: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12a0d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12a0d4: 0x31af0100  andi        $t7, $t5, 0x100
    ctx->pc = 0x12a0d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)256);
    // 0x12a0d8: 0x15e00054  bnez        $t7, . + 4 + (0x54 << 2)
    ctx->pc = 0x12A0D8u;
    {
        const bool branch_taken_0x12a0d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A0D8u;
        // 0x12a0dc: 0x2a6f0066  slti        $t7, $s3, 0x66 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)102) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a0d8) {
            ctx->pc = 0x12A22Cu;
            goto label_12a22c;
        }
    }
    ctx->pc = 0x12A0E0u;
    // 0x12a0e0: 0xae9e0004  sw          $fp, 0x4($s4)
    ctx->pc = 0x12a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 30));
    // 0x12a0e4: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12a0e8: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a0e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a0ec: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12a0ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12a0f0: 0x1de7021  addu        $t6, $t6, $fp
    ctx->pc = 0x12a0f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 30)));
label_12a0f4:
    // 0x12a0f4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a0f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a0f8: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12a0fc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a0fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_12a100:
    // 0x12a100: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a104: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a104u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a108: 0x15e00008  bnez        $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x12A108u;
    {
        const bool branch_taken_0x12a108 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A108u;
        // 0x12a10c: 0x8fad01fc  lw          $t5, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a108) {
            ctx->pc = 0x12A12Cu;
            goto label_12a12c;
        }
    }
    ctx->pc = 0x12A110u;
    // 0x12a110: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a114: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12a114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12a118: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A118u;
    SET_GPR_U32(ctx, 31, 0x12A120u);
    ctx->pc = 0x12A11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A118u;
    // 0x12a11c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A118u, 0x12A120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A120u;
label_12a120:
    // 0x12a120: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x12A120u;
    {
        const bool branch_taken_0x12a120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A120u;
        // 0x12a124: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a120) {
            ctx->pc = 0x129F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f38;
        }
    }
    ctx->pc = 0x12A128u;
label_12a128:
    // 0x12a128: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12a128u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_12a12c:
    // 0x12a12c: 0x31af0004  andi        $t7, $t5, 0x4
    ctx->pc = 0x12a12cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x12a130: 0x11e0002e  beqz        $t7, . + 4 + (0x2E << 2)
    ctx->pc = 0x12A130u;
    {
        const bool branch_taken_0x12a130 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A130u;
        // 0x12a134: 0x8fae0204  lw          $t6, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a130) {
            ctx->pc = 0x12A1ECu;
            goto label_12a1ec;
        }
    }
    ctx->pc = 0x12A138u;
    // 0x12a138: 0x1d78023  subu        $s0, $t6, $s7
    ctx->pc = 0x12a138u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 23)));
    // 0x12a13c: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12A13Cu;
    {
        const bool branch_taken_0x12a13c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x12A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A13Cu;
        // 0x12a140: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a13c) {
            ctx->pc = 0x12A1ECu;
            goto label_12a1ec;
        }
    }
    ctx->pc = 0x12A144u;
    // 0x12a144: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x12A144u;
    {
        const bool branch_taken_0x12a144 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a144) {
            ctx->pc = 0x12A148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A144u;
            // 0x12a148: 0xae900004  sw          $s0, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A1ACu;
            goto label_12a1ac;
        }
    }
    ctx->pc = 0x12A14Cu;
    // 0x12a14c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12a14cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x12a150: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12a150u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12a154: 0x25f13e28  addiu       $s1, $t7, 0x3E28
    ctx->pc = 0x12a154u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 15912));
    // 0x12a158: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12a158u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12a15c:
    // 0x12a15c: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12a160: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a160u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a164: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a164u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a168: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12a168u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12a16c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a16cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a170: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12a170u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12a174: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a178: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a178u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a17c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A17Cu;
    {
        const bool branch_taken_0x12a17c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A17Cu;
        // 0x12a180: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a17c) {
            ctx->pc = 0x12A198u;
            goto label_12a198;
        }
    }
    ctx->pc = 0x12A184u;
    // 0x12a184: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a188: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A188u;
    SET_GPR_U32(ctx, 31, 0x12A190u);
    ctx->pc = 0x12A18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A188u;
    // 0x12a18c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A188u, 0x12A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A190u;
label_12a190:
    // 0x12a190: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x12A190u;
    {
        const bool branch_taken_0x12a190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A190u;
        // 0x12a194: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a190) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A198u;
label_12a198:
    // 0x12a198: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12a198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12a19c: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12a19cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12a1a0: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12A1A0u;
    {
        const bool branch_taken_0x12a1a0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a1a0) {
            ctx->pc = 0x12A1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A1A0u;
            // 0x12a1a4: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A15Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a15c;
        }
    }
    ctx->pc = 0x12A1A8u;
    // 0x12a1a8: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_12a1ac:
    // 0x12a1ac: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12a1acu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12a1b0: 0x25ce3e28  addiu       $t6, $t6, 0x3E28
    ctx->pc = 0x12a1b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 15912));
    // 0x12a1b4: 0x8fad0024  lw          $t5, 0x24($sp)
    ctx->pc = 0x12a1b4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a1b8: 0x8faf0028  lw          $t7, 0x28($sp)
    ctx->pc = 0x12a1b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a1bc: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x12a1bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x12a1c0: 0xae8e0000  sw          $t6, 0x0($s4)
    ctx->pc = 0x12a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 14));
    // 0x12a1c4: 0x1f07821  addu        $t7, $t7, $s0
    ctx->pc = 0x12a1c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 16)));
    // 0x12a1c8: 0xafad0024  sw          $t5, 0x24($sp)
    ctx->pc = 0x12a1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 13));
    // 0x12a1cc: 0x29ad0008  slti        $t5, $t5, 0x8
    ctx->pc = 0x12a1ccu;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a1d0: 0x15a00006  bnez        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A1D0u;
    {
        const bool branch_taken_0x12a1d0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A1D0u;
        // 0x12a1d4: 0xafaf0028  sw          $t7, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a1d0) {
            ctx->pc = 0x12A1ECu;
            goto label_12a1ec;
        }
    }
    ctx->pc = 0x12A1D8u;
    // 0x12a1d8: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a1dc: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A1DCu;
    SET_GPR_U32(ctx, 31, 0x12A1E4u);
    ctx->pc = 0x12A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A1DCu;
    // 0x12a1e0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A1DCu, 0x12A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A1E4u;
label_12a1e4:
    // 0x12a1e4: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x12A1E4u;
    {
        const bool branch_taken_0x12a1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A1E4u;
        // 0x12a1e8: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a1e4) {
            ctx->pc = 0x129F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f38;
        }
    }
    ctx->pc = 0x12A1ECu;
label_12a1ec:
    // 0x12a1ec: 0x8fad0204  lw          $t5, 0x204($sp)
    ctx->pc = 0x12a1ecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x12a1f0: 0x8fae0200  lw          $t6, 0x200($sp)
    ctx->pc = 0x12a1f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12a1f4: 0x2ed782a  slt         $t7, $s7, $t5
    ctx->pc = 0x12a1f4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x12a1f8: 0x2ef680a  movz        $t5, $s7, $t7
    ctx->pc = 0x12a1f8u;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 23));
    // 0x12a1fc: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x12a1fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x12a200: 0x8faf0028  lw          $t7, 0x28($sp)
    ctx->pc = 0x12a200u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a204: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A204u;
    {
        const bool branch_taken_0x12a204 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A204u;
        // 0x12a208: 0xafae0200  sw          $t6, 0x200($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a204) {
            ctx->pc = 0x12A220u;
            goto label_12a220;
        }
    }
    ctx->pc = 0x12A20Cu;
    // 0x12a20c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a210: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A210u;
    SET_GPR_U32(ctx, 31, 0x12A218u);
    ctx->pc = 0x12A214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A210u;
    // 0x12a214: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A210u, 0x12A218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A218u;
label_12a218:
    // 0x12a218: 0x1440ff47  bnez        $v0, . + 4 + (-0xB9 << 2)
    ctx->pc = 0x12A218u;
    {
        const bool branch_taken_0x12a218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A218u;
        // 0x12a21c: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a218) {
            ctx->pc = 0x129F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f38;
        }
    }
    ctx->pc = 0x12A220u;
label_12a220:
    // 0x12a220: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x12a220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x12a224: 0x1000fe47  b           . + 4 + (-0x1B9 << 2)
    ctx->pc = 0x12A224u;
    {
        const bool branch_taken_0x12a224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A224u;
        // 0x12a228: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a224) {
            ctx->pc = 0x129B44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129b44;
        }
    }
    ctx->pc = 0x12A22Cu;
label_12a22c:
    // 0x12a22c: 0x15e00132  bnez        $t7, . + 4 + (0x132 << 2)
    ctx->pc = 0x12A22Cu;
    {
        const bool branch_taken_0x12a22c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A22Cu;
        // 0x12a230: 0x8faf01ec  lw          $t7, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a22c) {
            ctx->pc = 0x12A6F8u;
            goto label_12a6f8;
        }
    }
    ctx->pc = 0x12A234u;
    // 0x12a234: 0xdfa40210  ld          $a0, 0x210($sp)
    ctx->pc = 0x12a234u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12a238: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x12A238u;
    SET_GPR_U32(ctx, 31, 0x12A240u);
    ctx->pc = 0x12A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A238u;
    // 0x12a23c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x12A238u, 0x12A240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A240u;
label_12a240:
    // 0x12a240: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x12A240u;
    {
        const bool branch_taken_0x12a240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a240) {
            ctx->pc = 0x12A244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A240u;
            // 0x12a244: 0x8fa501e8  lw          $a1, 0x1E8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A394u;
            goto label_12a394;
        }
    }
    ctx->pc = 0x12A248u;
    // 0x12a248: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12a248u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x12a24c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12a24cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a250: 0x25ef3e68  addiu       $t7, $t7, 0x3E68
    ctx->pc = 0x12a250u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15976));
    // 0x12a254: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12a254u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12a258: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12a258u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12a25c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a25cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a260: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a260u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a264: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12a264u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12a268: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a268u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a26c: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12a270: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a274: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a274u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a278: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A278u;
    {
        const bool branch_taken_0x12a278 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A278u;
        // 0x12a27c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a278) {
            ctx->pc = 0x12A294u;
            goto label_12a294;
        }
    }
    ctx->pc = 0x12A280u;
    // 0x12a280: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a284: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A284u;
    SET_GPR_U32(ctx, 31, 0x12A28Cu);
    ctx->pc = 0x12A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A284u;
    // 0x12a288: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A284u, 0x12A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A28Cu;
label_12a28c:
    // 0x12a28c: 0x1440ff29  bnez        $v0, . + 4 + (-0xD7 << 2)
    ctx->pc = 0x12A28Cu;
    {
        const bool branch_taken_0x12a28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A28Cu;
        // 0x12a290: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a28c) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A294u;
label_12a294:
    // 0x12a294: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12a294u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12a298: 0x8fae01ec  lw          $t6, 0x1EC($sp)
    ctx->pc = 0x12a298u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12a29c: 0x1ee782a  slt         $t7, $t7, $t6
    ctx->pc = 0x12a29cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x12a2a0: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A2A0u;
    {
        const bool branch_taken_0x12a2a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2A0u;
        // 0x12a2a4: 0x8faf0208  lw          $t7, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2a0) {
            ctx->pc = 0x12A2B8u;
            goto label_12a2b8;
        }
    }
    ctx->pc = 0x12A2A8u;
    // 0x12a2a8: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12a2a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12a2ac: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12a2acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12a2b0: 0x11e0ff9d  beqz        $t7, . + 4 + (-0x63 << 2)
    ctx->pc = 0x12A2B0u;
    {
        const bool branch_taken_0x12a2b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2B0u;
        // 0x12a2b4: 0x8faf0208  lw          $t7, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2b0) {
            ctx->pc = 0x12A128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a128;
        }
    }
    ctx->pc = 0x12A2B8u;
label_12a2b8:
    // 0x12a2b8: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12a2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12a2bc: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12a2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12a2c0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a2c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a2c4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a2c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a2c8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12a2c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12a2cc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a2ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a2d0: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12a2d4: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a2d8: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a2d8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a2dc: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A2DCu;
    {
        const bool branch_taken_0x12a2dc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2DCu;
        // 0x12a2e0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2dc) {
            ctx->pc = 0x12A2F8u;
            goto label_12a2f8;
        }
    }
    ctx->pc = 0x12A2E4u;
    // 0x12a2e4: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a2e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a2e8: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A2E8u;
    SET_GPR_U32(ctx, 31, 0x12A2F0u);
    ctx->pc = 0x12A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A2E8u;
    // 0x12a2ec: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A2E8u, 0x12A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A2F0u;
label_12a2f0:
    // 0x12a2f0: 0x1440ff10  bnez        $v0, . + 4 + (-0xF0 << 2)
    ctx->pc = 0x12A2F0u;
    {
        const bool branch_taken_0x12a2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A2F0u;
        // 0x12a2f4: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a2f0) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A2F8u;
label_12a2f8:
    // 0x12a2f8: 0x8faf01ec  lw          $t7, 0x1EC($sp)
    ctx->pc = 0x12a2f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12a2fc: 0x25f0ffff  addiu       $s0, $t7, -0x1
    ctx->pc = 0x12a2fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x12a300: 0x1a00ff89  blez        $s0, . + 4 + (-0x77 << 2)
    ctx->pc = 0x12A300u;
    {
        const bool branch_taken_0x12a300 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x12A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A300u;
        // 0x12a304: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a300) {
            ctx->pc = 0x12A128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a128;
        }
    }
    ctx->pc = 0x12A308u;
    // 0x12a308: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12A308u;
    {
        const bool branch_taken_0x12a308 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A308u;
        // 0x12a30c: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a308) {
            ctx->pc = 0x12A36Cu;
            goto label_12a36c;
        }
    }
    ctx->pc = 0x12A310u;
    // 0x12a310: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12a310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12a314: 0x25f13e38  addiu       $s1, $t7, 0x3E38
    ctx->pc = 0x12a314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 15928));
    // 0x12a318: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12a318u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12a31c:
    // 0x12a31c: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12a31cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12a320: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a320u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a324: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a324u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a328: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12a328u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12a32c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a32cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a330: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12a330u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12a334: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a338: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a338u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a33c: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A33Cu;
    {
        const bool branch_taken_0x12a33c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A33Cu;
        // 0x12a340: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a33c) {
            ctx->pc = 0x12A358u;
            goto label_12a358;
        }
    }
    ctx->pc = 0x12A344u;
    // 0x12a344: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a348: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A348u;
    SET_GPR_U32(ctx, 31, 0x12A350u);
    ctx->pc = 0x12A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A348u;
    // 0x12a34c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A348u, 0x12A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A350u;
label_12a350:
    // 0x12a350: 0x1440fef8  bnez        $v0, . + 4 + (-0x108 << 2)
    ctx->pc = 0x12A350u;
    {
        const bool branch_taken_0x12a350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A350u;
        // 0x12a354: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a350) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A358u;
label_12a358:
    // 0x12a358: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12a358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12a35c: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12a35cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12a360: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12A360u;
    {
        const bool branch_taken_0x12a360 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a360) {
            ctx->pc = 0x12A364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A360u;
            // 0x12a364: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A31Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a31c;
        }
    }
    ctx->pc = 0x12A368u;
    // 0x12a368: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12a368u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
label_12a36c:
    // 0x12a36c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12a36cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12a370: 0x25ef3e38  addiu       $t7, $t7, 0x3E38
    ctx->pc = 0x12a370u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15928));
    // 0x12a374: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12a374u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12a378: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a378u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a37c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a37cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a380: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12a380u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12a384: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12a384u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12a388: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a388u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a38c: 0x1000ff5c  b           . + 4 + (-0xA4 << 2)
    ctx->pc = 0x12A38Cu;
    {
        const bool branch_taken_0x12a38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A38Cu;
        // 0x12a390: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a38c) {
            ctx->pc = 0x12A100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a100;
        }
    }
    ctx->pc = 0x12A394u;
label_12a394:
    // 0x12a394: 0x1ca00060  bgtz        $a1, . + 4 + (0x60 << 2)
    ctx->pc = 0x12A394u;
    {
        const bool branch_taken_0x12a394 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x12A398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A394u;
        // 0x12a398: 0x8fae01ec  lw          $t6, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a394) {
            ctx->pc = 0x12A518u;
            goto label_12a518;
        }
    }
    ctx->pc = 0x12A39Cu;
    // 0x12a39c: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12a39cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x12a3a0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12a3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a3a4: 0x25ef3e68  addiu       $t7, $t7, 0x3E68
    ctx->pc = 0x12a3a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15976));
    // 0x12a3a8: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12a3ac: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12a3b0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a3b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a3b4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a3b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a3b8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12a3b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12a3bc: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a3bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a3c0: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12a3c4: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a3c8: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a3c8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a3cc: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A3CCu;
    {
        const bool branch_taken_0x12a3cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3CCu;
        // 0x12a3d0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3cc) {
            ctx->pc = 0x12A3E8u;
            goto label_12a3e8;
        }
    }
    ctx->pc = 0x12A3D4u;
    // 0x12a3d4: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a3d8: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A3D8u;
    SET_GPR_U32(ctx, 31, 0x12A3E0u);
    ctx->pc = 0x12A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A3D8u;
    // 0x12a3dc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A3D8u, 0x12A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A3E0u;
label_12a3e0:
    // 0x12a3e0: 0x1440fed4  bnez        $v0, . + 4 + (-0x12C << 2)
    ctx->pc = 0x12A3E0u;
    {
        const bool branch_taken_0x12a3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3E0u;
        // 0x12a3e4: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3e0) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A3E8u;
label_12a3e8:
    // 0x12a3e8: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12a3e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12a3ec: 0x55e00005  bnel        $t7, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A3ECu;
    {
        const bool branch_taken_0x12a3ec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a3ec) {
            ctx->pc = 0x12A3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A3ECu;
            // 0x12a3f0: 0xae900004  sw          $s0, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A404u;
            goto label_12a404;
        }
    }
    ctx->pc = 0x12A3F4u;
    // 0x12a3f4: 0x8faf01ec  lw          $t7, 0x1EC($sp)
    ctx->pc = 0x12a3f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12a3f8: 0x11e0ff4c  beqz        $t7, . + 4 + (-0xB4 << 2)
    ctx->pc = 0x12A3F8u;
    {
        const bool branch_taken_0x12a3f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A3F8u;
        // 0x12a3fc: 0x8fad01fc  lw          $t5, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a3f8) {
            ctx->pc = 0x12A12Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a12c;
        }
    }
    ctx->pc = 0x12A400u;
    // 0x12a400: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12a400u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_12a404:
    // 0x12a404: 0x8fad0208  lw          $t5, 0x208($sp)
    ctx->pc = 0x12a404u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x12a408: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a408u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a40c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a40cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a410: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a410u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a414: 0xae8d0000  sw          $t5, 0x0($s4)
    ctx->pc = 0x12a414u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 13));
    // 0x12a418: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12a418u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12a41c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a420: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12a420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12a424: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a424u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a428: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A428u;
    {
        const bool branch_taken_0x12a428 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A428u;
        // 0x12a42c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a428) {
            ctx->pc = 0x12A444u;
            goto label_12a444;
        }
    }
    ctx->pc = 0x12A430u;
    // 0x12a430: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a434: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A434u;
    SET_GPR_U32(ctx, 31, 0x12A43Cu);
    ctx->pc = 0x12A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A434u;
    // 0x12a438: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A434u, 0x12A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A43Cu;
label_12a43c:
    // 0x12a43c: 0x1440febd  bnez        $v0, . + 4 + (-0x143 << 2)
    ctx->pc = 0x12A43Cu;
    {
        const bool branch_taken_0x12a43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A43Cu;
        // 0x12a440: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a43c) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A444u;
label_12a444:
    // 0x12a444: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12a444u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12a448: 0xf8023  negu        $s0, $t7
    ctx->pc = 0x12a448u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x12a44c: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12A44Cu;
    {
        const bool branch_taken_0x12a44c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x12A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A44Cu;
        // 0x12a450: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a44c) {
            ctx->pc = 0x12A4FCu;
            goto label_12a4fc;
        }
    }
    ctx->pc = 0x12A454u;
    // 0x12a454: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12A454u;
    {
        const bool branch_taken_0x12a454 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A454u;
        // 0x12a458: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a454) {
            ctx->pc = 0x12A4B8u;
            goto label_12a4b8;
        }
    }
    ctx->pc = 0x12A45Cu;
    // 0x12a45c: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12a45cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12a460: 0x25f13e38  addiu       $s1, $t7, 0x3E38
    ctx->pc = 0x12a460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 15928));
    // 0x12a464: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12a464u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12a468:
    // 0x12a468: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12a468u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12a46c: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a46cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a470: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a470u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a474: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12a474u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12a478: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a478u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a47c: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12a47cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12a480: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a484: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a484u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a488: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A488u;
    {
        const bool branch_taken_0x12a488 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A488u;
        // 0x12a48c: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a488) {
            ctx->pc = 0x12A4A4u;
            goto label_12a4a4;
        }
    }
    ctx->pc = 0x12A490u;
    // 0x12a490: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a494: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A494u;
    SET_GPR_U32(ctx, 31, 0x12A49Cu);
    ctx->pc = 0x12A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A494u;
    // 0x12a498: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A494u, 0x12A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A49Cu;
label_12a49c:
    // 0x12a49c: 0x1440fea5  bnez        $v0, . + 4 + (-0x15B << 2)
    ctx->pc = 0x12A49Cu;
    {
        const bool branch_taken_0x12a49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A49Cu;
        // 0x12a4a0: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a49c) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A4A4u;
label_12a4a4:
    // 0x12a4a4: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12a4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12a4a8: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12a4a8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12a4ac: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12A4ACu;
    {
        const bool branch_taken_0x12a4ac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a4ac) {
            ctx->pc = 0x12A4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A4ACu;
            // 0x12a4b0: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a468;
        }
    }
    ctx->pc = 0x12A4B4u;
    // 0x12a4b4: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12a4b4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
label_12a4b8:
    // 0x12a4b8: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12a4bc: 0x25ef3e38  addiu       $t7, $t7, 0x3E38
    ctx->pc = 0x12a4bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15928));
    // 0x12a4c0: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12a4c4: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a4c4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a4c8: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a4c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a4cc: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12a4ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12a4d0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a4d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a4d4: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12a4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12a4d8: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a4dc: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a4dcu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a4e0: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A4E0u;
    {
        const bool branch_taken_0x12a4e0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4E0u;
        // 0x12a4e4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4e0) {
            ctx->pc = 0x12A4FCu;
            goto label_12a4fc;
        }
    }
    ctx->pc = 0x12A4E8u;
    // 0x12a4e8: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a4ec: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A4ECu;
    SET_GPR_U32(ctx, 31, 0x12A4F4u);
    ctx->pc = 0x12A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A4ECu;
    // 0x12a4f0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A4ECu, 0x12A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A4F4u;
label_12a4f4:
    // 0x12a4f4: 0x1440fe8f  bnez        $v0, . + 4 + (-0x171 << 2)
    ctx->pc = 0x12A4F4u;
    {
        const bool branch_taken_0x12a4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4F4u;
        // 0x12a4f8: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4f4) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A4FCu;
label_12a4fc:
    // 0x12a4fc: 0x8fad01ec  lw          $t5, 0x1EC($sp)
    ctx->pc = 0x12a4fcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12a500: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12a500u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
label_12a504:
    // 0x12a504: 0xae8d0004  sw          $t5, 0x4($s4)
    ctx->pc = 0x12a504u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 13));
    // 0x12a508: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a508u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a50c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12a50cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12a510: 0x1000fef8  b           . + 4 + (-0x108 << 2)
    ctx->pc = 0x12A510u;
    {
        const bool branch_taken_0x12a510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A510u;
        // 0x12a514: 0x1cd7021  addu        $t6, $t6, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a510) {
            ctx->pc = 0x12A0F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a0f4;
        }
    }
    ctx->pc = 0x12A518u;
label_12a518:
    // 0x12a518: 0xae782a  slt         $t7, $a1, $t6
    ctx->pc = 0x12a518u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x12a51c: 0x55e0004d  bnel        $t7, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x12A51Cu;
    {
        const bool branch_taken_0x12a51c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a51c) {
            ctx->pc = 0x12A520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A51Cu;
            // 0x12a520: 0xae850004  sw          $a1, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A654u;
            goto label_12a654;
        }
    }
    ctx->pc = 0x12A524u;
    // 0x12a524: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12a524u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12a528: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x12a528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a52c: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12a530: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a530u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a534: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a534u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a538: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12a538u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12a53c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a53cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a540: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x12a540u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x12a544: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a548: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a548u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a54c: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A54Cu;
    {
        const bool branch_taken_0x12a54c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A54Cu;
        // 0x12a550: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a54c) {
            ctx->pc = 0x12A56Cu;
            goto label_12a56c;
        }
    }
    ctx->pc = 0x12A554u;
    // 0x12a554: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a558: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A558u;
    SET_GPR_U32(ctx, 31, 0x12A560u);
    ctx->pc = 0x12A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A558u;
    // 0x12a55c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A558u, 0x12A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A560u;
label_12a560:
    // 0x12a560: 0x1440fe74  bnez        $v0, . + 4 + (-0x18C << 2)
    ctx->pc = 0x12A560u;
    {
        const bool branch_taken_0x12a560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A560u;
        // 0x12a564: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a560) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A568u;
    // 0x12a568: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x12a568u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12a56c:
    // 0x12a56c: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12a56cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12a570: 0x1e28023  subu        $s0, $t7, $v0
    ctx->pc = 0x12a570u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x12a574: 0x1a00002b  blez        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12A574u;
    {
        const bool branch_taken_0x12a574 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x12A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A574u;
        // 0x12a578: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a574) {
            ctx->pc = 0x12A624u;
            goto label_12a624;
        }
    }
    ctx->pc = 0x12A57Cu;
    // 0x12a57c: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12A57Cu;
    {
        const bool branch_taken_0x12a57c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A57Cu;
        // 0x12a580: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a57c) {
            ctx->pc = 0x12A5E0u;
            goto label_12a5e0;
        }
    }
    ctx->pc = 0x12A584u;
    // 0x12a584: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12a584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12a588: 0x25f13e38  addiu       $s1, $t7, 0x3E38
    ctx->pc = 0x12a588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 15928));
    // 0x12a58c: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12a590:
    // 0x12a590: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12a590u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12a594: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a594u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a598: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a598u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a59c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12a59cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12a5a0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a5a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a5a4: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12a5a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12a5a8: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a5ac: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a5acu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a5b0: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A5B0u;
    {
        const bool branch_taken_0x12a5b0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5B0u;
        // 0x12a5b4: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5b0) {
            ctx->pc = 0x12A5CCu;
            goto label_12a5cc;
        }
    }
    ctx->pc = 0x12A5B8u;
    // 0x12a5b8: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a5bc: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A5BCu;
    SET_GPR_U32(ctx, 31, 0x12A5C4u);
    ctx->pc = 0x12A5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A5BCu;
    // 0x12a5c0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A5BCu, 0x12A5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A5C4u;
label_12a5c4:
    // 0x12a5c4: 0x1440fe5b  bnez        $v0, . + 4 + (-0x1A5 << 2)
    ctx->pc = 0x12A5C4u;
    {
        const bool branch_taken_0x12a5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5C4u;
        // 0x12a5c8: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5c4) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A5CCu;
label_12a5cc:
    // 0x12a5cc: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12a5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12a5d0: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12a5d0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12a5d4: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12A5D4u;
    {
        const bool branch_taken_0x12a5d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a5d4) {
            ctx->pc = 0x12A5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A5D4u;
            // 0x12a5d8: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a590;
        }
    }
    ctx->pc = 0x12A5DCu;
    // 0x12a5dc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12a5dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
label_12a5e0:
    // 0x12a5e0: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12a5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12a5e4: 0x25ef3e38  addiu       $t7, $t7, 0x3E38
    ctx->pc = 0x12a5e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15928));
    // 0x12a5e8: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12a5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12a5ec: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a5ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a5f0: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a5f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a5f4: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12a5f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12a5f8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a5f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a5fc: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12a5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12a600: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a604: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a604u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a608: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A608u;
    {
        const bool branch_taken_0x12a608 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A608u;
        // 0x12a60c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a608) {
            ctx->pc = 0x12A624u;
            goto label_12a624;
        }
    }
    ctx->pc = 0x12A610u;
    // 0x12a610: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a614: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A614u;
    SET_GPR_U32(ctx, 31, 0x12A61Cu);
    ctx->pc = 0x12A618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A614u;
    // 0x12a618: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A614u, 0x12A61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A61Cu;
label_12a61c:
    // 0x12a61c: 0x1440fe45  bnez        $v0, . + 4 + (-0x1BB << 2)
    ctx->pc = 0x12A61Cu;
    {
        const bool branch_taken_0x12a61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A61Cu;
        // 0x12a620: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a61c) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A624u;
label_12a624:
    // 0x12a624: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12a624u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12a628: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12a628u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12a62c: 0x11e0febe  beqz        $t7, . + 4 + (-0x142 << 2)
    ctx->pc = 0x12A62Cu;
    {
        const bool branch_taken_0x12a62c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A62Cu;
        // 0x12a630: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a62c) {
            ctx->pc = 0x12A128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a128;
        }
    }
    ctx->pc = 0x12A634u;
    // 0x12a634: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12a634u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x12a638: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12a638u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12a63c: 0x25ef3e70  addiu       $t7, $t7, 0x3E70
    ctx->pc = 0x12a63cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15984));
    // 0x12a640: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12a640u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12a644: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a644u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a648: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12a648u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12a64c: 0x1000fea9  b           . + 4 + (-0x157 << 2)
    ctx->pc = 0x12A64Cu;
    {
        const bool branch_taken_0x12a64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A64Cu;
        // 0x12a650: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a64c) {
            ctx->pc = 0x12A0F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a0f4;
        }
    }
    ctx->pc = 0x12A654u;
label_12a654:
    // 0x12a654: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12a654u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12a658: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a658u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a65c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a65cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a660: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12a660u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12a664: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a664u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a668: 0x1c57021  addu        $t6, $t6, $a1
    ctx->pc = 0x12a668u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 5)));
    // 0x12a66c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a670: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a670u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a674: 0x15e00007  bnez        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A674u;
    {
        const bool branch_taken_0x12a674 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A674u;
        // 0x12a678: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a674) {
            ctx->pc = 0x12A694u;
            goto label_12a694;
        }
    }
    ctx->pc = 0x12A67Cu;
    // 0x12a67c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a680: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A680u;
    SET_GPR_U32(ctx, 31, 0x12A688u);
    ctx->pc = 0x12A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A680u;
    // 0x12a684: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A680u, 0x12A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A688u;
label_12a688:
    // 0x12a688: 0x1440fe2a  bnez        $v0, . + 4 + (-0x1D6 << 2)
    ctx->pc = 0x12A688u;
    {
        const bool branch_taken_0x12a688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A688u;
        // 0x12a68c: 0x8fa501e8  lw          $a1, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a688) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A690u;
    // 0x12a690: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x12a690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_12a694:
    // 0x12a694: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12a694u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x12a698: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x12a698u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a69c: 0x25ef3e70  addiu       $t7, $t7, 0x3E70
    ctx->pc = 0x12a69cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15984));
    // 0x12a6a0: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12a6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12a6a4: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12a6a8: 0x2c5b021  addu        $s6, $s6, $a1
    ctx->pc = 0x12a6a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x12a6ac: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a6acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a6b0: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a6b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a6b4: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12a6b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12a6b8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a6b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a6bc: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12a6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12a6c0: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a6c4: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a6c4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a6c8: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A6C8u;
    {
        const bool branch_taken_0x12a6c8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A6C8u;
        // 0x12a6cc: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6c8) {
            ctx->pc = 0x12A6E4u;
            goto label_12a6e4;
        }
    }
    ctx->pc = 0x12A6D0u;
    // 0x12a6d0: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a6d4: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A6D4u;
    SET_GPR_U32(ctx, 31, 0x12A6DCu);
    ctx->pc = 0x12A6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A6D4u;
    // 0x12a6d8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A6D4u, 0x12A6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A6DCu;
label_12a6dc:
    // 0x12a6dc: 0x1440fe15  bnez        $v0, . + 4 + (-0x1EB << 2)
    ctx->pc = 0x12A6DCu;
    {
        const bool branch_taken_0x12a6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A6DCu;
        // 0x12a6e0: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6dc) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A6E4u;
label_12a6e4:
    // 0x12a6e4: 0x8fad01ec  lw          $t5, 0x1EC($sp)
    ctx->pc = 0x12a6e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12a6e8: 0x8faf01e8  lw          $t7, 0x1E8($sp)
    ctx->pc = 0x12a6e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12a6ec: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12a6f0: 0x1000ff84  b           . + 4 + (-0x7C << 2)
    ctx->pc = 0x12A6F0u;
    {
        const bool branch_taken_0x12a6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A6F0u;
        // 0x12a6f4: 0x1af6823  subu        $t5, $t5, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6f0) {
            ctx->pc = 0x12A504u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a504;
        }
    }
    ctx->pc = 0x12A6F8u;
label_12a6f8:
    // 0x12a6f8: 0x29ef0002  slti        $t7, $t7, 0x2
    ctx->pc = 0x12a6f8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12a6fc: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A6FCu;
    {
        const bool branch_taken_0x12a6fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A6FCu;
        // 0x12a700: 0x8fad01fc  lw          $t5, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6fc) {
            ctx->pc = 0x12A710u;
            goto label_12a710;
        }
    }
    ctx->pc = 0x12A704u;
    // 0x12a704: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12a704u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12a708: 0x11e00071  beqz        $t7, . + 4 + (0x71 << 2)
    ctx->pc = 0x12A708u;
    {
        const bool branch_taken_0x12a708 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A708u;
        // 0x12a70c: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a708) {
            ctx->pc = 0x12A8D0u;
            goto label_12a8d0;
        }
    }
    ctx->pc = 0x12A710u;
label_12a710:
    // 0x12a710: 0x92cf0000  lbu         $t7, 0x0($s6)
    ctx->pc = 0x12a710u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12a714: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x12a714u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12a718: 0xa3af01d0  sb          $t7, 0x1D0($sp)
    ctx->pc = 0x12a718u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 15));
    // 0x12a71c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12a71cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x12a720: 0x240f002e  addiu       $t7, $zero, 0x2E
    ctx->pc = 0x12a720u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x12a724: 0xa3af01d1  sb          $t7, 0x1D1($sp)
    ctx->pc = 0x12a724u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 15));
    // 0x12a728: 0x27af01d0  addiu       $t7, $sp, 0x1D0
    ctx->pc = 0x12a728u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x12a72c: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12a72cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12a730: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12a730u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12a734: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a734u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a738: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a738u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a73c: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x12a73cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x12a740: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a740u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a744: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12a744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12a748: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a74c: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a74cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a750: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A750u;
    {
        const bool branch_taken_0x12a750 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A750u;
        // 0x12a754: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a750) {
            ctx->pc = 0x12A76Cu;
            goto label_12a76c;
        }
    }
    ctx->pc = 0x12A758u;
    // 0x12a758: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a75c: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A75Cu;
    SET_GPR_U32(ctx, 31, 0x12A764u);
    ctx->pc = 0x12A760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A75Cu;
    // 0x12a760: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A75Cu, 0x12A764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A764u;
label_12a764:
    // 0x12a764: 0x1440fdf3  bnez        $v0, . + 4 + (-0x20D << 2)
    ctx->pc = 0x12A764u;
    {
        const bool branch_taken_0x12a764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A764u;
        // 0x12a768: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a764) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A76Cu;
label_12a76c:
    // 0x12a76c: 0xdfa40210  ld          $a0, 0x210($sp)
    ctx->pc = 0x12a76cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12a770: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x12A770u;
    SET_GPR_U32(ctx, 31, 0x12A778u);
    ctx->pc = 0x12A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A770u;
    // 0x12a774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x12A770u, 0x12A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A778u;
label_12a778:
    // 0x12a778: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x12A778u;
    {
        const bool branch_taken_0x12a778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A778u;
        // 0x12a77c: 0x8fad01ec  lw          $t5, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a778) {
            ctx->pc = 0x12A820u;
            goto label_12a820;
        }
    }
    ctx->pc = 0x12A780u;
    // 0x12a780: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12a780u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12a784: 0x25afffff  addiu       $t7, $t5, -0x1
    ctx->pc = 0x12a784u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x12a788: 0xae8f0004  sw          $t7, 0x4($s4)
    ctx->pc = 0x12a788u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 15));
    // 0x12a78c: 0x8faf0028  lw          $t7, 0x28($sp)
    ctx->pc = 0x12a78cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a790: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12a790u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12a794: 0x8fae0024  lw          $t6, 0x24($sp)
    ctx->pc = 0x12a794u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a798: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x12a798u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x12a79c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12a79cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12a7a0: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12a7a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x12a7a4: 0xafaf0028  sw          $t7, 0x28($sp)
    ctx->pc = 0x12a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 15));
    // 0x12a7a8: 0x29cd0008  slti        $t5, $t6, 0x8
    ctx->pc = 0x12a7a8u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a7ac: 0x15a00007  bnez        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A7ACu;
    {
        const bool branch_taken_0x12a7ac = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7ACu;
        // 0x12a7b0: 0xafae0024  sw          $t6, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7ac) {
            ctx->pc = 0x12A7CCu;
            goto label_12a7cc;
        }
    }
    ctx->pc = 0x12A7B4u;
    // 0x12a7b4: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_12a7b8:
    // 0x12a7b8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12a7bc: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A7BCu;
    SET_GPR_U32(ctx, 31, 0x12A7C4u);
    ctx->pc = 0x12A7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A7BCu;
    // 0x12a7c0: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A7BCu, 0x12A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7C4u;
label_12a7c4:
    // 0x12a7c4: 0x1440fddc  bnez        $v0, . + 4 + (-0x224 << 2)
    ctx->pc = 0x12A7C4u;
    {
        const bool branch_taken_0x12a7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7C4u;
        // 0x12a7c8: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7c4) {
            ctx->pc = 0x129F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f38;
        }
    }
    ctx->pc = 0x12A7CCu;
label_12a7cc:
    // 0x12a7cc: 0x8fae0218  lw          $t6, 0x218($sp)
    ctx->pc = 0x12a7ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_12a7d0:
    // 0x12a7d0: 0x27af0010  addiu       $t7, $sp, 0x10
    ctx->pc = 0x12a7d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12a7d4: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12a7d8: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12a7dc: 0x8faf0218  lw          $t7, 0x218($sp)
    ctx->pc = 0x12a7dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x12a7e0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a7e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a7e4: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x12a7e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12a7e8: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a7e8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a7ec: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12a7f0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a7f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a7f4: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a7f8: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a7f8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a7fc: 0x15e0fe4a  bnez        $t7, . + 4 + (-0x1B6 << 2)
    ctx->pc = 0x12A7FCu;
    {
        const bool branch_taken_0x12a7fc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7FCu;
        // 0x12a800: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7fc) {
            ctx->pc = 0x12A128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a128;
        }
    }
    ctx->pc = 0x12A804u;
    // 0x12a804: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a808: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A808u;
    SET_GPR_U32(ctx, 31, 0x12A810u);
    ctx->pc = 0x12A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A808u;
    // 0x12a80c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A808u, 0x12A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A810u;
label_12a810:
    // 0x12a810: 0x1440fdc8  bnez        $v0, . + 4 + (-0x238 << 2)
    ctx->pc = 0x12A810u;
    {
        const bool branch_taken_0x12a810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A810u;
        // 0x12a814: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a810) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A818u;
    // 0x12a818: 0x1000fe44  b           . + 4 + (-0x1BC << 2)
    ctx->pc = 0x12A818u;
    {
        const bool branch_taken_0x12a818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A818u;
        // 0x12a81c: 0x8fad01fc  lw          $t5, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a818) {
            ctx->pc = 0x12A12Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a12c;
        }
    }
    ctx->pc = 0x12A820u;
label_12a820:
    // 0x12a820: 0x8faf01ec  lw          $t7, 0x1EC($sp)
    ctx->pc = 0x12a820u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12a824: 0x25f0ffff  addiu       $s0, $t7, -0x1
    ctx->pc = 0x12a824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x12a828: 0x1a00ffe8  blez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x12A828u;
    {
        const bool branch_taken_0x12a828 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x12A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A828u;
        // 0x12a82c: 0x2a0f0011  slti        $t7, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a828) {
            ctx->pc = 0x12A7CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a7cc;
        }
    }
    ctx->pc = 0x12A830u;
    // 0x12a830: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x12A830u;
    {
        const bool branch_taken_0x12a830 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A830u;
        // 0x12a834: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a830) {
            ctx->pc = 0x12A894u;
            goto label_12a894;
        }
    }
    ctx->pc = 0x12A838u;
    // 0x12a838: 0x24120010  addiu       $s2, $zero, 0x10
    ctx->pc = 0x12a838u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12a83c: 0x25f13e38  addiu       $s1, $t7, 0x3E38
    ctx->pc = 0x12a83cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 15928));
    // 0x12a840: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x12a840u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_12a844:
    // 0x12a844: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x12a844u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x12a848: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a848u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a84c: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a84cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a850: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12a850u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12a854: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a854u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a858: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x12a858u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x12a85c: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a860: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a860u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a864: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A864u;
    {
        const bool branch_taken_0x12a864 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A864u;
        // 0x12a868: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a864) {
            ctx->pc = 0x12A880u;
            goto label_12a880;
        }
    }
    ctx->pc = 0x12A86Cu;
    // 0x12a86c: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a870: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A870u;
    SET_GPR_U32(ctx, 31, 0x12A878u);
    ctx->pc = 0x12A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A870u;
    // 0x12a874: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A870u, 0x12A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A878u;
label_12a878:
    // 0x12a878: 0x1440fdae  bnez        $v0, . + 4 + (-0x252 << 2)
    ctx->pc = 0x12A878u;
    {
        const bool branch_taken_0x12a878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A878u;
        // 0x12a87c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a878) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A880u;
label_12a880:
    // 0x12a880: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x12a880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x12a884: 0x2a0f0011  slti        $t7, $s0, 0x11
    ctx->pc = 0x12a884u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x12a888: 0x51e0ffee  beql        $t7, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12A888u;
    {
        const bool branch_taken_0x12a888 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a888) {
            ctx->pc = 0x12A88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A888u;
            // 0x12a88c: 0xae920004  sw          $s2, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a844;
        }
    }
    ctx->pc = 0x12A890u;
    // 0x12a890: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12a890u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
label_12a894:
    // 0x12a894: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x12a894u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x12a898: 0x25ef3e38  addiu       $t7, $t7, 0x3E38
    ctx->pc = 0x12a898u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15928));
    // 0x12a89c: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12a89cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12a8a0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a8a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a8a4: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a8a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a8a8: 0x1d07021  addu        $t6, $t6, $s0
    ctx->pc = 0x12a8a8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x12a8ac: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a8acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a8b0: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12a8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12a8b4: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a8b8: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a8b8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a8bc: 0x15e0ffc3  bnez        $t7, . + 4 + (-0x3D << 2)
    ctx->pc = 0x12A8BCu;
    {
        const bool branch_taken_0x12a8bc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8BCu;
        // 0x12a8c0: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8bc) {
            ctx->pc = 0x12A7CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a7cc;
        }
    }
    ctx->pc = 0x12A8C4u;
    // 0x12a8c4: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x12A8C4u;
    {
        const bool branch_taken_0x12a8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8C4u;
        // 0x12a8c8: 0x8fa401f4  lw          $a0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8c4) {
            ctx->pc = 0x12A7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a7b8;
        }
    }
    ctx->pc = 0x12A8CCu;
    // 0x12a8cc: 0x0  nop
    ctx->pc = 0x12a8ccu;
    // NOP
label_12a8d0:
    // 0x12a8d0: 0xae960000  sw          $s6, 0x0($s4)
    ctx->pc = 0x12a8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 22));
    // 0x12a8d4: 0xae8f0004  sw          $t7, 0x4($s4)
    ctx->pc = 0x12a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 15));
    // 0x12a8d8: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a8d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a8dc: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x12a8dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x12a8e0: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a8e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a8e4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a8e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a8e8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x12a8e8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x12a8ec: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a8f0: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a8f0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a8f4: 0x15e0ffb5  bnez        $t7, . + 4 + (-0x4B << 2)
    ctx->pc = 0x12A8F4u;
    {
        const bool branch_taken_0x12a8f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8F4u;
        // 0x12a8f8: 0xafae0028  sw          $t6, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8f4) {
            ctx->pc = 0x12A7CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a7cc;
        }
    }
    ctx->pc = 0x12A8FCu;
    // 0x12a8fc: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a900: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A900u;
    SET_GPR_U32(ctx, 31, 0x12A908u);
    ctx->pc = 0x12A904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A900u;
    // 0x12a904: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A900u, 0x12A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A908u;
label_12a908:
    // 0x12a908: 0x1440fd8a  bnez        $v0, . + 4 + (-0x276 << 2)
    ctx->pc = 0x12A908u;
    {
        const bool branch_taken_0x12a908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A908u;
        // 0x12a90c: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a908) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A910u;
    // 0x12a910: 0x1000ffaf  b           . + 4 + (-0x51 << 2)
    ctx->pc = 0x12A910u;
    {
        const bool branch_taken_0x12a910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A910u;
        // 0x12a914: 0x8fae0218  lw          $t6, 0x218($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a910) {
            ctx->pc = 0x12A7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a7d0;
        }
    }
    ctx->pc = 0x12A918u;
label_12a918:
    // 0x12a918: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12a918u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12a91c: 0x31cf0002  andi        $t7, $t6, 0x2
    ctx->pc = 0x12a91cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)2);
    // 0x12a920: 0x11e0fd8b  beqz        $t7, . + 4 + (-0x275 << 2)
    ctx->pc = 0x12A920u;
    {
        const bool branch_taken_0x12a920 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A920u;
        // 0x12a924: 0x240f0030  addiu       $t7, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a920) {
            ctx->pc = 0x129F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f50;
        }
    }
    ctx->pc = 0x12A928u;
    // 0x12a928: 0xa3b301d1  sb          $s3, 0x1D1($sp)
    ctx->pc = 0x12a928u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 19));
    // 0x12a92c: 0xa3af01d0  sb          $t7, 0x1D0($sp)
    ctx->pc = 0x12a92cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 15));
    // 0x12a930: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x12a930u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12a934: 0x27af01d0  addiu       $t7, $sp, 0x1D0
    ctx->pc = 0x12a934u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x12a938: 0xae8e0004  sw          $t6, 0x4($s4)
    ctx->pc = 0x12a938u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 14));
    // 0x12a93c: 0xae8f0000  sw          $t7, 0x0($s4)
    ctx->pc = 0x12a93cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 15));
    // 0x12a940: 0x8fae0028  lw          $t6, 0x28($sp)
    ctx->pc = 0x12a940u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a944: 0x8faf0024  lw          $t7, 0x24($sp)
    ctx->pc = 0x12a944u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x12a948: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x12a948u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x12a94c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x12a94cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x12a950: 0xafae0028  sw          $t6, 0x28($sp)
    ctx->pc = 0x12a950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 14));
    // 0x12a954: 0xafaf0024  sw          $t7, 0x24($sp)
    ctx->pc = 0x12a954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 15));
    // 0x12a958: 0x29ef0008  slti        $t7, $t7, 0x8
    ctx->pc = 0x12a958u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a95c: 0x15e0fd7c  bnez        $t7, . + 4 + (-0x284 << 2)
    ctx->pc = 0x12A95Cu;
    {
        const bool branch_taken_0x12a95c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A95Cu;
        // 0x12a960: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a95c) {
            ctx->pc = 0x129F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f50;
        }
    }
    ctx->pc = 0x12A964u;
    // 0x12a964: 0x8fa401f4  lw          $a0, 0x1F4($sp)
    ctx->pc = 0x12a964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
    // 0x12a968: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12A968u;
    SET_GPR_U32(ctx, 31, 0x12A970u);
    ctx->pc = 0x12A96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A968u;
    // 0x12a96c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12A968u, 0x12A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A970u;
label_12a970:
    // 0x12a970: 0x1440fd70  bnez        $v0, . + 4 + (-0x290 << 2)
    ctx->pc = 0x12A970u;
    {
        const bool branch_taken_0x12a970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A970u;
        // 0x12a974: 0x27b40030  addiu       $s4, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a970) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12A978u;
    // 0x12a978: 0x1000fd76  b           . + 4 + (-0x28A << 2)
    ctx->pc = 0x12A978u;
    {
        const bool branch_taken_0x12a978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A978u;
        // 0x12a97c: 0x8fad0224  lw          $t5, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a978) {
            ctx->pc = 0x129F54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f54;
        }
    }
    ctx->pc = 0x12A980u;
label_12a980:
    // 0x12a980: 0x1000fd57  b           . + 4 + (-0x2A9 << 2)
    ctx->pc = 0x12A980u;
    {
        const bool branch_taken_0x12a980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A980u;
        // 0x12a984: 0x93ae0000  lbu         $t6, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a980) {
            ctx->pc = 0x129EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129ee0;
        }
    }
    ctx->pc = 0x12A988u;
label_12a988:
    // 0x12a988: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12a988u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12a98c: 0x31af0002  andi        $t7, $t5, 0x2
    ctx->pc = 0x12a98cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)2);
    // 0x12a990: 0x1000fd20  b           . + 4 + (-0x2E0 << 2)
    ctx->pc = 0x12A990u;
    {
        const bool branch_taken_0x12a990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A990u;
        // 0x12a994: 0x1f7b821  addu        $s7, $t7, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a990) {
            ctx->pc = 0x129E14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129e14;
        }
    }
    ctx->pc = 0x12A998u;
label_12a998:
    // 0x12a998: 0x304f000f  andi        $t7, $v0, 0xF
    ctx->pc = 0x12a998u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_12a99c:
    // 0x12a99c: 0x8fae0220  lw          $t6, 0x220($sp)
    ctx->pc = 0x12a99cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x12a9a0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x12a9a0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x12a9a4: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12a9a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x12a9a8: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x12a9a8u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x12a9ac: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x12a9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x12a9b0: 0x1cf7821  addu        $t7, $t6, $t7
    ctx->pc = 0x12a9b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x12a9b4: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12a9b4u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12a9b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12A9B8u;
    {
        const bool branch_taken_0x12a9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9B8u;
        // 0x12a9bc: 0xa2ce0000  sb          $t6, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9b8) {
            ctx->pc = 0x12A998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a998;
        }
    }
    ctx->pc = 0x12A9C0u;
label_12a9c0:
    // 0x12a9c0: 0x3b67823  subu        $t7, $sp, $s6
    ctx->pc = 0x12a9c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
label_12a9c4:
    // 0x12a9c4: 0x1000fd0c  b           . + 4 + (-0x2F4 << 2)
    ctx->pc = 0x12A9C4u;
    {
        const bool branch_taken_0x12a9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9C4u;
        // 0x12a9c8: 0x25fe01cc  addiu       $fp, $t7, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), 460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9c4) {
            ctx->pc = 0x129DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129df8;
        }
    }
    ctx->pc = 0x12A9CCu;
label_12a9cc:
    // 0x12a9cc: 0x304f0007  andi        $t7, $v0, 0x7
    ctx->pc = 0x12a9ccu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_12a9d0:
    // 0x12a9d0: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12a9d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x12a9d4: 0x65ef0030  daddiu      $t7, $t7, 0x30
    ctx->pc = 0x12a9d4u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 15) + (int64_t)(int32_t)48);
    // 0x12a9d8: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x12a9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x12a9dc: 0x31ee00ff  andi        $t6, $t7, 0xFF
    ctx->pc = 0x12a9dcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
    // 0x12a9e0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A9E0u;
    {
        const bool branch_taken_0x12a9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9E0u;
        // 0x12a9e4: 0xa2ce0000  sb          $t6, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9e0) {
            ctx->pc = 0x12A9CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a9cc;
        }
    }
    ctx->pc = 0x12A9E8u;
    // 0x12a9e8: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12a9e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12a9ec: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12a9ecu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12a9f0: 0x11e0fff3  beqz        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x12A9F0u;
    {
        const bool branch_taken_0x12a9f0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9F0u;
        // 0x12a9f4: 0x240f0030  addiu       $t7, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a9f0) {
            ctx->pc = 0x12A9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a9c0;
        }
    }
    ctx->pc = 0x12A9F8u;
    // 0x12a9f8: 0x51eefff2  beql        $t7, $t6, . + 4 + (-0xE << 2)
    ctx->pc = 0x12A9F8u;
    {
        const bool branch_taken_0x12a9f8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        if (branch_taken_0x12a9f8) {
            ctx->pc = 0x12A9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A9F8u;
            // 0x12a9fc: 0x3b67823  subu        $t7, $sp, $s6 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A9C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a9c4;
        }
    }
    ctx->pc = 0x12AA00u;
    // 0x12aa00: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12aa00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_12aa04:
    // 0x12aa04: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x12AA04u;
    {
        const bool branch_taken_0x12aa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA04u;
        // 0x12aa08: 0xa2cf0000  sb          $t7, 0x0($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa04) {
            ctx->pc = 0x12A9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a9c0;
        }
    }
    ctx->pc = 0x12AA0Cu;
label_12aa0c:
    // 0x12aa0c: 0x15e00010  bnez        $t7, . + 4 + (0x10 << 2)
    ctx->pc = 0x12AA0Cu;
    {
        const bool branch_taken_0x12aa0c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA0Cu;
        // 0x12aa10: 0x644f0030  daddiu      $t7, $v0, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa0c) {
            ctx->pc = 0x12AA50u;
            goto label_12aa50;
        }
    }
    ctx->pc = 0x12AA14u;
    // 0x12aa14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12aa14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12aa18:
    // 0x12aa18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12aa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa1c: 0xc04b742  jal         func_12DD08
    ctx->pc = 0x12AA1Cu;
    SET_GPR_U32(ctx, 31, 0x12AA24u);
    ctx->pc = 0x12AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA1Cu;
    // 0x12aa20: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12DD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12DD08u, 0x12AA1Cu, 0x12AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AA24u;
label_12aa24:
    // 0x12aa24: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12aa24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x12aa28: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x12aa28u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x12aa2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12aa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa30: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x12aa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12aa34: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x12aa34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12aa38: 0xc04b590  jal         func_12D640
    ctx->pc = 0x12AA38u;
    SET_GPR_U32(ctx, 31, 0x12AA40u);
    ctx->pc = 0x12AA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA38u;
    // 0x12aa3c: 0xa2c20000  sb          $v0, 0x0($s6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D640u, 0x12AA38u, 0x12AA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AA40u;
label_12aa40:
    // 0x12aa40: 0x2c4f000a  sltiu       $t7, $v0, 0xA
    ctx->pc = 0x12aa40u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x12aa44: 0x11e0fff4  beqz        $t7, . + 4 + (-0xC << 2)
    ctx->pc = 0x12AA44u;
    {
        const bool branch_taken_0x12aa44 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA44u;
        // 0x12aa48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa44) {
            ctx->pc = 0x12AA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12aa18;
        }
    }
    ctx->pc = 0x12AA4Cu;
    // 0x12aa4c: 0x644f0030  daddiu      $t7, $v0, 0x30
    ctx->pc = 0x12aa4cu;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_12aa50:
    // 0x12aa50: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x12aa50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x12aa54: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x12AA54u;
    {
        const bool branch_taken_0x12aa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA54u;
        // 0x12aa58: 0x31ef00ff  andi        $t7, $t7, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa54) {
            ctx->pc = 0x12AA04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12aa04;
        }
    }
    ctx->pc = 0x12AA5Cu;
label_12aa5c:
    // 0x12aa5c: 0x15c0ffd9  bnez        $t6, . + 4 + (-0x27 << 2)
    ctx->pc = 0x12AA5Cu;
    {
        const bool branch_taken_0x12aa5c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA5Cu;
        // 0x12aa60: 0x3b67823  subu        $t7, $sp, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa5c) {
            ctx->pc = 0x12A9C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a9c4;
        }
    }
    ctx->pc = 0x12AA64u;
    // 0x12aa64: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12aa64u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12aa68: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12aa68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12aa6c: 0x11e0ffd4  beqz        $t7, . + 4 + (-0x2C << 2)
    ctx->pc = 0x12AA6Cu;
    {
        const bool branch_taken_0x12aa6c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA6Cu;
        // 0x12aa70: 0x240f0030  addiu       $t7, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa6c) {
            ctx->pc = 0x12A9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a9c0;
        }
    }
    ctx->pc = 0x12AA74u;
    // 0x12aa74: 0x27b601cb  addiu       $s6, $sp, 0x1CB
    ctx->pc = 0x12aa74u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 459));
    // 0x12aa78: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x12AA78u;
    {
        const bool branch_taken_0x12aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA78u;
        // 0x12aa7c: 0xa3af01cb  sb          $t7, 0x1CB($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 459), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa78) {
            ctx->pc = 0x12A9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a9c0;
        }
    }
    ctx->pc = 0x12AA80u;
label_12aa80:
    // 0x12aa80: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12aa80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12aa84: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AA84u;
    {
        const bool branch_taken_0x12aa84 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA84u;
        // 0x12aa88: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa84) {
            ctx->pc = 0x12AA94u;
            goto label_12aa94;
        }
    }
    ctx->pc = 0x12AA8Cu;
    // 0x12aa8c: 0x1000fcba  b           . + 4 + (-0x346 << 2)
    ctx->pc = 0x12AA8Cu;
    {
        const bool branch_taken_0x12aa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA8Cu;
        // 0x12aa90: 0x85e20000  lh          $v0, 0x0($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa8c) {
            ctx->pc = 0x129D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129d78;
        }
    }
    ctx->pc = 0x12AA94u;
label_12aa94:
    // 0x12aa94: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x12aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12aa98: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12aa98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12aa9c: 0x1000fcb8  b           . + 4 + (-0x348 << 2)
    ctx->pc = 0x12AA9Cu;
    {
        const bool branch_taken_0x12aa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA9Cu;
        // 0x12aaa0: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa9c) {
            ctx->pc = 0x129D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129d80;
        }
    }
    ctx->pc = 0x12AAA4u;
label_12aaa4:
    // 0x12aaa4: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12aaa4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12aaa8: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12aaa8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12aaac: 0x1000fc74  b           . + 4 + (-0x38C << 2)
    ctx->pc = 0x12AAACu;
    {
        const bool branch_taken_0x12aaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAACu;
        // 0x12aab0: 0x35ce0008  ori         $t6, $t6, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aaac) {
            ctx->pc = 0x129C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129c80;
        }
    }
    ctx->pc = 0x12AAB4u;
label_12aab4:
    // 0x12aab4: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12aab4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12aab8: 0x35ce0010  ori         $t6, $t6, 0x10
    ctx->pc = 0x12aab8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16);
    // 0x12aabc: 0xafae01fc  sw          $t6, 0x1FC($sp)
    ctx->pc = 0x12aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 14));
label_12aac0:
    // 0x12aac0: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12aac0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12aac4: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x12aac4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x12aac8: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12AAC8u;
    {
        const bool branch_taken_0x12aac8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAC8u;
        // 0x12aacc: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aac8) {
            ctx->pc = 0x12AAE8u;
            goto label_12aae8;
        }
    }
    ctx->pc = 0x12AAD0u;
    // 0x12aad0: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x12aad0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
label_12aad4:
    // 0x12aad4: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12aad4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12aad8: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x12aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_12aadc:
    // 0x12aadc: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x12aadcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12aae0:
    // 0x12aae0: 0x1000fcad  b           . + 4 + (-0x353 << 2)
    ctx->pc = 0x12AAE0u;
    {
        const bool branch_taken_0x12aae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAE0u;
        // 0x12aae4: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aae0) {
            ctx->pc = 0x129D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129d98;
        }
    }
    ctx->pc = 0x12AAE8u;
label_12aae8:
    // 0x12aae8: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12aae8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12aaec: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AAECu;
    {
        const bool branch_taken_0x12aaec = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAECu;
        // 0x12aaf0: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aaec) {
            ctx->pc = 0x12AAFCu;
            goto label_12aafc;
        }
    }
    ctx->pc = 0x12AAF4u;
    // 0x12aaf4: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12AAF4u;
    {
        const bool branch_taken_0x12aaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAF4u;
        // 0x12aaf8: 0x95e20000  lhu         $v0, 0x0($t7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aaf4) {
            ctx->pc = 0x12AAD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12aad4;
        }
    }
    ctx->pc = 0x12AAFCu;
label_12aafc:
    // 0x12aafc: 0x9de20000  lwu         $v0, 0x0($t7)
    ctx->pc = 0x12aafcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12ab00: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12ab00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12ab04: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x12AB04u;
    {
        const bool branch_taken_0x12ab04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB04u;
        // 0x12ab08: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab04) {
            ctx->pc = 0x12AADCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12aadc;
        }
    }
    ctx->pc = 0x12AB0Cu;
label_12ab0c:
    // 0x12ab0c: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12ab0cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ab10: 0x35ce0010  ori         $t6, $t6, 0x10
    ctx->pc = 0x12ab10u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16);
    // 0x12ab14: 0xafae01fc  sw          $t6, 0x1FC($sp)
    ctx->pc = 0x12ab14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 14));
label_12ab18:
    // 0x12ab18: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12ab18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ab1c: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x12ab1cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x12ab20: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AB20u;
    {
        const bool branch_taken_0x12ab20 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB20u;
        // 0x12ab24: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab20) {
            ctx->pc = 0x12AB3Cu;
            goto label_12ab3c;
        }
    }
    ctx->pc = 0x12AB28u;
    // 0x12ab28: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x12ab28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
label_12ab2c:
    // 0x12ab2c: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12ab2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12ab30: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x12ab30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_12ab34:
    // 0x12ab34: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x12AB34u;
    {
        const bool branch_taken_0x12ab34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB34u;
        // 0x12ab38: 0x240e0001  addiu       $t6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab34) {
            ctx->pc = 0x12AAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12aae0;
        }
    }
    ctx->pc = 0x12AB3Cu;
label_12ab3c:
    // 0x12ab3c: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12ab3cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12ab40: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AB40u;
    {
        const bool branch_taken_0x12ab40 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB40u;
        // 0x12ab44: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab40) {
            ctx->pc = 0x12AB50u;
            goto label_12ab50;
        }
    }
    ctx->pc = 0x12AB48u;
    // 0x12ab48: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x12AB48u;
    {
        const bool branch_taken_0x12ab48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB48u;
        // 0x12ab4c: 0x95e20000  lhu         $v0, 0x0($t7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab48) {
            ctx->pc = 0x12AB2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ab2c;
        }
    }
    ctx->pc = 0x12AB50u;
label_12ab50:
    // 0x12ab50: 0x9de20000  lwu         $v0, 0x0($t7)
    ctx->pc = 0x12ab50u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12ab54: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12ab54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12ab58: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x12AB58u;
    {
        const bool branch_taken_0x12ab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB58u;
        // 0x12ab5c: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab58) {
            ctx->pc = 0x12AB34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ab34;
        }
    }
    ctx->pc = 0x12AB60u;
label_12ab60:
    // 0x12ab60: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12ab60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x12ab64: 0x25ef3e78  addiu       $t7, $t7, 0x3E78
    ctx->pc = 0x12ab64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 15992));
label_12ab68:
    // 0x12ab68: 0xafaf0220  sw          $t7, 0x220($sp)
    ctx->pc = 0x12ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 15));
    // 0x12ab6c: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12ab6cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ab70: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x12ab70u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x12ab74: 0x11e0000c  beqz        $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12AB74u;
    {
        const bool branch_taken_0x12ab74 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB74u;
        // 0x12ab78: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab74) {
            ctx->pc = 0x12ABA8u;
            goto label_12aba8;
        }
    }
    ctx->pc = 0x12AB7Cu;
    // 0x12ab7c: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x12ab7cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
label_12ab80:
    // 0x12ab80: 0x25ee0008  addiu       $t6, $t7, 0x8
    ctx->pc = 0x12ab80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12ab84: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x12ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_12ab88:
    // 0x12ab88: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12ab88u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ab8c: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12ab8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12ab90: 0x11e0ffd3  beqz        $t7, . + 4 + (-0x2D << 2)
    ctx->pc = 0x12AB90u;
    {
        const bool branch_taken_0x12ab90 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB90u;
        // 0x12ab94: 0x240e0002  addiu       $t6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab90) {
            ctx->pc = 0x12AAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12aae0;
        }
    }
    ctx->pc = 0x12AB98u;
    // 0x12ab98: 0x35af0002  ori         $t7, $t5, 0x2
    ctx->pc = 0x12ab98u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)2);
    // 0x12ab9c: 0x1e2680b  movn        $t5, $t7, $v0
    ctx->pc = 0x12ab9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 15));
    // 0x12aba0: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x12ABA0u;
    {
        const bool branch_taken_0x12aba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABA0u;
        // 0x12aba4: 0xafad01fc  sw          $t5, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aba0) {
            ctx->pc = 0x12AAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12aae0;
        }
    }
    ctx->pc = 0x12ABA8u;
label_12aba8:
    // 0x12aba8: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12aba8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12abac: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ABACu;
    {
        const bool branch_taken_0x12abac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABACu;
        // 0x12abb0: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abac) {
            ctx->pc = 0x12ABBCu;
            goto label_12abbc;
        }
    }
    ctx->pc = 0x12ABB4u;
    // 0x12abb4: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x12ABB4u;
    {
        const bool branch_taken_0x12abb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABB4u;
        // 0x12abb8: 0x95e20000  lhu         $v0, 0x0($t7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abb4) {
            ctx->pc = 0x12AB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ab80;
        }
    }
    ctx->pc = 0x12ABBCu;
label_12abbc:
    // 0x12abbc: 0x9de20000  lwu         $v0, 0x0($t7)
    ctx->pc = 0x12abbcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12abc0: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12abc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12abc4: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x12ABC4u;
    {
        const bool branch_taken_0x12abc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABC4u;
        // 0x12abc8: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abc4) {
            ctx->pc = 0x12AB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ab88;
        }
    }
    ctx->pc = 0x12ABCCu;
label_12abcc:
    // 0x12abcc: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12abccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12abd0: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x12abd0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12abd4: 0x8fad01f8  lw          $t5, 0x1F8($sp)
    ctx->pc = 0x12abd4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12abd8: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x12abd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12abdc: 0x91ee0000  lbu         $t6, 0x0($t7)
    ctx->pc = 0x12abdcu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12abe0: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x12abe0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x12abe4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x12abe4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12abe8: 0xafad01f8  sw          $t5, 0x1F8($sp)
    ctx->pc = 0x12abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 13));
    // 0x12abec: 0x1000fc82  b           . + 4 + (-0x37E << 2)
    ctx->pc = 0x12ABECu;
    {
        const bool branch_taken_0x12abec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABECu;
        // 0x12abf0: 0xa3ae0070  sb          $t6, 0x70($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abec) {
            ctx->pc = 0x129DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129df8;
        }
    }
    ctx->pc = 0x12ABF4u;
label_12abf4:
    // 0x12abf4: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x12abf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12abf8: 0x162f0073  bne         $s1, $t7, . + 4 + (0x73 << 2)
    ctx->pc = 0x12ABF8u;
    {
        const bool branch_taken_0x12abf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 15));
        ctx->pc = 0x12ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABF8u;
        // 0x12abfc: 0x240f0067  addiu       $t7, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12abf8) {
            ctx->pc = 0x12ADC8u;
            goto label_12adc8;
        }
    }
    ctx->pc = 0x12AC00u;
    // 0x12ac00: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x12ac00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_12ac04:
    // 0x12ac04: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12ac04u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_12ac08:
    // 0x12ac08: 0x31af0008  andi        $t7, $t5, 0x8
    ctx->pc = 0x12ac08u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)8);
    // 0x12ac0c: 0x11e00068  beqz        $t7, . + 4 + (0x68 << 2)
    ctx->pc = 0x12AC0Cu;
    {
        const bool branch_taken_0x12ac0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC0Cu;
        // 0x12ac10: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac0c) {
            ctx->pc = 0x12ADB0u;
            goto label_12adb0;
        }
    }
    ctx->pc = 0x12AC14u;
    // 0x12ac14: 0x8fae01f8  lw          $t6, 0x1F8($sp)
    ctx->pc = 0x12ac14u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12ac18: 0xddef0000  ld          $t7, 0x0($t7)
    ctx->pc = 0x12ac18u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12ac1c: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x12ac1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x12ac20: 0xffaf0210  sd          $t7, 0x210($sp)
    ctx->pc = 0x12ac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 15));
    // 0x12ac24: 0xafae01f8  sw          $t6, 0x1F8($sp)
    ctx->pc = 0x12ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 14));
label_12ac28:
    // 0x12ac28: 0xc047926  jal         func_11E498
    ctx->pc = 0x12AC28u;
    SET_GPR_U32(ctx, 31, 0x12AC30u);
    ctx->pc = 0x12AC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC28u;
    // 0x12ac2c: 0xdfa40210  ld          $a0, 0x210($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E498u, 0x12AC28u, 0x12AC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC30u;
label_12ac30:
    // 0x12ac30: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12AC30u;
    {
        const bool branch_taken_0x12ac30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC30u;
        // 0x12ac34: 0xdfa40210  ld          $a0, 0x210($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac30) {
            ctx->pc = 0x12AC5Cu;
            goto label_12ac5c;
        }
    }
    ctx->pc = 0x12AC38u;
    // 0x12ac38: 0xc04bb8e  jal         func_12EE38
    ctx->pc = 0x12AC38u;
    SET_GPR_U32(ctx, 31, 0x12AC40u);
    ctx->pc = 0x12AC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC38u;
    // 0x12ac3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE38u, 0x12AC38u, 0x12AC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC40u;
label_12ac40:
    // 0x12ac40: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AC40u;
    {
        const bool branch_taken_0x12ac40 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x12AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC40u;
        // 0x12ac44: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac40) {
            ctx->pc = 0x12AC50u;
            goto label_12ac50;
        }
    }
    ctx->pc = 0x12AC48u;
    // 0x12ac48: 0x240e002d  addiu       $t6, $zero, 0x2D
    ctx->pc = 0x12ac48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12ac4c: 0xa3ae0000  sb          $t6, 0x0($sp)
    ctx->pc = 0x12ac4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 14));
label_12ac50:
    // 0x12ac50: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x12ac50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12ac54: 0x1000fc68  b           . + 4 + (-0x398 << 2)
    ctx->pc = 0x12AC54u;
    {
        const bool branch_taken_0x12ac54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC54u;
        // 0x12ac58: 0x25f63e90  addiu       $s6, $t7, 0x3E90 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 16016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac54) {
            ctx->pc = 0x129DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129df8;
        }
    }
    ctx->pc = 0x12AC5Cu;
label_12ac5c:
    // 0x12ac5c: 0xc047938  jal         func_11E4E0
    ctx->pc = 0x12AC5Cu;
    SET_GPR_U32(ctx, 31, 0x12AC64u);
    ctx->pc = 0x12AC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC5Cu;
    // 0x12ac60: 0xdfa40210  ld          $a0, 0x210($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E4E0u, 0x12AC5Cu, 0x12AC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AC64u;
label_12ac64:
    // 0x12ac64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AC64u;
    {
        const bool branch_taken_0x12ac64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC64u;
        // 0x12ac68: 0x3c0f0066  lui         $t7, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac64) {
            ctx->pc = 0x12AC78u;
            goto label_12ac78;
        }
    }
    ctx->pc = 0x12AC6Cu;
    // 0x12ac6c: 0x241e0003  addiu       $fp, $zero, 0x3
    ctx->pc = 0x12ac6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12ac70: 0x1000fc61  b           . + 4 + (-0x39F << 2)
    ctx->pc = 0x12AC70u;
    {
        const bool branch_taken_0x12ac70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC70u;
        // 0x12ac74: 0x25f63e98  addiu       $s6, $t7, 0x3E98 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 16024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ac70) {
            ctx->pc = 0x129DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129df8;
        }
    }
    ctx->pc = 0x12AC78u;
label_12ac78:
    // 0x12ac78: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12ac78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ac7c: 0x27a80001  addiu       $t0, $sp, 0x1
    ctx->pc = 0x12ac7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
    // 0x12ac80: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x12ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x12ac84: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12ac84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac88: 0x35ad0100  ori         $t5, $t5, 0x100
    ctx->pc = 0x12ac88u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)256);
    // 0x12ac8c: 0xdfa50210  ld          $a1, 0x210($sp)
    ctx->pc = 0x12ac8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x12ac90: 0xafad01fc  sw          $t5, 0x1FC($sp)
    ctx->pc = 0x12ac90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
    // 0x12ac94: 0x27a901e8  addiu       $t1, $sp, 0x1E8
    ctx->pc = 0x12ac94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
    // 0x12ac98: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x12ac98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ac9c: 0x27ab01ec  addiu       $t3, $sp, 0x1EC
    ctx->pc = 0x12ac9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
    // 0x12aca0: 0xc04abe4  jal         func_12AF90
    ctx->pc = 0x12ACA0u;
    SET_GPR_U32(ctx, 31, 0x12ACA8u);
    ctx->pc = 0x12ACA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ACA0u;
    // 0x12aca4: 0x8fa701fc  lw          $a3, 0x1FC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AF90u, 0x12ACA0u, 0x12ACA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ACA8u;
label_12aca8:
    // 0x12aca8: 0x240f0067  addiu       $t7, $zero, 0x67
    ctx->pc = 0x12aca8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x12acac: 0x126f0004  beq         $s3, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12ACACu;
    {
        const bool branch_taken_0x12acac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        ctx->pc = 0x12ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACACu;
        // 0x12acb0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acac) {
            ctx->pc = 0x12ACC0u;
            goto label_12acc0;
        }
    }
    ctx->pc = 0x12ACB4u;
    // 0x12acb4: 0x240f0047  addiu       $t7, $zero, 0x47
    ctx->pc = 0x12acb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x12acb8: 0x166f000c  bne         $s3, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12ACB8u;
    {
        const bool branch_taken_0x12acb8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x12ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACB8u;
        // 0x12acbc: 0x8fa501e8  lw          $a1, 0x1E8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acb8) {
            ctx->pc = 0x12ACECu;
            goto label_12acec;
        }
    }
    ctx->pc = 0x12ACC0u;
label_12acc0:
    // 0x12acc0: 0x8fa501e8  lw          $a1, 0x1E8($sp)
    ctx->pc = 0x12acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x12acc4: 0x28affffd  slti        $t7, $a1, -0x3
    ctx->pc = 0x12acc4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x12acc8: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12ACC8u;
    {
        const bool branch_taken_0x12acc8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACC8u;
        // 0x12accc: 0x3a6d0067  xori        $t5, $s3, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acc8) {
            ctx->pc = 0x12ACDCu;
            goto label_12acdc;
        }
    }
    ctx->pc = 0x12ACD0u;
    // 0x12acd0: 0x225782a  slt         $t7, $s1, $a1
    ctx->pc = 0x12acd0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x12acd4: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12ACD4u;
    {
        const bool branch_taken_0x12acd4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACD4u;
        // 0x12acd8: 0x24130067  addiu       $s3, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acd4) {
            ctx->pc = 0x12ACECu;
            goto label_12acec;
        }
    }
    ctx->pc = 0x12ACDCu;
label_12acdc:
    // 0x12acdc: 0x240f0065  addiu       $t7, $zero, 0x65
    ctx->pc = 0x12acdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x12ace0: 0x240e0045  addiu       $t6, $zero, 0x45
    ctx->pc = 0x12ace0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x12ace4: 0x1e0982d  daddu       $s3, $t7, $zero
    ctx->pc = 0x12ace4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ace8: 0x1cd980b  movn        $s3, $t6, $t5
    ctx->pc = 0x12ace8u;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 14));
label_12acec:
    // 0x12acec: 0x2a6f0066  slti        $t7, $s3, 0x66
    ctx->pc = 0x12acecu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)102) ? 1 : 0);
    // 0x12acf0: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x12ACF0u;
    {
        const bool branch_taken_0x12acf0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACF0u;
        // 0x12acf4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12acf0) {
            ctx->pc = 0x12AD44u;
            goto label_12ad44;
        }
    }
    ctx->pc = 0x12ACF8u;
    // 0x12acf8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x12acf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12acfc: 0xafa501e8  sw          $a1, 0x1E8($sp)
    ctx->pc = 0x12acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
    // 0x12ad00: 0xc04ac4e  jal         func_12B138
    ctx->pc = 0x12AD00u;
    SET_GPR_U32(ctx, 31, 0x12AD08u);
    ctx->pc = 0x12AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AD00u;
    // 0x12ad04: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B138u, 0x12AD00u, 0x12AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AD08u;
label_12ad08:
    // 0x12ad08: 0x8faf01ec  lw          $t7, 0x1EC($sp)
    ctx->pc = 0x12ad08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x12ad0c: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x12ad0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
    // 0x12ad10: 0x29ee0002  slti        $t6, $t7, 0x2
    ctx->pc = 0x12ad10u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12ad14: 0x11c00005  beqz        $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AD14u;
    {
        const bool branch_taken_0x12ad14 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD14u;
        // 0x12ad18: 0x4ff021  addu        $fp, $v0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad14) {
            ctx->pc = 0x12AD2Cu;
            goto label_12ad2c;
        }
    }
    ctx->pc = 0x12AD1Cu;
    // 0x12ad1c: 0x8fae01fc  lw          $t6, 0x1FC($sp)
    ctx->pc = 0x12ad1cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ad20: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12ad20u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12ad24: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AD24u;
    {
        const bool branch_taken_0x12ad24 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD24u;
        // 0x12ad28: 0x83af0001  lb          $t7, 0x1($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad24) {
            ctx->pc = 0x12AD34u;
            goto label_12ad34;
        }
    }
    ctx->pc = 0x12AD2Cu;
label_12ad2c:
    // 0x12ad2c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x12ad2cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_12ad30:
    // 0x12ad30: 0x83af0001  lb          $t7, 0x1($sp)
    ctx->pc = 0x12ad30u;
    SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_12ad34:
    // 0x12ad34: 0x11e0fc30  beqz        $t7, . + 4 + (-0x3D0 << 2)
    ctx->pc = 0x12AD34u;
    {
        const bool branch_taken_0x12ad34 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD34u;
        // 0x12ad38: 0x240e002d  addiu       $t6, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad34) {
            ctx->pc = 0x129DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129df8;
        }
    }
    ctx->pc = 0x12AD3Cu;
    // 0x12ad3c: 0x1000fc2e  b           . + 4 + (-0x3D2 << 2)
    ctx->pc = 0x12AD3Cu;
    {
        const bool branch_taken_0x12ad3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD3Cu;
        // 0x12ad40: 0xa3ae0000  sb          $t6, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad3c) {
            ctx->pc = 0x129DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129df8;
        }
    }
    ctx->pc = 0x12AD44u;
label_12ad44:
    // 0x12ad44: 0x240f0066  addiu       $t7, $zero, 0x66
    ctx->pc = 0x12ad44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x12ad48: 0x166f000c  bne         $s3, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12AD48u;
    {
        const bool branch_taken_0x12ad48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x12AD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD48u;
        // 0x12ad4c: 0x8fa201ec  lw          $v0, 0x1EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad48) {
            ctx->pc = 0x12AD7Cu;
            goto label_12ad7c;
        }
    }
    ctx->pc = 0x12AD50u;
    // 0x12ad50: 0x18a0fff7  blez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x12AD50u;
    {
        const bool branch_taken_0x12ad50 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x12AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD50u;
        // 0x12ad54: 0x263e0002  addiu       $fp, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad50) {
            ctx->pc = 0x12AD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ad30;
        }
    }
    ctx->pc = 0x12AD58u;
    // 0x12ad58: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AD58u;
    {
        const bool branch_taken_0x12ad58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD58u;
        // 0x12ad5c: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad58) {
            ctx->pc = 0x12AD70u;
            goto label_12ad70;
        }
    }
    ctx->pc = 0x12AD60u;
    // 0x12ad60: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12ad60u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ad64: 0x31af0001  andi        $t7, $t5, 0x1
    ctx->pc = 0x12ad64u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12ad68: 0x11e0fff2  beqz        $t7, . + 4 + (-0xE << 2)
    ctx->pc = 0x12AD68u;
    {
        const bool branch_taken_0x12ad68 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD68u;
        // 0x12ad6c: 0x83af0001  lb          $t7, 0x1($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad68) {
            ctx->pc = 0x12AD34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ad34;
        }
    }
    ctx->pc = 0x12AD70u;
label_12ad70:
    // 0x12ad70: 0xb17821  addu        $t7, $a1, $s1
    ctx->pc = 0x12ad70u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x12ad74: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x12AD74u;
    {
        const bool branch_taken_0x12ad74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD74u;
        // 0x12ad78: 0x25fe0001  addiu       $fp, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad74) {
            ctx->pc = 0x12AD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ad30;
        }
    }
    ctx->pc = 0x12AD7Cu;
label_12ad7c:
    // 0x12ad7c: 0xa2782a  slt         $t7, $a1, $v0
    ctx->pc = 0x12ad7cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x12ad80: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AD80u;
    {
        const bool branch_taken_0x12ad80 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD80u;
        // 0x12ad84: 0x8fae01fc  lw          $t6, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad80) {
            ctx->pc = 0x12AD9Cu;
            goto label_12ad9c;
        }
    }
    ctx->pc = 0x12AD88u;
    // 0x12ad88: 0x31cf0001  andi        $t7, $t6, 0x1
    ctx->pc = 0x12ad88u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x12ad8c: 0x11e0ffe8  beqz        $t7, . + 4 + (-0x18 << 2)
    ctx->pc = 0x12AD8Cu;
    {
        const bool branch_taken_0x12ad8c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD8Cu;
        // 0x12ad90: 0xa0f02d  daddu       $fp, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad8c) {
            ctx->pc = 0x12AD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ad30;
        }
    }
    ctx->pc = 0x12AD94u;
    // 0x12ad94: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x12AD94u;
    {
        const bool branch_taken_0x12ad94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AD94u;
        // 0x12ad98: 0x24be0001  addiu       $fp, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ad94) {
            ctx->pc = 0x12AD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ad30;
        }
    }
    ctx->pc = 0x12AD9Cu;
label_12ad9c:
    // 0x12ad9c: 0x5ca0ffe4  bgtzl       $a1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x12AD9Cu;
    {
        const bool branch_taken_0x12ad9c = (GPR_S64(ctx, 5) > 0);
        if (branch_taken_0x12ad9c) {
            ctx->pc = 0x12ADA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AD9Cu;
            // 0x12ada0: 0x245e0001  addiu       $fp, $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12AD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ad30;
        }
    }
    ctx->pc = 0x12ADA4u;
    // 0x12ada4: 0x457823  subu        $t7, $v0, $a1
    ctx->pc = 0x12ada4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x12ada8: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x12ADA8u;
    {
        const bool branch_taken_0x12ada8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADA8u;
        // 0x12adac: 0x25fe0002  addiu       $fp, $t7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ada8) {
            ctx->pc = 0x12AD30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ad30;
        }
    }
    ctx->pc = 0x12ADB0u;
label_12adb0:
    // 0x12adb0: 0xddef0000  ld          $t7, 0x0($t7)
    ctx->pc = 0x12adb0u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12adb4: 0xffaf0210  sd          $t7, 0x210($sp)
    ctx->pc = 0x12adb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 15));
    // 0x12adb8: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12adb8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12adbc: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12adbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12adc0: 0x1000ff99  b           . + 4 + (-0x67 << 2)
    ctx->pc = 0x12ADC0u;
    {
        const bool branch_taken_0x12adc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADC0u;
        // 0x12adc4: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12adc0) {
            ctx->pc = 0x12AC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ac28;
        }
    }
    ctx->pc = 0x12ADC8u;
label_12adc8:
    // 0x12adc8: 0x126f0003  beq         $s3, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ADC8u;
    {
        const bool branch_taken_0x12adc8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        ctx->pc = 0x12ADCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADC8u;
        // 0x12adcc: 0x240f0047  addiu       $t7, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12adc8) {
            ctx->pc = 0x12ADD8u;
            goto label_12add8;
        }
    }
    ctx->pc = 0x12ADD0u;
    // 0x12add0: 0x166fff8d  bne         $s3, $t7, . + 4 + (-0x73 << 2)
    ctx->pc = 0x12ADD0u;
    {
        const bool branch_taken_0x12add0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        ctx->pc = 0x12ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADD0u;
        // 0x12add4: 0x8fad01fc  lw          $t5, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12add0) {
            ctx->pc = 0x12AC08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ac08;
        }
    }
    ctx->pc = 0x12ADD8u;
label_12add8:
    // 0x12add8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x12add8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12addc: 0x1000ff89  b           . + 4 + (-0x77 << 2)
    ctx->pc = 0x12ADDCu;
    {
        const bool branch_taken_0x12addc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADDCu;
        // 0x12ade0: 0x1f1880a  movz        $s1, $t7, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12addc) {
            ctx->pc = 0x12AC04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ac04;
        }
    }
    ctx->pc = 0x12ADE4u;
label_12ade4:
    // 0x12ade4: 0x8faf01fc  lw          $t7, 0x1FC($sp)
    ctx->pc = 0x12ade4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ade8: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12ade8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12adec: 0x1000fb96  b           . + 4 + (-0x46A << 2)
    ctx->pc = 0x12ADECu;
    {
        const bool branch_taken_0x12adec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADECu;
        // 0x12adf0: 0x35ef0040  ori         $t7, $t7, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12adec) {
            ctx->pc = 0x129C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129c48;
        }
    }
    ctx->pc = 0x12ADF4u;
label_12adf4:
    // 0x12adf4: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12adf4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12adf8: 0x240f006c  addiu       $t7, $zero, 0x6C
    ctx->pc = 0x12adf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x12adfc: 0x67600  sll         $t6, $a2, 24
    ctx->pc = 0x12adfcu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x12ae00: 0xe7603  sra         $t6, $t6, 24
    ctx->pc = 0x12ae00u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 24));
    // 0x12ae04: 0x15cf0006  bne         $t6, $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AE04u;
    {
        const bool branch_taken_0x12ae04 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x12AE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE04u;
        // 0x12ae08: 0x8fae01fc  lw          $t6, 0x1FC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae04) {
            ctx->pc = 0x12AE20u;
            goto label_12ae20;
        }
    }
    ctx->pc = 0x12AE0Cu;
    // 0x12ae0c: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12ae0cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ae10: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x12ae10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x12ae14: 0x35ad0010  ori         $t5, $t5, 0x10
    ctx->pc = 0x12ae14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)16);
    // 0x12ae18: 0x1000fb84  b           . + 4 + (-0x47C << 2)
    ctx->pc = 0x12AE18u;
    {
        const bool branch_taken_0x12ae18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE18u;
        // 0x12ae1c: 0xafad01fc  sw          $t5, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae18) {
            ctx->pc = 0x129C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129c2c;
        }
    }
    ctx->pc = 0x12AE20u;
label_12ae20:
    // 0x12ae20: 0x1000fb97  b           . + 4 + (-0x469 << 2)
    ctx->pc = 0x12AE20u;
    {
        const bool branch_taken_0x12ae20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE20u;
        // 0x12ae24: 0x35ce0010  ori         $t6, $t6, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae20) {
            ctx->pc = 0x129C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129c80;
        }
    }
    ctx->pc = 0x12AE28u;
label_12ae28:
    // 0x12ae28: 0x8fad01fc  lw          $t5, 0x1FC($sp)
    ctx->pc = 0x12ae28u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12ae2c: 0x31af0010  andi        $t7, $t5, 0x10
    ctx->pc = 0x12ae2cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)16);
    // 0x12ae30: 0x11e00007  beqz        $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x12AE30u;
    {
        const bool branch_taken_0x12ae30 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE30u;
        // 0x12ae34: 0x8faf01f8  lw          $t7, 0x1F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae30) {
            ctx->pc = 0x12AE50u;
            goto label_12ae50;
        }
    }
    ctx->pc = 0x12AE38u;
    // 0x12ae38: 0x8fad0200  lw          $t5, 0x200($sp)
    ctx->pc = 0x12ae38u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x12ae3c: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12ae3cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12ae40: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12ae40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12ae44: 0xfdcd0000  sd          $t5, 0x0($t6)
    ctx->pc = 0x12ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 14), 0), GPR_U64(ctx, 13));
label_12ae48:
    // 0x12ae48: 0x1000fb3e  b           . + 4 + (-0x4C2 << 2)
    ctx->pc = 0x12AE48u;
    {
        const bool branch_taken_0x12ae48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE48u;
        // 0x12ae4c: 0xafaf01f8  sw          $t7, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae48) {
            ctx->pc = 0x129B44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129b44;
        }
    }
    ctx->pc = 0x12AE50u;
label_12ae50:
    // 0x12ae50: 0x31af0040  andi        $t7, $t5, 0x40
    ctx->pc = 0x12ae50u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)64);
    // 0x12ae54: 0x11e00006  beqz        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AE54u;
    {
        const bool branch_taken_0x12ae54 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE54u;
        // 0x12ae58: 0x8fad0200  lw          $t5, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae54) {
            ctx->pc = 0x12AE70u;
            goto label_12ae70;
        }
    }
    ctx->pc = 0x12AE5Cu;
    // 0x12ae5c: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12ae5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12ae60: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12ae60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12ae64: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12ae64u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12ae68: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x12AE68u;
    {
        const bool branch_taken_0x12ae68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE68u;
        // 0x12ae6c: 0xa5cd0000  sh          $t5, 0x0($t6) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae68) {
            ctx->pc = 0x12AE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ae48;
        }
    }
    ctx->pc = 0x12AE70u;
label_12ae70:
    // 0x12ae70: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12ae70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12ae74: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x12ae74u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12ae78: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x12ae78u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12ae7c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x12AE7Cu;
    {
        const bool branch_taken_0x12ae7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE7Cu;
        // 0x12ae80: 0xadcd0000  sw          $t5, 0x0($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae7c) {
            ctx->pc = 0x12AE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ae48;
        }
    }
    ctx->pc = 0x12AE84u;
label_12ae84:
    // 0x12ae84: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12ae84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12ae88: 0x3c0e0066  lui         $t6, 0x66
    ctx->pc = 0x12ae88u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)102 << 16));
    // 0x12ae8c: 0x25ce3ea0  addiu       $t6, $t6, 0x3EA0
    ctx->pc = 0x12ae8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16032));
    // 0x12ae90: 0x24130078  addiu       $s3, $zero, 0x78
    ctx->pc = 0x12ae90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x12ae94: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x12ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12ae98: 0x25ed0008  addiu       $t5, $t7, 0x8
    ctx->pc = 0x12ae98u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12ae9c: 0xafae0220  sw          $t6, 0x220($sp)
    ctx->pc = 0x12ae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 14));
    // 0x12aea0: 0x8faf01fc  lw          $t7, 0x1FC($sp)
    ctx->pc = 0x12aea0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12aea4: 0xafad01f8  sw          $t5, 0x1F8($sp)
    ctx->pc = 0x12aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 13));
    // 0x12aea8: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x12aea8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12aeac: 0x35ef0002  ori         $t7, $t7, 0x2
    ctx->pc = 0x12aeacu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)2);
    // 0x12aeb0: 0x1000ff0b  b           . + 4 + (-0xF5 << 2)
    ctx->pc = 0x12AEB0u;
    {
        const bool branch_taken_0x12aeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEB0u;
        // 0x12aeb4: 0xafaf01fc  sw          $t7, 0x1FC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aeb0) {
            ctx->pc = 0x12AAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12aae0;
        }
    }
    ctx->pc = 0x12AEB8u;
label_12aeb8:
    // 0x12aeb8: 0x8faf01fc  lw          $t7, 0x1FC($sp)
    ctx->pc = 0x12aeb8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
    // 0x12aebc: 0x92a60000  lbu         $a2, 0x0($s5)
    ctx->pc = 0x12aebcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x12aec0: 0x1000fb61  b           . + 4 + (-0x49F << 2)
    ctx->pc = 0x12AEC0u;
    {
        const bool branch_taken_0x12aec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEC0u;
        // 0x12aec4: 0x35ef0010  ori         $t7, $t7, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aec0) {
            ctx->pc = 0x129C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129c48;
        }
    }
    ctx->pc = 0x12AEC8u;
label_12aec8:
    // 0x12aec8: 0x8faf01f8  lw          $t7, 0x1F8($sp)
    ctx->pc = 0x12aec8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x12aecc: 0x25ed0008  addiu       $t5, $t7, 0x8
    ctx->pc = 0x12aeccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x12aed0: 0x8df60000  lw          $s6, 0x0($t7)
    ctx->pc = 0x12aed0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12aed4: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x12AED4u;
    {
        const bool branch_taken_0x12aed4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AED4u;
        // 0x12aed8: 0xafad01f8  sw          $t5, 0x1F8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aed4) {
            ctx->pc = 0x12AEE4u;
            goto label_12aee4;
        }
    }
    ctx->pc = 0x12AEDCu;
    // 0x12aedc: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12aedcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x12aee0: 0x25f63eb8  addiu       $s6, $t7, 0x3EB8
    ctx->pc = 0x12aee0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 16056));
label_12aee4:
    // 0x12aee4: 0x620000d  bltz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x12AEE4u;
    {
        const bool branch_taken_0x12aee4 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x12AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEE4u;
        // 0x12aee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aee4) {
            ctx->pc = 0x12AF1Cu;
            goto label_12af1c;
        }
    }
    ctx->pc = 0x12AEECu;
    // 0x12aeec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12aeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aef0: 0xc0494c4  jal         func_125310
    ctx->pc = 0x12AEF0u;
    SET_GPR_U32(ctx, 31, 0x12AEF8u);
    ctx->pc = 0x12AEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AEF0u;
    // 0x12aef4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125310u, 0x12AEF0u, 0x12AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AEF8u;
label_12aef8:
    // 0x12aef8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12AEF8u;
    {
        const bool branch_taken_0x12aef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEF8u;
        // 0x12aefc: 0x220f02d  daddu       $fp, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aef8) {
            ctx->pc = 0x12AF14u;
            goto label_12af14;
        }
    }
    ctx->pc = 0x12AF00u;
    // 0x12af00: 0x56f023  subu        $fp, $v0, $s6
    ctx->pc = 0x12af00u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x12af04: 0x23e782a  slt         $t7, $s1, $fp
    ctx->pc = 0x12af04u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x12af08: 0x51e0fbbb  beql        $t7, $zero, . + 4 + (-0x445 << 2)
    ctx->pc = 0x12AF08u;
    {
        const bool branch_taken_0x12af08 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12af08) {
            ctx->pc = 0x12AF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12AF08u;
            // 0x12af0c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129df8;
        }
    }
    ctx->pc = 0x12AF10u;
    // 0x12af10: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x12af10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12af14:
    // 0x12af14: 0x1000fbb8  b           . + 4 + (-0x448 << 2)
    ctx->pc = 0x12AF14u;
    {
        const bool branch_taken_0x12af14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF14u;
        // 0x12af18: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af14) {
            ctx->pc = 0x129DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129df8;
        }
    }
    ctx->pc = 0x12AF1Cu;
label_12af1c:
    // 0x12af1c: 0xc049f18  jal         func_127C60
    ctx->pc = 0x12AF1Cu;
    SET_GPR_U32(ctx, 31, 0x12AF24u);
    ctx->pc = 0x12AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF1Cu;
    // 0x12af20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C60u, 0x12AF1Cu, 0x12AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF24u;
label_12af24:
    // 0x12af24: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x12AF24u;
    {
        const bool branch_taken_0x12af24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF24u;
        // 0x12af28: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af24) {
            ctx->pc = 0x12AF14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12af14;
        }
    }
    ctx->pc = 0x12AF2Cu;
label_12af2c:
    // 0x12af2c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AF2Cu;
    {
        const bool branch_taken_0x12af2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF2Cu;
        // 0x12af30: 0x27b60070  addiu       $s6, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af2c) {
            ctx->pc = 0x12AF44u;
            goto label_12af44;
        }
    }
    ctx->pc = 0x12AF34u;
    // 0x12af34: 0xa3b30070  sb          $s3, 0x70($sp)
    ctx->pc = 0x12af34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 19));
    // 0x12af38: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x12af38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12af3c: 0x1000fbae  b           . + 4 + (-0x452 << 2)
    ctx->pc = 0x12AF3Cu;
    {
        const bool branch_taken_0x12af3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF3Cu;
        // 0x12af40: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af3c) {
            ctx->pc = 0x129DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129df8;
        }
    }
    ctx->pc = 0x12AF44u;
label_12af44:
    // 0x12af44: 0x8faf0028  lw          $t7, 0x28($sp)
    ctx->pc = 0x12af44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12af48: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12AF48u;
    {
        const bool branch_taken_0x12af48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF48u;
        // 0x12af4c: 0x8fa401f4  lw          $a0, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af48) {
            ctx->pc = 0x12AF60u;
            goto label_12af60;
        }
    }
    ctx->pc = 0x12AF50u;
    // 0x12af50: 0xc04a634  jal         func_1298D0
    ctx->pc = 0x12AF50u;
    SET_GPR_U32(ctx, 31, 0x12AF58u);
    ctx->pc = 0x12AF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AF50u;
    // 0x12af54: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1298D0u, 0x12AF50u, 0x12AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AF58u;
label_12af58:
    // 0x12af58: 0x1440fbf7  bnez        $v0, . + 4 + (-0x409 << 2)
    ctx->pc = 0x12AF58u;
    {
        const bool branch_taken_0x12af58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF58u;
        // 0x12af5c: 0x8fad01f4  lw          $t5, 0x1F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af58) {
            ctx->pc = 0x129F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f38;
        }
    }
    ctx->pc = 0x12AF60u;
label_12af60:
    // 0x12af60: 0x1000fbf4  b           . + 4 + (-0x40C << 2)
    ctx->pc = 0x12AF60u;
    {
        const bool branch_taken_0x12af60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF60u;
        // 0x12af64: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af60) {
            ctx->pc = 0x129F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129f34;
        }
    }
    ctx->pc = 0x12AF68u;
label_12af68:
    // 0x12af68: 0x3c0f0066  lui         $t7, 0x66
    ctx->pc = 0x12af68u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)102 << 16));
    // 0x12af6c: 0x1000fefe  b           . + 4 + (-0x102 << 2)
    ctx->pc = 0x12AF6Cu;
    {
        const bool branch_taken_0x12af6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF6Cu;
        // 0x12af70: 0x25ef3ea0  addiu       $t7, $t7, 0x3EA0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af6c) {
            ctx->pc = 0x12AB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ab68;
        }
    }
    ctx->pc = 0x12AF74u;
    // 0x12af74: 0x0  nop
    ctx->pc = 0x12af74u;
    // NOP
label_12af78:
    // 0x12af78: 0x8faf01e0  lw          $t7, 0x1E0($sp)
    ctx->pc = 0x12af78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x12af7c: 0x15f1faf5  bne         $t7, $s1, . + 4 + (-0x50B << 2)
    ctx->pc = 0x12AF7Cu;
    {
        const bool branch_taken_0x12af7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 17));
        ctx->pc = 0x12AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF7Cu;
        // 0x12af80: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af7c) {
            ctx->pc = 0x129B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129b54;
        }
    }
    ctx->pc = 0x12AF84u;
    // 0x12af84: 0x1000fafb  b           . + 4 + (-0x505 << 2)
    ctx->pc = 0x12AF84u;
    {
        const bool branch_taken_0x12af84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AF84u;
        // 0x12af88: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12af84) {
            ctx->pc = 0x129B74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129b74;
        }
    }
    ctx->pc = 0x12AF8Cu;
}
