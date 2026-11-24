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

// Function: sub_001AAA40
// Address: 0x1aaa40 - 0x1abe4c
void sub_001AAA40_0x1aaa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAA40_0x1aaa40");
#endif

    switch (ctx->pc) {
        case 0x1aaa7cu: goto label_1aaa7c;
        case 0x1aaa88u: goto label_1aaa88;
        case 0x1aaa9cu: goto label_1aaa9c;
        case 0x1aaac0u: goto label_1aaac0;
        case 0x1aaaf0u: goto label_1aaaf0;
        case 0x1aab00u: goto label_1aab00;
        case 0x1aab14u: goto label_1aab14;
        case 0x1aab20u: goto label_1aab20;
        case 0x1aab44u: goto label_1aab44;
        case 0x1aab84u: goto label_1aab84;
        case 0x1aab98u: goto label_1aab98;
        case 0x1aabb8u: goto label_1aabb8;
        case 0x1aabc8u: goto label_1aabc8;
        case 0x1aabd8u: goto label_1aabd8;
        case 0x1aac08u: goto label_1aac08;
        case 0x1aac1cu: goto label_1aac1c;
        case 0x1aac40u: goto label_1aac40;
        case 0x1aac54u: goto label_1aac54;
        case 0x1aac6cu: goto label_1aac6c;
        case 0x1aac8cu: goto label_1aac8c;
        case 0x1aaca4u: goto label_1aaca4;
        case 0x1aacb4u: goto label_1aacb4;
        case 0x1aacc0u: goto label_1aacc0;
        case 0x1aace4u: goto label_1aace4;
        case 0x1aad24u: goto label_1aad24;
        case 0x1aad38u: goto label_1aad38;
        case 0x1aad58u: goto label_1aad58;
        case 0x1aad74u: goto label_1aad74;
        case 0x1aad84u: goto label_1aad84;
        case 0x1aad90u: goto label_1aad90;
        case 0x1aadc0u: goto label_1aadc0;
        case 0x1aadd4u: goto label_1aadd4;
        case 0x1aadf8u: goto label_1aadf8;
        case 0x1aae0cu: goto label_1aae0c;
        case 0x1aae24u: goto label_1aae24;
        case 0x1aae44u: goto label_1aae44;
        case 0x1aae54u: goto label_1aae54;
        case 0x1aae64u: goto label_1aae64;
        case 0x1aae70u: goto label_1aae70;
        case 0x1aae84u: goto label_1aae84;
        case 0x1aaea8u: goto label_1aaea8;
        case 0x1aaee8u: goto label_1aaee8;
        case 0x1aaefcu: goto label_1aaefc;
        case 0x1aaf34u: goto label_1aaf34;
        case 0x1aaf50u: goto label_1aaf50;
        case 0x1aaf60u: goto label_1aaf60;
        case 0x1aaf70u: goto label_1aaf70;
        case 0x1aaf80u: goto label_1aaf80;
        case 0x1aafb0u: goto label_1aafb0;
        case 0x1aafc4u: goto label_1aafc4;
        case 0x1aafe8u: goto label_1aafe8;
        case 0x1aaffcu: goto label_1aaffc;
        case 0x1ab014u: goto label_1ab014;
        case 0x1ab034u: goto label_1ab034;
        case 0x1ab040u: goto label_1ab040;
        case 0x1ab064u: goto label_1ab064;
        case 0x1ab0a4u: goto label_1ab0a4;
        case 0x1ab0b8u: goto label_1ab0b8;
        case 0x1ab0d8u: goto label_1ab0d8;
        case 0x1ab0e8u: goto label_1ab0e8;
        case 0x1ab134u: goto label_1ab134;
        case 0x1ab140u: goto label_1ab140;
        case 0x1ab170u: goto label_1ab170;
        case 0x1ab184u: goto label_1ab184;
        case 0x1ab1a8u: goto label_1ab1a8;
        case 0x1ab1bcu: goto label_1ab1bc;
        case 0x1ab1d4u: goto label_1ab1d4;
        case 0x1ab1f4u: goto label_1ab1f4;
        case 0x1ab210u: goto label_1ab210;
        case 0x1ab32cu: goto label_1ab32c;
        case 0x1ab348u: goto label_1ab348;
        case 0x1ab358u: goto label_1ab358;
        case 0x1ab380u: goto label_1ab380;
        case 0x1ab38cu: goto label_1ab38c;
        case 0x1ab3a0u: goto label_1ab3a0;
        case 0x1ab3c4u: goto label_1ab3c4;
        case 0x1ab404u: goto label_1ab404;
        case 0x1ab414u: goto label_1ab414;
        case 0x1ab424u: goto label_1ab424;
        case 0x1ab434u: goto label_1ab434;
        case 0x1ab454u: goto label_1ab454;
        case 0x1ab460u: goto label_1ab460;
        case 0x1ab490u: goto label_1ab490;
        case 0x1ab4a4u: goto label_1ab4a4;
        case 0x1ab4b8u: goto label_1ab4b8;
        case 0x1ab4ccu: goto label_1ab4cc;
        case 0x1ab4e4u: goto label_1ab4e4;
        case 0x1ab51cu: goto label_1ab51c;
        case 0x1ab524u: goto label_1ab524;
        case 0x1ab548u: goto label_1ab548;
        case 0x1ab564u: goto label_1ab564;
        case 0x1ab5a4u: goto label_1ab5a4;
        case 0x1ab5b4u: goto label_1ab5b4;
        case 0x1ab5ccu: goto label_1ab5cc;
        case 0x1ab5d8u: goto label_1ab5d8;
        case 0x1ab608u: goto label_1ab608;
        case 0x1ab61cu: goto label_1ab61c;
        case 0x1ab630u: goto label_1ab630;
        case 0x1ab644u: goto label_1ab644;
        case 0x1ab65cu: goto label_1ab65c;
        case 0x1ab698u: goto label_1ab698;
        case 0x1ab6a4u: goto label_1ab6a4;
        case 0x1ab6c8u: goto label_1ab6c8;
        case 0x1ab6e4u: goto label_1ab6e4;
        case 0x1ab724u: goto label_1ab724;
        case 0x1ab734u: goto label_1ab734;
        case 0x1ab754u: goto label_1ab754;
        case 0x1ab760u: goto label_1ab760;
        case 0x1ab790u: goto label_1ab790;
        case 0x1ab7a4u: goto label_1ab7a4;
        case 0x1ab7b8u: goto label_1ab7b8;
        case 0x1ab7ccu: goto label_1ab7cc;
        case 0x1ab7e4u: goto label_1ab7e4;
        case 0x1ab80cu: goto label_1ab80c;
        case 0x1ab828u: goto label_1ab828;
        case 0x1ab838u: goto label_1ab838;
        case 0x1ab848u: goto label_1ab848;
        case 0x1ab85cu: goto label_1ab85c;
        case 0x1ab868u: goto label_1ab868;
        case 0x1ab88cu: goto label_1ab88c;
        case 0x1ab8ccu: goto label_1ab8cc;
        case 0x1ab8e0u: goto label_1ab8e0;
        case 0x1ab900u: goto label_1ab900;
        case 0x1ab910u: goto label_1ab910;
        case 0x1ab920u: goto label_1ab920;
        case 0x1ab950u: goto label_1ab950;
        case 0x1ab964u: goto label_1ab964;
        case 0x1ab988u: goto label_1ab988;
        case 0x1ab99cu: goto label_1ab99c;
        case 0x1ab9b4u: goto label_1ab9b4;
        case 0x1ab9d4u: goto label_1ab9d4;
        case 0x1ab9dcu: goto label_1ab9dc;
        case 0x1aba08u: goto label_1aba08;
        case 0x1aba14u: goto label_1aba14;
        case 0x1aba38u: goto label_1aba38;
        case 0x1aba78u: goto label_1aba78;
        case 0x1aba88u: goto label_1aba88;
        case 0x1aba98u: goto label_1aba98;
        case 0x1abaa8u: goto label_1abaa8;
        case 0x1abab8u: goto label_1abab8;
        case 0x1abae8u: goto label_1abae8;
        case 0x1abafcu: goto label_1abafc;
        case 0x1abb10u: goto label_1abb10;
        case 0x1abb24u: goto label_1abb24;
        case 0x1abb3cu: goto label_1abb3c;
        case 0x1abb58u: goto label_1abb58;
        case 0x1abb68u: goto label_1abb68;
        case 0x1abb7cu: goto label_1abb7c;
        case 0x1abb9cu: goto label_1abb9c;
        case 0x1abbb0u: goto label_1abbb0;
        case 0x1abbbcu: goto label_1abbbc;
        case 0x1abbc4u: goto label_1abbc4;
        case 0x1abbd4u: goto label_1abbd4;
        case 0x1abbe8u: goto label_1abbe8;
        case 0x1abc08u: goto label_1abc08;
        case 0x1abc1cu: goto label_1abc1c;
        case 0x1abc28u: goto label_1abc28;
        case 0x1abc38u: goto label_1abc38;
        case 0x1abc4cu: goto label_1abc4c;
        case 0x1abc58u: goto label_1abc58;
        case 0x1abc7cu: goto label_1abc7c;
        case 0x1abcbcu: goto label_1abcbc;
        case 0x1abcc4u: goto label_1abcc4;
        case 0x1abcf0u: goto label_1abcf0;
        case 0x1abd10u: goto label_1abd10;
        case 0x1abd28u: goto label_1abd28;
        case 0x1abd38u: goto label_1abd38;
        case 0x1abd58u: goto label_1abd58;
        case 0x1abda0u: goto label_1abda0;
        case 0x1abdb4u: goto label_1abdb4;
        case 0x1abdd8u: goto label_1abdd8;
        case 0x1abdecu: goto label_1abdec;
        case 0x1abe04u: goto label_1abe04;
        default: break;
    }

    ctx->pc = 0x1aaa40u;

    // 0x1aaa40: 0x27bdfb70  addiu       $sp, $sp, -0x490
    ctx->pc = 0x1aaa40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966128));
    // 0x1aaa44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1aaa44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aaa48: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1aaa48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1aaa4c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1aaa4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1aaa50: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1aaa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1aaa54: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1aaa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1aaa58: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1aaa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1aaa5c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1aaa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1aaa60: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1aaa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1aaa64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1aaa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1aaa68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aaa68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1aaa6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aaa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1aaa74: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1AAA74u;
    SET_GPR_U32(ctx, 31, 0x1AAA7Cu);
    ctx->pc = 0x1AAA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA74u;
    // 0x1aaa78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1AAA74u, 0x1AAA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA7Cu;
label_1aaa7c:
    // 0x1aaa7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aaa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa80: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AAA80u;
    SET_GPR_U32(ctx, 31, 0x1AAA88u);
    ctx->pc = 0x1AAA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA80u;
    // 0x1aaa84: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AAA80u, 0x1AAA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA88u;
label_1aaa88:
    // 0x1aaa88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aaa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aaa8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aaa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaa90: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x1aaa90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1aaa94: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AAA94u;
    SET_GPR_U32(ctx, 31, 0x1AAA9Cu);
    ctx->pc = 0x1AAA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA94u;
    // 0x1aaa98: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AAA94u, 0x1AAA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA9Cu;
label_1aaa9c:
    // 0x1aaa9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aaa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aaaa0: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x1aaaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1aaaa4: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1aaaa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1aaaa8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAAA8u;
    {
        const bool branch_taken_0x1aaaa8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1AAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAAA8u;
        // 0x1aaaac: 0x282c3  sra         $s0, $v0, 11 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaaa8) {
            ctx->pc = 0x1AAAB8u;
            goto label_1aaab8;
        }
    }
    ctx->pc = 0x1AAAB0u;
    // 0x1aaab0: 0x244207ff  addiu       $v0, $v0, 0x7FF
    ctx->pc = 0x1aaab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1aaab4: 0x282c3  sra         $s0, $v0, 11
    ctx->pc = 0x1aaab4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 11));
label_1aaab8:
    // 0x1aaab8: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1AAAB8u;
    SET_GPR_U32(ctx, 31, 0x1AAAC0u);
    ctx->pc = 0x1AAABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAAB8u;
    // 0x1aaabc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1AAAB8u, 0x1AAAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAAC0u;
label_1aaac0:
    // 0x1aaac0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1aaac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aaac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaac8: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1aaac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1aaacc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1aaaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aaad0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1aaad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1aaad4: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1aaad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1aaad8: 0x24080070  addiu       $t0, $zero, 0x70
    ctx->pc = 0x1aaad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1aaadc: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x1aaadcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1aaae0: 0x240a00e0  addiu       $t2, $zero, 0xE0
    ctx->pc = 0x1aaae0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1aaae4: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1aaae4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aaae8: 0xc06afc4  jal         func_1ABF10
    ctx->pc = 0x1AAAE8u;
    SET_GPR_U32(ctx, 31, 0x1AAAF0u);
    ctx->pc = 0x1AAAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAAE8u;
    // 0x1aaaec: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABF10u, 0x1AAAE8u, 0x1AAAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAAF0u;
label_1aaaf0:
    // 0x1aaaf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aaaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaaf4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1aaaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1aaaf8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAAF8u;
    SET_GPR_U32(ctx, 31, 0x1AAB00u);
    ctx->pc = 0x1AAAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAAF8u;
    // 0x1aaafc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAAF8u, 0x1AAB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB00u;
label_1aab00:
    // 0x1aab00: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1aab00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1aab04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aab04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aab08: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1aab08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1aab0c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAB0Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB14u);
    ctx->pc = 0x1AAB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB0Cu;
    // 0x1aab10: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAB0Cu, 0x1AAB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB14u;
label_1aab14:
    // 0x1aab14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aab14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aab18: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AAB18u;
    SET_GPR_U32(ctx, 31, 0x1AAB20u);
    ctx->pc = 0x1AAB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB18u;
    // 0x1aab1c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AAB18u, 0x1AAB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB20u;
label_1aab20:
    // 0x1aab20: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aab20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aab24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aab24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aab28: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aab28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aab2c: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1aab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1aab30: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1aab30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1aab34: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1aab34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1aab38: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x1aab38u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aab3c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AAB3Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB44u);
    ctx->pc = 0x1AAB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB3Cu;
    // 0x1aab40: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AAB3Cu, 0x1AAB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB44u;
label_1aab44:
    // 0x1aab44: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aab44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aab48: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1aab48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aab4c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aab4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aab50: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1aab50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aab54: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1aab54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1aab58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aab58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aab5c: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x1aab5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x1aab60: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1aab60u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1aab64: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1aab64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1aab68: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1aab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1aab6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aab6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aab70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aab70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aab74: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1aab74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1aab78: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1aab78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1aab7c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAB7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB84u);
    ctx->pc = 0x1AAB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB7Cu;
    // 0x1aab80: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAB7Cu, 0x1AAB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB84u;
label_1aab84:
    // 0x1aab84: 0x3c020204  lui         $v0, 0x204
    ctx->pc = 0x1aab84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)516 << 16));
    // 0x1aab88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aab88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aab8c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1aab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1aab90: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAB90u;
    SET_GPR_U32(ctx, 31, 0x1AAB98u);
    ctx->pc = 0x1AAB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB90u;
    // 0x1aab94: 0x34460090  ori         $a2, $v0, 0x90 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAB90u, 0x1AAB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB98u;
label_1aab98:
    // 0x1aab98: 0x240306fc  addiu       $v1, $zero, 0x6FC
    ctx->pc = 0x1aab98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1788));
    // 0x1aab9c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1aab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1aaba0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aaba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aaba4: 0x3442c005  ori         $v0, $v0, 0xC005
    ctx->pc = 0x1aaba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49157);
    // 0x1aaba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aaba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabac: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1aabacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1aabb0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AABB0u;
    SET_GPR_U32(ctx, 31, 0x1AABB8u);
    ctx->pc = 0x1AABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AABB0u;
    // 0x1aabb4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AABB0u, 0x1AABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AABB8u;
label_1aabb8:
    // 0x1aabb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aabb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aabbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabc0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AABC0u;
    SET_GPR_U32(ctx, 31, 0x1AABC8u);
    ctx->pc = 0x1AABC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AABC0u;
    // 0x1aabc4: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AABC0u, 0x1AABC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AABC8u;
label_1aabc8:
    // 0x1aabc8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1aabc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabcc: 0x2414001f  addiu       $s4, $zero, 0x1F
    ctx->pc = 0x1aabccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1aabd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1aabd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabd4: 0x0  nop
    ctx->pc = 0x1aabd4u;
    // NOP
label_1aabd8:
    // 0x1aabd8: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1aabd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1aabdc: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1aabdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1aabe0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aabe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aabe4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1aabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1aabe8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1aabe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1aabec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1aabecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1aabf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aabf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aabf4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1aabf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1aabf8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1aabf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1aabfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aabfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac00: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAC00u;
    SET_GPR_U32(ctx, 31, 0x1AAC08u);
    ctx->pc = 0x1AAC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC00u;
    // 0x1aac04: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAC00u, 0x1AAC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC08u;
label_1aac08:
    // 0x1aac08: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1aac08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1aac0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aac0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aac10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aac14: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAC14u;
    SET_GPR_U32(ctx, 31, 0x1AAC1Cu);
    ctx->pc = 0x1AAC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC14u;
    // 0x1aac18: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAC14u, 0x1AAC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC1Cu;
label_1aac1c:
    // 0x1aac1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aac1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aac20: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1aac20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1aac24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aac24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aac28: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1aac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1aac2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aac2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aac30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aac30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac34: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1aac34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aac38: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAC38u;
    SET_GPR_U32(ctx, 31, 0x1AAC40u);
    ctx->pc = 0x1AAC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC38u;
    // 0x1aac3c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAC38u, 0x1AAC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC40u;
label_1aac40:
    // 0x1aac40: 0x3c021c09  lui         $v0, 0x1C09
    ctx->pc = 0x1aac40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7177 << 16));
    // 0x1aac44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aac44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aac48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aac4c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAC4Cu;
    SET_GPR_U32(ctx, 31, 0x1AAC54u);
    ctx->pc = 0x1AAC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC4Cu;
    // 0x1aac50: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAC4Cu, 0x1AAC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC54u;
label_1aac54:
    // 0x1aac54: 0x3c029500  lui         $v0, 0x9500
    ctx->pc = 0x1aac54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38144 << 16));
    // 0x1aac58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aac58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac5c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1aac5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1aac60: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1aac60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1aac64: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAC64u;
    SET_GPR_U32(ctx, 31, 0x1AAC6Cu);
    ctx->pc = 0x1AAC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC64u;
    // 0x1aac68: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAC64u, 0x1AAC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC6Cu;
label_1aac6c:
    // 0x1aac6c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1aac6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1aac70: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x1aac70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1aac74: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x1aac74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1aac78: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1AAC78u;
    {
        const bool branch_taken_0x1aac78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC78u;
        // 0x1aac7c: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac78) {
            ctx->pc = 0x1AABD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aabd8;
        }
    }
    ctx->pc = 0x1AAC80u;
    // 0x1aac80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aac80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac84: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AAC84u;
    SET_GPR_U32(ctx, 31, 0x1AAC8Cu);
    ctx->pc = 0x1AAC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC84u;
    // 0x1aac88: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AAC84u, 0x1AAC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAC8Cu;
label_1aac8c:
    // 0x1aac8c: 0x8e280030  lw          $t0, 0x30($s1)
    ctx->pc = 0x1aac8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1aac90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac94: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1aac94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1aac98: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x1aac98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1aac9c: 0xc0706f0  jal         func_1C1BC0
    ctx->pc = 0x1AAC9Cu;
    SET_GPR_U32(ctx, 31, 0x1AACA4u);
    ctx->pc = 0x1AACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAC9Cu;
    // 0x1aaca0: 0x26270020  addiu       $a3, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BC0u, 0x1AAC9Cu, 0x1AACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AACA4u;
label_1aaca4:
    // 0x1aaca4: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1aaca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1aaca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aaca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aacac: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1AACACu;
    SET_GPR_U32(ctx, 31, 0x1AACB4u);
    ctx->pc = 0x1AACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AACACu;
    // 0x1aacb0: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1AACACu, 0x1AACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AACB4u;
label_1aacb4:
    // 0x1aacb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aacb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aacb8: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AACB8u;
    SET_GPR_U32(ctx, 31, 0x1AACC0u);
    ctx->pc = 0x1AACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AACB8u;
    // 0x1aacbc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AACB8u, 0x1AACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AACC0u;
label_1aacc0:
    // 0x1aacc0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aacc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aacc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aacc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aacc8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aacc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aaccc: 0x3c0201b1  lui         $v0, 0x1B1
    ctx->pc = 0x1aacccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)433 << 16));
    // 0x1aacd0: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1aacd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1aacd4: 0x34421200  ori         $v0, $v0, 0x1200
    ctx->pc = 0x1aacd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4608);
    // 0x1aacd8: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x1aacd8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aacdc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AACDCu;
    SET_GPR_U32(ctx, 31, 0x1AACE4u);
    ctx->pc = 0x1AACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AACDCu;
    // 0x1aace0: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AACDCu, 0x1AACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AACE4u;
label_1aace4:
    // 0x1aace4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aace4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aace8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1aace8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aacec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aacecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aacf0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1aacf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aacf4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1aacf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1aacf8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aacf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aacfc: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x1aacfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x1aad00: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1aad00u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1aad04: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1aad04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1aad08: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1aad08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1aad0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aad0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aad14: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1aad14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1aad18: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1aad18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1aad1c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAD1Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD24u);
    ctx->pc = 0x1AAD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD1Cu;
    // 0x1aad20: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAD1Cu, 0x1AAD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD24u;
label_1aad24:
    // 0x1aad24: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1aad24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1aad28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aad28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad2c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1aad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1aad30: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAD30u;
    SET_GPR_U32(ctx, 31, 0x1AAD38u);
    ctx->pc = 0x1AAD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD30u;
    // 0x1aad34: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAD30u, 0x1AAD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD38u;
label_1aad38:
    // 0x1aad38: 0x240301bc  addiu       $v1, $zero, 0x1BC
    ctx->pc = 0x1aad38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x1aad3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1aad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1aad40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aad40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aad44: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1aad44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1aad48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aad48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad4c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1aad4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1aad50: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAD50u;
    SET_GPR_U32(ctx, 31, 0x1AAD58u);
    ctx->pc = 0x1AAD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD50u;
    // 0x1aad54: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAD50u, 0x1AAD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD58u;
label_1aad58:
    // 0x1aad58: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1aad58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aad5c: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1aad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1aad60: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aad60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aad64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aad64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad68: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1aad68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aad6c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAD6Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD74u);
    ctx->pc = 0x1AAD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD6Cu;
    // 0x1aad70: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAD6Cu, 0x1AAD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD74u;
label_1aad74:
    // 0x1aad74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aad74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aad78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad7c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAD7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD84u);
    ctx->pc = 0x1AAD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD7Cu;
    // 0x1aad80: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAD7Cu, 0x1AAD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD84u;
label_1aad84:
    // 0x1aad84: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1aad84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad88: 0x2414003f  addiu       $s4, $zero, 0x3F
    ctx->pc = 0x1aad88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1aad8c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1aad8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aad90:
    // 0x1aad90: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1aad90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1aad94: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1aad94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1aad98: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aad98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aad9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1aad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1aada0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1aada0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1aada4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1aada4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1aada8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aada8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aadac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1aadacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1aadb0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1aadb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1aadb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aadb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aadb8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AADB8u;
    SET_GPR_U32(ctx, 31, 0x1AADC0u);
    ctx->pc = 0x1AADBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADB8u;
    // 0x1aadbc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AADB8u, 0x1AADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADC0u;
label_1aadc0:
    // 0x1aadc0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1aadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1aadc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aadc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aadc8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aadc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aadcc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AADCCu;
    SET_GPR_U32(ctx, 31, 0x1AADD4u);
    ctx->pc = 0x1AADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADCCu;
    // 0x1aadd0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AADCCu, 0x1AADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADD4u;
label_1aadd4:
    // 0x1aadd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aadd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aadd8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1aadd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1aaddc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aaddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aade0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1aade0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1aade4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aade4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aade8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aade8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aadec: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1aadecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aadf0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AADF0u;
    SET_GPR_U32(ctx, 31, 0x1AADF8u);
    ctx->pc = 0x1AADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADF0u;
    // 0x1aadf4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AADF0u, 0x1AADF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADF8u;
label_1aadf8:
    // 0x1aadf8: 0x3c020709  lui         $v0, 0x709
    ctx->pc = 0x1aadf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1801 << 16));
    // 0x1aadfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aadfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aae00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aae04: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAE04u;
    SET_GPR_U32(ctx, 31, 0x1AAE0Cu);
    ctx->pc = 0x1AAE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE04u;
    // 0x1aae08: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAE04u, 0x1AAE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE0Cu;
label_1aae0c:
    // 0x1aae0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1aae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1aae10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aae10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae14: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1aae14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1aae18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1aae18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1aae1c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAE1Cu;
    SET_GPR_U32(ctx, 31, 0x1AAE24u);
    ctx->pc = 0x1AAE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE1Cu;
    // 0x1aae20: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAE1Cu, 0x1AAE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE24u;
label_1aae24:
    // 0x1aae24: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1aae24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1aae28: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x1aae28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1aae2c: 0x2ea20004  sltiu       $v0, $s5, 0x4
    ctx->pc = 0x1aae2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1aae30: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1AAE30u;
    {
        const bool branch_taken_0x1aae30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAE30u;
        // 0x1aae34: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aae30) {
            ctx->pc = 0x1AAD90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aad90;
        }
    }
    ctx->pc = 0x1AAE38u;
    // 0x1aae38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aae38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae3c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AAE3Cu;
    SET_GPR_U32(ctx, 31, 0x1AAE44u);
    ctx->pc = 0x1AAE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE3Cu;
    // 0x1aae40: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AAE3Cu, 0x1AAE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE44u;
label_1aae44:
    // 0x1aae44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aae44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae48: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1aae48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1aae4c: 0xc070614  jal         func_1C1850
    ctx->pc = 0x1AAE4Cu;
    SET_GPR_U32(ctx, 31, 0x1AAE54u);
    ctx->pc = 0x1AAE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE4Cu;
    // 0x1aae50: 0x26260034  addiu       $a2, $s1, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1850u, 0x1AAE4Cu, 0x1AAE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE54u;
label_1aae54:
    // 0x1aae54: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1aae54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1aae58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aae58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae5c: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1AAE5Cu;
    SET_GPR_U32(ctx, 31, 0x1AAE64u);
    ctx->pc = 0x1AAE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE5Cu;
    // 0x1aae60: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1AAE5Cu, 0x1AAE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE64u;
label_1aae64:
    // 0x1aae64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aae64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae68: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AAE68u;
    SET_GPR_U32(ctx, 31, 0x1AAE70u);
    ctx->pc = 0x1AAE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE68u;
    // 0x1aae6c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AAE68u, 0x1AAE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE70u;
label_1aae70:
    // 0x1aae70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aae70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aae74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aae74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae78: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aae78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aae7c: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1AAE7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAE84u);
    ctx->pc = 0x1AAE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAE7Cu;
    // 0x1aae80: 0x29eb8  dsll        $s3, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1AAE7Cu, 0x1AAE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAE84u;
label_1aae84:
    // 0x1aae84: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1aae84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1aae88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aae88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aae8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aae8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aae90: 0x3c0201b2  lui         $v0, 0x1B2
    ctx->pc = 0x1aae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)434 << 16));
    // 0x1aae94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aae94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aae98: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1aae98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1aae9c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1aae9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aaea0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AAEA0u;
    SET_GPR_U32(ctx, 31, 0x1AAEA8u);
    ctx->pc = 0x1AAEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAEA0u;
    // 0x1aaea4: 0x2629825  or          $s3, $s3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AAEA0u, 0x1AAEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAEA8u;
label_1aaea8:
    // 0x1aaea8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aaea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aaeac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1aaeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aaeb0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aaeb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aaeb4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1aaeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aaeb8: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1aaeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1aaebc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aaebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aaec0: 0x732025  or          $a0, $v1, $s3
    ctx->pc = 0x1aaec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1aaec4: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1aaec4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1aaec8: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1aaec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1aaecc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1aaeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1aaed0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aaed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaed4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aaed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aaed8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1aaed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1aaedc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1aaedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1aaee0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAEE0u;
    SET_GPR_U32(ctx, 31, 0x1AAEE8u);
    ctx->pc = 0x1AAEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAEE0u;
    // 0x1aaee4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAEE0u, 0x1AAEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAEE8u;
label_1aaee8:
    // 0x1aaee8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1aaee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1aaeec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aaeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaef0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1aaef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1aaef4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAEF4u;
    SET_GPR_U32(ctx, 31, 0x1AAEFCu);
    ctx->pc = 0x1AAEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAEF4u;
    // 0x1aaef8: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAEF4u, 0x1AAEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAEFCu;
label_1aaefc:
    // 0x1aaefc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1aaefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1aaf00: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1aaf00u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1aaf04: 0x3443c00a  ori         $v1, $v0, 0xC00A
    ctx->pc = 0x1aaf04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1aaf08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aaf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf0c: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1aaf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1aaf10: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1aaf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1aaf14: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x1aaf14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x1aaf18: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1aaf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1aaf1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aaf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aaf20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aaf20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aaf24: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aaf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aaf28: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x1aaf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x1aaf2c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAF2Cu;
    SET_GPR_U32(ctx, 31, 0x1AAF34u);
    ctx->pc = 0x1AAF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF2Cu;
    // 0x1aaf30: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAF2Cu, 0x1AAF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF34u;
label_1aaf34:
    // 0x1aaf34: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1aaf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aaf38: 0x24020089  addiu       $v0, $zero, 0x89
    ctx->pc = 0x1aaf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x1aaf3c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aaf3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aaf40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aaf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf44: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1aaf44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aaf48: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAF48u;
    SET_GPR_U32(ctx, 31, 0x1AAF50u);
    ctx->pc = 0x1AAF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF48u;
    // 0x1aaf4c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAF48u, 0x1AAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF50u;
label_1aaf50:
    // 0x1aaf50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aaf50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aaf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf58: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAF58u;
    SET_GPR_U32(ctx, 31, 0x1AAF60u);
    ctx->pc = 0x1AAF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF58u;
    // 0x1aaf5c: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAF58u, 0x1AAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF60u;
label_1aaf60:
    // 0x1aaf60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aaf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf64: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1aaf64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1aaf68: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAF68u;
    SET_GPR_U32(ctx, 31, 0x1AAF70u);
    ctx->pc = 0x1AAF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF68u;
    // 0x1aaf6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAF68u, 0x1AAF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF70u;
label_1aaf70:
    // 0x1aaf70: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1aaf70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf74: 0x2414003f  addiu       $s4, $zero, 0x3F
    ctx->pc = 0x1aaf74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1aaf78: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1aaf78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf7c: 0x0  nop
    ctx->pc = 0x1aaf7cu;
    // NOP
label_1aaf80:
    // 0x1aaf80: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1aaf80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1aaf84: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1aaf84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1aaf88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aaf88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aaf8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1aaf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1aaf90: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1aaf90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1aaf94: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1aaf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1aaf98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aaf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aaf9c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1aaf9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1aafa0: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1aafa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1aafa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aafa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafa8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAFA8u;
    SET_GPR_U32(ctx, 31, 0x1AAFB0u);
    ctx->pc = 0x1AAFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAFA8u;
    // 0x1aafac: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAFA8u, 0x1AAFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAFB0u;
label_1aafb0:
    // 0x1aafb0: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1aafb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1aafb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aafb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafb8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aafb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aafbc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAFBCu;
    SET_GPR_U32(ctx, 31, 0x1AAFC4u);
    ctx->pc = 0x1AAFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAFBCu;
    // 0x1aafc0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAFBCu, 0x1AAFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAFC4u;
label_1aafc4:
    // 0x1aafc4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aafc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aafc8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1aafc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1aafcc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aafccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aafd0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1aafd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1aafd4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aafd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aafd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aafd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aafdc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1aafdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aafe0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAFE0u;
    SET_GPR_U32(ctx, 31, 0x1AAFE8u);
    ctx->pc = 0x1AAFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAFE0u;
    // 0x1aafe4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAFE0u, 0x1AAFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAFE8u;
label_1aafe8:
    // 0x1aafe8: 0x3c020e09  lui         $v0, 0xE09
    ctx->pc = 0x1aafe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3593 << 16));
    // 0x1aafec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aafecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaff0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aaff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aaff4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AAFF4u;
    SET_GPR_U32(ctx, 31, 0x1AAFFCu);
    ctx->pc = 0x1AAFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAFF4u;
    // 0x1aaff8: 0x34462009  ori         $a2, $v0, 0x2009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8201);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AAFF4u, 0x1AAFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAFFCu;
label_1aaffc:
    // 0x1aaffc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1aaffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ab000: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab004: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ab004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ab008: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ab008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ab00c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB00Cu;
    SET_GPR_U32(ctx, 31, 0x1AB014u);
    ctx->pc = 0x1AB010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB00Cu;
    // 0x1ab010: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB00Cu, 0x1AB014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB014u;
label_1ab014:
    // 0x1ab014: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ab014u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1ab018: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x1ab018u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1ab01c: 0x2ea20004  sltiu       $v0, $s5, 0x4
    ctx->pc = 0x1ab01cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ab020: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1AB020u;
    {
        const bool branch_taken_0x1ab020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB020u;
        // 0x1ab024: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab020) {
            ctx->pc = 0x1AAF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aaf80;
        }
    }
    ctx->pc = 0x1AB028u;
    // 0x1ab028: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab02c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AB02Cu;
    SET_GPR_U32(ctx, 31, 0x1AB034u);
    ctx->pc = 0x1AB030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB02Cu;
    // 0x1ab030: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AB02Cu, 0x1AB034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB034u;
label_1ab034:
    // 0x1ab034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab038: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AB038u;
    SET_GPR_U32(ctx, 31, 0x1AB040u);
    ctx->pc = 0x1AB03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB038u;
    // 0x1ab03c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AB038u, 0x1AB040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB040u;
label_1ab040:
    // 0x1ab040: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ab040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab048: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab04c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ab04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ab050: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1ab050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1ab054: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1ab054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1ab058: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x1ab058u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ab05c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AB05Cu;
    SET_GPR_U32(ctx, 31, 0x1AB064u);
    ctx->pc = 0x1AB060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB05Cu;
    // 0x1ab060: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AB05Cu, 0x1AB064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB064u;
label_1ab064:
    // 0x1ab064: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ab064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab068: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ab068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ab06c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab070: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ab070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ab074: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1ab074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1ab078: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab07c: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x1ab07cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x1ab080: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1ab080u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1ab084: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1ab084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ab088: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ab088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ab08c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab090: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab094: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1ab094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1ab098: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ab098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ab09c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB09Cu;
    SET_GPR_U32(ctx, 31, 0x1AB0A4u);
    ctx->pc = 0x1AB0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB09Cu;
    // 0x1ab0a0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB09Cu, 0x1AB0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0A4u;
label_1ab0a4:
    // 0x1ab0a4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1ab0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1ab0a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0ac: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ab0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ab0b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB0B0u;
    SET_GPR_U32(ctx, 31, 0x1AB0B8u);
    ctx->pc = 0x1AB0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0B0u;
    // 0x1ab0b4: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB0B0u, 0x1AB0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0B8u;
label_1ab0b8:
    // 0x1ab0b8: 0x240301bc  addiu       $v1, $zero, 0x1BC
    ctx->pc = 0x1ab0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x1ab0bc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ab0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ab0c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab0c4: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1ab0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1ab0c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0cc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ab0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ab0d0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB0D0u;
    SET_GPR_U32(ctx, 31, 0x1AB0D8u);
    ctx->pc = 0x1AB0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0D0u;
    // 0x1ab0d4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB0D0u, 0x1AB0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0D8u;
label_1ab0d8:
    // 0x1ab0d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0e0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB0E0u;
    SET_GPR_U32(ctx, 31, 0x1AB0E8u);
    ctx->pc = 0x1AB0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0E0u;
    // 0x1ab0e4: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB0E0u, 0x1AB0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0E8u;
label_1ab0e8:
    // 0x1ab0e8: 0x8e280048  lw          $t0, 0x48($s1)
    ctx->pc = 0x1ab0e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x1ab0ec: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1ab0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ab0f0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ab0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab0f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0f8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ab0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ab0fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab100: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ab100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ab104: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ab104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ab108: 0x81a02  srl         $v1, $t0, 8
    ctx->pc = 0x1ab108u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x1ab10c: 0x310600ff  andi        $a2, $t0, 0xFF
    ctx->pc = 0x1ab10cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x1ab110: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x1ab110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ab114: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x1ab114u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1ab118: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x1ab118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x1ab11c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ab11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ab120: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1ab120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1ab124: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ab124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ab128: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ab128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ab12c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB12Cu;
    SET_GPR_U32(ctx, 31, 0x1AB134u);
    ctx->pc = 0x1AB130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB12Cu;
    // 0x1ab130: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB12Cu, 0x1AB134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB134u;
label_1ab134:
    // 0x1ab134: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ab134u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab138: 0x2414003f  addiu       $s4, $zero, 0x3F
    ctx->pc = 0x1ab138u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1ab13c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ab13cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab140:
    // 0x1ab140: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1ab140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1ab144: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1ab144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1ab148: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab14c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ab14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ab150: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ab150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ab154: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ab154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ab158: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab15c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ab15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ab160: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ab160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ab164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab168: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB168u;
    SET_GPR_U32(ctx, 31, 0x1AB170u);
    ctx->pc = 0x1AB16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB168u;
    // 0x1ab16c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB168u, 0x1AB170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB170u;
label_1ab170:
    // 0x1ab170: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ab170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ab174: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab178: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab17c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB17Cu;
    SET_GPR_U32(ctx, 31, 0x1AB184u);
    ctx->pc = 0x1AB180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB17Cu;
    // 0x1ab180: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB17Cu, 0x1AB184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB184u;
label_1ab184:
    // 0x1ab184: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ab184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab188: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ab188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ab18c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab190: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1ab190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1ab194: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ab194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ab198: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab19c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ab19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ab1a0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB1A0u;
    SET_GPR_U32(ctx, 31, 0x1AB1A8u);
    ctx->pc = 0x1AB1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1A0u;
    // 0x1ab1a4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB1A0u, 0x1AB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1A8u;
label_1ab1a8:
    // 0x1ab1a8: 0x3c020709  lui         $v0, 0x709
    ctx->pc = 0x1ab1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1801 << 16));
    // 0x1ab1ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab1b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab1b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB1B4u;
    SET_GPR_U32(ctx, 31, 0x1AB1BCu);
    ctx->pc = 0x1AB1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1B4u;
    // 0x1ab1b8: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB1B4u, 0x1AB1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1BCu;
label_1ab1bc:
    // 0x1ab1bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ab1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ab1c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab1c4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ab1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ab1c8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ab1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ab1cc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB1CCu;
    SET_GPR_U32(ctx, 31, 0x1AB1D4u);
    ctx->pc = 0x1AB1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1CCu;
    // 0x1ab1d0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB1CCu, 0x1AB1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1D4u;
label_1ab1d4:
    // 0x1ab1d4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ab1d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1ab1d8: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x1ab1d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1ab1dc: 0x2ea20004  sltiu       $v0, $s5, 0x4
    ctx->pc = 0x1ab1dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ab1e0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1AB1E0u;
    {
        const bool branch_taken_0x1ab1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1E0u;
        // 0x1ab1e4: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab1e0) {
            ctx->pc = 0x1AB140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab140;
        }
    }
    ctx->pc = 0x1AB1E8u;
    // 0x1ab1e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab1ec: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AB1ECu;
    SET_GPR_U32(ctx, 31, 0x1AB1F4u);
    ctx->pc = 0x1AB1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1ECu;
    // 0x1ab1f0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AB1ECu, 0x1AB1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1F4u;
label_1ab1f4:
    // 0x1ab1f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab1f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab1fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ab1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab200: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ab200u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab204: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1ab204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ab208: 0x3c090008  lui         $t1, 0x8
    ctx->pc = 0x1ab208u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x1ab20c: 0x3c080800  lui         $t0, 0x800
    ctx->pc = 0x1ab20cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)2048 << 16));
label_1ab210:
    // 0x1ab210: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x1ab210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1ab214: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x1ab214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1ab218: 0x24cc0001  addiu       $t4, $a2, 0x1
    ctx->pc = 0x1ab218u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ab21c: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x1ab21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1ab220: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1ab220u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1ab224: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1ab224u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1ab228: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1ab228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1ab22c: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1ab22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1ab230: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1ab230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1ab234: 0x24ea0100  addiu       $t2, $a3, 0x100
    ctx->pc = 0x1ab234u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x1ab238: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1ab238u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1ab23c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1ab23cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1ab240: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1ab240u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1ab244: 0x24cc0002  addiu       $t4, $a2, 0x2
    ctx->pc = 0x1ab244u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1ab248: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x1ab248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x1ab24c: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1ab24cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1ab250: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1ab250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1ab254: 0x24ea0200  addiu       $t2, $a3, 0x200
    ctx->pc = 0x1ab254u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x1ab258: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1ab258u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1ab25c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1ab25cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1ab260: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1ab260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1ab264: 0x24cc0003  addiu       $t4, $a2, 0x3
    ctx->pc = 0x1ab264u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1ab268: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x1ab268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x1ab26c: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1ab26cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1ab270: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1ab270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1ab274: 0x24ea0300  addiu       $t2, $a3, 0x300
    ctx->pc = 0x1ab274u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 768));
    // 0x1ab278: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1ab278u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1ab27c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1ab27cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1ab280: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1ab280u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1ab284: 0x24cc0004  addiu       $t4, $a2, 0x4
    ctx->pc = 0x1ab284u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1ab288: 0xac47000c  sw          $a3, 0xC($v0)
    ctx->pc = 0x1ab288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 7));
    // 0x1ab28c: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1ab28cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1ab290: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1ab290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1ab294: 0x24ea0400  addiu       $t2, $a3, 0x400
    ctx->pc = 0x1ab294u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x1ab298: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1ab298u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1ab29c: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1ab29cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1ab2a0: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1ab2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1ab2a4: 0x24cc0005  addiu       $t4, $a2, 0x5
    ctx->pc = 0x1ab2a4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
    // 0x1ab2a8: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x1ab2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 7));
    // 0x1ab2ac: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1ab2acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1ab2b0: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1ab2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1ab2b4: 0x24ea0500  addiu       $t2, $a3, 0x500
    ctx->pc = 0x1ab2b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1280));
    // 0x1ab2b8: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1ab2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1ab2bc: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1ab2bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1ab2c0: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1ab2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1ab2c4: 0x24cc0006  addiu       $t4, $a2, 0x6
    ctx->pc = 0x1ab2c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x1ab2c8: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x1ab2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x1ab2cc: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1ab2ccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1ab2d0: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1ab2d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1ab2d4: 0x24ea0600  addiu       $t2, $a3, 0x600
    ctx->pc = 0x1ab2d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1536));
    // 0x1ab2d8: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1ab2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1ab2dc: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1ab2dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1ab2e0: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1ab2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1ab2e4: 0x24cc0007  addiu       $t4, $a2, 0x7
    ctx->pc = 0x1ab2e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x1ab2e8: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x1ab2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x1ab2ec: 0xc5c00  sll         $t3, $t4, 16
    ctx->pc = 0x1ab2ecu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x1ab2f0: 0x1853821  addu        $a3, $t4, $a1
    ctx->pc = 0x1ab2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1ab2f4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1ab2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1ab2f8: 0x24ea0700  addiu       $t2, $a3, 0x700
    ctx->pc = 0x1ab2f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1792));
    // 0x1ab2fc: 0x24a50800  addiu       $a1, $a1, 0x800
    ctx->pc = 0x1ab2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
    // 0x1ab300: 0xc3e00  sll         $a3, $t4, 24
    ctx->pc = 0x1ab300u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 24));
    // 0x1ab304: 0x16a5021  addu        $t2, $t3, $t2
    ctx->pc = 0x1ab304u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1ab308: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x1ab308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x1ab30c: 0xac47001c  sw          $a3, 0x1C($v0)
    ctx->pc = 0x1ab30cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
    // 0x1ab310: 0x2cc70100  sltiu       $a3, $a2, 0x100
    ctx->pc = 0x1ab310u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1ab314: 0x14e0ffbe  bnez        $a3, . + 4 + (-0x42 << 2)
    ctx->pc = 0x1AB314u;
    {
        const bool branch_taken_0x1ab314 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB314u;
        // 0x1ab318: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab314) {
            ctx->pc = 0x1AB210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab210;
        }
    }
    ctx->pc = 0x1AB31Cu;
    // 0x1ab31c: 0x8e4578d0  lw          $a1, 0x78D0($s2)
    ctx->pc = 0x1ab31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1ab320: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab324: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1AB324u;
    SET_GPR_U32(ctx, 31, 0x1AB32Cu);
    ctx->pc = 0x1AB328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB324u;
    // 0x1ab328: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1AB324u, 0x1AB32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB32Cu;
label_1ab32c:
    // 0x1ab32c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab330: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1ab330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1ab334: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab338: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab33c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1ab33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1ab340: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB340u;
    SET_GPR_U32(ctx, 31, 0x1AB348u);
    ctx->pc = 0x1AB344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB340u;
    // 0x1ab344: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB340u, 0x1AB348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB348u;
label_1ab348:
    // 0x1ab348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab34c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1ab34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ab350: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AB350u;
    SET_GPR_U32(ctx, 31, 0x1AB358u);
    ctx->pc = 0x1AB354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB350u;
    // 0x1ab354: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AB350u, 0x1AB358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB358u;
label_1ab358:
    // 0x1ab358: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1ab358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1ab35c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1ab35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1ab360: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x1ab360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x1ab364: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1ab364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1ab368: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab36c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab370: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ab370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ab374: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ab374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ab378: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB378u;
    SET_GPR_U32(ctx, 31, 0x1AB380u);
    ctx->pc = 0x1AB37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB378u;
    // 0x1ab37c: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB378u, 0x1AB380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB380u;
label_1ab380:
    // 0x1ab380: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab384: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AB384u;
    SET_GPR_U32(ctx, 31, 0x1AB38Cu);
    ctx->pc = 0x1AB388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB384u;
    // 0x1ab388: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AB384u, 0x1AB38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB38Cu;
label_1ab38c:
    // 0x1ab38c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab390: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab394: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ab394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ab398: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1AB398u;
    SET_GPR_U32(ctx, 31, 0x1AB3A0u);
    ctx->pc = 0x1AB39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB398u;
    // 0x1ab39c: 0x29eb8  dsll        $s3, $v0, 26 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << 26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1AB398u, 0x1AB3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB3A0u;
label_1ab3a0:
    // 0x1ab3a0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x1ab3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1ab3a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab3a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab3ac: 0x3c0201b1  lui         $v0, 0x1B1
    ctx->pc = 0x1ab3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)433 << 16));
    // 0x1ab3b0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab3b4: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x1ab3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1ab3b8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ab3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ab3bc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AB3BCu;
    SET_GPR_U32(ctx, 31, 0x1AB3C4u);
    ctx->pc = 0x1AB3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB3BCu;
    // 0x1ab3c0: 0x2629825  or          $s3, $s3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AB3BCu, 0x1AB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB3C4u;
label_1ab3c4:
    // 0x1ab3c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ab3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab3c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ab3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ab3cc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab3d0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ab3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ab3d4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1ab3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1ab3d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab3dc: 0x732025  or          $a0, $v1, $s3
    ctx->pc = 0x1ab3dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1ab3e0: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1ab3e0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1ab3e4: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1ab3e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ab3e8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ab3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ab3ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab3f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab3f4: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1ab3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1ab3f8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ab3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ab3fc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB3FCu;
    SET_GPR_U32(ctx, 31, 0x1AB404u);
    ctx->pc = 0x1AB400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB3FCu;
    // 0x1ab400: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB3FCu, 0x1AB404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB404u;
label_1ab404:
    // 0x1ab404: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab408: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ab408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ab40c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB40Cu;
    SET_GPR_U32(ctx, 31, 0x1AB414u);
    ctx->pc = 0x1AB410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB40Cu;
    // 0x1ab410: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB40Cu, 0x1AB414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB414u;
label_1ab414:
    // 0x1ab414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab41c: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AB41Cu;
    SET_GPR_U32(ctx, 31, 0x1AB424u);
    ctx->pc = 0x1AB420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB41Cu;
    // 0x1ab420: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AB41Cu, 0x1AB424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB424u;
label_1ab424:
    // 0x1ab424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab428: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ab428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ab42c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB42Cu;
    SET_GPR_U32(ctx, 31, 0x1AB434u);
    ctx->pc = 0x1AB430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB42Cu;
    // 0x1ab430: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB42Cu, 0x1AB434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB434u;
label_1ab434:
    // 0x1ab434: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1ab434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1ab438: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab43c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1ab43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ab440: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1ab440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1ab444: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ab444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ab448: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab44c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB44Cu;
    SET_GPR_U32(ctx, 31, 0x1AB454u);
    ctx->pc = 0x1AB450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB44Cu;
    // 0x1ab450: 0x34460068  ori         $a2, $v0, 0x68 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB44Cu, 0x1AB454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB454u;
label_1ab454:
    // 0x1ab454: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ab454u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab458: 0x2414001f  addiu       $s4, $zero, 0x1F
    ctx->pc = 0x1ab458u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ab45c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ab45cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab460:
    // 0x1ab460: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1ab460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1ab464: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1ab464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1ab468: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab46c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ab46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ab470: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ab470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ab474: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ab474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ab478: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab47c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ab47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ab480: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ab480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ab484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab488: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB488u;
    SET_GPR_U32(ctx, 31, 0x1AB490u);
    ctx->pc = 0x1AB48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB488u;
    // 0x1ab48c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB488u, 0x1AB490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB490u;
label_1ab490:
    // 0x1ab490: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ab490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ab494: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab498: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab49c: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AB49Cu;
    SET_GPR_U32(ctx, 31, 0x1AB4A4u);
    ctx->pc = 0x1AB4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB49Cu;
    // 0x1ab4a0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AB49Cu, 0x1AB4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB4A4u;
label_1ab4a4:
    // 0x1ab4a4: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ab4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ab4a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4ac: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ab4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ab4b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB4B0u;
    SET_GPR_U32(ctx, 31, 0x1AB4B8u);
    ctx->pc = 0x1AB4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB4B0u;
    // 0x1ab4b4: 0x34467000  ori         $a2, $v0, 0x7000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB4B0u, 0x1AB4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB4B8u;
label_1ab4b8:
    // 0x1ab4b8: 0x3c020708  lui         $v0, 0x708
    ctx->pc = 0x1ab4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1800 << 16));
    // 0x1ab4bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab4c4: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AB4C4u;
    SET_GPR_U32(ctx, 31, 0x1AB4CCu);
    ctx->pc = 0x1AB4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB4C4u;
    // 0x1ab4c8: 0x34461008  ori         $a2, $v0, 0x1008 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AB4C4u, 0x1AB4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB4CCu;
label_1ab4cc:
    // 0x1ab4cc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ab4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ab4d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ab4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ab4d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ab4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ab4dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB4DCu;
    SET_GPR_U32(ctx, 31, 0x1AB4E4u);
    ctx->pc = 0x1AB4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB4DCu;
    // 0x1ab4e0: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB4DCu, 0x1AB4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB4E4u;
label_1ab4e4:
    // 0x1ab4e4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ab4e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1ab4e8: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x1ab4e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1ab4ec: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x1ab4ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ab4f0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1AB4F0u;
    {
        const bool branch_taken_0x1ab4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4F0u;
        // 0x1ab4f4: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab4f0) {
            ctx->pc = 0x1AB460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab460;
        }
    }
    ctx->pc = 0x1AB4F8u;
    // 0x1ab4f8: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1ab4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1ab4fc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1ab4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1ab500: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab504: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1ab504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1ab508: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ab508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ab50c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab510: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ab510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ab514: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB514u;
    SET_GPR_U32(ctx, 31, 0x1AB51Cu);
    ctx->pc = 0x1AB518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB514u;
    // 0x1ab518: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB514u, 0x1AB51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB51Cu;
label_1ab51c:
    // 0x1ab51c: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1AB51Cu;
    SET_GPR_U32(ctx, 31, 0x1AB524u);
    ctx->pc = 0x1AB520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB51Cu;
    // 0x1ab520: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1AB51Cu, 0x1AB524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB524u;
label_1ab524:
    // 0x1ab524: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x1ab524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ab528: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab52c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1ab52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1ab530: 0x3c0201b1  lui         $v0, 0x1B1
    ctx->pc = 0x1ab530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)433 << 16));
    // 0x1ab534: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab538: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1ab538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ab53c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab540: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AB540u;
    SET_GPR_U32(ctx, 31, 0x1AB548u);
    ctx->pc = 0x1AB544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB540u;
    // 0x1ab544: 0x629825  or          $s3, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AB540u, 0x1AB548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB548u;
label_1ab548:
    // 0x1ab548: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab54c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab550: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ab550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ab554: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x1ab554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1ab558: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1ab558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1ab55c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AB55Cu;
    SET_GPR_U32(ctx, 31, 0x1AB564u);
    ctx->pc = 0x1AB560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB55Cu;
    // 0x1ab560: 0x539825  or          $s3, $v0, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AB55Cu, 0x1AB564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB564u;
label_1ab564:
    // 0x1ab564: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ab564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab568: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ab568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ab56c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab570: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ab570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ab574: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1ab574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1ab578: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab57c: 0x732025  or          $a0, $v1, $s3
    ctx->pc = 0x1ab57cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1ab580: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1ab580u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1ab584: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1ab584u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ab588: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ab588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ab58c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab590: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab594: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1ab594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1ab598: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ab598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ab59c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB59Cu;
    SET_GPR_U32(ctx, 31, 0x1AB5A4u);
    ctx->pc = 0x1AB5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB59Cu;
    // 0x1ab5a0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB59Cu, 0x1AB5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB5A4u;
label_1ab5a4:
    // 0x1ab5a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab5a8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ab5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ab5ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB5ACu;
    SET_GPR_U32(ctx, 31, 0x1AB5B4u);
    ctx->pc = 0x1AB5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB5ACu;
    // 0x1ab5b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB5ACu, 0x1AB5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB5B4u;
label_1ab5b4:
    // 0x1ab5b4: 0x92220044  lbu         $v0, 0x44($s1)
    ctx->pc = 0x1ab5b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1ab5b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab5bc: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1ab5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ab5c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab5c4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB5C4u;
    SET_GPR_U32(ctx, 31, 0x1AB5CCu);
    ctx->pc = 0x1AB5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB5C4u;
    // 0x1ab5c8: 0x34460068  ori         $a2, $v0, 0x68 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB5C4u, 0x1AB5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB5CCu;
label_1ab5cc:
    // 0x1ab5cc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ab5ccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab5d0: 0x2414001f  addiu       $s4, $zero, 0x1F
    ctx->pc = 0x1ab5d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ab5d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ab5d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab5d8:
    // 0x1ab5d8: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1ab5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x1ab5dc: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1ab5dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1ab5e0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab5e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ab5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ab5e8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ab5e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ab5ec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ab5ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ab5f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab5f4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ab5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ab5f8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ab5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ab5fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab600: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB600u;
    SET_GPR_U32(ctx, 31, 0x1AB608u);
    ctx->pc = 0x1AB604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB600u;
    // 0x1ab604: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB600u, 0x1AB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB608u;
label_1ab608:
    // 0x1ab608: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ab608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ab60c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab610: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab614: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AB614u;
    SET_GPR_U32(ctx, 31, 0x1AB61Cu);
    ctx->pc = 0x1AB618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB614u;
    // 0x1ab618: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AB614u, 0x1AB61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB61Cu;
label_1ab61c:
    // 0x1ab61c: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ab61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ab620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab624: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ab624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ab628: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB628u;
    SET_GPR_U32(ctx, 31, 0x1AB630u);
    ctx->pc = 0x1AB62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB628u;
    // 0x1ab62c: 0x34467000  ori         $a2, $v0, 0x7000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB628u, 0x1AB630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB630u;
label_1ab630:
    // 0x1ab630: 0x3c020708  lui         $v0, 0x708
    ctx->pc = 0x1ab630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1800 << 16));
    // 0x1ab634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab638: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab63c: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AB63Cu;
    SET_GPR_U32(ctx, 31, 0x1AB644u);
    ctx->pc = 0x1AB640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB63Cu;
    // 0x1ab640: 0x34461008  ori         $a2, $v0, 0x1008 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AB63Cu, 0x1AB644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB644u;
label_1ab644:
    // 0x1ab644: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ab644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ab648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab64c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ab64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ab650: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ab650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ab654: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB654u;
    SET_GPR_U32(ctx, 31, 0x1AB65Cu);
    ctx->pc = 0x1AB658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB654u;
    // 0x1ab658: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB654u, 0x1AB65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB65Cu;
label_1ab65c:
    // 0x1ab65c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ab65cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1ab660: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x1ab660u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x1ab664: 0x2ea20008  sltiu       $v0, $s5, 0x8
    ctx->pc = 0x1ab664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ab668: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1AB668u;
    {
        const bool branch_taken_0x1ab668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB668u;
        // 0x1ab66c: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab668) {
            ctx->pc = 0x1AB5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab5d8;
        }
    }
    ctx->pc = 0x1AB670u;
    // 0x1ab670: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1ab670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1ab674: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1ab674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1ab678: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1ab678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1ab67c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1ab67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1ab680: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab684: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab688: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ab688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ab68c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ab68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ab690: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB690u;
    SET_GPR_U32(ctx, 31, 0x1AB698u);
    ctx->pc = 0x1AB694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB690u;
    // 0x1ab694: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB690u, 0x1AB698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB698u;
label_1ab698:
    // 0x1ab698: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab69c: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1AB69Cu;
    SET_GPR_U32(ctx, 31, 0x1AB6A4u);
    ctx->pc = 0x1AB6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB69Cu;
    // 0x1ab6a0: 0x10a040  sll         $s4, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1AB69Cu, 0x1AB6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB6A4u;
label_1ab6a4:
    // 0x1ab6a4: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1ab6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1ab6a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab6ac: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1ab6acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1ab6b0: 0x3c0201b1  lui         $v0, 0x1B1
    ctx->pc = 0x1ab6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)433 << 16));
    // 0x1ab6b4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab6b8: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x1ab6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ab6bc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab6c0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AB6C0u;
    SET_GPR_U32(ctx, 31, 0x1AB6C8u);
    ctx->pc = 0x1AB6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB6C0u;
    // 0x1ab6c4: 0x629825  or          $s3, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AB6C0u, 0x1AB6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB6C8u;
label_1ab6c8:
    // 0x1ab6c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab6cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab6d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1ab6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1ab6d4: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x1ab6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1ab6d8: 0x216b8  dsll        $v0, $v0, 26
    ctx->pc = 0x1ab6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 26);
    // 0x1ab6dc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AB6DCu;
    SET_GPR_U32(ctx, 31, 0x1AB6E4u);
    ctx->pc = 0x1AB6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB6DCu;
    // 0x1ab6e0: 0x539825  or          $s3, $v0, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AB6DCu, 0x1AB6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB6E4u;
label_1ab6e4:
    // 0x1ab6e4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ab6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab6e8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ab6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ab6ec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab6f0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ab6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ab6f4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1ab6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1ab6f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab6fc: 0x732025  or          $a0, $v1, $s3
    ctx->pc = 0x1ab6fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x1ab700: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1ab700u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1ab704: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1ab704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ab708: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ab708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ab70c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab710: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab714: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1ab714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1ab718: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ab718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ab71c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB71Cu;
    SET_GPR_U32(ctx, 31, 0x1AB724u);
    ctx->pc = 0x1AB720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB71Cu;
    // 0x1ab720: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB71Cu, 0x1AB724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB724u;
label_1ab724:
    // 0x1ab724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab728: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ab728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ab72c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB72Cu;
    SET_GPR_U32(ctx, 31, 0x1AB734u);
    ctx->pc = 0x1AB730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB72Cu;
    // 0x1ab730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB72Cu, 0x1AB734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB734u;
label_1ab734:
    // 0x1ab734: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x1ab734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1ab738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab73c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1ab73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1ab740: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1ab740u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1ab744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ab744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ab748: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab74c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB74Cu;
    SET_GPR_U32(ctx, 31, 0x1AB754u);
    ctx->pc = 0x1AB750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB74Cu;
    // 0x1ab750: 0x34460068  ori         $a2, $v0, 0x68 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB74Cu, 0x1AB754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB754u;
label_1ab754:
    // 0x1ab754: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ab754u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab758: 0x2415001f  addiu       $s5, $zero, 0x1F
    ctx->pc = 0x1ab758u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ab75c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ab75cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab760:
    // 0x1ab760: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x1ab760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1ab764: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1ab764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1ab768: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab76c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ab76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1ab770: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ab770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ab774: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ab774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ab778: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab77c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ab77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ab780: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ab780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ab784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab788: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB788u;
    SET_GPR_U32(ctx, 31, 0x1AB790u);
    ctx->pc = 0x1AB78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB788u;
    // 0x1ab78c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB788u, 0x1AB790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB790u;
label_1ab790:
    // 0x1ab790: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ab790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ab794: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab798: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab79c: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AB79Cu;
    SET_GPR_U32(ctx, 31, 0x1AB7A4u);
    ctx->pc = 0x1AB7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB79Cu;
    // 0x1ab7a0: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AB79Cu, 0x1AB7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB7A4u;
label_1ab7a4:
    // 0x1ab7a4: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ab7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ab7a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7ac: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ab7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ab7b0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB7B0u;
    SET_GPR_U32(ctx, 31, 0x1AB7B8u);
    ctx->pc = 0x1AB7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB7B0u;
    // 0x1ab7b4: 0x34467000  ori         $a2, $v0, 0x7000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB7B0u, 0x1AB7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB7B8u;
label_1ab7b8:
    // 0x1ab7b8: 0x3c020708  lui         $v0, 0x708
    ctx->pc = 0x1ab7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1800 << 16));
    // 0x1ab7bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7c0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab7c4: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AB7C4u;
    SET_GPR_U32(ctx, 31, 0x1AB7CCu);
    ctx->pc = 0x1AB7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB7C4u;
    // 0x1ab7c8: 0x34461008  ori         $a2, $v0, 0x1008 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AB7C4u, 0x1AB7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB7CCu;
label_1ab7cc:
    // 0x1ab7cc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ab7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ab7d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7d4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ab7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ab7d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ab7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ab7dc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB7DCu;
    SET_GPR_U32(ctx, 31, 0x1AB7E4u);
    ctx->pc = 0x1AB7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB7DCu;
    // 0x1ab7e0: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB7DCu, 0x1AB7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB7E4u;
label_1ab7e4:
    // 0x1ab7e4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1ab7e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1ab7e8: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1ab7e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1ab7ec: 0x2ec20008  sltiu       $v0, $s6, 0x8
    ctx->pc = 0x1ab7ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ab7f0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1AB7F0u;
    {
        const bool branch_taken_0x1ab7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB7F0u;
        // 0x1ab7f4: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab7f0) {
            ctx->pc = 0x1AB760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab760;
        }
    }
    ctx->pc = 0x1AB7F8u;
    // 0x1ab7f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab7fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab800: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ab800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab804: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1AB804u;
    SET_GPR_U32(ctx, 31, 0x1AB80Cu);
    ctx->pc = 0x1AB808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB804u;
    // 0x1ab808: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1AB804u, 0x1AB80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB80Cu;
label_1ab80c:
    // 0x1ab80c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab810: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1ab810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1ab814: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab81c: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1ab81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1ab820: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB820u;
    SET_GPR_U32(ctx, 31, 0x1AB828u);
    ctx->pc = 0x1AB824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB820u;
    // 0x1ab824: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB820u, 0x1AB828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB828u;
label_1ab828:
    // 0x1ab828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab82c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1ab82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ab830: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB830u;
    SET_GPR_U32(ctx, 31, 0x1AB838u);
    ctx->pc = 0x1AB834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB830u;
    // 0x1ab834: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB830u, 0x1AB838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB838u;
label_1ab838:
    // 0x1ab838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab83c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ab83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ab840: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB840u;
    SET_GPR_U32(ctx, 31, 0x1AB848u);
    ctx->pc = 0x1AB844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB840u;
    // 0x1ab844: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB840u, 0x1AB848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB848u;
label_1ab848:
    // 0x1ab848: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ab848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ab84c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab850: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1ab850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1ab854: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB854u;
    SET_GPR_U32(ctx, 31, 0x1AB85Cu);
    ctx->pc = 0x1AB858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB854u;
    // 0x1ab858: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB854u, 0x1AB85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB85Cu;
label_1ab85c:
    // 0x1ab85c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab860: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AB860u;
    SET_GPR_U32(ctx, 31, 0x1AB868u);
    ctx->pc = 0x1AB864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB860u;
    // 0x1ab864: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AB860u, 0x1AB868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB868u;
label_1ab868:
    // 0x1ab868: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ab868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab86c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab86cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab870: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab874: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1ab874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1ab878: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1ab878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1ab87c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1ab87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1ab880: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x1ab880u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ab884: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AB884u;
    SET_GPR_U32(ctx, 31, 0x1AB88Cu);
    ctx->pc = 0x1AB888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB884u;
    // 0x1ab888: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AB884u, 0x1AB88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB88Cu;
label_1ab88c:
    // 0x1ab88c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ab88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab890: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ab890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ab894: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab898: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ab898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ab89c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1ab89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1ab8a0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab8a4: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x1ab8a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x1ab8a8: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1ab8a8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1ab8ac: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1ab8acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ab8b0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ab8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ab8b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab8bc: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1ab8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1ab8c0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ab8c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ab8c4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB8C4u;
    SET_GPR_U32(ctx, 31, 0x1AB8CCu);
    ctx->pc = 0x1AB8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB8C4u;
    // 0x1ab8c8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB8C4u, 0x1AB8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB8CCu;
label_1ab8cc:
    // 0x1ab8cc: 0x3c020204  lui         $v0, 0x204
    ctx->pc = 0x1ab8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)516 << 16));
    // 0x1ab8d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8d4: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ab8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ab8d8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB8D8u;
    SET_GPR_U32(ctx, 31, 0x1AB8E0u);
    ctx->pc = 0x1AB8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB8D8u;
    // 0x1ab8dc: 0x34460090  ori         $a2, $v0, 0x90 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB8D8u, 0x1AB8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB8E0u;
label_1ab8e0:
    // 0x1ab8e0: 0x240306fc  addiu       $v1, $zero, 0x6FC
    ctx->pc = 0x1ab8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1788));
    // 0x1ab8e4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ab8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ab8e8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab8ec: 0x3442c005  ori         $v0, $v0, 0xC005
    ctx->pc = 0x1ab8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49157);
    // 0x1ab8f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab8f4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ab8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ab8f8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB8F8u;
    SET_GPR_U32(ctx, 31, 0x1AB900u);
    ctx->pc = 0x1AB8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB8F8u;
    // 0x1ab8fc: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB8F8u, 0x1AB900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB900u;
label_1ab900:
    // 0x1ab900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab904: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab908: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB908u;
    SET_GPR_U32(ctx, 31, 0x1AB910u);
    ctx->pc = 0x1AB90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB908u;
    // 0x1ab90c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB908u, 0x1AB910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB910u;
label_1ab910:
    // 0x1ab910: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ab910u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab914: 0x2415001f  addiu       $s5, $zero, 0x1F
    ctx->pc = 0x1ab914u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1ab918: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ab918u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab91c: 0x0  nop
    ctx->pc = 0x1ab91cu;
    // NOP
label_1ab920:
    // 0x1ab920: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x1ab920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1ab924: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1ab924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1ab928: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ab928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ab92c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1ab92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1ab930: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1ab930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1ab934: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1ab934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1ab938: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ab938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab93c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ab93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ab940: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ab940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ab944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab948: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB948u;
    SET_GPR_U32(ctx, 31, 0x1AB950u);
    ctx->pc = 0x1AB94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB948u;
    // 0x1ab94c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB948u, 0x1AB950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB950u;
label_1ab950:
    // 0x1ab950: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1ab950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1ab954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab958: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab95c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB95Cu;
    SET_GPR_U32(ctx, 31, 0x1AB964u);
    ctx->pc = 0x1AB960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB95Cu;
    // 0x1ab960: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB95Cu, 0x1AB964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB964u;
label_1ab964:
    // 0x1ab964: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ab964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab968: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1ab968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1ab96c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab96cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab970: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1ab970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1ab974: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ab974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ab978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab97c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ab97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ab980: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB980u;
    SET_GPR_U32(ctx, 31, 0x1AB988u);
    ctx->pc = 0x1AB984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB980u;
    // 0x1ab984: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB980u, 0x1AB988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB988u;
label_1ab988:
    // 0x1ab988: 0x3c021c09  lui         $v0, 0x1C09
    ctx->pc = 0x1ab988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7177 << 16));
    // 0x1ab98c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab990: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ab994: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB994u;
    SET_GPR_U32(ctx, 31, 0x1AB99Cu);
    ctx->pc = 0x1AB998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB994u;
    // 0x1ab998: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB994u, 0x1AB99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB99Cu;
label_1ab99c:
    // 0x1ab99c: 0x3c029500  lui         $v0, 0x9500
    ctx->pc = 0x1ab99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38144 << 16));
    // 0x1ab9a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9a4: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x1ab9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x1ab9a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ab9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ab9ac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AB9ACu;
    SET_GPR_U32(ctx, 31, 0x1AB9B4u);
    ctx->pc = 0x1AB9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB9ACu;
    // 0x1ab9b0: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AB9ACu, 0x1AB9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB9B4u;
label_1ab9b4:
    // 0x1ab9b4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1ab9b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1ab9b8: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1ab9b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1ab9bc: 0x2ec20008  sltiu       $v0, $s6, 0x8
    ctx->pc = 0x1ab9bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ab9c0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1AB9C0u;
    {
        const bool branch_taken_0x1ab9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB9C0u;
        // 0x1ab9c4: 0x26730020  addiu       $s3, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab9c0) {
            ctx->pc = 0x1AB920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ab920;
        }
    }
    ctx->pc = 0x1AB9C8u;
    // 0x1ab9c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9cc: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AB9CCu;
    SET_GPR_U32(ctx, 31, 0x1AB9D4u);
    ctx->pc = 0x1AB9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB9CCu;
    // 0x1ab9d0: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AB9CCu, 0x1AB9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB9D4u;
label_1ab9d4:
    // 0x1ab9d4: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1AB9D4u;
    SET_GPR_U32(ctx, 31, 0x1AB9DCu);
    ctx->pc = 0x1AB9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB9D4u;
    // 0x1ab9d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1AB9D4u, 0x1AB9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB9DCu;
label_1ab9dc:
    // 0x1ab9dc: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1ab9dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ab9e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ab9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab9e4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1ab9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1ab9e8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1ab9e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1ab9ec: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1ab9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ab9f0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ab9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ab9f4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1ab9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1ab9f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ab9f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ab9fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ab9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aba00: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABA00u;
    SET_GPR_U32(ctx, 31, 0x1ABA08u);
    ctx->pc = 0x1ABA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABA00u;
    // 0x1aba04: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABA00u, 0x1ABA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABA08u;
label_1aba08:
    // 0x1aba08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aba08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba0c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ABA0Cu;
    SET_GPR_U32(ctx, 31, 0x1ABA14u);
    ctx->pc = 0x1ABA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABA0Cu;
    // 0x1aba10: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ABA0Cu, 0x1ABA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABA14u;
label_1aba14:
    // 0x1aba14: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aba14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aba18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aba1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aba20: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1aba20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1aba24: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1aba24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1aba28: 0x34421200  ori         $v0, $v0, 0x1200
    ctx->pc = 0x1aba28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4608);
    // 0x1aba2c: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x1aba2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aba30: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ABA30u;
    SET_GPR_U32(ctx, 31, 0x1ABA38u);
    ctx->pc = 0x1ABA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABA30u;
    // 0x1aba34: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ABA30u, 0x1ABA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABA38u;
label_1aba38:
    // 0x1aba38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aba38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aba3c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1aba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aba40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1aba40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1aba44: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1aba44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aba48: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1aba48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1aba4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aba4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aba50: 0x2632025  or          $a0, $s3, $v1
    ctx->pc = 0x1aba50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x1aba54: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1aba54u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1aba58: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1aba58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1aba5c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1aba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1aba60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aba60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba64: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aba64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aba68: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1aba68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1aba6c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1aba6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1aba70: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABA70u;
    SET_GPR_U32(ctx, 31, 0x1ABA78u);
    ctx->pc = 0x1ABA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABA70u;
    // 0x1aba74: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABA70u, 0x1ABA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABA78u;
label_1aba78:
    // 0x1aba78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aba78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba7c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1aba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1aba80: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABA80u;
    SET_GPR_U32(ctx, 31, 0x1ABA88u);
    ctx->pc = 0x1ABA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABA80u;
    // 0x1aba84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABA80u, 0x1ABA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABA88u;
label_1aba88:
    // 0x1aba88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aba88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aba8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba90: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABA90u;
    SET_GPR_U32(ctx, 31, 0x1ABA98u);
    ctx->pc = 0x1ABA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABA90u;
    // 0x1aba94: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABA90u, 0x1ABA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABA98u;
label_1aba98:
    // 0x1aba98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aba98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba9c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1aba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1abaa0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABAA0u;
    SET_GPR_U32(ctx, 31, 0x1ABAA8u);
    ctx->pc = 0x1ABAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABAA0u;
    // 0x1abaa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABAA0u, 0x1ABAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABAA8u;
label_1abaa8:
    // 0x1abaa8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1abaa8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abaac: 0x2415003f  addiu       $s5, $zero, 0x3F
    ctx->pc = 0x1abaacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1abab0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1abab0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abab4: 0x0  nop
    ctx->pc = 0x1abab4u;
    // NOP
label_1abab8:
    // 0x1abab8: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x1abab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x1ababc: 0x13203c  dsll32      $a0, $s3, 0
    ctx->pc = 0x1ababcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1abac0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abac4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1abac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1abac8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1abac8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1abacc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1abaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1abad0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1abad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abad4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abad8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1abad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1abadc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abae0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABAE0u;
    SET_GPR_U32(ctx, 31, 0x1ABAE8u);
    ctx->pc = 0x1ABAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABAE0u;
    // 0x1abae4: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABAE0u, 0x1ABAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABAE8u;
label_1abae8:
    // 0x1abae8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1abae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1abaec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abaf0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1abaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1abaf4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABAF4u;
    SET_GPR_U32(ctx, 31, 0x1ABAFCu);
    ctx->pc = 0x1ABAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABAF4u;
    // 0x1abaf8: 0x34460008  ori         $a2, $v0, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABAF4u, 0x1ABAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABAFCu;
label_1abafc:
    // 0x1abafc: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1abafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1abb00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb04: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1abb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1abb08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABB08u;
    SET_GPR_U32(ctx, 31, 0x1ABB10u);
    ctx->pc = 0x1ABB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB08u;
    // 0x1abb0c: 0x34467000  ori         $a2, $v0, 0x7000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABB08u, 0x1ABB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB10u;
label_1abb10:
    // 0x1abb10: 0x3c020709  lui         $v0, 0x709
    ctx->pc = 0x1abb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1801 << 16));
    // 0x1abb14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1abb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1abb1c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABB1Cu;
    SET_GPR_U32(ctx, 31, 0x1ABB24u);
    ctx->pc = 0x1ABB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB1Cu;
    // 0x1abb20: 0x34461009  ori         $a2, $v0, 0x1009 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABB1Cu, 0x1ABB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB24u;
label_1abb24:
    // 0x1abb24: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1abb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1abb28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1abb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1abb30: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1abb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1abb34: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABB34u;
    SET_GPR_U32(ctx, 31, 0x1ABB3Cu);
    ctx->pc = 0x1ABB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB34u;
    // 0x1abb38: 0x34468000  ori         $a2, $v0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABB34u, 0x1ABB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB3Cu;
label_1abb3c:
    // 0x1abb3c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1abb3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1abb40: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x1abb40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1abb44: 0x2ec20004  sltiu       $v0, $s6, 0x4
    ctx->pc = 0x1abb44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1abb48: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1ABB48u;
    {
        const bool branch_taken_0x1abb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABB48u;
        // 0x1abb4c: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abb48) {
            ctx->pc = 0x1ABAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abab8;
        }
    }
    ctx->pc = 0x1ABB50u;
    // 0x1abb50: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1ABB50u;
    SET_GPR_U32(ctx, 31, 0x1ABB58u);
    ctx->pc = 0x1ABB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB50u;
    // 0x1abb54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1ABB50u, 0x1ABB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB58u;
label_1abb58:
    // 0x1abb58: 0x2029821  addu        $s3, $s0, $v0
    ctx->pc = 0x1abb58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1abb5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb60: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ABB60u;
    SET_GPR_U32(ctx, 31, 0x1ABB68u);
    ctx->pc = 0x1ABB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB60u;
    // 0x1abb64: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ABB60u, 0x1ABB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB68u;
label_1abb68:
    // 0x1abb68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1abb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abb6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb70: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x1abb70u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1abb74: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ABB74u;
    SET_GPR_U32(ctx, 31, 0x1ABB7Cu);
    ctx->pc = 0x1ABB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB74u;
    // 0x1abb78: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ABB74u, 0x1ABB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB7Cu;
label_1abb7c:
    // 0x1abb7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1abb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abb80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1abb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb84: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1abb84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abb8c: 0x434004  sllv        $t0, $v1, $v0
    ctx->pc = 0x1abb8cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1abb90: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1abb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1abb94: 0xc06f9ec  jal         func_1BE7B0
    ctx->pc = 0x1ABB94u;
    SET_GPR_U32(ctx, 31, 0x1ABB9Cu);
    ctx->pc = 0x1ABB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABB94u;
    // 0x1abb98: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE7B0u, 0x1ABB94u, 0x1ABB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABB9Cu;
label_1abb9c:
    // 0x1abb9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abba4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1abba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abba8: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1ABBA8u;
    SET_GPR_U32(ctx, 31, 0x1ABBB0u);
    ctx->pc = 0x1ABBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABBA8u;
    // 0x1abbac: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1ABBA8u, 0x1ABBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABBB0u;
label_1abbb0:
    // 0x1abbb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbb4: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1ABBB4u;
    SET_GPR_U32(ctx, 31, 0x1ABBBCu);
    ctx->pc = 0x1ABBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABBB4u;
    // 0x1abbb8: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1ABBB4u, 0x1ABBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABBBCu;
label_1abbbc:
    // 0x1abbbc: 0xc0705e8  jal         func_1C17A0
    ctx->pc = 0x1ABBBCu;
    SET_GPR_U32(ctx, 31, 0x1ABBC4u);
    ctx->pc = 0x1ABBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABBBCu;
    // 0x1abbc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C17A0u, 0x1ABBBCu, 0x1ABBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABBC4u;
label_1abbc4:
    // 0x1abbc4: 0x2829821  addu        $s3, $s4, $v0
    ctx->pc = 0x1abbc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1abbc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbcc: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ABBCCu;
    SET_GPR_U32(ctx, 31, 0x1ABBD4u);
    ctx->pc = 0x1ABBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABBCCu;
    // 0x1abbd0: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ABBCCu, 0x1ABBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABBD4u;
label_1abbd4:
    // 0x1abbd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1abbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abbd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbdc: 0x438004  sllv        $s0, $v1, $v0
    ctx->pc = 0x1abbdcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1abbe0: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ABBE0u;
    SET_GPR_U32(ctx, 31, 0x1ABBE8u);
    ctx->pc = 0x1ABBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABBE0u;
    // 0x1abbe4: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ABBE0u, 0x1ABBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABBE8u;
label_1abbe8:
    // 0x1abbe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1abbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abbec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1abbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbf0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1abbf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abbf8: 0x434004  sllv        $t0, $v1, $v0
    ctx->pc = 0x1abbf8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1abbfc: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1abbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1abc00: 0xc06f9ec  jal         func_1BE7B0
    ctx->pc = 0x1ABC00u;
    SET_GPR_U32(ctx, 31, 0x1ABC08u);
    ctx->pc = 0x1ABC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC00u;
    // 0x1abc04: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE7B0u, 0x1ABC00u, 0x1ABC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC08u;
label_1abc08:
    // 0x1abc08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abc0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1abc10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abc14: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1ABC14u;
    SET_GPR_U32(ctx, 31, 0x1ABC1Cu);
    ctx->pc = 0x1ABC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC14u;
    // 0x1abc18: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1ABC14u, 0x1ABC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC1Cu;
label_1abc1c:
    // 0x1abc1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc20: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1ABC20u;
    SET_GPR_U32(ctx, 31, 0x1ABC28u);
    ctx->pc = 0x1ABC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC20u;
    // 0x1abc24: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1ABC20u, 0x1ABC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC28u;
label_1abc28:
    // 0x1abc28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc2c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1abc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1abc30: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABC30u;
    SET_GPR_U32(ctx, 31, 0x1ABC38u);
    ctx->pc = 0x1ABC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC30u;
    // 0x1abc34: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABC30u, 0x1ABC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC38u;
label_1abc38:
    // 0x1abc38: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1abc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1abc3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc40: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1abc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1abc44: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABC44u;
    SET_GPR_U32(ctx, 31, 0x1ABC4Cu);
    ctx->pc = 0x1ABC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC44u;
    // 0x1abc48: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABC44u, 0x1ABC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC4Cu;
label_1abc4c:
    // 0x1abc4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc50: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ABC50u;
    SET_GPR_U32(ctx, 31, 0x1ABC58u);
    ctx->pc = 0x1ABC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC50u;
    // 0x1abc54: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ABC50u, 0x1ABC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC58u;
label_1abc58:
    // 0x1abc58: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1abc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abc5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc60: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abc64: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1abc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1abc68: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1abc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1abc6c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1abc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1abc70: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x1abc70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1abc74: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1ABC74u;
    SET_GPR_U32(ctx, 31, 0x1ABC7Cu);
    ctx->pc = 0x1ABC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC74u;
    // 0x1abc78: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1ABC74u, 0x1ABC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC7Cu;
label_1abc7c:
    // 0x1abc7c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1abc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abc80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1abc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1abc84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1abc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1abc88: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1abc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1abc8c: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1abc8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1abc90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1abc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abc94: 0x2032025  or          $a0, $s0, $v1
    ctx->pc = 0x1abc94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x1abc98: 0x9e4378d0  lwu         $v1, 0x78D0($s2)
    ctx->pc = 0x1abc98u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 30928)));
    // 0x1abc9c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1abc9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1abca0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1abca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1abca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abca8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1abca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abcac: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1abcacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1abcb0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1abcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1abcb4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABCB4u;
    SET_GPR_U32(ctx, 31, 0x1ABCBCu);
    ctx->pc = 0x1ABCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABCB4u;
    // 0x1abcb8: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABCB4u, 0x1ABCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABCBCu;
label_1abcbc:
    // 0x1abcbc: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1ABCBCu;
    SET_GPR_U32(ctx, 31, 0x1ABCC4u);
    ctx->pc = 0x1ABCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABCBCu;
    // 0x1abcc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1ABCBCu, 0x1ABCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABCC4u;
label_1abcc4:
    // 0x1abcc4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1abcc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abcc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abccc: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1abcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1abcd0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1abcd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1abcd4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1abcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abcd8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1abcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1abcdc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1abcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1abce0: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1abce0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1abce4: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1abce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1abce8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABCE8u;
    SET_GPR_U32(ctx, 31, 0x1ABCF0u);
    ctx->pc = 0x1ABCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABCE8u;
    // 0x1abcec: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABCE8u, 0x1ABCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABCF0u;
label_1abcf0:
    // 0x1abcf0: 0x240301bc  addiu       $v1, $zero, 0x1BC
    ctx->pc = 0x1abcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 444));
    // 0x1abcf4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1abcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1abcf8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abcf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abcfc: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1abcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1abd00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd04: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1abd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1abd08: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABD08u;
    SET_GPR_U32(ctx, 31, 0x1ABD10u);
    ctx->pc = 0x1ABD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD08u;
    // 0x1abd0c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABD08u, 0x1ABD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD10u;
label_1abd10:
    // 0x1abd10: 0x9222004d  lbu         $v0, 0x4D($s1)
    ctx->pc = 0x1abd10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 77)));
    // 0x1abd14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd18: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1abd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1abd1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1abd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abd20: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABD20u;
    SET_GPR_U32(ctx, 31, 0x1ABD28u);
    ctx->pc = 0x1ABD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD20u;
    // 0x1abd24: 0x34460068  ori         $a2, $v0, 0x68 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)104);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABD20u, 0x1ABD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD28u;
label_1abd28:
    // 0x1abd28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd30: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABD30u;
    SET_GPR_U32(ctx, 31, 0x1ABD38u);
    ctx->pc = 0x1ABD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD30u;
    // 0x1abd34: 0x24060356  addiu       $a2, $zero, 0x356 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABD30u, 0x1ABD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABD38u;
label_1abd38:
    // 0x1abd38: 0x8e4378c8  lw          $v1, 0x78C8($s2)
    ctx->pc = 0x1abd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1abd3c: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1abd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1abd40: 0x3082b  sltu        $at, $zero, $v1
    ctx->pc = 0x1abd40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1abd44: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1ABD44u;
    {
        const bool branch_taken_0x1abd44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD44u;
        // 0x1abd48: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd44) {
            ctx->pc = 0x1ABE20u;
            goto label_1abe20;
        }
    }
    ctx->pc = 0x1ABD4Cu;
    // 0x1abd4c: 0x2413001f  addiu       $s3, $zero, 0x1F
    ctx->pc = 0x1abd4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1abd50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1abd50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd54: 0x0  nop
    ctx->pc = 0x1abd54u;
    // NOP
label_1abd58:
    // 0x1abd58: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x1abd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1abd5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1abd5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1abd60: 0x9e4678c0  lwu         $a2, 0x78C0($s2)
    ctx->pc = 0x1abd60u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 30912)));
    // 0x1abd64: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1abd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1abd68: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1abd68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1abd6c: 0x8e4278c4  lw          $v0, 0x78C4($s2)
    ctx->pc = 0x1abd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30916)));
    // 0x1abd70: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1abd70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1abd74: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1abd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1abd78: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1abd78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1abd7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd80: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1abd80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1abd84: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1abd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1abd88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1abd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1abd8c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1abd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1abd90: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1abd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1abd94: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1abd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1abd98: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABD98u;
    SET_GPR_U32(ctx, 31, 0x1ABDA0u);
    ctx->pc = 0x1ABD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD98u;
    // 0x1abd9c: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABD98u, 0x1ABDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABDA0u;
label_1abda0:
    // 0x1abda0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1abda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1abda4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abda8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1abda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1abdac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABDACu;
    SET_GPR_U32(ctx, 31, 0x1ABDB4u);
    ctx->pc = 0x1ABDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABDACu;
    // 0x1abdb0: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABDACu, 0x1ABDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABDB4u;
label_1abdb4:
    // 0x1abdb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1abdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1abdb8: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1abdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1abdbc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1abdbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1abdc0: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1abdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1abdc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1abdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1abdc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abdcc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1abdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1abdd0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABDD0u;
    SET_GPR_U32(ctx, 31, 0x1ABDD8u);
    ctx->pc = 0x1ABDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABDD0u;
    // 0x1abdd4: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABDD0u, 0x1ABDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABDD8u;
label_1abdd8:
    // 0x1abdd8: 0x3c020710  lui         $v0, 0x710
    ctx->pc = 0x1abdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1808 << 16));
    // 0x1abddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abde0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1abde0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1abde4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABDE4u;
    SET_GPR_U32(ctx, 31, 0x1ABDECu);
    ctx->pc = 0x1ABDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABDE4u;
    // 0x1abde8: 0x34461010  ori         $a2, $v0, 0x1010 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABDE4u, 0x1ABDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABDECu;
label_1abdec:
    // 0x1abdec: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1abdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1abdf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abdf4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1abdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1abdf8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1abdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1abdfc: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1ABDFCu;
    SET_GPR_U32(ctx, 31, 0x1ABE04u);
    ctx->pc = 0x1ABE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABDFCu;
    // 0x1abe00: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1ABDFCu, 0x1ABE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABE04u;
label_1abe04:
    // 0x1abe04: 0x8e4378c8  lw          $v1, 0x78C8($s2)
    ctx->pc = 0x1abe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 30920)));
    // 0x1abe08: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1abe08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1abe0c: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1abe0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1abe10: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x1abe10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x1abe14: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1abe14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1abe18: 0x1460ffcf  bnez        $v1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1ABE18u;
    {
        const bool branch_taken_0x1abe18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE18u;
        // 0x1abe1c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe18) {
            ctx->pc = 0x1ABD58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abd58;
        }
    }
    ctx->pc = 0x1ABE20u;
label_1abe20:
    // 0x1abe20: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x1abe20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x1abe24: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1abe24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1abe28: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1abe28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1abe2c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1abe2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1abe30: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1abe30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1abe34: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1abe34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1abe38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1abe38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abe3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1abe3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abe40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1abe40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abe44: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE44u;
        // 0x1abe48: 0x27bd0490  addiu       $sp, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABE4Cu;
}
