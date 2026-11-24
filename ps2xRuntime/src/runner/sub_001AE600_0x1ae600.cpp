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

// Function: sub_001AE600
// Address: 0x1ae600 - 0x1af1d4
void sub_001AE600_0x1ae600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE600_0x1ae600");
#endif

    switch (ctx->pc) {
        case 0x1ae664u: goto label_1ae664;
        case 0x1ae678u: goto label_1ae678;
        case 0x1ae688u: goto label_1ae688;
        case 0x1ae6b8u: goto label_1ae6b8;
        case 0x1ae79cu: goto label_1ae79c;
        case 0x1ae7acu: goto label_1ae7ac;
        case 0x1ae7bcu: goto label_1ae7bc;
        case 0x1ae7dcu: goto label_1ae7dc;
        case 0x1ae7ecu: goto label_1ae7ec;
        case 0x1ae808u: goto label_1ae808;
        case 0x1ae844u: goto label_1ae844;
        case 0x1ae880u: goto label_1ae880;
        case 0x1ae88cu: goto label_1ae88c;
        case 0x1ae8a0u: goto label_1ae8a0;
        case 0x1ae8b0u: goto label_1ae8b0;
        case 0x1ae8c0u: goto label_1ae8c0;
        case 0x1ae8d8u: goto label_1ae8d8;
        case 0x1ae8f0u: goto label_1ae8f0;
        case 0x1ae908u: goto label_1ae908;
        case 0x1ae914u: goto label_1ae914;
        case 0x1ae928u: goto label_1ae928;
        case 0x1ae934u: goto label_1ae934;
        case 0x1ae958u: goto label_1ae958;
        case 0x1ae998u: goto label_1ae998;
        case 0x1ae9acu: goto label_1ae9ac;
        case 0x1ae9bcu: goto label_1ae9bc;
        case 0x1ae9ccu: goto label_1ae9cc;
        case 0x1ae9ecu: goto label_1ae9ec;
        case 0x1ae9fcu: goto label_1ae9fc;
        case 0x1aea20u: goto label_1aea20;
        case 0x1aea44u: goto label_1aea44;
        case 0x1aea68u: goto label_1aea68;
        case 0x1aea8cu: goto label_1aea8c;
        case 0x1aea98u: goto label_1aea98;
        case 0x1aeaa8u: goto label_1aeaa8;
        case 0x1aeab8u: goto label_1aeab8;
        case 0x1aead8u: goto label_1aead8;
        case 0x1aeae0u: goto label_1aeae0;
        case 0x1aeaf4u: goto label_1aeaf4;
        case 0x1aeb3cu: goto label_1aeb3c;
        case 0x1aeb50u: goto label_1aeb50;
        case 0x1aeb74u: goto label_1aeb74;
        case 0x1aeb88u: goto label_1aeb88;
        case 0x1aebacu: goto label_1aebac;
        case 0x1aebb8u: goto label_1aebb8;
        case 0x1aebdcu: goto label_1aebdc;
        case 0x1aebfcu: goto label_1aebfc;
        case 0x1aec40u: goto label_1aec40;
        case 0x1aec84u: goto label_1aec84;
        case 0x1aecb8u: goto label_1aecb8;
        case 0x1aecc8u: goto label_1aecc8;
        case 0x1aed14u: goto label_1aed14;
        case 0x1aed1cu: goto label_1aed1c;
        case 0x1aed48u: goto label_1aed48;
        case 0x1aed78u: goto label_1aed78;
        case 0x1aed88u: goto label_1aed88;
        case 0x1aed98u: goto label_1aed98;
        case 0x1aeda8u: goto label_1aeda8;
        case 0x1aedc0u: goto label_1aedc0;
        case 0x1aee14u: goto label_1aee14;
        case 0x1aee3cu: goto label_1aee3c;
        case 0x1aee64u: goto label_1aee64;
        case 0x1aee8cu: goto label_1aee8c;
        case 0x1aeeb4u: goto label_1aeeb4;
        case 0x1aef28u: goto label_1aef28;
        case 0x1aef74u: goto label_1aef74;
        case 0x1aeff4u: goto label_1aeff4;
        case 0x1aeff8u: goto label_1aeff8;
        case 0x1af010u: goto label_1af010;
        case 0x1af028u: goto label_1af028;
        case 0x1af070u: goto label_1af070;
        case 0x1af0bcu: goto label_1af0bc;
        case 0x1af0c4u: goto label_1af0c4;
        case 0x1af108u: goto label_1af108;
        case 0x1af170u: goto label_1af170;
        default: break;
    }

    ctx->pc = 0x1ae600u;

    // 0x1ae600: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x1ae600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
    // 0x1ae604: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae608: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1ae608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1ae60c: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x1ae60cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ae610: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1ae610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1ae614: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1ae614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1ae618: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1ae618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1ae61c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1ae61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1ae620: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1ae620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1ae624: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ae624u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae628: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1ae628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1ae62c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1ae62cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae630: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1ae630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1ae634: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae638: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ae638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ae63c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ae63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ae640: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x1ae640u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ae644: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1ae644u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1ae648: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1ae648u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1ae64c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1ae64cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1ae650: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1ae650u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1ae654: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1ae654u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1ae658: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1ae658u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1ae65c: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1AE65Cu;
    SET_GPR_U32(ctx, 31, 0x1AE664u);
    ctx->pc = 0x1AE660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE65Cu;
    // 0x1ae660: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1AE65Cu, 0x1AE664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE664u;
label_1ae664:
    // 0x1ae664: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x1ae664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x1ae668: 0x27a404c0  addiu       $a0, $sp, 0x4C0
    ctx->pc = 0x1ae668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x1ae66c: 0x24a56aa0  addiu       $a1, $a1, 0x6AA0
    ctx->pc = 0x1ae66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27296));
    // 0x1ae670: 0xc041442  jal         func_105108
    ctx->pc = 0x1AE670u;
    SET_GPR_U32(ctx, 31, 0x1AE678u);
    ctx->pc = 0x1AE674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE670u;
    // 0x1ae674: 0x26860010  addiu       $a2, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x1AE670u, 0x1AE678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE678u;
label_1ae678:
    // 0x1ae678: 0x27a404d0  addiu       $a0, $sp, 0x4D0
    ctx->pc = 0x1ae678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
    // 0x1ae67c: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x1ae67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1ae680: 0xc04d748  jal         func_135D20
    ctx->pc = 0x1AE680u;
    SET_GPR_U32(ctx, 31, 0x1AE688u);
    ctx->pc = 0x1AE684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE680u;
    // 0x1ae684: 0x27a604ec  addiu       $a2, $sp, 0x4EC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D20u, 0x1AE680u, 0x1AE688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE688u;
label_1ae688:
    // 0x1ae688: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1ae688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ae68c: 0x27a204d4  addiu       $v0, $sp, 0x4D4
    ctx->pc = 0x1ae68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1236));
    // 0x1ae690: 0xafa304d0  sw          $v1, 0x4D0($sp)
    ctx->pc = 0x1ae690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1232), GPR_U32(ctx, 3));
    // 0x1ae694: 0x27be04d8  addiu       $fp, $sp, 0x4D8
    ctx->pc = 0x1ae694u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 1240));
    // 0x1ae698: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ae698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ae69c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae6a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6a8: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x1ae6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x1ae6ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ae6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae6b0: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1AE6B0u;
    SET_GPR_U32(ctx, 31, 0x1AE6B8u);
    ctx->pc = 0x1AE6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE6B0u;
    // 0x1ae6b4: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1AE6B0u, 0x1AE6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE6B8u;
label_1ae6b8:
    // 0x1ae6b8: 0x8e840060  lw          $a0, 0x60($s4)
    ctx->pc = 0x1ae6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x1ae6bc: 0x27a204d4  addiu       $v0, $sp, 0x4D4
    ctx->pc = 0x1ae6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1236));
    // 0x1ae6c0: 0x8fa304d0  lw          $v1, 0x4D0($sp)
    ctx->pc = 0x1ae6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x1ae6c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ae6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae6c8: 0x43042  srl         $a2, $a0, 1
    ctx->pc = 0x1ae6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1ae6cc: 0x42882  srl         $a1, $a0, 2
    ctx->pc = 0x1ae6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x1ae6d0: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1ae6d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1ae6d4: 0x2464f900  addiu       $a0, $v1, -0x700
    ctx->pc = 0x1ae6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965504));
    // 0x1ae6d8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1ae6d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1ae6dc: 0x2443f870  addiu       $v1, $v0, -0x790
    ctx->pc = 0x1ae6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965360));
    // 0x1ae6e0: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x1ae6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1ae6e4: 0x29900  sll         $s3, $v0, 4
    ctx->pc = 0x1ae6e4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ae6e8: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x1ae6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1ae6ec: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x1ae6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ae6f0: 0x651023  subu        $v0, $v1, $a1
    ctx->pc = 0x1ae6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ae6f4: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x1ae6f4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ae6f8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1ae6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ae6fc: 0x6610002  bgez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE6FCu;
    {
        const bool branch_taken_0x1ae6fc = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x1AE700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE6FCu;
        // 0x1ae700: 0x28100  sll         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6fc) {
            ctx->pc = 0x1AE708u;
            goto label_1ae708;
        }
    }
    ctx->pc = 0x1AE704u;
    // 0x1ae704: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ae704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae708:
    // 0x1ae708: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE708u;
    {
        const bool branch_taken_0x1ae708 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x1ae708) {
            ctx->pc = 0x1AE718u;
            goto label_1ae718;
        }
    }
    ctx->pc = 0x1AE710u;
    // 0x1ae710: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ae710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae714: 0x0  nop
    ctx->pc = 0x1ae714u;
    // NOP
label_1ae718:
    // 0x1ae718: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE718u;
    {
        const bool branch_taken_0x1ae718 = (GPR_S64(ctx, 18) > 0);
        if (branch_taken_0x1ae718) {
            ctx->pc = 0x1AE728u;
            goto label_1ae728;
        }
    }
    ctx->pc = 0x1AE720u;
    // 0x1ae720: 0x69140  sll         $s2, $a2, 5
    ctx->pc = 0x1ae720u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x1ae724: 0x0  nop
    ctx->pc = 0x1ae724u;
    // NOP
label_1ae728:
    // 0x1ae728: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE728u;
    {
        const bool branch_taken_0x1ae728 = (GPR_S64(ctx, 16) > 0);
        if (branch_taken_0x1ae728) {
            ctx->pc = 0x1AE738u;
            goto label_1ae738;
        }
    }
    ctx->pc = 0x1AE730u;
    // 0x1ae730: 0x58140  sll         $s0, $a1, 5
    ctx->pc = 0x1ae730u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1ae734: 0x0  nop
    ctx->pc = 0x1ae734u;
    // NOP
label_1ae738:
    // 0x1ae738: 0x2a622000  slti        $v0, $s3, 0x2000
    ctx->pc = 0x1ae738u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x1ae73c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE73Cu;
    {
        const bool branch_taken_0x1ae73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE73Cu;
        // 0x1ae740: 0x61940  sll         $v1, $a2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae73c) {
            ctx->pc = 0x1AE750u;
            goto label_1ae750;
        }
    }
    ctx->pc = 0x1AE744u;
    // 0x1ae744: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x1ae744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1ae748: 0x439823  subu        $s3, $v0, $v1
    ctx->pc = 0x1ae748u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae74c: 0x0  nop
    ctx->pc = 0x1ae74cu;
    // NOP
label_1ae750:
    // 0x1ae750: 0x2a220e00  slti        $v0, $s1, 0xE00
    ctx->pc = 0x1ae750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3584) ? 1 : 0);
    // 0x1ae754: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE754u;
    {
        const bool branch_taken_0x1ae754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE754u;
        // 0x1ae758: 0x51940  sll         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae754) {
            ctx->pc = 0x1AE768u;
            goto label_1ae768;
        }
    }
    ctx->pc = 0x1AE75Cu;
    // 0x1ae75c: 0x24020e00  addiu       $v0, $zero, 0xE00
    ctx->pc = 0x1ae75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x1ae760: 0x438823  subu        $s1, $v0, $v1
    ctx->pc = 0x1ae760u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae764: 0x0  nop
    ctx->pc = 0x1ae764u;
    // NOP
label_1ae768:
    // 0x1ae768: 0x2a412001  slti        $at, $s2, 0x2001
    ctx->pc = 0x1ae768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x1ae76c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE76Cu;
    {
        const bool branch_taken_0x1ae76c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae76c) {
            ctx->pc = 0x1AE778u;
            goto label_1ae778;
        }
    }
    ctx->pc = 0x1AE774u;
    // 0x1ae774: 0x24122000  addiu       $s2, $zero, 0x2000
    ctx->pc = 0x1ae774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1ae778:
    // 0x1ae778: 0x2a010e01  slti        $at, $s0, 0xE01
    ctx->pc = 0x1ae778u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3585) ? 1 : 0);
    // 0x1ae77c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE77Cu;
    {
        const bool branch_taken_0x1ae77c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae77c) {
            ctx->pc = 0x1AE788u;
            goto label_1ae788;
        }
    }
    ctx->pc = 0x1AE784u;
    // 0x1ae784: 0x24100e00  addiu       $s0, $zero, 0xE00
    ctx->pc = 0x1ae784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
label_1ae788:
    // 0x1ae788: 0x3c020a08  lui         $v0, 0xA08
    ctx->pc = 0x1ae788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2568 << 16));
    // 0x1ae78c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae790: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ae790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ae794: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE794u;
    SET_GPR_U32(ctx, 31, 0x1AE79Cu);
    ctx->pc = 0x1AE798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE794u;
    // 0x1ae798: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE794u, 0x1AE79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE79Cu;
label_1ae79c:
    // 0x1ae79c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7a4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE7A4u;
    SET_GPR_U32(ctx, 31, 0x1AE7ACu);
    ctx->pc = 0x1AE7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7A4u;
    // 0x1ae7a8: 0x24060306  addiu       $a2, $zero, 0x306 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE7A4u, 0x1AE7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7ACu;
label_1ae7ac:
    // 0x1ae7ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae7b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE7B4u;
    SET_GPR_U32(ctx, 31, 0x1AE7BCu);
    ctx->pc = 0x1AE7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7B4u;
    // 0x1ae7b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE7B4u, 0x1AE7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7BCu;
label_1ae7bc:
    // 0x1ae7bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae7c0: 0x3c023a00  lui         $v0, 0x3A00
    ctx->pc = 0x1ae7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14848 << 16));
    // 0x1ae7c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ae7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ae7c8: 0x344200c0  ori         $v0, $v0, 0xC0
    ctx->pc = 0x1ae7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
    // 0x1ae7cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7d0: 0x2405004f  addiu       $a1, $zero, 0x4F
    ctx->pc = 0x1ae7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1ae7d4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE7D4u;
    SET_GPR_U32(ctx, 31, 0x1AE7DCu);
    ctx->pc = 0x1AE7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7D4u;
    // 0x1ae7d8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE7D4u, 0x1AE7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7DCu;
label_1ae7dc:
    // 0x1ae7dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7e0: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1ae7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ae7e4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE7E4u;
    SET_GPR_U32(ctx, 31, 0x1AE7ECu);
    ctx->pc = 0x1AE7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7E4u;
    // 0x1ae7e8: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE7E4u, 0x1AE7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7ECu;
label_1ae7ec:
    // 0x1ae7ec: 0x3c0300df  lui         $v1, 0xDF
    ctx->pc = 0x1ae7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)223 << 16));
    // 0x1ae7f0: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x1ae7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x1ae7f4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ae7f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ae7f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7fc: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1ae7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1ae800: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE800u;
    SET_GPR_U32(ctx, 31, 0x1AE808u);
    ctx->pc = 0x1AE804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE800u;
    // 0x1ae804: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE800u, 0x1AE808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE808u;
label_1ae808:
    // 0x1ae808: 0x26227900  addiu       $v0, $s1, 0x7900
    ctx->pc = 0x1ae808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 30976));
    // 0x1ae80c: 0x26637000  addiu       $v1, $s3, 0x7000
    ctx->pc = 0x1ae80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 28672));
    // 0x1ae810: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae814: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ae814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ae818: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ae818u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ae81c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1ae81cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1ae820: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1ae820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1ae824: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ae824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ae828: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae82c: 0x83b025  or          $s6, $a0, $v1
    ctx->pc = 0x1ae82cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ae830: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae834: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae838: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1ae838u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ae83c: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AE83Cu;
    SET_GPR_U32(ctx, 31, 0x1AE844u);
    ctx->pc = 0x1AE840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE83Cu;
    // 0x1ae840: 0x2c23025  or          $a2, $s6, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AE83Cu, 0x1AE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE844u;
label_1ae844:
    // 0x1ae844: 0x26027900  addiu       $v0, $s0, 0x7900
    ctx->pc = 0x1ae844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 30976));
    // 0x1ae848: 0x26437000  addiu       $v1, $s2, 0x7000
    ctx->pc = 0x1ae848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 28672));
    // 0x1ae84c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae850: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1ae850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ae854: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1ae854u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1ae858: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1ae858u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1ae85c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x1ae85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x1ae860: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ae860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ae864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae868: 0x83b825  or          $s7, $a0, $v1
    ctx->pc = 0x1ae868u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ae86c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae870: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae874: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1ae874u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1ae878: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AE878u;
    SET_GPR_U32(ctx, 31, 0x1AE880u);
    ctx->pc = 0x1AE87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE878u;
    // 0x1ae87c: 0x2e23025  or          $a2, $s7, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AE878u, 0x1AE880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE880u;
label_1ae880:
    // 0x1ae880: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae884: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AE884u;
    SET_GPR_U32(ctx, 31, 0x1AE88Cu);
    ctx->pc = 0x1AE888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE884u;
    // 0x1ae888: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AE884u, 0x1AE88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE88Cu;
label_1ae88c:
    // 0x1ae88c: 0x3c020a08  lui         $v0, 0xA08
    ctx->pc = 0x1ae88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2568 << 16));
    // 0x1ae890: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae894: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ae894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ae898: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE898u;
    SET_GPR_U32(ctx, 31, 0x1AE8A0u);
    ctx->pc = 0x1AE89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE898u;
    // 0x1ae89c: 0x34460080  ori         $a2, $v0, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE898u, 0x1AE8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8A0u;
label_1ae8a0:
    // 0x1ae8a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8a4: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1ae8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ae8a8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE8A8u;
    SET_GPR_U32(ctx, 31, 0x1AE8B0u);
    ctx->pc = 0x1AE8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8A8u;
    // 0x1ae8ac: 0x3c060005  lui         $a2, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE8A8u, 0x1AE8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8B0u;
label_1ae8b0:
    // 0x1ae8b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8b8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE8B8u;
    SET_GPR_U32(ctx, 31, 0x1AE8C0u);
    ctx->pc = 0x1AE8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8B8u;
    // 0x1ae8bc: 0x24060306  addiu       $a2, $zero, 0x306 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE8B8u, 0x1AE8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8C0u;
label_1ae8c0:
    // 0x1ae8c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ae8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ae8c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1ae8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1ae8cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ae8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae8d0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE8D0u;
    SET_GPR_U32(ctx, 31, 0x1AE8D8u);
    ctx->pc = 0x1AE8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8D0u;
    // 0x1ae8d4: 0x3446ffff  ori         $a2, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE8D0u, 0x1AE8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8D8u;
label_1ae8d8:
    // 0x1ae8d8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1ae8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1ae8dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8e0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ae8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ae8e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae8e8: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AE8E8u;
    SET_GPR_U32(ctx, 31, 0x1AE8F0u);
    ctx->pc = 0x1AE8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8E8u;
    // 0x1ae8ec: 0x563025  or          $a2, $v0, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AE8E8u, 0x1AE8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8F0u;
label_1ae8f0:
    // 0x1ae8f0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x1ae8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1ae8f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8f8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ae8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ae8fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae900: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AE900u;
    SET_GPR_U32(ctx, 31, 0x1AE908u);
    ctx->pc = 0x1AE904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE900u;
    // 0x1ae904: 0x573025  or          $a2, $v0, $s7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AE900u, 0x1AE908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE908u;
label_1ae908:
    // 0x1ae908: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae90c: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AE90Cu;
    SET_GPR_U32(ctx, 31, 0x1AE914u);
    ctx->pc = 0x1AE910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE90Cu;
    // 0x1ae910: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AE90Cu, 0x1AE914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE914u;
label_1ae914:
    // 0x1ae914: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ae914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1ae918: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae91c: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1ae91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ae920: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE920u;
    SET_GPR_U32(ctx, 31, 0x1AE928u);
    ctx->pc = 0x1AE924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE920u;
    // 0x1ae924: 0x344600b0  ori         $a2, $v0, 0xB0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)176);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE920u, 0x1AE928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE928u;
label_1ae928:
    // 0x1ae928: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae92c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AE92Cu;
    SET_GPR_U32(ctx, 31, 0x1AE934u);
    ctx->pc = 0x1AE930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE92Cu;
    // 0x1ae930: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AE92Cu, 0x1AE934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE934u;
label_1ae934:
    // 0x1ae934: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ae934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae938: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae93c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ae93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ae940: 0x3c0200a2  lui         $v0, 0xA2
    ctx->pc = 0x1ae940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)162 << 16));
    // 0x1ae944: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1ae944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1ae948: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1ae948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1ae94c: 0x62b025  or          $s6, $v1, $v0
    ctx->pc = 0x1ae94cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ae950: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AE950u;
    SET_GPR_U32(ctx, 31, 0x1AE958u);
    ctx->pc = 0x1AE954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE950u;
    // 0x1ae954: 0x240500e0  addiu       $a1, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AE950u, 0x1AE958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE958u;
label_1ae958:
    // 0x1ae958: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ae958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae95c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ae95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ae960: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ae960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1ae964: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1ae964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ae968: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x1ae968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x1ae96c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae970: 0x2c32025  or          $a0, $s6, $v1
    ctx->pc = 0x1ae970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x1ae974: 0x9ea378d0  lwu         $v1, 0x78D0($s5)
    ctx->pc = 0x1ae974u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1ae978: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x1ae978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ae97c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1ae97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1ae980: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae984: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ae984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ae988: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x1ae988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x1ae98c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1ae98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1ae990: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE990u;
    SET_GPR_U32(ctx, 31, 0x1AE998u);
    ctx->pc = 0x1AE994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE990u;
    // 0x1ae994: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE990u, 0x1AE998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE998u;
label_1ae998:
    // 0x1ae998: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1ae998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1ae99c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9a0: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1ae9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1ae9a4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE9A4u;
    SET_GPR_U32(ctx, 31, 0x1AE9ACu);
    ctx->pc = 0x1AE9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE9A4u;
    // 0x1ae9a8: 0x2303c  dsll32      $a2, $v0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE9A4u, 0x1AE9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE9ACu;
label_1ae9ac:
    // 0x1ae9ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9b0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1ae9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1ae9b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE9B4u;
    SET_GPR_U32(ctx, 31, 0x1AE9BCu);
    ctx->pc = 0x1AE9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE9B4u;
    // 0x1ae9b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE9B4u, 0x1AE9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE9BCu;
label_1ae9bc:
    // 0x1ae9bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9c0: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1ae9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ae9c4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE9C4u;
    SET_GPR_U32(ctx, 31, 0x1AE9CCu);
    ctx->pc = 0x1AE9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE9C4u;
    // 0x1ae9c8: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE9C4u, 0x1AE9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE9CCu;
label_1ae9cc:
    // 0x1ae9cc: 0x2403037c  addiu       $v1, $zero, 0x37C
    ctx->pc = 0x1ae9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 892));
    // 0x1ae9d0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x1ae9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x1ae9d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ae9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ae9d8: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1ae9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1ae9dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9e0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1ae9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ae9e4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE9E4u;
    SET_GPR_U32(ctx, 31, 0x1AE9ECu);
    ctx->pc = 0x1AE9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE9E4u;
    // 0x1ae9e8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE9E4u, 0x1AE9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE9ECu;
label_1ae9ec:
    // 0x1ae9ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ae9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae9f4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AE9F4u;
    SET_GPR_U32(ctx, 31, 0x1AE9FCu);
    ctx->pc = 0x1AE9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE9F4u;
    // 0x1ae9f8: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AE9F4u, 0x1AE9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE9FCu;
label_1ae9fc:
    // 0x1ae9fc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x1ae9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x1aea00: 0x13183c  dsll32      $v1, $s3, 0
    ctx->pc = 0x1aea00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
    // 0x1aea04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1aea04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1aea08: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1aea08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1aea0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1aea0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aea10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aea10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea14: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1aea14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aea18: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AEA18u;
    SET_GPR_U32(ctx, 31, 0x1AEA20u);
    ctx->pc = 0x1AEA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA18u;
    // 0x1aea1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AEA18u, 0x1AEA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA20u;
label_1aea20:
    // 0x1aea20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aea20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aea24: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1aea24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1aea28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aea28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aea2c: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1aea2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1aea30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aea34: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aea34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea38: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1aea38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aea3c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEA3Cu;
    SET_GPR_U32(ctx, 31, 0x1AEA44u);
    ctx->pc = 0x1AEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA3Cu;
    // 0x1aea40: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEA3Cu, 0x1AEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA44u;
label_1aea44:
    // 0x1aea44: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1aea44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1aea48: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x1aea48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1aea4c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1aea4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1aea50: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1aea50u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1aea54: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1aea54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aea58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aea58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea5c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x1aea5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aea60: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AEA60u;
    SET_GPR_U32(ctx, 31, 0x1AEA68u);
    ctx->pc = 0x1AEA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA60u;
    // 0x1aea64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AEA60u, 0x1AEA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA68u;
label_1aea68:
    // 0x1aea68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aea68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aea6c: 0x3c027a00  lui         $v0, 0x7A00
    ctx->pc = 0x1aea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31232 << 16));
    // 0x1aea70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aea70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aea74: 0x34427100  ori         $v0, $v0, 0x7100
    ctx->pc = 0x1aea74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
    // 0x1aea78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aea78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aea7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aea7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea80: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1aea80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1aea84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEA84u;
    SET_GPR_U32(ctx, 31, 0x1AEA8Cu);
    ctx->pc = 0x1AEA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA84u;
    // 0x1aea88: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEA84u, 0x1AEA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA8Cu;
label_1aea8c:
    // 0x1aea8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aea8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea90: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AEA90u;
    SET_GPR_U32(ctx, 31, 0x1AEA98u);
    ctx->pc = 0x1AEA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEA90u;
    // 0x1aea94: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AEA90u, 0x1AEA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEA98u;
label_1aea98:
    // 0x1aea98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aea98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aea9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aea9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeaa0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEAA0u;
    SET_GPR_U32(ctx, 31, 0x1AEAA8u);
    ctx->pc = 0x1AEAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAA0u;
    // 0x1aeaa4: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEAA0u, 0x1AEAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEAA8u;
label_1aeaa8:
    // 0x1aeaa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aeaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeaac: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1aeaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1aeab0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEAB0u;
    SET_GPR_U32(ctx, 31, 0x1AEAB8u);
    ctx->pc = 0x1AEAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAB0u;
    // 0x1aeab4: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEAB0u, 0x1AEAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEAB8u;
label_1aeab8:
    // 0x1aeab8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1aeab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1aeabc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1aeabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1aeac0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aeac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aeac4: 0x3442c00a  ori         $v0, $v0, 0xC00A
    ctx->pc = 0x1aeac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49162);
    // 0x1aeac8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aeac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeacc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1aeaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1aead0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEAD0u;
    SET_GPR_U32(ctx, 31, 0x1AEAD8u);
    ctx->pc = 0x1AEAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAD0u;
    // 0x1aead4: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEAD0u, 0x1AEAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEAD8u;
label_1aead8:
    // 0x1aead8: 0x241100b0  addiu       $s1, $zero, 0xB0
    ctx->pc = 0x1aead8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x1aeadc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aeadcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aeae0:
    // 0x1aeae0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1aeae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1aeae4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aeae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeae8: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x1aeae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1aeaec: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEAECu;
    SET_GPR_U32(ctx, 31, 0x1AEAF4u);
    ctx->pc = 0x1AEAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEAECu;
    // 0x1aeaf0: 0x344600b1  ori         $a2, $v0, 0xB1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)177);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEAECu, 0x1AEAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEAF4u;
label_1aeaf4:
    // 0x1aeaf4: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x1aeaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1aeaf8: 0x9ea678d0  lwu         $a2, 0x78D0($s5)
    ctx->pc = 0x1aeaf8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1aeafc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1aeafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aeb00: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1aeb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aeb04: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1aeb04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1aeb08: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1aeb08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aeb0c: 0x3c025800  lui         $v0, 0x5800
    ctx->pc = 0x1aeb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
    // 0x1aeb10: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x1aeb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1aeb14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1aeb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1aeb18: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1aeb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1aeb1c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1aeb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1aeb20: 0x6317c  dsll32      $a2, $a2, 5
    ctx->pc = 0x1aeb20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 5));
    // 0x1aeb24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aeb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aeb28: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1aeb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1aeb2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aeb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb30: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1aeb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aeb34: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEB34u;
    SET_GPR_U32(ctx, 31, 0x1AEB3Cu);
    ctx->pc = 0x1AEB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB34u;
    // 0x1aeb38: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEB34u, 0x1AEB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB3Cu;
label_1aeb3c:
    // 0x1aeb3c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1aeb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1aeb40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aeb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aeb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aeb48: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEB48u;
    SET_GPR_U32(ctx, 31, 0x1AEB50u);
    ctx->pc = 0x1AEB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB48u;
    // 0x1aeb4c: 0x34460010  ori         $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEB48u, 0x1AEB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB50u;
label_1aeb50:
    // 0x1aeb50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aeb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aeb54: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1aeb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1aeb58: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aeb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aeb5c: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1aeb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1aeb60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aeb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aeb64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aeb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb68: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1aeb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aeb6c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEB6Cu;
    SET_GPR_U32(ctx, 31, 0x1AEB74u);
    ctx->pc = 0x1AEB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB6Cu;
    // 0x1aeb70: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEB6Cu, 0x1AEB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB74u;
label_1aeb74:
    // 0x1aeb74: 0x3c020110  lui         $v0, 0x110
    ctx->pc = 0x1aeb74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)272 << 16));
    // 0x1aeb78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aeb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeb7c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aeb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aeb80: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEB80u;
    SET_GPR_U32(ctx, 31, 0x1AEB88u);
    ctx->pc = 0x1AEB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEB80u;
    // 0x1aeb84: 0x34460110  ori         $a2, $v0, 0x110 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEB80u, 0x1AEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEB88u;
label_1aeb88:
    // 0x1aeb88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aeb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aeb8c: 0x3c027980  lui         $v0, 0x7980
    ctx->pc = 0x1aeb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31104 << 16));
    // 0x1aeb90: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aeb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aeb94: 0x34427080  ori         $v0, $v0, 0x7080
    ctx->pc = 0x1aeb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28800);
    // 0x1aeb98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aeb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aeb9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aeb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeba0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1aeba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1aeba4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEBA4u;
    SET_GPR_U32(ctx, 31, 0x1AEBACu);
    ctx->pc = 0x1AEBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEBA4u;
    // 0x1aeba8: 0x70023389  pcpyld      $a2, $zero, $v0 (Delay Slot)
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEBA4u, 0x1AEBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBACu;
label_1aebac:
    // 0x1aebac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aebacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aebb0: 0xc07088c  jal         func_1C2230
    ctx->pc = 0x1AEBB0u;
    SET_GPR_U32(ctx, 31, 0x1AEBB8u);
    ctx->pc = 0x1AEBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEBB0u;
    // 0x1aebb4: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2230u, 0x1AEBB0u, 0x1AEBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBB8u;
label_1aebb8:
    // 0x1aebb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1aebb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1aebbc: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x1aebbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1aebc0: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1AEBC0u;
    {
        const bool branch_taken_0x1aebc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEBC0u;
        // 0x1aebc4: 0x241100b1  addiu       $s1, $zero, 0xB1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aebc0) {
            ctx->pc = 0x1AEAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aeae0;
        }
    }
    ctx->pc = 0x1AEBC8u;
    // 0x1aebc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aebc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aebcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aebccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aebd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1aebd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aebd4: 0xc06983c  jal         func_1A60F0
    ctx->pc = 0x1AEBD4u;
    SET_GPR_U32(ctx, 31, 0x1AEBDCu);
    ctx->pc = 0x1AEBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEBD4u;
    // 0x1aebd8: 0x2407000e  addiu       $a3, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60F0u, 0x1AEBD4u, 0x1AEBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBDCu;
label_1aebdc:
    // 0x1aebdc: 0x27a204d4  addiu       $v0, $sp, 0x4D4
    ctx->pc = 0x1aebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1236));
    // 0x1aebe0: 0x8fa304d0  lw          $v1, 0x4D0($sp)
    ctx->pc = 0x1aebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x1aebe4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1aebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aebe8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aebe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aebec: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1aebecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1aebf0: 0x24719000  addiu       $s1, $v1, -0x7000
    ctx->pc = 0x1aebf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938624));
    // 0x1aebf4: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AEBF4u;
    SET_GPR_U32(ctx, 31, 0x1AEBFCu);
    ctx->pc = 0x1AEBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEBF4u;
    // 0x1aebf8: 0x24508700  addiu       $s0, $v0, -0x7900 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AEBF4u, 0x1AEBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEBFCu;
label_1aebfc:
    // 0x1aebfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aec00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aec00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec04: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1aec04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1aec08: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1aec08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1aec0c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1aec0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aec10: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1aec10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1aec14: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1aec14u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aec18: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1aec18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1aec1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aec1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aec20: 0x0  nop
    ctx->pc = 0x1aec20u;
    // NOP
    // 0x1aec24: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aec24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aec28: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1aec28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1aec2c: 0x460106c3  div.s       $f27, $f0, $f1
    ctx->pc = 0x1aec2cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[27] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1aec30: 0x0  nop
    ctx->pc = 0x1aec30u;
    // NOP
    // 0x1aec34: 0x0  nop
    ctx->pc = 0x1aec34u;
    // NOP
    // 0x1aec38: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AEC38u;
    SET_GPR_U32(ctx, 31, 0x1AEC40u);
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AEC38u, 0x1AEC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC40u;
label_1aec40:
    // 0x1aec40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aec40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aec44: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aec44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec48: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x1aec48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1aec4c: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1aec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1aec50: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1aec50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aec54: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1aec54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1aec58: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1aec58u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aec5c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1aec5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1aec60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aec60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aec64: 0x0  nop
    ctx->pc = 0x1aec64u;
    // NOP
    // 0x1aec68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1aec68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1aec6c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1aec6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1aec70: 0x46010683  div.s       $f26, $f0, $f1
    ctx->pc = 0x1aec70u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1aec74: 0x0  nop
    ctx->pc = 0x1aec74u;
    // NOP
    // 0x1aec78: 0x0  nop
    ctx->pc = 0x1aec78u;
    // NOP
    // 0x1aec7c: 0xc070584  jal         func_1C1610
    ctx->pc = 0x1AEC7Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC84u);
    ctx->pc = 0x1C1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1610u, 0x1AEC7Cu, 0x1AEC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEC84u;
label_1aec84:
    // 0x1aec84: 0xc6810028  lwc1        $f1, 0x28($s4)
    ctx->pc = 0x1aec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aec88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aec8c: 0xc7a004ec  lwc1        $f0, 0x4EC($sp)
    ctx->pc = 0x1aec8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aec90: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x1aec90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1aec94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1aec94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aec98: 0x8e880054  lw          $t0, 0x54($s4)
    ctx->pc = 0x1aec98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1aec9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aec9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeca0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1aeca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1aeca4: 0x46801660  cvt.s.w     $f25, $f2
    ctx->pc = 0x1aeca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[25] = FPU_CVT_S_W(tmp); }
    // 0x1aeca8: 0x26860034  addiu       $a2, $s4, 0x34
    ctx->pc = 0x1aeca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
    // 0x1aecac: 0x26870044  addiu       $a3, $s4, 0x44
    ctx->pc = 0x1aecacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
    // 0x1aecb0: 0xc0706f0  jal         func_1C1BC0
    ctx->pc = 0x1AECB0u;
    SET_GPR_U32(ctx, 31, 0x1AECB8u);
    ctx->pc = 0x1AECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AECB0u;
    // 0x1aecb4: 0x46000e02  mul.s       $f24, $f1, $f0 (Delay Slot)
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1BC0u, 0x1AECB0u, 0x1AECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECB8u;
label_1aecb8:
    // 0x1aecb8: 0x8ea578d0  lw          $a1, 0x78D0($s5)
    ctx->pc = 0x1aecb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1aecbc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aecbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aecc0: 0xc070468  jal         func_1C11A0
    ctx->pc = 0x1AECC0u;
    SET_GPR_U32(ctx, 31, 0x1AECC8u);
    ctx->pc = 0x1AECC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AECC0u;
    // 0x1aecc4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C11A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C11A0u, 0x1AECC0u, 0x1AECC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AECC8u;
label_1aecc8:
    // 0x1aecc8: 0x8ea778c8  lw          $a3, 0x78C8($s5)
    ctx->pc = 0x1aecc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30920)));
    // 0x1aeccc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aecccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aecd0: 0x8ea278c4  lw          $v0, 0x78C4($s5)
    ctx->pc = 0x1aecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 30916)));
    // 0x1aecd4: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x1aecd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1aecd8: 0x9ea378c0  lwu         $v1, 0x78C0($s5)
    ctx->pc = 0x1aecd8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 30912)));
    // 0x1aecdc: 0x9ea678cc  lwu         $a2, 0x78CC($s5)
    ctx->pc = 0x1aecdcu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30924)));
    // 0x1aece0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1aece0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1aece4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1aece4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1aece8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1aecec: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1aececu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1aecf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aecf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aecf4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x1aecf4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x1aecf8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1aecf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1aecfc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aecfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aed00: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1aed00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x1aed04: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1aed04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1aed08: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1aed08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1aed0c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AED0Cu;
    SET_GPR_U32(ctx, 31, 0x1AED14u);
    ctx->pc = 0x1AED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED0Cu;
    // 0x1aed10: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AED0Cu, 0x1AED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED14u;
label_1aed14:
    // 0x1aed14: 0xc0705dc  jal         func_1C1770
    ctx->pc = 0x1AED14u;
    SET_GPR_U32(ctx, 31, 0x1AED1Cu);
    ctx->pc = 0x1AED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED14u;
    // 0x1aed18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1770u, 0x1AED14u, 0x1AED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED1Cu;
label_1aed1c:
    // 0x1aed1c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1aed1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aed20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aed20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed24: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x1aed24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x1aed28: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1aed28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1aed2c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aed2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aed30: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1aed30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1aed34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aed34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aed38: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1aed38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1aed3c: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x1aed3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1aed40: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AED40u;
    SET_GPR_U32(ctx, 31, 0x1AED48u);
    ctx->pc = 0x1AED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED40u;
    // 0x1aed44: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AED40u, 0x1AED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED48u;
label_1aed48:
    // 0x1aed48: 0x9ea678d0  lwu         $a2, 0x78D0($s5)
    ctx->pc = 0x1aed48u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 21), 30928)));
    // 0x1aed4c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1aed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1aed50: 0x34430005  ori         $v1, $v0, 0x5
    ctx->pc = 0x1aed50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x1aed54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aed54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed58: 0x3c0259b0  lui         $v0, 0x59B0
    ctx->pc = 0x1aed58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22960 << 16));
    // 0x1aed5c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aed5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aed60: 0x34425620  ori         $v0, $v0, 0x5620
    ctx->pc = 0x1aed60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22048);
    // 0x1aed64: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1aed64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1aed68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1aed68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aed6c: 0x6197c  dsll32      $v1, $a2, 5
    ctx->pc = 0x1aed6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 5));
    // 0x1aed70: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AED70u;
    SET_GPR_U32(ctx, 31, 0x1AED78u);
    ctx->pc = 0x1AED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED70u;
    // 0x1aed74: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AED70u, 0x1AED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED78u;
label_1aed78:
    // 0x1aed78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aed78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed7c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1aed7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1aed80: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AED80u;
    SET_GPR_U32(ctx, 31, 0x1AED88u);
    ctx->pc = 0x1AED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED80u;
    // 0x1aed84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AED80u, 0x1AED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED88u;
label_1aed88:
    // 0x1aed88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aed8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed90: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AED90u;
    SET_GPR_U32(ctx, 31, 0x1AED98u);
    ctx->pc = 0x1AED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AED90u;
    // 0x1aed94: 0x2406035d  addiu       $a2, $zero, 0x35D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 861));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AED90u, 0x1AED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AED98u;
label_1aed98:
    // 0x1aed98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aed98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aed9c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1aed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1aeda0: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEDA0u;
    SET_GPR_U32(ctx, 31, 0x1AEDA8u);
    ctx->pc = 0x1AEDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEDA0u;
    // 0x1aeda4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEDA0u, 0x1AEDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEDA8u;
label_1aeda8:
    // 0x1aeda8: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1aeda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aedac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aedacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aedb0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1aedb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aedb4: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1aedb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1aedb8: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEDB8u;
    SET_GPR_U32(ctx, 31, 0x1AEDC0u);
    ctx->pc = 0x1AEDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEDB8u;
    // 0x1aedbc: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEDB8u, 0x1AEDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEDC0u;
label_1aedc0:
    // 0x1aedc0: 0x8e830078  lw          $v1, 0x78($s4)
    ctx->pc = 0x1aedc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x1aedc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1aedc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aedc8: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1AEDC8u;
    {
        const bool branch_taken_0x1aedc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEDC8u;
        // 0x1aedcc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aedc8) {
            ctx->pc = 0x1AEE70u;
            goto label_1aee70;
        }
    }
    ctx->pc = 0x1AEDD0u;
    // 0x1aedd0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AEDD0u;
    {
        const bool branch_taken_0x1aedd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aedd0) {
            ctx->pc = 0x1AEE48u;
            goto label_1aee48;
        }
    }
    ctx->pc = 0x1AEDD8u;
    // 0x1aedd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aedd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aeddc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AEDDCu;
    {
        const bool branch_taken_0x1aeddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1aeddc) {
            ctx->pc = 0x1AEE20u;
            goto label_1aee20;
        }
    }
    ctx->pc = 0x1AEDE4u;
    // 0x1aede4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEDE4u;
    {
        const bool branch_taken_0x1aede4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aede4) {
            ctx->pc = 0x1AEDF8u;
            goto label_1aedf8;
        }
    }
    ctx->pc = 0x1AEDECu;
    // 0x1aedec: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1AEDECu;
    {
        const bool branch_taken_0x1aedec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aedec) {
            ctx->pc = 0x1AEE98u;
            goto label_1aee98;
        }
    }
    ctx->pc = 0x1AEDF4u;
    // 0x1aedf4: 0x0  nop
    ctx->pc = 0x1aedf4u;
    // NOP
label_1aedf8:
    // 0x1aedf8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1aedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aedfc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aedfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aee00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aee00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee04: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1aee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1aee08: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1aee08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aee0c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEE0Cu;
    SET_GPR_U32(ctx, 31, 0x1AEE14u);
    ctx->pc = 0x1AEE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE0Cu;
    // 0x1aee10: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEE0Cu, 0x1AEE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE14u;
label_1aee14:
    // 0x1aee14: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1AEE14u;
    {
        const bool branch_taken_0x1aee14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee14) {
            ctx->pc = 0x1AEEB8u;
            goto label_1aeeb8;
        }
    }
    ctx->pc = 0x1AEE1Cu;
    // 0x1aee1c: 0x0  nop
    ctx->pc = 0x1aee1cu;
    // NOP
label_1aee20:
    // 0x1aee20: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1aee20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aee24: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aee24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aee28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aee28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee2c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x1aee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1aee30: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1aee30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aee34: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEE34u;
    SET_GPR_U32(ctx, 31, 0x1AEE3Cu);
    ctx->pc = 0x1AEE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE34u;
    // 0x1aee38: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEE34u, 0x1AEE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE3Cu;
label_1aee3c:
    // 0x1aee3c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1AEE3Cu;
    {
        const bool branch_taken_0x1aee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee3c) {
            ctx->pc = 0x1AEEB8u;
            goto label_1aeeb8;
        }
    }
    ctx->pc = 0x1AEE44u;
    // 0x1aee44: 0x0  nop
    ctx->pc = 0x1aee44u;
    // NOP
label_1aee48:
    // 0x1aee48: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1aee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aee4c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aee4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aee50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aee50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee54: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1aee54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1aee58: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1aee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aee5c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEE5Cu;
    SET_GPR_U32(ctx, 31, 0x1AEE64u);
    ctx->pc = 0x1AEE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE5Cu;
    // 0x1aee60: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEE5Cu, 0x1AEE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE64u;
label_1aee64:
    // 0x1aee64: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1AEE64u;
    {
        const bool branch_taken_0x1aee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee64) {
            ctx->pc = 0x1AEEB8u;
            goto label_1aeeb8;
        }
    }
    ctx->pc = 0x1AEE6Cu;
    // 0x1aee6c: 0x0  nop
    ctx->pc = 0x1aee6cu;
    // NOP
label_1aee70:
    // 0x1aee70: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1aee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aee74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aee74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aee78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aee78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee7c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1aee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1aee80: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1aee80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aee84: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEE84u;
    SET_GPR_U32(ctx, 31, 0x1AEE8Cu);
    ctx->pc = 0x1AEE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE84u;
    // 0x1aee88: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEE84u, 0x1AEE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE8Cu;
label_1aee8c:
    // 0x1aee8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AEE8Cu;
    {
        const bool branch_taken_0x1aee8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aee8c) {
            ctx->pc = 0x1AEEB8u;
            goto label_1aeeb8;
        }
    }
    ctx->pc = 0x1AEE94u;
    // 0x1aee94: 0x0  nop
    ctx->pc = 0x1aee94u;
    // NOP
label_1aee98:
    // 0x1aee98: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1aee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1aee9c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1aee9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aeea0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aeea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeea4: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x1aeea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1aeea8: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1aeea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aeeac: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEEACu;
    SET_GPR_U32(ctx, 31, 0x1AEEB4u);
    ctx->pc = 0x1AEEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEEACu;
    // 0x1aeeb0: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEEACu, 0x1AEEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEEB4u;
label_1aeeb4:
    // 0x1aeeb4: 0x0  nop
    ctx->pc = 0x1aeeb4u;
    // NOP
label_1aeeb8:
    // 0x1aeeb8: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1aeeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1aeebc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1aeebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1aeec0: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x1aeec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x1aeec4: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x1aeec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1aeec8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEEC8u;
    {
        const bool branch_taken_0x1aeec8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1AEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEEC8u;
        // 0x1aeecc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeec8) {
            ctx->pc = 0x1AEEDCu;
            goto label_1aeedc;
        }
    }
    ctx->pc = 0x1AEED0u;
    // 0x1aeed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1aeed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aeed4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AEED4u;
    {
        const bool branch_taken_0x1aeed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEED4u;
        // 0x1aeed8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeed4) {
            ctx->pc = 0x1AEEF4u;
            goto label_1aeef4;
        }
    }
    ctx->pc = 0x1AEEDCu;
label_1aeedc:
    // 0x1aeedc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1aeedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1aeee0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aeee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1aeee4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aeee4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aeee8: 0x0  nop
    ctx->pc = 0x1aeee8u;
    // NOP
    // 0x1aeeec: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1aeeecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1aeef0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1aeef0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1aeef4:
    // 0x1aeef4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1aeef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1aeef8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aeef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeefc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1aeefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1aef00: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aef00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aef04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1aef04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aef08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aef08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef0c: 0xc6810068  lwc1        $f1, 0x68($s4)
    ctx->pc = 0x1aef0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aef10: 0x46031583  div.s       $f22, $f2, $f3
    ctx->pc = 0x1aef10u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x1aef14: 0xc6800080  lwc1        $f0, 0x80($s4)
    ctx->pc = 0x1aef14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aef18: 0x0  nop
    ctx->pc = 0x1aef18u;
    // NOP
    // 0x1aef1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aef1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aef20: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEF20u;
    SET_GPR_U32(ctx, 31, 0x1AEF28u);
    ctx->pc = 0x1AEF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF20u;
    // 0x1aef24: 0xe6800080  swc1        $f0, 0x80($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEF20u, 0x1AEF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF28u;
label_1aef28:
    // 0x1aef28: 0x8e870020  lw          $a3, 0x20($s4)
    ctx->pc = 0x1aef28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1aef2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aef2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aef30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aef34: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x1aef34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1aef38: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1aef38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1aef3c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1aef3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aef40: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x1aef40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1aef44: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x1aef44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x1aef48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aef48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aef4c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1aef4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1aef50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1aef50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1aef54: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1aef54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1aef58: 0x71602  srl         $v0, $a3, 24
    ctx->pc = 0x1aef58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1aef5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1aef5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1aef60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aef60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aef64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1aef64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1aef68: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1aef68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1aef6c: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AEF6Cu;
    SET_GPR_U32(ctx, 31, 0x1AEF74u);
    ctx->pc = 0x1AEF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEF6Cu;
    // 0x1aef70: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AEF6Cu, 0x1AEF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEF74u;
label_1aef74:
    // 0x1aef74: 0x4619d042  mul.s       $f1, $f26, $f25
    ctx->pc = 0x1aef74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[26], ctx->f[25]);
    // 0x1aef78: 0x3c0544f2  lui         $a1, 0x44F2
    ctx->pc = 0x1aef78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17650 << 16));
    // 0x1aef7c: 0x3c074180  lui         $a3, 0x4180
    ctx->pc = 0x1aef7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16768 << 16));
    // 0x1aef80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aef80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aef84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1aef84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1aef88: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x1aef88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x1aef8c: 0x3c0644e0  lui         $a2, 0x44E0
    ctx->pc = 0x1aef8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17632 << 16));
    // 0x1aef90: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1aef90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aef94: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1aef94u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1aef98: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1aef98u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aef9c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x1aef9cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aefa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aefa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aefa4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1aefa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aefa8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1aefa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1aefac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aefacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1aefb0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1aefb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1aefb4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1aefb4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aefb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aefb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aefbc: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x1aefbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1aefc0: 0x4600d802  mul.s       $f0, $f27, $f0
    ctx->pc = 0x1aefc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
    // 0x1aefc4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1aefc4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1aefc8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1aefc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1aefcc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1aefccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1aefd0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1aefd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1aefd4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1aefd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1aefd8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1aefd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1aefdc: 0x0  nop
    ctx->pc = 0x1aefdcu;
    // NOP
    // 0x1aefe0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1aefe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1aefe4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1aefe4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1aefe8: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1aefe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1aefec: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AEFECu;
    SET_GPR_U32(ctx, 31, 0x1AEFF4u);
    ctx->pc = 0x1AEFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEFECu;
    // 0x1aeff0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AEFECu, 0x1AEFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEFF4u;
label_1aeff4:
    // 0x1aeff4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1aeff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aeff8:
    // 0x1aeff8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x1aeff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x1aeffc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1aeffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af000: 0xc6800070  lwc1        $f0, 0x70($s4)
    ctx->pc = 0x1af000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af004: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x1af004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x1af008: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x1AF008u;
    SET_GPR_U32(ctx, 31, 0x1AF010u);
    ctx->pc = 0x1AF00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF008u;
    // 0x1af00c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x1AF008u, 0x1AF010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF010u;
label_1af010:
    // 0x1af010: 0xc6820080  lwc1        $f2, 0x80($s4)
    ctx->pc = 0x1af010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af014: 0xc681006c  lwc1        $f1, 0x6C($s4)
    ctx->pc = 0x1af014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1af018: 0x46171080  add.s       $f2, $f2, $f23
    ctx->pc = 0x1af018u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[23]);
    // 0x1af01c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1af01cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1af020: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1AF020u;
    SET_GPR_U32(ctx, 31, 0x1AF028u);
    ctx->pc = 0x1AF024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF020u;
    // 0x1af024: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1AF020u, 0x1AF028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF028u;
label_1af028:
    // 0x1af028: 0xc6820064  lwc1        $f2, 0x64($s4)
    ctx->pc = 0x1af028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1af02c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1af02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1af030: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af030u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af034: 0x0  nop
    ctx->pc = 0x1af034u;
    // NOP
    // 0x1af038: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1af038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1af03c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1af03cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1af040: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF040u;
    {
        const bool branch_taken_0x1af040 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF040u;
        // 0x1af044: 0x4600c502  mul.s       $f20, $f24, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af040) {
            ctx->pc = 0x1AF050u;
            goto label_1af050;
        }
    }
    ctx->pc = 0x1AF048u;
    // 0x1af048: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1af048u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1af04c: 0x0  nop
    ctx->pc = 0x1af04cu;
    // NOP
label_1af050:
    // 0x1af050: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x1af050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x1af054: 0x16220002  bne         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF054u;
    {
        const bool branch_taken_0x1af054 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1af054) {
            ctx->pc = 0x1AF060u;
            goto label_1af060;
        }
    }
    ctx->pc = 0x1AF05Cu;
    // 0x1af05c: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x1af05cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_1af060:
    // 0x1af060: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af064: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1af064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1af068: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AF068u;
    SET_GPR_U32(ctx, 31, 0x1AF070u);
    ctx->pc = 0x1AF06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF068u;
    // 0x1af06c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AF068u, 0x1AF070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF070u;
label_1af070:
    // 0x1af070: 0x8e870024  lw          $a3, 0x24($s4)
    ctx->pc = 0x1af070u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x1af074: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af078: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1af078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af07c: 0x71202  srl         $v0, $a3, 8
    ctx->pc = 0x1af07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1af080: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x1af080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1af084: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1af084u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1af088: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x1af088u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x1af08c: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x1af08cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x1af090: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1af090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1af094: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1af094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1af098: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1af098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1af09c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1af09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1af0a0: 0x71602  srl         $v0, $a3, 24
    ctx->pc = 0x1af0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1af0a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1af0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1af0a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1af0ac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1af0acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1af0b0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1af0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1af0b4: 0xc070894  jal         func_1C2250
    ctx->pc = 0x1AF0B4u;
    SET_GPR_U32(ctx, 31, 0x1AF0BCu);
    ctx->pc = 0x1AF0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF0B4u;
    // 0x1af0b8: 0x433025  or          $a2, $v0, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2250u, 0x1AF0B4u, 0x1AF0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF0BCu;
label_1af0bc:
    // 0x1af0bc: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x1AF0BCu;
    SET_GPR_U32(ctx, 31, 0x1AF0C4u);
    ctx->pc = 0x1AF0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF0BCu;
    // 0x1af0c0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x1AF0BCu, 0x1AF0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF0C4u;
label_1af0c4:
    // 0x1af0c4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1af0c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1af0c8: 0x3c0344f2  lui         $v1, 0x44F2
    ctx->pc = 0x1af0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17650 << 16));
    // 0x1af0cc: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1af0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1af0d0: 0x4600d000  add.s       $f0, $f26, $f0
    ctx->pc = 0x1af0d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
    // 0x1af0d4: 0x4600c882  mul.s       $f2, $f25, $f0
    ctx->pc = 0x1af0d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x1af0d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1af0d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af0dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af0e0: 0x0  nop
    ctx->pc = 0x1af0e0u;
    // NOP
    // 0x1af0e4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1af0e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1af0e8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1af0e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1af0ec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1af0ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1af0f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1af0f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1af0f4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1af0f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1af0f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1af0fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1af0fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1af100: 0xc047a98  jal         func_11EA60
    ctx->pc = 0x1AF100u;
    SET_GPR_U32(ctx, 31, 0x1AF108u);
    ctx->pc = 0x1AF104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF100u;
    // 0x1af104: 0x28438  dsll        $s0, $v0, 16 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EA60u, 0x1AF100u, 0x1AF108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF108u;
label_1af108:
    // 0x1af108: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1af108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1af10c: 0x3c074400  lui         $a3, 0x4400
    ctx->pc = 0x1af10cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17408 << 16));
    // 0x1af110: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af114: 0x3c0644e0  lui         $a2, 0x44E0
    ctx->pc = 0x1af114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17632 << 16));
    // 0x1af118: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1af118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1af11c: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1af11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1af120: 0x70021389  pcpyld      $v0, $zero, $v0
    ctx->pc = 0x1af120u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1af124: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1af124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af128: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1af128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1af12c: 0x4600d880  add.s       $f2, $f27, $f0
    ctx->pc = 0x1af12cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[27], ctx->f[0]);
    // 0x1af130: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1af130u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af134: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1af134u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af138: 0x0  nop
    ctx->pc = 0x1af138u;
    // NOP
    // 0x1af13c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1af13cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1af140: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1af140u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1af144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1af144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1af148: 0x0  nop
    ctx->pc = 0x1af148u;
    // NOP
    // 0x1af14c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1af14cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1af150: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1af150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1af154: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1af154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1af158: 0x0  nop
    ctx->pc = 0x1af158u;
    // NOP
    // 0x1af15c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1af15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1af160: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1af160u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1af164: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x1af164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1af168: 0xc070854  jal         func_1C2150
    ctx->pc = 0x1AF168u;
    SET_GPR_U32(ctx, 31, 0x1AF170u);
    ctx->pc = 0x1AF16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF168u;
    // 0x1af16c: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2150u, 0x1AF168u, 0x1AF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF170u;
label_1af170:
    // 0x1af170: 0x8e83005c  lw          $v1, 0x5C($s4)
    ctx->pc = 0x1af170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x1af174: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1af174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1af178: 0x71082b  sltu        $at, $v1, $s1
    ctx->pc = 0x1af178u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1af17c: 0x1020ff9e  beqz        $at, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1AF17Cu;
    {
        const bool branch_taken_0x1af17c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF17Cu;
        // 0x1af180: 0x4616bdc0  add.s       $f23, $f23, $f22 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af17c) {
            ctx->pc = 0x1AEFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aeff8;
        }
    }
    ctx->pc = 0x1AF184u;
    // 0x1af184: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1af184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1af188: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x1af188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1af18c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1af18cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1af190: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1af190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1af194: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1af194u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1af198: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1af198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1af19c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1af19cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1af1a0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1af1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1af1a4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1af1a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1af1a8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1af1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1af1ac: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1af1acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1af1b0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1af1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1af1b4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1af1b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1af1b8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1af1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1af1bc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1af1bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af1c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1af1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1af1c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1af1c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af1c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1af1c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1af1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1CCu;
        // 0x1af1d0: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF1D4u;
}
