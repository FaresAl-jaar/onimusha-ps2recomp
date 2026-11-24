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

// Function: sub_003B2E90
// Address: 0x3b2e90 - 0x3b4490
void sub_003B2E90_0x3b2e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2E90_0x3b2e90");
#endif

    switch (ctx->pc) {
        case 0x3b2ed4u: goto label_3b2ed4;
        case 0x3b2f6cu: goto label_3b2f6c;
        case 0x3b2ff0u: goto label_3b2ff0;
        case 0x3b3028u: goto label_3b3028;
        case 0x3b3040u: goto label_3b3040;
        case 0x3b305cu: goto label_3b305c;
        case 0x3b307cu: goto label_3b307c;
        case 0x3b3090u: goto label_3b3090;
        case 0x3b30d4u: goto label_3b30d4;
        case 0x3b30ecu: goto label_3b30ec;
        case 0x3b3100u: goto label_3b3100;
        case 0x3b310cu: goto label_3b310c;
        case 0x3b3118u: goto label_3b3118;
        case 0x3b31b0u: goto label_3b31b0;
        case 0x3b32e0u: goto label_3b32e0;
        case 0x3b3304u: goto label_3b3304;
        case 0x3b3324u: goto label_3b3324;
        case 0x3b3344u: goto label_3b3344;
        case 0x3b33d8u: goto label_3b33d8;
        case 0x3b3404u: goto label_3b3404;
        case 0x3b3508u: goto label_3b3508;
        case 0x3b3524u: goto label_3b3524;
        case 0x3b35a0u: goto label_3b35a0;
        case 0x3b35bcu: goto label_3b35bc;
        case 0x3b35dcu: goto label_3b35dc;
        case 0x3b35e8u: goto label_3b35e8;
        case 0x3b360cu: goto label_3b360c;
        case 0x3b361cu: goto label_3b361c;
        case 0x3b3630u: goto label_3b3630;
        case 0x3b3688u: goto label_3b3688;
        case 0x3b36b0u: goto label_3b36b0;
        case 0x3b3718u: goto label_3b3718;
        case 0x3b381cu: goto label_3b381c;
        case 0x3b38ecu: goto label_3b38ec;
        case 0x3b39bcu: goto label_3b39bc;
        case 0x3b39e0u: goto label_3b39e0;
        case 0x3b3a44u: goto label_3b3a44;
        case 0x3b3c50u: goto label_3b3c50;
        case 0x3b3cc8u: goto label_3b3cc8;
        case 0x3b3ce4u: goto label_3b3ce4;
        case 0x3b3dd4u: goto label_3b3dd4;
        case 0x3b3e68u: goto label_3b3e68;
        case 0x3b3eacu: goto label_3b3eac;
        case 0x3b3ebcu: goto label_3b3ebc;
        case 0x3b3f10u: goto label_3b3f10;
        case 0x3b3f38u: goto label_3b3f38;
        case 0x3b3f5cu: goto label_3b3f5c;
        case 0x3b3f98u: goto label_3b3f98;
        case 0x3b3fa0u: goto label_3b3fa0;
        case 0x3b3fbcu: goto label_3b3fbc;
        case 0x3b3fc4u: goto label_3b3fc4;
        case 0x3b3fd8u: goto label_3b3fd8;
        case 0x3b3fe8u: goto label_3b3fe8;
        case 0x3b3ff8u: goto label_3b3ff8;
        case 0x3b400cu: goto label_3b400c;
        case 0x3b401cu: goto label_3b401c;
        case 0x3b4030u: goto label_3b4030;
        case 0x3b4040u: goto label_3b4040;
        case 0x3b4060u: goto label_3b4060;
        case 0x3b4068u: goto label_3b4068;
        case 0x3b4094u: goto label_3b4094;
        case 0x3b40a4u: goto label_3b40a4;
        case 0x3b40b4u: goto label_3b40b4;
        case 0x3b40c8u: goto label_3b40c8;
        case 0x3b40d8u: goto label_3b40d8;
        case 0x3b40ecu: goto label_3b40ec;
        case 0x3b40fcu: goto label_3b40fc;
        case 0x3b4124u: goto label_3b4124;
        case 0x3b4138u: goto label_3b4138;
        case 0x3b41a0u: goto label_3b41a0;
        case 0x3b4298u: goto label_3b4298;
        case 0x3b42a8u: goto label_3b42a8;
        case 0x3b42c0u: goto label_3b42c0;
        case 0x3b42d0u: goto label_3b42d0;
        case 0x3b4324u: goto label_3b4324;
        case 0x3b43a8u: goto label_3b43a8;
        case 0x3b43d8u: goto label_3b43d8;
        case 0x3b4430u: goto label_3b4430;
        default: break;
    }

    ctx->pc = 0x3b2e90u;

    // 0x3b2e90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3b2e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3b2e94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3b2e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3b2e98: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b2e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3b2e9c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b2e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3b2ea0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b2ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3b2ea4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b2ea4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2ea8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b2ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3b2eac: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3b2eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3b2eb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b2eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3b2eb4: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x3b2eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x3b2eb8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b2eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b2ebc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3b2ebcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3b2ec0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3b2ec0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b2ec4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b2ec4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b2ec8: 0x8e850034  lw          $a1, 0x34($s4)
    ctx->pc = 0x3b2ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x3b2ecc: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3B2ECCu;
    SET_GPR_U32(ctx, 31, 0x3B2ED4u);
    ctx->pc = 0x3B2ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2ECCu;
    // 0x3b2ed0: 0x27b100b0  addiu       $s1, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3B2ECCu, 0x3B2ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2ED4u;
label_3b2ed4:
    // 0x3b2ed4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b2ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b2ed8: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b2ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b2edc: 0xaf838c7c  sw          $v1, -0x7384($gp)
    ctx->pc = 0x3b2edcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 3));
    // 0x3b2ee0: 0x8c23cebc  lw          $v1, -0x3144($at)
    ctx->pc = 0x3b2ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3b2ee4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3b2ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3b2ee8: 0x1460055d  bnez        $v1, . + 4 + (0x55D << 2)
    ctx->pc = 0x3B2EE8u;
    {
        const bool branch_taken_0x3b2ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2EE8u;
        // 0x3b2eec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2ee8) {
            ctx->pc = 0x3B4460u;
            goto label_3b4460;
        }
    }
    ctx->pc = 0x3B2EF0u;
    // 0x3b2ef0: 0x3c01008d  lui         $at, 0x8D
    ctx->pc = 0x3b2ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)141 << 16));
    // 0x3b2ef4: 0x27838060  addiu       $v1, $gp, -0x7FA0
    ctx->pc = 0x3b2ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3b2ef8: 0x90246c1c  lbu         $a0, 0x6C1C($at)
    ctx->pc = 0x3b2ef8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x8D6C1Cu));
    // 0x3b2efc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3b2efcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3b2f00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3b2f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b2f04: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b2f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b2f08: 0x10600555  beqz        $v1, . + 4 + (0x555 << 2)
    ctx->pc = 0x3B2F08u;
    {
        const bool branch_taken_0x3b2f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F08u;
        // 0x3b2f0c: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2f08) {
            ctx->pc = 0x3B4460u;
            goto label_3b4460;
        }
    }
    ctx->pc = 0x3B2F10u;
    // 0x3b2f10: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x3b2f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x3b2f14: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x3b2f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x3b2f18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3B2F18u;
    {
        const bool branch_taken_0x3b2f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2f18) {
            ctx->pc = 0x3B2F58u;
            goto label_3b2f58;
        }
    }
    ctx->pc = 0x3B2F20u;
    // 0x3b2f20: 0x8f828060  lw          $v0, -0x7FA0($gp)
    ctx->pc = 0x3b2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x3b2f24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3B2F24u;
    {
        const bool branch_taken_0x3b2f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2f24) {
            ctx->pc = 0x3B2F58u;
            goto label_3b2f58;
        }
    }
    ctx->pc = 0x3B2F2Cu;
    // 0x3b2f2c: 0x8f838064  lw          $v1, -0x7F9C($gp)
    ctx->pc = 0x3b2f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x3b2f30: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B2F30u;
    {
        const bool branch_taken_0x3b2f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2f30) {
            ctx->pc = 0x3B2F58u;
            goto label_3b2f58;
        }
    }
    ctx->pc = 0x3B2F38u;
    // 0x3b2f38: 0x90422ac1  lbu         $v0, 0x2AC1($v0)
    ctx->pc = 0x3b2f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10945)));
    // 0x3b2f3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B2F3Cu;
    {
        const bool branch_taken_0x3b2f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2f3c) {
            ctx->pc = 0x3B2F58u;
            goto label_3b2f58;
        }
    }
    ctx->pc = 0x3B2F44u;
    // 0x3b2f44: 0x90622ac1  lbu         $v0, 0x2AC1($v1)
    ctx->pc = 0x3b2f44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10945)));
    // 0x3b2f48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2F48u;
    {
        const bool branch_taken_0x3b2f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F48u;
        // 0x3b2f4c: 0x64130001  daddiu      $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2f48) {
            ctx->pc = 0x3B2F58u;
            goto label_3b2f58;
        }
    }
    ctx->pc = 0x3B2F50u;
    // 0x3b2f50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B2F50u;
    {
        const bool branch_taken_0x3b2f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2f50) {
            ctx->pc = 0x3B2F60u;
            goto label_3b2f60;
        }
    }
    ctx->pc = 0x3B2F58u;
label_3b2f58:
    // 0x3b2f58: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3b2f58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2f5c: 0x0  nop
    ctx->pc = 0x3b2f5cu;
    // NOP
label_3b2f60:
    // 0x3b2f60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b2f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2f64: 0xc0ec780  jal         func_3B1E00
    ctx->pc = 0x3B2F64u;
    SET_GPR_U32(ctx, 31, 0x3B2F6Cu);
    ctx->pc = 0x3B2F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2F64u;
    // 0x3b2f68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1E00u, 0x3B2F64u, 0x3B2F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2F6Cu;
label_3b2f6c:
    // 0x3b2f6c: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x3b2f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3b2f70: 0x1060053b  beqz        $v1, . + 4 + (0x53B << 2)
    ctx->pc = 0x3B2F70u;
    {
        const bool branch_taken_0x3b2f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F70u;
        // 0x3b2f74: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2f70) {
            ctx->pc = 0x3B4460u;
            goto label_3b4460;
        }
    }
    ctx->pc = 0x3B2F78u;
    // 0x3b2f78: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x3b2f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954680)));
    // 0x3b2f7c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x3b2f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x3b2f80: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x3B2F80u;
    {
        const bool branch_taken_0x3b2f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2f80) {
            ctx->pc = 0x3B3140u;
            goto label_3b3140;
        }
    }
    ctx->pc = 0x3B2F88u;
    // 0x3b2f88: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b2f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b2f8c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x3b2f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEBCu));
    // 0x3b2f90: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3b2f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3b2f94: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x3B2F94u;
    {
        const bool branch_taken_0x3b2f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2f94) {
            ctx->pc = 0x3B3140u;
            goto label_3b3140;
        }
    }
    ctx->pc = 0x3B2F9Cu;
    // 0x3b2f9c: 0x92870122  lbu         $a3, 0x122($s4)
    ctx->pc = 0x3b2f9cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 290)));
    // 0x3b2fa0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3b2fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x3b2fa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b2fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b2fa8: 0x3c033d8e  lui         $v1, 0x3D8E
    ctx->pc = 0x3b2fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15758 << 16));
    // 0x3b2fac: 0x27868060  addiu       $a2, $gp, -0x7FA0
    ctx->pc = 0x3b2facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934624));
    // 0x3b2fb0: 0x3463fa36  ori         $v1, $v1, 0xFA36
    ctx->pc = 0x3b2fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64054);
    // 0x3b2fb4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3b2fb8: 0x38e20001  xori        $v0, $a3, 0x1
    ctx->pc = 0x3b2fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
    // 0x3b2fbc: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x3b2fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3b2fc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3b2fc4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x3b2fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3b2fc8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3b2fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3b2fcc: 0x8cb30000  lw          $s3, 0x0($a1)
    ctx->pc = 0x3b2fccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b2fd0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x3b2fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2fd4: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x3b2fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3b2fd8: 0xae8300e4  sw          $v1, 0xE4($s4)
    ctx->pc = 0x3b2fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 228), GPR_U32(ctx, 3));
    // 0x3b2fdc: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x3b2fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3b2fe0: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b2fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b2fe4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3b2fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3b2fe8: 0xc0414c0  jal         func_105300
    ctx->pc = 0x3B2FE8u;
    SET_GPR_U32(ctx, 31, 0x3B2FF0u);
    ctx->pc = 0x3B2FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2FE8u;
    // 0x3b2fec: 0xae820124  sw          $v0, 0x124($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x3B2FE8u, 0x3B2FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2FF0u;
label_3b2ff0:
    // 0x3b2ff0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x3b2ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b2ff4: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3b2ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x3b2ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b2ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b2ffc: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x3b2ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3b3000: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x3b3000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3b3004: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3b3004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3b3008: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3b3008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3b300c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x3b300cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x3b3010: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x3b3010u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3b3014: 0x7e830100  sq          $v1, 0x100($s4)
    ctx->pc = 0x3b3014u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 256), GPR_VEC(ctx, 3));
    // 0x3b3018: 0x8e830124  lw          $v1, 0x124($s4)
    ctx->pc = 0x3b3018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b301c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3b301cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b3020: 0xc096988  jal         func_25A620
    ctx->pc = 0x3B3020u;
    SET_GPR_U32(ctx, 31, 0x3B3028u);
    ctx->pc = 0x3B3024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3020u;
    // 0x3b3024: 0xae820124  sw          $v0, 0x124($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3B3020u, 0x3B3028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3028u;
label_3b3028:
    // 0x3b3028: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x3b3028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x3b302c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3b302cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x3b3030: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b3030u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3034: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b3034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b3038: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x3B3038u;
    SET_GPR_U32(ctx, 31, 0x3B3040u);
    ctx->pc = 0x3B303Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3038u;
    // 0x3b303c: 0x46000b40  add.s       $f13, $f1, $f0 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x3B3038u, 0x3B3040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3040u;
label_3b3040:
    // 0x3b3040: 0xe68000e8  swc1        $f0, 0xE8($s4)
    ctx->pc = 0x3b3040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 232), bits); }
    // 0x3b3044: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x3b3044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x3b3048: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b304c: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x3b304cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3b3050: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x3b3050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x3b3054: 0xc096988  jal         func_25A620
    ctx->pc = 0x3B3054u;
    SET_GPR_U32(ctx, 31, 0x3B305Cu);
    ctx->pc = 0x3B3058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3054u;
    // 0x3b3058: 0xae820124  sw          $v0, 0x124($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3B3054u, 0x3B305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B305Cu;
label_3b305c:
    // 0x3b305c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3b305cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x3b3060: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b3060u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3064: 0x0  nop
    ctx->pc = 0x3b3064u;
    // NOP
    // 0x3b3068: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b3068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b306c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x3B306Cu;
    {
        const bool branch_taken_0x3b306c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B3070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B306Cu;
        // 0x3b3070: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b306c) {
            ctx->pc = 0x3B30A8u;
            goto label_3b30a8;
        }
    }
    ctx->pc = 0x3B3074u;
    // 0x3b3074: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3B3074u;
    SET_GPR_U32(ctx, 31, 0x3B307Cu);
    ctx->pc = 0x3B3078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3074u;
    // 0x3b3078: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3B3074u, 0x3B307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B307Cu;
label_3b307c:
    // 0x3b307c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x3b307cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x3b3080: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3b3080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3b3084: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b3084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3088: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3B3088u;
    SET_GPR_U32(ctx, 31, 0x3B3090u);
    ctx->pc = 0x3B308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3088u;
    // 0x3b308c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3B3088u, 0x3B3090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3090u;
label_3b3090:
    // 0x3b3090: 0xe68000e0  swc1        $f0, 0xE0($s4)
    ctx->pc = 0x3b3090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 224), bits); }
    // 0x3b3094: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3098: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x3b3098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x3b309c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3B309Cu;
    {
        const bool branch_taken_0x3b309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B309Cu;
        // 0x3b30a0: 0xae820124  sw          $v0, 0x124($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b309c) {
            ctx->pc = 0x3B3138u;
            goto label_3b3138;
        }
    }
    ctx->pc = 0x3B30A4u;
    // 0x3b30a4: 0x0  nop
    ctx->pc = 0x3b30a4u;
    // NOP
label_3b30a8:
    // 0x3b30a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3b30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x3b30ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b30acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b30b0: 0x0  nop
    ctx->pc = 0x3b30b0u;
    // NOP
    // 0x3b30b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b30b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b30b8: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x3B30B8u;
    {
        const bool branch_taken_0x3b30b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b30b8) {
            ctx->pc = 0x3B3138u;
            goto label_3b3138;
        }
    }
    ctx->pc = 0x3B30C0u;
    // 0x3b30c0: 0x8f828060  lw          $v0, -0x7FA0($gp)
    ctx->pc = 0x3b30c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x3b30c4: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3b30c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3b30c8: 0x8c25fde8  lw          $a1, -0x218($at)
    ctx->pc = 0x3b30c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x80FDE8u));
    // 0x3b30cc: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3B30CCu;
    SET_GPR_U32(ctx, 31, 0x3B30D4u);
    ctx->pc = 0x3B30D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B30CCu;
    // 0x3b30d0: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3B30CCu, 0x3B30D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B30D4u;
label_3b30d4:
    // 0x3b30d4: 0x8f828064  lw          $v0, -0x7F9C($gp)
    ctx->pc = 0x3b30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x3b30d8: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3b30d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3b30dc: 0x8c25fde8  lw          $a1, -0x218($at)
    ctx->pc = 0x3b30dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x80FDE8u));
    // 0x3b30e0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3b30e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3b30e4: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3B30E4u;
    SET_GPR_U32(ctx, 31, 0x3B30ECu);
    ctx->pc = 0x3B30E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B30E4u;
    // 0x3b30e8: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3B30E4u, 0x3B30ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B30ECu;
label_3b30ec:
    // 0x3b30ec: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x3b30ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    // 0x3b30f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3b30f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3b30f4: 0x8c25fde8  lw          $a1, -0x218($at)
    ctx->pc = 0x3b30f4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x80FDE8u));
    // 0x3b30f8: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3B30F8u;
    SET_GPR_U32(ctx, 31, 0x3B3100u);
    ctx->pc = 0x3B30FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B30F8u;
    // 0x3b30fc: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3B30F8u, 0x3B3100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3100u;
label_3b3100:
    // 0x3b3100: 0x4600ab01  sub.s       $f12, $f21, $f0
    ctx->pc = 0x3b3100u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x3b3104: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3B3104u;
    SET_GPR_U32(ctx, 31, 0x3B310Cu);
    ctx->pc = 0x3B3108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3104u;
    // 0x3b3108: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3B3104u, 0x3B310Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B310Cu;
label_3b310c:
    // 0x3b310c: 0x4615b301  sub.s       $f12, $f22, $f21
    ctx->pc = 0x3b310cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x3b3110: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3B3110u;
    SET_GPR_U32(ctx, 31, 0x3B3118u);
    ctx->pc = 0x3B3114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3110u;
    // 0x3b3114: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3B3110u, 0x3B3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3118u;
label_3b3118:
    // 0x3b3118: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x3b3118u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b311c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3B311Cu;
    {
        const bool branch_taken_0x3b311c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B311Cu;
        // 0x3b3120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b311c) {
            ctx->pc = 0x3B3130u;
            goto label_3b3130;
        }
    }
    ctx->pc = 0x3B3124u;
    // 0x3b3124: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3124u;
    {
        const bool branch_taken_0x3b3124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3124u;
        // 0x3b3128: 0xa2820122  sb          $v0, 0x122($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 290), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3124) {
            ctx->pc = 0x3B3138u;
            goto label_3b3138;
        }
    }
    ctx->pc = 0x3B312Cu;
    // 0x3b312c: 0x0  nop
    ctx->pc = 0x3b312cu;
    // NOP
label_3b3130:
    // 0x3b3130: 0xa2800122  sb          $zero, 0x122($s4)
    ctx->pc = 0x3b3130u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 290), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b3134: 0x0  nop
    ctx->pc = 0x3b3134u;
    // NOP
label_3b3138:
    // 0x3b3138: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x3b3138u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x3b313c: 0x0  nop
    ctx->pc = 0x3b313cu;
    // NOP
label_3b3140:
    // 0x3b3140: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3140u;
    {
        const bool branch_taken_0x3b3140 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3140u;
        // 0x3b3144: 0x3c023dcc  lui         $v0, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3140) {
            ctx->pc = 0x3B3158u;
            goto label_3b3158;
        }
    }
    ctx->pc = 0x3B3148u;
    // 0x3b3148: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3b3148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3b314c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B314Cu;
    {
        const bool branch_taken_0x3b314c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B314Cu;
        // 0x3b3150: 0xae82011c  sw          $v0, 0x11C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b314c) {
            ctx->pc = 0x3B3168u;
            goto label_3b3168;
        }
    }
    ctx->pc = 0x3B3154u;
    // 0x3b3154: 0x0  nop
    ctx->pc = 0x3b3154u;
    // NOP
label_3b3158:
    // 0x3b3158: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x3b3158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x3b315c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x3b315cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x3b3160: 0xae82011c  sw          $v0, 0x11C($s4)
    ctx->pc = 0x3b3160u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 284), GPR_U32(ctx, 2));
    // 0x3b3164: 0x0  nop
    ctx->pc = 0x3b3164u;
    // NOP
label_3b3168:
    // 0x3b3168: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b316c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3b316cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3b3170: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x3B3170u;
    {
        const bool branch_taken_0x3b3170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3170) {
            ctx->pc = 0x3B3280u;
            goto label_3b3280;
        }
    }
    ctx->pc = 0x3B3178u;
    // 0x3b3178: 0x92830121  lbu         $v1, 0x121($s4)
    ctx->pc = 0x3b3178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 289)));
    // 0x3b317c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b317cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b3180: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3B3180u;
    {
        const bool branch_taken_0x3b3180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B3184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3180u;
        // 0x3b3184: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3180) {
            ctx->pc = 0x3B3218u;
            goto label_3b3218;
        }
    }
    ctx->pc = 0x3B3188u;
    // 0x3b3188: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3188u;
    {
        const bool branch_taken_0x3b3188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b3188) {
            ctx->pc = 0x3B3198u;
            goto label_3b3198;
        }
    }
    ctx->pc = 0x3B3190u;
    // 0x3b3190: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3B3190u;
    {
        const bool branch_taken_0x3b3190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3190) {
            ctx->pc = 0x3B3280u;
            goto label_3b3280;
        }
    }
    ctx->pc = 0x3B3198u;
label_3b3198:
    // 0x3b3198: 0x3c010069  lui         $at, 0x69
    ctx->pc = 0x3b3198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)105 << 16));
    // 0x3b319c: 0x84226cc2  lh          $v0, 0x6CC2($at)
    ctx->pc = 0x3b319cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x696CC2u));
    // 0x3b31a0: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x3b31a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x3b31a4: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x3b31a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3b31a8: 0xc0967cc  jal         func_259F30
    ctx->pc = 0x3B31A8u;
    SET_GPR_U32(ctx, 31, 0x3B31B0u);
    ctx->pc = 0x3B31ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B31A8u;
    // 0x3b31ac: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259F30u, 0x3B31A8u, 0x3B31B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B31B0u;
label_3b31b0:
    // 0x3b31b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b31b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b31b4: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3b31b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3b31b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b31b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b31bc: 0x0  nop
    ctx->pc = 0x3b31bcu;
    // NOP
    // 0x3b31c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b31c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b31c4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3b31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3b31c8: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x3b31c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3b31cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b31ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b31d0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3b31d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b31d4: 0x0  nop
    ctx->pc = 0x3b31d4u;
    // NOP
    // 0x3b31d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3b31d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3b31dc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3b31dcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3b31e0: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x3b31e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x3b31e4: 0xa2820121  sb          $v0, 0x121($s4)
    ctx->pc = 0x3b31e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 289), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b31e8: 0xc6800084  lwc1        $f0, 0x84($s4)
    ctx->pc = 0x3b31e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b31ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3b31ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3b31f0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3b31f0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3b31f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b31f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b31f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3b31f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3b31fc: 0x0  nop
    ctx->pc = 0x3b31fcu;
    // NOP
    // 0x3b3200: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3b3200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3b3204: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b3204u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b3208: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3b3208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3b320c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3B320Cu;
    {
        const bool branch_taken_0x3b320c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B320Cu;
        // 0x3b3210: 0xa782885c  sh          $v0, -0x77A4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294936668), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b320c) {
            ctx->pc = 0x3B3280u;
            goto label_3b3280;
        }
    }
    ctx->pc = 0x3B3214u;
    // 0x3b3214: 0x0  nop
    ctx->pc = 0x3b3214u;
    // NOP
label_3b3218:
    // 0x3b3218: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x3b3218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3b321c: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3b321cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3b3220: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3b3220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3b3224: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x3b3224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3b3228: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b3228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b322c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3b322cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b3230: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3b3230u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b3234: 0x84a300c2  lh          $v1, 0xC2($a1)
    ctx->pc = 0x3b3234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 194)));
    // 0x3b3238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b323c: 0x0  nop
    ctx->pc = 0x3b323cu;
    // NOP
    // 0x3b3240: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b3244: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3b3244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3b3248: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3b3248u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3b324c: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x3b324cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x3b3250: 0xa2820121  sb          $v0, 0x121($s4)
    ctx->pc = 0x3b3250u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 289), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b3254: 0xc6800084  lwc1        $f0, 0x84($s4)
    ctx->pc = 0x3b3254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3258: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3b3258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3b325c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3b325cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3b3260: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3260u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b3264: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3b3264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3b3268: 0x0  nop
    ctx->pc = 0x3b3268u;
    // NOP
    // 0x3b326c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3b326cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3b3270: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b3270u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b3274: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3b3274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3b3278: 0xa782885c  sh          $v0, -0x77A4($gp)
    ctx->pc = 0x3b3278u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936668), (uint16_t)GPR_U32(ctx, 2));
    // 0x3b327c: 0x0  nop
    ctx->pc = 0x3b327cu;
    // NOP
label_3b3280:
    // 0x3b3280: 0x8e840124  lw          $a0, 0x124($s4)
    ctx->pc = 0x3b3280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3284: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3b3284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x3b3288: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x3b3288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3b328c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B328Cu;
    {
        const bool branch_taken_0x3b328c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b328c) {
            ctx->pc = 0x3B32B8u;
            goto label_3b32b8;
        }
    }
    ctx->pc = 0x3B3294u;
    // 0x3b3294: 0x8e830128  lw          $v1, 0x128($s4)
    ctx->pc = 0x3b3294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
    // 0x3b3298: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3b3298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3b329c: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x3b329cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b32a0: 0x601827  not         $v1, $v1
    ctx->pc = 0x3b32a0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
    // 0x3b32a4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b32a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b32a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b32a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b32ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B32ACu;
    {
        const bool branch_taken_0x3b32ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B32B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B32ACu;
        // 0x3b32b0: 0x34820002  ori         $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b32ac) {
            ctx->pc = 0x3B32B8u;
            goto label_3b32b8;
        }
    }
    ctx->pc = 0x3B32B4u;
    // 0x3b32b4: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x3b32b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
label_3b32b8:
    // 0x3b32b8: 0x8e830124  lw          $v1, 0x124($s4)
    ctx->pc = 0x3b32b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b32bc: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x3b32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x3b32c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3b32c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3b32c4: 0xae830128  sw          $v1, 0x128($s4)
    ctx->pc = 0x3b32c4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 296), GPR_U32(ctx, 3));
    // 0x3b32c8: 0x8e830124  lw          $v1, 0x124($s4)
    ctx->pc = 0x3b32c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b32cc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b32ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b32d0: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B32D0u;
    {
        const bool branch_taken_0x3b32d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B32D0u;
        // 0x3b32d4: 0xae820124  sw          $v0, 0x124($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b32d0) {
            ctx->pc = 0x3B32E0u;
            goto label_3b32e0;
        }
    }
    ctx->pc = 0x3B32D8u;
    // 0x3b32d8: 0xc0ecb10  jal         func_3B2C40
    ctx->pc = 0x3B32D8u;
    SET_GPR_U32(ctx, 31, 0x3B32E0u);
    ctx->pc = 0x3B32DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32D8u;
    // 0x3b32dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2C40u, 0x3B32D8u, 0x3B32E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B32E0u;
label_3b32e0:
    // 0x3b32e0: 0x8e830124  lw          $v1, 0x124($s4)
    ctx->pc = 0x3b32e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b32e4: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x3b32e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3b32e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B32E8u;
    {
        const bool branch_taken_0x3b32e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B32E8u;
        // 0x3b32ec: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b32e8) {
            ctx->pc = 0x3B32F8u;
            goto label_3b32f8;
        }
    }
    ctx->pc = 0x3B32F0u;
    // 0x3b32f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B32F0u;
    {
        const bool branch_taken_0x3b32f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b32f0) {
            ctx->pc = 0x3B3308u;
            goto label_3b3308;
        }
    }
    ctx->pc = 0x3B32F8u;
label_3b32f8:
    // 0x3b32f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b32f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b32fc: 0xc0eca78  jal         func_3B29E0
    ctx->pc = 0x3B32FCu;
    SET_GPR_U32(ctx, 31, 0x3B3304u);
    ctx->pc = 0x3B3300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B32FCu;
    // 0x3b3300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B29E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B29E0u, 0x3B32FCu, 0x3B3304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3304u;
label_3b3304:
    // 0x3b3304: 0x0  nop
    ctx->pc = 0x3b3304u;
    // NOP
label_3b3308:
    // 0x3b3308: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b330c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3b330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x3b3310: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3310u;
    {
        const bool branch_taken_0x3b3310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3310) {
            ctx->pc = 0x3B3330u;
            goto label_3b3330;
        }
    }
    ctx->pc = 0x3B3318u;
    // 0x3b3318: 0x8e850110  lw          $a1, 0x110($s4)
    ctx->pc = 0x3b3318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 272)));
    // 0x3b331c: 0xc0ed124  jal         func_3B4490
    ctx->pc = 0x3B331Cu;
    SET_GPR_U32(ctx, 31, 0x3B3324u);
    ctx->pc = 0x3B3320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B331Cu;
    // 0x3b3320: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4490u, 0x3B331Cu, 0x3B3324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3324u;
label_3b3324:
    // 0x3b3324: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3B3324u;
    {
        const bool branch_taken_0x3b3324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3324) {
            ctx->pc = 0x3B3408u;
            goto label_3b3408;
        }
    }
    ctx->pc = 0x3B332Cu;
    // 0x3b332c: 0x0  nop
    ctx->pc = 0x3b332cu;
    // NOP
label_3b3330:
    // 0x3b3330: 0x8e850114  lw          $a1, 0x114($s4)
    ctx->pc = 0x3b3330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
    // 0x3b3334: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B3334u;
    {
        const bool branch_taken_0x3b3334 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3334u;
        // 0x3b3338: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3334) {
            ctx->pc = 0x3B3350u;
            goto label_3b3350;
        }
    }
    ctx->pc = 0x3B333Cu;
    // 0x3b333c: 0xc0ed124  jal         func_3B4490
    ctx->pc = 0x3B333Cu;
    SET_GPR_U32(ctx, 31, 0x3B3344u);
    ctx->pc = 0x3B4490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4490u, 0x3B333Cu, 0x3B3344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3344u;
label_3b3344:
    // 0x3b3344: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3B3344u;
    {
        const bool branch_taken_0x3b3344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3344) {
            ctx->pc = 0x3B3408u;
            goto label_3b3408;
        }
    }
    ctx->pc = 0x3B334Cu;
    // 0x3b334c: 0x0  nop
    ctx->pc = 0x3b334cu;
    // NOP
label_3b3350:
    // 0x3b3350: 0x828200de  lb          $v0, 0xDE($s4)
    ctx->pc = 0x3b3350u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 222)));
    // 0x3b3354: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b3354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b3358: 0xa28200df  sb          $v0, 0xDF($s4)
    ctx->pc = 0x3b3358u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 223), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b335c: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x3b335cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3b3360: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x3b3360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x3b3364: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B3364u;
    {
        const bool branch_taken_0x3b3364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3364u;
        // 0x3b3368: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3364) {
            ctx->pc = 0x3B3388u;
            goto label_3b3388;
        }
    }
    ctx->pc = 0x3B336Cu;
    // 0x3b336c: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x3b336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x3b3370: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3b3370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3b3374: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3374u;
    {
        const bool branch_taken_0x3b3374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3374u;
        // 0x3b3378: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3374) {
            ctx->pc = 0x3B3388u;
            goto label_3b3388;
        }
    }
    ctx->pc = 0x3B337Cu;
    // 0x3b337c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3B337Cu;
    {
        const bool branch_taken_0x3b337c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B337Cu;
        // 0x3b3380: 0xa28200de  sb          $v0, 0xDE($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 222), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b337c) {
            ctx->pc = 0x3B33E0u;
            goto label_3b33e0;
        }
    }
    ctx->pc = 0x3B3384u;
    // 0x3b3384: 0x0  nop
    ctx->pc = 0x3b3384u;
    // NOP
label_3b3388:
    // 0x3b3388: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b338c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3b338cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3b3390: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3390u;
    {
        const bool branch_taken_0x3b3390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3390) {
            ctx->pc = 0x3B33A8u;
            goto label_3b33a8;
        }
    }
    ctx->pc = 0x3B3398u;
    // 0x3b3398: 0x828200de  lb          $v0, 0xDE($s4)
    ctx->pc = 0x3b3398u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 222)));
    // 0x3b339c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b33a0: 0xa28200de  sb          $v0, 0xDE($s4)
    ctx->pc = 0x3b33a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 222), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b33a4: 0x0  nop
    ctx->pc = 0x3b33a4u;
    // NOP
label_3b33a8:
    // 0x3b33a8: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b33ac: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3b33acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3b33b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B33B0u;
    {
        const bool branch_taken_0x3b33b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b33b0) {
            ctx->pc = 0x3B33C8u;
            goto label_3b33c8;
        }
    }
    ctx->pc = 0x3B33B8u;
    // 0x3b33b8: 0x828200de  lb          $v0, 0xDE($s4)
    ctx->pc = 0x3b33b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 222)));
    // 0x3b33bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3b33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3b33c0: 0xa28200de  sb          $v0, 0xDE($s4)
    ctx->pc = 0x3b33c0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 222), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b33c4: 0x0  nop
    ctx->pc = 0x3b33c4u;
    // NOP
label_3b33c8:
    // 0x3b33c8: 0x828600de  lb          $a2, 0xDE($s4)
    ctx->pc = 0x3b33c8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 222)));
    // 0x3b33cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b33ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b33d0: 0xc09696c  jal         func_25A5B0
    ctx->pc = 0x3B33D0u;
    SET_GPR_U32(ctx, 31, 0x3B33D8u);
    ctx->pc = 0x3B33D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B33D0u;
    // 0x3b33d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5B0u, 0x3B33D0u, 0x3B33D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B33D8u;
label_3b33d8:
    // 0x3b33d8: 0xa28200de  sb          $v0, 0xDE($s4)
    ctx->pc = 0x3b33d8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 222), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b33dc: 0x0  nop
    ctx->pc = 0x3b33dcu;
    // NOP
label_3b33e0:
    // 0x3b33e0: 0x828300de  lb          $v1, 0xDE($s4)
    ctx->pc = 0x3b33e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 222)));
    // 0x3b33e4: 0x828200df  lb          $v0, 0xDF($s4)
    ctx->pc = 0x3b33e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 223)));
    // 0x3b33e8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B33E8u;
    {
        const bool branch_taken_0x3b33e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B33ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B33E8u;
        // 0x3b33ec: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b33e8) {
            ctx->pc = 0x3B3408u;
            goto label_3b3408;
        }
    }
    ctx->pc = 0x3B33F0u;
    // 0x3b33f0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3b33f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3b33f4: 0x2442dd90  addiu       $v0, $v0, -0x2270
    ctx->pc = 0x3b33f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958480));
    // 0x3b33f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b33f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b33fc: 0xc0ed124  jal         func_3B4490
    ctx->pc = 0x3B33FCu;
    SET_GPR_U32(ctx, 31, 0x3B3404u);
    ctx->pc = 0x3B3400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B33FCu;
    // 0x3b3400: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4490u, 0x3B33FCu, 0x3B3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3404u;
label_3b3404:
    // 0x3b3404: 0x0  nop
    ctx->pc = 0x3b3404u;
    // NOP
label_3b3408:
    // 0x3b3408: 0x928200dc  lbu         $v0, 0xDC($s4)
    ctx->pc = 0x3b3408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x3b340c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x3B340Cu;
    {
        const bool branch_taken_0x3b340c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B340Cu;
        // 0x3b3410: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b340c) {
            ctx->pc = 0x3B3530u;
            goto label_3b3530;
        }
    }
    ctx->pc = 0x3B3414u;
    // 0x3b3414: 0xa28300dc  sb          $v1, 0xDC($s4)
    ctx->pc = 0x3b3414u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 220), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b3418: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x3b3418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x3b341c: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b3420: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3b3420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b3424: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3b3424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3b3428: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x3b3428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3b342c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b342cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b3430: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b3430u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b3434: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b3434u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b343c: 0x0  nop
    ctx->pc = 0x3b343cu;
    // NOP
    // 0x3b3440: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b3440u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b3444: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b3444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b3448: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3448u;
    {
        const bool branch_taken_0x3b3448 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b3448) {
            ctx->pc = 0x3B3460u;
            goto label_3b3460;
        }
    }
    ctx->pc = 0x3B3450u;
    // 0x3b3450: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3450u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b3454: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b3454u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b3458: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3458u;
    {
        const bool branch_taken_0x3b3458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3458) {
            ctx->pc = 0x3B3478u;
            goto label_3b3478;
        }
    }
    ctx->pc = 0x3B3460u;
label_3b3460:
    // 0x3b3460: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b3460u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b3464: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b3464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b3468: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3468u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b346c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b346cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b3470: 0x0  nop
    ctx->pc = 0x3b3470u;
    // NOP
    // 0x3b3474: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3b3474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3b3478:
    // 0x3b3478: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3478u;
    {
        const bool branch_taken_0x3b3478 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3B347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3478u;
        // 0x3b347c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3478) {
            ctx->pc = 0x3B348Cu;
            goto label_3b348c;
        }
    }
    ctx->pc = 0x3B3480u;
    // 0x3b3480: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b3480u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3484: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3484u;
    {
        const bool branch_taken_0x3b3484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3484u;
        // 0x3b3488: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3484) {
            ctx->pc = 0x3B34A4u;
            goto label_3b34a4;
        }
    }
    ctx->pc = 0x3B348Cu;
label_3b348c:
    // 0x3b348c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b348cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3b3490: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b3494: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3498: 0x0  nop
    ctx->pc = 0x3b3498u;
    // NOP
    // 0x3b349c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b349cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b34a0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3b34a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3b34a4:
    // 0x3b34a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3b34a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3b34a8: 0x928200dc  lbu         $v0, 0xDC($s4)
    ctx->pc = 0x3b34a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x3b34ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b34acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b34b0: 0x0  nop
    ctx->pc = 0x3b34b0u;
    // NOP
    // 0x3b34b4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x3b34b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3b34b8: 0x0  nop
    ctx->pc = 0x3b34b8u;
    // NOP
    // 0x3b34bc: 0x0  nop
    ctx->pc = 0x3b34bcu;
    // NOP
    // 0x3b34c0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B34C0u;
    {
        const bool branch_taken_0x3b34c0 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3b34c0) {
            ctx->pc = 0x3B34D4u;
            goto label_3b34d4;
        }
    }
    ctx->pc = 0x3B34C8u;
    // 0x3b34c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b34c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b34cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B34CCu;
    {
        const bool branch_taken_0x3b34cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B34D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B34CCu;
        // 0x3b34d0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b34cc) {
            ctx->pc = 0x3B34F0u;
            goto label_3b34f0;
        }
    }
    ctx->pc = 0x3B34D4u;
label_3b34d4:
    // 0x3b34d4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b34d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b34d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b34d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b34dc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b34dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b34e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b34e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b34e4: 0x0  nop
    ctx->pc = 0x3b34e4u;
    // NOP
    // 0x3b34e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b34e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b34ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b34ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b34f0:
    // 0x3b34f0: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x3b34f0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3b34f4: 0x8e8500d8  lw          $a1, 0xD8($s4)
    ctx->pc = 0x3b34f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x3b34f8: 0x8e8600d4  lw          $a2, 0xD4($s4)
    ctx->pc = 0x3b34f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x3b34fc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x3b34fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3b3500: 0xc0414c0  jal         func_105300
    ctx->pc = 0x3B3500u;
    SET_GPR_U32(ctx, 31, 0x3B3508u);
    ctx->pc = 0x3B3504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3500u;
    // 0x3b3504: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x3B3500u, 0x3B3508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3508u;
label_3b3508:
    // 0x3b3508: 0x8e8300d8  lw          $v1, 0xD8($s4)
    ctx->pc = 0x3b3508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x3b350c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3b350cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x3b3510: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x3b3510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x3b3514: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3b3514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x3b3518: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x3b3518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3b351c: 0xc0414c0  jal         func_105300
    ctx->pc = 0x3B351Cu;
    SET_GPR_U32(ctx, 31, 0x3B3524u);
    ctx->pc = 0x3B3520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B351Cu;
    // 0x3b3520: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105300u, 0x3B351Cu, 0x3B3524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3524u;
label_3b3524:
    // 0x3b3524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3524u;
    {
        const bool branch_taken_0x3b3524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3524) {
            ctx->pc = 0x3B3538u;
            goto label_3b3538;
        }
    }
    ctx->pc = 0x3B352Cu;
    // 0x3b352c: 0x0  nop
    ctx->pc = 0x3b352cu;
    // NOP
label_3b3530:
    // 0x3b3530: 0x8e9100d4  lw          $s1, 0xD4($s4)
    ctx->pc = 0x3b3530u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x3b3534: 0x0  nop
    ctx->pc = 0x3b3534u;
    // NOP
label_3b3538:
    // 0x3b3538: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b3538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b353c: 0xe68000c0  swc1        $f0, 0xC0($s4)
    ctx->pc = 0x3b353cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 192), bits); }
    // 0x3b3540: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b3540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3544: 0xe6800080  swc1        $f0, 0x80($s4)
    ctx->pc = 0x3b3544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 128), bits); }
    // 0x3b3548: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3b3548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b354c: 0xe6800054  swc1        $f0, 0x54($s4)
    ctx->pc = 0x3b354cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
    // 0x3b3550: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3554: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x3b3554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x3b3558: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3558u;
    {
        const bool branch_taken_0x3b3558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3558) {
            ctx->pc = 0x3B3568u;
            goto label_3b3568;
        }
    }
    ctx->pc = 0x3B3560u;
    // 0x3b3560: 0xc68000e4  lwc1        $f0, 0xE4($s4)
    ctx->pc = 0x3b3560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3564: 0xe6800080  swc1        $f0, 0x80($s4)
    ctx->pc = 0x3b3564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 128), bits); }
label_3b3568:
    // 0x3b3568: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b356c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x3b356cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x3b3570: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3570u;
    {
        const bool branch_taken_0x3b3570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3570) {
            ctx->pc = 0x3B3580u;
            goto label_3b3580;
        }
    }
    ctx->pc = 0x3B3578u;
    // 0x3b3578: 0xc68000e8  lwc1        $f0, 0xE8($s4)
    ctx->pc = 0x3b3578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b357c: 0xe68000c0  swc1        $f0, 0xC0($s4)
    ctx->pc = 0x3b357cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 192), bits); }
label_3b3580:
    // 0x3b3580: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3584: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3b3584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x3b3588: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3588u;
    {
        const bool branch_taken_0x3b3588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3588) {
            ctx->pc = 0x3B3598u;
            goto label_3b3598;
        }
    }
    ctx->pc = 0x3B3590u;
    // 0x3b3590: 0xc68000ec  lwc1        $f0, 0xEC($s4)
    ctx->pc = 0x3b3590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3594: 0xe6800054  swc1        $f0, 0x54($s4)
    ctx->pc = 0x3b3594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
label_3b3598:
    // 0x3b3598: 0xc040274  jal         func_1009D0
    ctx->pc = 0x3B3598u;
    SET_GPR_U32(ctx, 31, 0x3B35A0u);
    ctx->pc = 0x3B359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3598u;
    // 0x3b359c: 0x26840048  addiu       $a0, $s4, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1009D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1009D0u, 0x3B3598u, 0x3B35A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B35A0u;
label_3b35a0:
    // 0x3b35a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B35A0u;
    {
        const bool branch_taken_0x3b35a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b35a0) {
            ctx->pc = 0x3B35C0u;
            goto label_3b35c0;
        }
    }
    ctx->pc = 0x3B35A8u;
    // 0x3b35a8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B35A8u;
    {
        const bool branch_taken_0x3b35a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B35ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35A8u;
        // 0x3b35ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b35a8) {
            ctx->pc = 0x3B35C0u;
            goto label_3b35c0;
        }
    }
    ctx->pc = 0x3B35B0u;
    // 0x3b35b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3b35b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b35b4: 0xc040250  jal         func_100940
    ctx->pc = 0x3B35B4u;
    SET_GPR_U32(ctx, 31, 0x3B35BCu);
    ctx->pc = 0x3B35B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B35B4u;
    // 0x3b35b8: 0x26990048  addiu       $t9, $s4, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100940u, 0x3B35B4u, 0x3B35BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B35BCu;
label_3b35bc:
    // 0x3b35bc: 0x0  nop
    ctx->pc = 0x3b35bcu;
    // NOP
label_3b35c0:
    // 0x3b35c0: 0x8e900030  lw          $s0, 0x30($s4)
    ctx->pc = 0x3b35c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3b35c4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3b35c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3b35c8: 0x26860060  addiu       $a2, $s4, 0x60
    ctx->pc = 0x3b35c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x3b35cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b35ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b35d0: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3b35d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3b35d4: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3B35D4u;
    SET_GPR_U32(ctx, 31, 0x3B35DCu);
    ctx->pc = 0x3B35D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B35D4u;
    // 0x3b35d8: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3B35D4u, 0x3B35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B35DCu;
label_3b35dc:
    // 0x3b35dc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3b35dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3b35e0: 0xc0968fc  jal         func_25A3F0
    ctx->pc = 0x3B35E0u;
    SET_GPR_U32(ctx, 31, 0x3B35E8u);
    ctx->pc = 0x3B35E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B35E0u;
    // 0x3b35e4: 0xafa000d4  sw          $zero, 0xD4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A3F0u, 0x3B35E0u, 0x3B35E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B35E8u;
label_3b35e8:
    // 0x3b35e8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x3b35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x3b35ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b35ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b35f0: 0x0  nop
    ctx->pc = 0x3b35f0u;
    // NOP
    // 0x3b35f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b35f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b35f8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x3B35F8u;
    {
        const bool branch_taken_0x3b35f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35F8u;
        // 0x3b35fc: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b35f8) {
            ctx->pc = 0x3B3620u;
            goto label_3b3620;
        }
    }
    ctx->pc = 0x3B3600u;
    // 0x3b3600: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3b3600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3b3604: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x3B3604u;
    SET_GPR_U32(ctx, 31, 0x3B360Cu);
    ctx->pc = 0x3B3608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3604u;
    // 0x3b3608: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x3B3604u, 0x3B360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B360Cu;
label_3b360c:
    // 0x3b360c: 0x26840060  addiu       $a0, $s4, 0x60
    ctx->pc = 0x3b360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x3b3610: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x3b3610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3b3614: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3B3614u;
    SET_GPR_U32(ctx, 31, 0x3B361Cu);
    ctx->pc = 0x3B3618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3614u;
    // 0x3b3618: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3B3614u, 0x3B361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B361Cu;
label_3b361c:
    // 0x3b361c: 0x0  nop
    ctx->pc = 0x3b361cu;
    // NOP
label_3b3620:
    // 0x3b3620: 0xc68c0054  lwc1        $f12, 0x54($s4)
    ctx->pc = 0x3b3620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b3624: 0xc60d0024  lwc1        $f13, 0x24($s0)
    ctx->pc = 0x3b3624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3b3628: 0xc0ec9f4  jal         func_3B27D0
    ctx->pc = 0x3B3628u;
    SET_GPR_U32(ctx, 31, 0x3B3630u);
    ctx->pc = 0x3B362Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3628u;
    // 0x3b362c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B27D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B27D0u, 0x3B3628u, 0x3B3630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3630u;
label_3b3630:
    // 0x3b3630: 0xc6840064  lwc1        $f4, 0x64($s4)
    ctx->pc = 0x3b3630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3b3634: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b3634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3b3638: 0xc6830054  lwc1        $f3, 0x54($s4)
    ctx->pc = 0x3b3638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b363c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x3b363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b3640: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b3640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b3644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3648: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x3b3648u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x3b364c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3b364cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x3b3650: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x3b3650u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b3654: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x3B3654u;
    {
        const bool branch_taken_0x3b3654 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3654u;
        // 0x3b3658: 0x3c024316  lui         $v0, 0x4316 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3654) {
            ctx->pc = 0x3B3688u;
            goto label_3b3688;
        }
    }
    ctx->pc = 0x3B365Cu;
    // 0x3b365c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b365cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b3660: 0x0  nop
    ctx->pc = 0x3b3660u;
    // NOP
    // 0x3b3664: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x3b3664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b3668: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3668u;
    {
        const bool branch_taken_0x3b3668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b3668) {
            ctx->pc = 0x3B3688u;
            goto label_3b3688;
        }
    }
    ctx->pc = 0x3B3670u;
    // 0x3b3670: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x3b3670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x3b3674: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3b3674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3b3678: 0x460c1041  sub.s       $f1, $f2, $f12
    ctx->pc = 0x3b3678u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x3b367c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b367cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3680: 0xc096964  jal         func_25A590
    ctx->pc = 0x3B3680u;
    SET_GPR_U32(ctx, 31, 0x3B3688u);
    ctx->pc = 0x3B3684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3680u;
    // 0x3b3684: 0x46010342  mul.s       $f13, $f0, $f1 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A590u, 0x3B3680u, 0x3B3688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3688u;
label_3b3688:
    // 0x3b3688: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b368c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b368cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b3690: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3690u;
    {
        const bool branch_taken_0x3b3690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3690) {
            ctx->pc = 0x3B36A0u;
            goto label_3b36a0;
        }
    }
    ctx->pc = 0x3B3698u;
    // 0x3b3698: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3698u;
    {
        const bool branch_taken_0x3b3698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B369Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3698u;
        // 0x3b369c: 0xe68000cc  swc1        $f0, 0xCC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3698) {
            ctx->pc = 0x3B36B8u;
            goto label_3b36b8;
        }
    }
    ctx->pc = 0x3B36A0u;
label_3b36a0:
    // 0x3b36a0: 0xc68d00cc  lwc1        $f13, 0xCC($s4)
    ctx->pc = 0x3b36a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3b36a4: 0xc68e011c  lwc1        $f14, 0x11C($s4)
    ctx->pc = 0x3b36a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3b36a8: 0xc0ec884  jal         func_3B2210
    ctx->pc = 0x3B36A8u;
    SET_GPR_U32(ctx, 31, 0x3B36B0u);
    ctx->pc = 0x3B36ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B36A8u;
    // 0x3b36ac: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2210u, 0x3B36A8u, 0x3B36B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B36B0u;
label_3b36b0:
    // 0x3b36b0: 0xe68000cc  swc1        $f0, 0xCC($s4)
    ctx->pc = 0x3b36b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 204), bits); }
    // 0x3b36b4: 0x0  nop
    ctx->pc = 0x3b36b4u;
    // NOP
label_3b36b8:
    // 0x3b36b8: 0x8e830124  lw          $v1, 0x124($s4)
    ctx->pc = 0x3b36b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b36bc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3b36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x3b36c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b36c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b36c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B36C4u;
    {
        const bool branch_taken_0x3b36c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b36c4) {
            ctx->pc = 0x3B36D8u;
            goto label_3b36d8;
        }
    }
    ctx->pc = 0x3B36CCu;
    // 0x3b36cc: 0x7a820100  lq          $v0, 0x100($s4)
    ctx->pc = 0x3b36ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 256)));
    // 0x3b36d0: 0x7e820060  sq          $v0, 0x60($s4)
    ctx->pc = 0x3b36d0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 96), GPR_VEC(ctx, 2));
    // 0x3b36d4: 0x0  nop
    ctx->pc = 0x3b36d4u;
    // NOP
label_3b36d8:
    // 0x3b36d8: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b36d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b36dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b36dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b36e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B36E0u;
    {
        const bool branch_taken_0x3b36e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b36e0) {
            ctx->pc = 0x3B36F8u;
            goto label_3b36f8;
        }
    }
    ctx->pc = 0x3B36E8u;
    // 0x3b36e8: 0x7a820060  lq          $v0, 0x60($s4)
    ctx->pc = 0x3b36e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x3b36ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3B36ECu;
    {
        const bool branch_taken_0x3b36ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B36F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B36ECu;
        // 0x3b36f0: 0x7e820070  sq          $v0, 0x70($s4) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 20), 112), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b36ec) {
            ctx->pc = 0x3B3718u;
            goto label_3b3718;
        }
    }
    ctx->pc = 0x3B36F4u;
    // 0x3b36f4: 0x0  nop
    ctx->pc = 0x3b36f4u;
    // NOP
label_3b36f8:
    // 0x3b36f8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3b36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x3b36fc: 0xc68c011c  lwc1        $f12, 0x11C($s4)
    ctx->pc = 0x3b36fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b3700: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3b3700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x3b3704: 0x26840070  addiu       $a0, $s4, 0x70
    ctx->pc = 0x3b3704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x3b3708: 0x26850060  addiu       $a1, $s4, 0x60
    ctx->pc = 0x3b3708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x3b370c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3b370cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3b3710: 0xc0ec860  jal         func_3B2180
    ctx->pc = 0x3B3710u;
    SET_GPR_U32(ctx, 31, 0x3B3718u);
    ctx->pc = 0x3B3714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3710u;
    // 0x3b3714: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2180u, 0x3B3710u, 0x3B3718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3718u;
label_3b3718:
    // 0x3b3718: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b371c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3b371cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3b3720: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B3720u;
    {
        const bool branch_taken_0x3b3720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3720) {
            ctx->pc = 0x3B3748u;
            goto label_3b3748;
        }
    }
    ctx->pc = 0x3B3728u;
    // 0x3b3728: 0xc6810084  lwc1        $f1, 0x84($s4)
    ctx->pc = 0x3b3728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b372c: 0x3c023d39  lui         $v0, 0x3D39
    ctx->pc = 0x3b372cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15673 << 16));
    // 0x3b3730: 0x3442dede  ori         $v0, $v0, 0xDEDE
    ctx->pc = 0x3b3730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57054);
    // 0x3b3734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3738: 0x0  nop
    ctx->pc = 0x3b3738u;
    // NOP
    // 0x3b373c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3b373cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3b3740: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x3b3740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x3b3744: 0x0  nop
    ctx->pc = 0x3b3744u;
    // NOP
label_3b3748:
    // 0x3b3748: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b374c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3b374cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3b3750: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B3750u;
    {
        const bool branch_taken_0x3b3750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3750) {
            ctx->pc = 0x3B3778u;
            goto label_3b3778;
        }
    }
    ctx->pc = 0x3B3758u;
    // 0x3b3758: 0xc6810084  lwc1        $f1, 0x84($s4)
    ctx->pc = 0x3b3758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b375c: 0x3c023d39  lui         $v0, 0x3D39
    ctx->pc = 0x3b375cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15673 << 16));
    // 0x3b3760: 0x3442dede  ori         $v0, $v0, 0xDEDE
    ctx->pc = 0x3b3760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57054);
    // 0x3b3764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3768: 0x0  nop
    ctx->pc = 0x3b3768u;
    // NOP
    // 0x3b376c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b376cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b3770: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x3b3770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x3b3774: 0x0  nop
    ctx->pc = 0x3b3774u;
    // NOP
label_3b3778:
    // 0x3b3778: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b377c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3b377cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3b3780: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B3780u;
    {
        const bool branch_taken_0x3b3780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3780) {
            ctx->pc = 0x3B37A8u;
            goto label_3b37a8;
        }
    }
    ctx->pc = 0x3B3788u;
    // 0x3b3788: 0xc6810084  lwc1        $f1, 0x84($s4)
    ctx->pc = 0x3b3788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b378c: 0x3c023d39  lui         $v0, 0x3D39
    ctx->pc = 0x3b378cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15673 << 16));
    // 0x3b3790: 0x3442dede  ori         $v0, $v0, 0xDEDE
    ctx->pc = 0x3b3790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57054);
    // 0x3b3794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3798: 0x0  nop
    ctx->pc = 0x3b3798u;
    // NOP
    // 0x3b379c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3b379cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3b37a0: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x3b37a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x3b37a4: 0x0  nop
    ctx->pc = 0x3b37a4u;
    // NOP
label_3b37a8:
    // 0x3b37a8: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b37a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b37ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3b37acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3b37b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B37B0u;
    {
        const bool branch_taken_0x3b37b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b37b0) {
            ctx->pc = 0x3B37D8u;
            goto label_3b37d8;
        }
    }
    ctx->pc = 0x3B37B8u;
    // 0x3b37b8: 0xc6810084  lwc1        $f1, 0x84($s4)
    ctx->pc = 0x3b37b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b37bc: 0x3c023d39  lui         $v0, 0x3D39
    ctx->pc = 0x3b37bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15673 << 16));
    // 0x3b37c0: 0x3442dede  ori         $v0, $v0, 0xDEDE
    ctx->pc = 0x3b37c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57054);
    // 0x3b37c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b37c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b37c8: 0x0  nop
    ctx->pc = 0x3b37c8u;
    // NOP
    // 0x3b37cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b37ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b37d0: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x3b37d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x3b37d4: 0x0  nop
    ctx->pc = 0x3b37d4u;
    // NOP
label_3b37d8:
    // 0x3b37d8: 0x166000fd  bnez        $s3, . + 4 + (0xFD << 2)
    ctx->pc = 0x3B37D8u;
    {
        const bool branch_taken_0x3b37d8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b37d8) {
            ctx->pc = 0x3B3BD0u;
            goto label_3b3bd0;
        }
    }
    ctx->pc = 0x3B37E0u;
    // 0x3b37e0: 0xde020500  ld          $v0, 0x500($s0)
    ctx->pc = 0x3b37e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x3b37e4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3b37e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3b37e8: 0x104000f9  beqz        $v0, . + 4 + (0xF9 << 2)
    ctx->pc = 0x3B37E8u;
    {
        const bool branch_taken_0x3b37e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b37e8) {
            ctx->pc = 0x3B3BD0u;
            goto label_3b3bd0;
        }
    }
    ctx->pc = 0x3B37F0u;
    // 0x3b37f0: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b37f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b37f4: 0x304201e0  andi        $v0, $v0, 0x1E0
    ctx->pc = 0x3b37f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)480);
    // 0x3b37f8: 0x144000f5  bnez        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x3B37F8u;
    {
        const bool branch_taken_0x3b37f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b37f8) {
            ctx->pc = 0x3B3BD0u;
            goto label_3b3bd0;
        }
    }
    ctx->pc = 0x3B3800u;
    // 0x3b3800: 0x9203065c  lbu         $v1, 0x65C($s0)
    ctx->pc = 0x3b3800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1628)));
    // 0x3b3804: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b3804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b3808: 0x146200f1  bne         $v1, $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x3B3808u;
    {
        const bool branch_taken_0x3b3808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b3808) {
            ctx->pc = 0x3B3BD0u;
            goto label_3b3bd0;
        }
    }
    ctx->pc = 0x3B3810u;
    // 0x3b3810: 0x861204e8  lh          $s2, 0x4E8($s0)
    ctx->pc = 0x3b3810u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1256)));
    // 0x3b3814: 0xc096a08  jal         func_25A820
    ctx->pc = 0x3B3814u;
    SET_GPR_U32(ctx, 31, 0x3B381Cu);
    ctx->pc = 0x3B3818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3814u;
    // 0x3b3818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A820u, 0x3B3814u, 0x3B381Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B381Cu;
label_3b381c:
    // 0x3b381c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b381cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3b3820: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x3B3820u;
    {
        const bool branch_taken_0x3b3820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B3824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3820u;
        // 0x3b3824: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3820) {
            ctx->pc = 0x3B38C0u;
            goto label_3b38c0;
        }
    }
    ctx->pc = 0x3B3828u;
    // 0x3b3828: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3B3828u;
    {
        const bool branch_taken_0x3b3828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b3828) {
            ctx->pc = 0x3B3878u;
            goto label_3b3878;
        }
    }
    ctx->pc = 0x3B3830u;
    // 0x3b3830: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b3830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b3834: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3B3834u;
    {
        const bool branch_taken_0x3b3834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b3834) {
            ctx->pc = 0x3B3860u;
            goto label_3b3860;
        }
    }
    ctx->pc = 0x3B383Cu;
    // 0x3b383c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B383Cu;
    {
        const bool branch_taken_0x3b383c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b383c) {
            ctx->pc = 0x3B3850u;
            goto label_3b3850;
        }
    }
    ctx->pc = 0x3B3844u;
    // 0x3b3844: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3B3844u;
    {
        const bool branch_taken_0x3b3844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3844) {
            ctx->pc = 0x3B38D8u;
            goto label_3b38d8;
        }
    }
    ctx->pc = 0x3B384Cu;
    // 0x3b384c: 0x0  nop
    ctx->pc = 0x3b384cu;
    // NOP
label_3b3850:
    // 0x3b3850: 0xa28000d0  sb          $zero, 0xD0($s4)
    ctx->pc = 0x3b3850u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 208), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b3854: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3B3854u;
    {
        const bool branch_taken_0x3b3854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3854u;
        // 0x3b3858: 0xa28000d1  sb          $zero, 0xD1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 209), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3854) {
            ctx->pc = 0x3B38D8u;
            goto label_3b38d8;
        }
    }
    ctx->pc = 0x3B385Cu;
    // 0x3b385c: 0x0  nop
    ctx->pc = 0x3b385cu;
    // NOP
label_3b3860:
    // 0x3b3860: 0x928200d0  lbu         $v0, 0xD0($s4)
    ctx->pc = 0x3b3860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x3b3864: 0x1043001c  beq         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3B3864u;
    {
        const bool branch_taken_0x3b3864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b3864) {
            ctx->pc = 0x3B38D8u;
            goto label_3b38d8;
        }
    }
    ctx->pc = 0x3B386Cu;
    // 0x3b386c: 0xa28000d1  sb          $zero, 0xD1($s4)
    ctx->pc = 0x3b386cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 209), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b3870: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3B3870u;
    {
        const bool branch_taken_0x3b3870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3870u;
        // 0x3b3874: 0xa28300d0  sb          $v1, 0xD0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 208), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3870) {
            ctx->pc = 0x3B38D8u;
            goto label_3b38d8;
        }
    }
    ctx->pc = 0x3B3878u;
label_3b3878:
    // 0x3b3878: 0x928200d0  lbu         $v0, 0xD0($s4)
    ctx->pc = 0x3b3878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x3b387c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B387Cu;
    {
        const bool branch_taken_0x3b387c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b387c) {
            ctx->pc = 0x3B3888u;
            goto label_3b3888;
        }
    }
    ctx->pc = 0x3B3884u;
    // 0x3b3884: 0xa28000d1  sb          $zero, 0xD1($s4)
    ctx->pc = 0x3b3884u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 209), (uint8_t)GPR_U32(ctx, 0));
label_3b3888:
    // 0x3b3888: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x3b3888u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b388c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b388cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3890: 0x0  nop
    ctx->pc = 0x3b3890u;
    // NOP
    // 0x3b3894: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3b3894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b3898: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3b3898u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b389c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3B389Cu;
    {
        const bool branch_taken_0x3b389c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B38A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B389Cu;
        // 0x3b38a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b389c) {
            ctx->pc = 0x3B38B0u;
            goto label_3b38b0;
        }
    }
    ctx->pc = 0x3B38A4u;
    // 0x3b38a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3B38A4u;
    {
        const bool branch_taken_0x3b38a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B38A4u;
        // 0x3b38a8: 0xa28200d0  sb          $v0, 0xD0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 208), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b38a4) {
            ctx->pc = 0x3B38D8u;
            goto label_3b38d8;
        }
    }
    ctx->pc = 0x3B38ACu;
    // 0x3b38ac: 0x0  nop
    ctx->pc = 0x3b38acu;
    // NOP
label_3b38b0:
    // 0x3b38b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b38b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b38b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B38B4u;
    {
        const bool branch_taken_0x3b38b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B38B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B38B4u;
        // 0x3b38b8: 0xa28200d0  sb          $v0, 0xD0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 208), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b38b4) {
            ctx->pc = 0x3B38D8u;
            goto label_3b38d8;
        }
    }
    ctx->pc = 0x3B38BCu;
    // 0x3b38bc: 0x0  nop
    ctx->pc = 0x3b38bcu;
    // NOP
label_3b38c0:
    // 0x3b38c0: 0x928300d0  lbu         $v1, 0xD0($s4)
    ctx->pc = 0x3b38c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x3b38c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b38c8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B38C8u;
    {
        const bool branch_taken_0x3b38c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b38c8) {
            ctx->pc = 0x3B38D8u;
            goto label_3b38d8;
        }
    }
    ctx->pc = 0x3B38D0u;
    // 0x3b38d0: 0xa28000d1  sb          $zero, 0xD1($s4)
    ctx->pc = 0x3b38d0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 209), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b38d4: 0xa28200d0  sb          $v0, 0xD0($s4)
    ctx->pc = 0x3b38d4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 208), (uint8_t)GPR_U32(ctx, 2));
label_3b38d8:
    // 0x3b38d8: 0x928200d0  lbu         $v0, 0xD0($s4)
    ctx->pc = 0x3b38d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x3b38dc: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x3B38DCu;
    {
        const bool branch_taken_0x3b38dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B38E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B38DCu;
        // 0x3b38e0: 0x12243c  dsll32      $a0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b38dc) {
            ctx->pc = 0x3B3BE8u;
            goto label_3b3be8;
        }
    }
    ctx->pc = 0x3B38E4u;
    // 0x3b38e4: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x3B38E4u;
    SET_GPR_U32(ctx, 31, 0x3B38ECu);
    ctx->pc = 0x3B38E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B38E4u;
    // 0x3b38e8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x3B38E4u, 0x3B38ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B38ECu;
label_3b38ec:
    // 0x3b38ec: 0xc7838078  lwc1        $f3, -0x7F88($gp)
    ctx->pc = 0x3b38ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b38f0: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x3b38f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x3b38f4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b38f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b38f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b38f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b38fc: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3b38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3b3900: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3b3900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3b3904: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b3904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3908: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3b3908u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3b390c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b390cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b3910: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b3910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b3914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3918: 0x0  nop
    ctx->pc = 0x3b3918u;
    // NOP
    // 0x3b391c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b391cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b3920: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3920u;
    {
        const bool branch_taken_0x3b3920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b3920) {
            ctx->pc = 0x3B3938u;
            goto label_3b3938;
        }
    }
    ctx->pc = 0x3B3928u;
    // 0x3b3928: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3928u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b392c: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x3b392cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x3b3930: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B3930u;
    {
        const bool branch_taken_0x3b3930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3930u;
        // 0x3b3934: 0x3c034270  lui         $v1, 0x4270 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3930) {
            ctx->pc = 0x3B3954u;
            goto label_3b3954;
        }
    }
    ctx->pc = 0x3B3938u;
label_3b3938:
    // 0x3b3938: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b3938u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b393c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b393cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b3940: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3940u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b3944: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x3b3944u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x3b3948: 0x0  nop
    ctx->pc = 0x3b3948u;
    // NOP
    // 0x3b394c: 0x2a2a825  or          $s5, $s5, $v0
    ctx->pc = 0x3b394cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x3b3950: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x3b3950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_3b3954:
    // 0x3b3954: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x3b3954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x3b3958: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b3958u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b395c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x3b395cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x3b3960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3964: 0x0  nop
    ctx->pc = 0x3b3964u;
    // NOP
    // 0x3b3968: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3b3968u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3b396c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b396cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b3970: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3b3970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3b3974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3978: 0x0  nop
    ctx->pc = 0x3b3978u;
    // NOP
    // 0x3b397c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b397cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b3980: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3980u;
    {
        const bool branch_taken_0x3b3980 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b3980) {
            ctx->pc = 0x3B3998u;
            goto label_3b3998;
        }
    }
    ctx->pc = 0x3B3988u;
    // 0x3b3988: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b398c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b398cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b3990: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B3990u;
    {
        const bool branch_taken_0x3b3990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3990u;
        // 0x3b3994: 0x928200d1  lbu         $v0, 0xD1($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 209)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3990) {
            ctx->pc = 0x3B39B4u;
            goto label_3b39b4;
        }
    }
    ctx->pc = 0x3B3998u;
label_3b3998:
    // 0x3b3998: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b3998u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b399c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b399cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b39a0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b39a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b39a4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b39a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b39a8: 0x0  nop
    ctx->pc = 0x3b39a8u;
    // NOP
    // 0x3b39ac: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3b39acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3b39b0: 0x928200d1  lbu         $v0, 0xD1($s4)
    ctx->pc = 0x3b39b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 209)));
label_3b39b4:
    // 0x3b39b4: 0xc096970  jal         func_25A5C0
    ctx->pc = 0x3B39B4u;
    SET_GPR_U32(ctx, 31, 0x3B39BCu);
    ctx->pc = 0x3B39B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B39B4u;
    // 0x3b39b8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5C0u, 0x3B39B4u, 0x3B39BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B39BCu;
label_3b39bc:
    // 0x3b39bc: 0xa28200d1  sb          $v0, 0xD1($s4)
    ctx->pc = 0x3b39bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 209), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b39c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3b39c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3b39c4: 0x2a2082b  sltu        $at, $s5, $v0
    ctx->pc = 0x3b39c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3b39c8: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x3B39C8u;
    {
        const bool branch_taken_0x3b39c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B39CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B39C8u;
        // 0x3b39cc: 0x2e410400  sltiu       $at, $s2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b39c8) {
            ctx->pc = 0x3B3AA0u;
            goto label_3b3aa0;
        }
    }
    ctx->pc = 0x3B39D0u;
    // 0x3b39d0: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B39D0u;
    {
        const bool branch_taken_0x3b39d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B39D0u;
        // 0x3b39d4: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b39d0) {
            ctx->pc = 0x3B3A30u;
            goto label_3b3a30;
        }
    }
    ctx->pc = 0x3B39D8u;
    // 0x3b39d8: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x3B39D8u;
    SET_GPR_U32(ctx, 31, 0x3B39E0u);
    ctx->pc = 0x3B39DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B39D8u;
    // 0x3b39dc: 0x522023  subu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x3B39D8u, 0x3B39E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B39E0u;
label_3b39e0:
    // 0x3b39e0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B39E0u;
    {
        const bool branch_taken_0x3b39e0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3B39E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B39E0u;
        // 0x3b39e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b39e0) {
            ctx->pc = 0x3B39F4u;
            goto label_3b39f4;
        }
    }
    ctx->pc = 0x3B39E8u;
    // 0x3b39e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b39e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b39ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B39ECu;
    {
        const bool branch_taken_0x3b39ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B39F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B39ECu;
        // 0x3b39f0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b39ec) {
            ctx->pc = 0x3B3A0Cu;
            goto label_3b3a0c;
        }
    }
    ctx->pc = 0x3B39F4u;
label_3b39f4:
    // 0x3b39f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b39f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b39f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b39f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b39fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b39fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3a00: 0x0  nop
    ctx->pc = 0x3b3a00u;
    // NOP
    // 0x3b3a04: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b3a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b3a08: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3b3a08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3b3a0c:
    // 0x3b3a0c: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x3b3a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x3b3a10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3a14: 0x0  nop
    ctx->pc = 0x3b3a14u;
    // NOP
    // 0x3b3a18: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x3b3a18u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3b3a1c: 0x0  nop
    ctx->pc = 0x3b3a1cu;
    // NOP
    // 0x3b3a20: 0x0  nop
    ctx->pc = 0x3b3a20u;
    // NOP
    // 0x3b3a24: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3B3A24u;
    {
        const bool branch_taken_0x3b3a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3a24) {
            ctx->pc = 0x3B3AA0u;
            goto label_3b3aa0;
        }
    }
    ctx->pc = 0x3B3A2Cu;
    // 0x3b3a2c: 0x0  nop
    ctx->pc = 0x3b3a2cu;
    // NOP
label_3b3a30:
    // 0x3b3a30: 0x2e410601  sltiu       $at, $s2, 0x601
    ctx->pc = 0x3b3a30u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)1537) ? 1 : 0);
    // 0x3b3a34: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B3A34u;
    {
        const bool branch_taken_0x3b3a34 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A34u;
        // 0x3b3a38: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3a34) {
            ctx->pc = 0x3B3A98u;
            goto label_3b3a98;
        }
    }
    ctx->pc = 0x3B3A3Cu;
    // 0x3b3a3c: 0xc0969a4  jal         func_25A690
    ctx->pc = 0x3B3A3Cu;
    SET_GPR_U32(ctx, 31, 0x3B3A44u);
    ctx->pc = 0x3B3A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A3Cu;
    // 0x3b3a40: 0x522023  subu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A690u, 0x3B3A3Cu, 0x3B3A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A44u;
label_3b3a44:
    // 0x3b3a44: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3A44u;
    {
        const bool branch_taken_0x3b3a44 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3B3A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A44u;
        // 0x3b3a48: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3a44) {
            ctx->pc = 0x3B3A58u;
            goto label_3b3a58;
        }
    }
    ctx->pc = 0x3B3A4Cu;
    // 0x3b3a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3a50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3A50u;
    {
        const bool branch_taken_0x3b3a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A50u;
        // 0x3b3a54: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3a50) {
            ctx->pc = 0x3B3A70u;
            goto label_3b3a70;
        }
    }
    ctx->pc = 0x3B3A58u;
label_3b3a58:
    // 0x3b3a58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b3a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b3a5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b3a60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3a60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3a64: 0x0  nop
    ctx->pc = 0x3b3a64u;
    // NOP
    // 0x3b3a68: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3b3a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3b3a6c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3b3a6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3b3a70:
    // 0x3b3a70: 0x3c034400  lui         $v1, 0x4400
    ctx->pc = 0x3b3a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17408 << 16));
    // 0x3b3a74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3b3a78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b3a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3a80: 0x0  nop
    ctx->pc = 0x3b3a80u;
    // NOP
    // 0x3b3a84: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3b3a84u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x3b3a88: 0x0  nop
    ctx->pc = 0x3b3a88u;
    // NOP
    // 0x3b3a8c: 0x0  nop
    ctx->pc = 0x3b3a8cu;
    // NOP
    // 0x3b3a90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3A90u;
    {
        const bool branch_taken_0x3b3a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A90u;
        // 0x3b3a94: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3a90) {
            ctx->pc = 0x3B3AA0u;
            goto label_3b3aa0;
        }
    }
    ctx->pc = 0x3B3A98u;
label_3b3a98:
    // 0x3b3a98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b3a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3b3a9c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3b3a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3b3aa0:
    // 0x3b3aa0: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3b3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x3b3aa4: 0xc7828078  lwc1        $f2, -0x7F88($gp)
    ctx->pc = 0x3b3aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b3aa8: 0x3c033c88  lui         $v1, 0x3C88
    ctx->pc = 0x3b3aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15496 << 16));
    // 0x3b3aac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3b3aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b3ab0: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x3b3ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x3b3ab4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b3ab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3ab8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b3ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b3abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3ac0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x3b3ac0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x3b3ac4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b3ac4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b3ac8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b3ac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b3acc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3ACCu;
    {
        const bool branch_taken_0x3b3acc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b3acc) {
            ctx->pc = 0x3B3AE4u;
            goto label_3b3ae4;
        }
    }
    ctx->pc = 0x3B3AD4u;
    // 0x3b3ad4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3ad4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b3ad8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b3ad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b3adc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3ADCu;
    {
        const bool branch_taken_0x3b3adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3adc) {
            ctx->pc = 0x3B3AFCu;
            goto label_3b3afc;
        }
    }
    ctx->pc = 0x3B3AE4u;
label_3b3ae4:
    // 0x3b3ae4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b3ae4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b3ae8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b3aec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3aecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b3af0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3b3af0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3b3af4: 0x0  nop
    ctx->pc = 0x3b3af4u;
    // NOP
    // 0x3b3af8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3b3af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_3b3afc:
    // 0x3b3afc: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3AFCu;
    {
        const bool branch_taken_0x3b3afc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x3B3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AFCu;
        // 0x3b3b00: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3afc) {
            ctx->pc = 0x3B3B10u;
            goto label_3b3b10;
        }
    }
    ctx->pc = 0x3B3B04u;
    // 0x3b3b04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b3b04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3b08: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3B08u;
    {
        const bool branch_taken_0x3b3b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B08u;
        // 0x3b3b0c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b08) {
            ctx->pc = 0x3B3B28u;
            goto label_3b3b28;
        }
    }
    ctx->pc = 0x3B3B10u;
label_3b3b10:
    // 0x3b3b10: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3b3b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3b3b14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3b14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b3b18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3b1c: 0x0  nop
    ctx->pc = 0x3b3b1cu;
    // NOP
    // 0x3b3b20: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b3b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3b3b24: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3b3b24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3b3b28:
    // 0x3b3b28: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3b3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3b3b2c: 0x928200d1  lbu         $v0, 0xD1($s4)
    ctx->pc = 0x3b3b2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 209)));
    // 0x3b3b30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3b30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3b34: 0x0  nop
    ctx->pc = 0x3b3b34u;
    // NOP
    // 0x3b3b38: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x3b3b38u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3b3b3c: 0x0  nop
    ctx->pc = 0x3b3b3cu;
    // NOP
    // 0x3b3b40: 0x0  nop
    ctx->pc = 0x3b3b40u;
    // NOP
    // 0x3b3b44: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3B44u;
    {
        const bool branch_taken_0x3b3b44 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3b3b44) {
            ctx->pc = 0x3B3B58u;
            goto label_3b3b58;
        }
    }
    ctx->pc = 0x3B3B4Cu;
    // 0x3b3b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3b50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B3B50u;
    {
        const bool branch_taken_0x3b3b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B50u;
        // 0x3b3b54: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b50) {
            ctx->pc = 0x3B3B74u;
            goto label_3b3b74;
        }
    }
    ctx->pc = 0x3B3B58u;
label_3b3b58:
    // 0x3b3b58: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3b3b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3b3b5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b3b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3b3b60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b3b64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b3b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3b68: 0x0  nop
    ctx->pc = 0x3b3b68u;
    // NOP
    // 0x3b3b6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b3b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3b3b70: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3b3b70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3b3b74:
    // 0x3b3b74: 0x928300d0  lbu         $v1, 0xD0($s4)
    ctx->pc = 0x3b3b74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x3b3b78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b3b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b3b7c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B3B7Cu;
    {
        const bool branch_taken_0x3b3b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B7Cu;
        // 0x3b3b80: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b7c) {
            ctx->pc = 0x3B3BA8u;
            goto label_3b3ba8;
        }
    }
    ctx->pc = 0x3B3B84u;
    // 0x3b3b84: 0x3c023cab  lui         $v0, 0x3CAB
    ctx->pc = 0x3b3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15531 << 16));
    // 0x3b3b88: 0x344292a7  ori         $v0, $v0, 0x92A7
    ctx->pc = 0x3b3b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37543);
    // 0x3b3b8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b3b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3b90: 0xc6800084  lwc1        $f0, 0x84($s4)
    ctx->pc = 0x3b3b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3b94: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3b3b94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3b3b98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b3b98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b3b9c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3b3b9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3b3ba0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3B3BA0u;
    {
        const bool branch_taken_0x3b3ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BA0u;
        // 0x3b3ba4: 0xe6800084  swc1        $f0, 0x84($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3ba0) {
            ctx->pc = 0x3B3BE8u;
            goto label_3b3be8;
        }
    }
    ctx->pc = 0x3B3BA8u;
label_3b3ba8:
    // 0x3b3ba8: 0x3c023cab  lui         $v0, 0x3CAB
    ctx->pc = 0x3b3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15531 << 16));
    // 0x3b3bac: 0x344292a7  ori         $v0, $v0, 0x92A7
    ctx->pc = 0x3b3bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37543);
    // 0x3b3bb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b3bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3bb4: 0xc6800084  lwc1        $f0, 0x84($s4)
    ctx->pc = 0x3b3bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3bb8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3b3bb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3b3bbc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b3bbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b3bc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b3bc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b3bc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B3BC4u;
    {
        const bool branch_taken_0x3b3bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BC4u;
        // 0x3b3bc8: 0xe6800084  swc1        $f0, 0x84($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3bc4) {
            ctx->pc = 0x3B3BE8u;
            goto label_3b3be8;
        }
    }
    ctx->pc = 0x3B3BCCu;
    // 0x3b3bcc: 0x0  nop
    ctx->pc = 0x3b3bccu;
    // NOP
label_3b3bd0:
    // 0x3b3bd0: 0x928200d1  lbu         $v0, 0xD1($s4)
    ctx->pc = 0x3b3bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 209)));
    // 0x3b3bd4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3BD4u;
    {
        const bool branch_taken_0x3b3bd4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x3b3bd4) {
            ctx->pc = 0x3B3BE8u;
            goto label_3b3be8;
        }
    }
    ctx->pc = 0x3B3BDCu;
    // 0x3b3bdc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b3bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b3be0: 0xa28200d1  sb          $v0, 0xD1($s4)
    ctx->pc = 0x3b3be0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 209), (uint8_t)GPR_U32(ctx, 2));
    // 0x3b3be4: 0x0  nop
    ctx->pc = 0x3b3be4u;
    // NOP
label_3b3be8:
    // 0x3b3be8: 0x8e860124  lw          $a2, 0x124($s4)
    ctx->pc = 0x3b3be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3bec: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x3b3becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3b3bf0: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x3b3bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x3b3bf4: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x3b3bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x3b3bf8: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x3b3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x3b3bfc: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x3b3bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x3b3c00: 0xae850124  sw          $a1, 0x124($s4)
    ctx->pc = 0x3b3c00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 5));
    // 0x3b3c04: 0x8e850124  lw          $a1, 0x124($s4)
    ctx->pc = 0x3b3c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3c08: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x3b3c08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x3b3c0c: 0xae840124  sw          $a0, 0x124($s4)
    ctx->pc = 0x3b3c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 4));
    // 0x3b3c10: 0x8e840124  lw          $a0, 0x124($s4)
    ctx->pc = 0x3b3c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3c14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b3c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b3c18: 0xae830124  sw          $v1, 0x124($s4)
    ctx->pc = 0x3b3c18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 3));
    // 0x3b3c1c: 0x8e830124  lw          $v1, 0x124($s4)
    ctx->pc = 0x3b3c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3c20: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b3c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b3c24: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x3b3c24u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
    // 0x3b3c28: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3c2c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3b3c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3b3c30: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x3B3C30u;
    {
        const bool branch_taken_0x3b3c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3c30) {
            ctx->pc = 0x3B3E28u;
            goto label_3b3e28;
        }
    }
    ctx->pc = 0x3B3C38u;
    // 0x3b3c38: 0x1660007b  bnez        $s3, . + 4 + (0x7B << 2)
    ctx->pc = 0x3B3C38u;
    {
        const bool branch_taken_0x3b3c38 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3c38) {
            ctx->pc = 0x3B3E28u;
            goto label_3b3e28;
        }
    }
    ctx->pc = 0x3B3C40u;
    // 0x3b3c40: 0x8e0507c4  lw          $a1, 0x7C4($s0)
    ctx->pc = 0x3b3c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1988)));
    // 0x3b3c44: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3b3c44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3b3c48: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3B3C48u;
    SET_GPR_U32(ctx, 31, 0x3B3C50u);
    ctx->pc = 0x3B3C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3C48u;
    // 0x3b3c4c: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3B3C48u, 0x3B3C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3C50u;
label_3b3c50:
    // 0x3b3c50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b3c50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3c54: 0x92820123  lbu         $v0, 0x123($s4)
    ctx->pc = 0x3b3c54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 291)));
    // 0x3b3c58: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3B3C58u;
    {
        const bool branch_taken_0x3b3c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3c58) {
            ctx->pc = 0x3B3D60u;
            goto label_3b3d60;
        }
    }
    ctx->pc = 0x3B3C60u;
    // 0x3b3c60: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x3B3C60u;
    {
        const bool branch_taken_0x3b3c60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3c60) {
            ctx->pc = 0x3B3CF0u;
            goto label_3b3cf0;
        }
    }
    ctx->pc = 0x3B3C68u;
    // 0x3b3c68: 0x8e0206c8  lw          $v0, 0x6C8($s0)
    ctx->pc = 0x3b3c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1736)));
    // 0x3b3c6c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3b3c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3b3c70: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3B3C70u;
    {
        const bool branch_taken_0x3b3c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3c70) {
            ctx->pc = 0x3B3CF0u;
            goto label_3b3cf0;
        }
    }
    ctx->pc = 0x3B3C78u;
    // 0x3b3c78: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x3b3c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3b3c7c: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3b3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x3b3c80: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x3b3c80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3b3c84: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B3C84u;
    {
        const bool branch_taken_0x3b3c84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C84u;
        // 0x3b3c88: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3c84) {
            ctx->pc = 0x3B3C90u;
            goto label_3b3c90;
        }
    }
    ctx->pc = 0x3B3C8Cu;
    // 0x3b3c8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3b3c8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3c90:
    // 0x3b3c90: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3B3C90u;
    {
        const bool branch_taken_0x3b3c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3c90) {
            ctx->pc = 0x3B3CD0u;
            goto label_3b3cd0;
        }
    }
    ctx->pc = 0x3B3C98u;
    // 0x3b3c98: 0x92420733  lbu         $v0, 0x733($s2)
    ctx->pc = 0x3b3c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1843)));
    // 0x3b3c9c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3b3c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b3ca0: 0x8e46004c  lw          $a2, 0x4C($s2)
    ctx->pc = 0x3b3ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x3b3ca4: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x3b3ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3b3ca8: 0x90650730  lbu         $a1, 0x730($v1)
    ctx->pc = 0x3b3ca8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1840)));
    // 0x3b3cac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3b3cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3b3cb0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3b3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3b3cb4: 0x8cc30094  lw          $v1, 0x94($a2)
    ctx->pc = 0x3b3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x3b3cb8: 0x24460700  addiu       $a2, $v0, 0x700
    ctx->pc = 0x3b3cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x3b3cbc: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x3b3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x3b3cc0: 0xc041442  jal         func_105108
    ctx->pc = 0x3B3CC0u;
    SET_GPR_U32(ctx, 31, 0x3B3CC8u);
    ctx->pc = 0x3B3CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3CC0u;
    // 0x3b3cc4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x3B3CC0u, 0x3B3CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3CC8u;
label_3b3cc8:
    // 0x3b3cc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3CC8u;
    {
        const bool branch_taken_0x3b3cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3cc8) {
            ctx->pc = 0x3B3CD8u;
            goto label_3b3cd8;
        }
    }
    ctx->pc = 0x3B3CD0u;
label_3b3cd0:
    // 0x3b3cd0: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3b3cd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3b3cd4: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x3b3cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
label_3b3cd8:
    // 0x3b3cd8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3b3cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b3cdc: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3B3CDCu;
    SET_GPR_U32(ctx, 31, 0x3B3CE4u);
    ctx->pc = 0x3B3CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3CDCu;
    // 0x3b3ce0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3B3CDCu, 0x3B3CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3CE4u;
label_3b3ce4:
    // 0x3b3ce4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3B3CE4u;
    {
        const bool branch_taken_0x3b3ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3CE4u;
        // 0x3b3ce8: 0xe6800084  swc1        $f0, 0x84($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3ce4) {
            ctx->pc = 0x3B3D20u;
            goto label_3b3d20;
        }
    }
    ctx->pc = 0x3B3CECu;
    // 0x3b3cec: 0x0  nop
    ctx->pc = 0x3b3cecu;
    // NOP
label_3b3cf0:
    // 0x3b3cf0: 0x860400c2  lh          $a0, 0xC2($s0)
    ctx->pc = 0x3b3cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 194)));
    // 0x3b3cf4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x3b3cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x3b3cf8: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3b3cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3b3cfc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x3b3cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x3b3d00: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b3d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3d04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3d08: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3b3d08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b3d0c: 0x0  nop
    ctx->pc = 0x3b3d0cu;
    // NOP
    // 0x3b3d10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3b3d10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3b3d14: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b3d14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b3d18: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b3d18u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3b3d1c: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x3b3d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
label_3b3d20:
    // 0x3b3d20: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3b3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3b3d24: 0xc6810084  lwc1        $f1, 0x84($s4)
    ctx->pc = 0x3b3d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b3d28: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3b3d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b3d2c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3b3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3b3d30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3b3d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3b3d34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3d38: 0x0  nop
    ctx->pc = 0x3b3d38u;
    // NOP
    // 0x3b3d3c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b3d3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b3d40: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b3d40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3b3d44: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3d44u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3b3d48: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3b3d48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3b3d4c: 0x0  nop
    ctx->pc = 0x3b3d4cu;
    // NOP
    // 0x3b3d50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3b3d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3b3d54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b3d54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x3b3d58: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x3b3d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x3b3d5c: 0xa782885c  sh          $v0, -0x77A4($gp)
    ctx->pc = 0x3b3d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936668), (uint16_t)GPR_U32(ctx, 2));
label_3b3d60:
    // 0x3b3d60: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x3b3d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x3b3d64: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3b3d64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b3d68: 0x8e840124  lw          $a0, 0x124($s4)
    ctx->pc = 0x3b3d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3d6c: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x3b3d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x3b3d70: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b3d74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b3d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b3d78: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x3b3d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b3d7c: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x3b3d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
    // 0x3b3d80: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3b3d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b3d84: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b3d84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b3d88: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b3d88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b3d8c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3D8Cu;
    {
        const bool branch_taken_0x3b3d8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b3d8c) {
            ctx->pc = 0x3B3DA4u;
            goto label_3b3da4;
        }
    }
    ctx->pc = 0x3B3D94u;
    // 0x3b3d94: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3d94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b3d98: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3b3d98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b3d9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B3D9Cu;
    {
        const bool branch_taken_0x3b3d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3D9Cu;
        // 0x3b3da0: 0xa28300dd  sb          $v1, 0xDD($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 221), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3d9c) {
            ctx->pc = 0x3B3DC0u;
            goto label_3b3dc0;
        }
    }
    ctx->pc = 0x3B3DA4u;
label_3b3da4:
    // 0x3b3da4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b3da4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b3da8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b3da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b3dac: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b3dacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b3db0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3b3db0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b3db4: 0x0  nop
    ctx->pc = 0x3b3db4u;
    // NOP
    // 0x3b3db8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b3dbc: 0xa28300dd  sb          $v1, 0xDD($s4)
    ctx->pc = 0x3b3dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 221), (uint8_t)GPR_U32(ctx, 3));
label_3b3dc0:
    // 0x3b3dc0: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B3DC0u;
    {
        const bool branch_taken_0x3b3dc0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3DC0u;
        // 0x3b3dc4: 0xa28000d1  sb          $zero, 0xD1($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 209), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3dc0) {
            ctx->pc = 0x3B3E20u;
            goto label_3b3e20;
        }
    }
    ctx->pc = 0x3B3DC8u;
    // 0x3b3dc8: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3b3dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3b3dcc: 0xc096908  jal         func_25A420
    ctx->pc = 0x3B3DCCu;
    SET_GPR_U32(ctx, 31, 0x3B3DD4u);
    ctx->pc = 0x3B3DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3DCCu;
    // 0x3b3dd0: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A420u, 0x3B3DCCu, 0x3B3DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3DD4u;
label_3b3dd4:
    // 0x3b3dd4: 0x92820123  lbu         $v0, 0x123($s4)
    ctx->pc = 0x3b3dd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 291)));
    // 0x3b3dd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B3DD8u;
    {
        const bool branch_taken_0x3b3dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3DD8u;
        // 0x3b3ddc: 0x3c024348  lui         $v0, 0x4348 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3dd8) {
            ctx->pc = 0x3B3E00u;
            goto label_3b3e00;
        }
    }
    ctx->pc = 0x3B3DE0u;
    // 0x3b3de0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b3de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3de4: 0x0  nop
    ctx->pc = 0x3b3de4u;
    // NOP
    // 0x3b3de8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b3de8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b3dec: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x3B3DECu;
    {
        const bool branch_taken_0x3b3dec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b3dec) {
            ctx->pc = 0x3B3E30u;
            goto label_3b3e30;
        }
    }
    ctx->pc = 0x3B3DF4u;
    // 0x3b3df4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3B3DF4u;
    {
        const bool branch_taken_0x3b3df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3DF4u;
        // 0x3b3df8: 0xa2800123  sb          $zero, 0x123($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 291), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3df4) {
            ctx->pc = 0x3B3E30u;
            goto label_3b3e30;
        }
    }
    ctx->pc = 0x3B3DFCu;
    // 0x3b3dfc: 0x0  nop
    ctx->pc = 0x3b3dfcu;
    // NOP
label_3b3e00:
    // 0x3b3e00: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x3b3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x3b3e04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b3e04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3e08: 0x0  nop
    ctx->pc = 0x3b3e08u;
    // NOP
    // 0x3b3e0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b3e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b3e10: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3E10u;
    {
        const bool branch_taken_0x3b3e10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B3E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E10u;
        // 0x3b3e14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3e10) {
            ctx->pc = 0x3B3E30u;
            goto label_3b3e30;
        }
    }
    ctx->pc = 0x3B3E18u;
    // 0x3b3e18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B3E18u;
    {
        const bool branch_taken_0x3b3e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E18u;
        // 0x3b3e1c: 0xa2820123  sb          $v0, 0x123($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 291), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3e18) {
            ctx->pc = 0x3B3E30u;
            goto label_3b3e30;
        }
    }
    ctx->pc = 0x3B3E20u;
label_3b3e20:
    // 0x3b3e20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3E20u;
    {
        const bool branch_taken_0x3b3e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3E20u;
        // 0x3b3e24: 0xa2800123  sb          $zero, 0x123($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 291), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3e20) {
            ctx->pc = 0x3B3E30u;
            goto label_3b3e30;
        }
    }
    ctx->pc = 0x3B3E28u;
label_3b3e28:
    // 0x3b3e28: 0xa2800123  sb          $zero, 0x123($s4)
    ctx->pc = 0x3b3e28u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b3e2c: 0x0  nop
    ctx->pc = 0x3b3e2cu;
    // NOP
label_3b3e30:
    // 0x3b3e30: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3e34: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3b3e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3b3e38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B3E38u;
    {
        const bool branch_taken_0x3b3e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3e38) {
            ctx->pc = 0x3B3E60u;
            goto label_3b3e60;
        }
    }
    ctx->pc = 0x3B3E40u;
    // 0x3b3e40: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3E40u;
    {
        const bool branch_taken_0x3b3e40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3e40) {
            ctx->pc = 0x3B3E60u;
            goto label_3b3e60;
        }
    }
    ctx->pc = 0x3B3E48u;
    // 0x3b3e48: 0xc68000b4  lwc1        $f0, 0xB4($s4)
    ctx->pc = 0x3b3e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3e4c: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x3b3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x3b3e50: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x3b3e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x3b3e54: 0x8e830124  lw          $v1, 0x124($s4)
    ctx->pc = 0x3b3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3e58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b3e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b3e5c: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x3b3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
label_3b3e60:
    // 0x3b3e60: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3B3E60u;
    SET_GPR_U32(ctx, 31, 0x3B3E68u);
    ctx->pc = 0x3B3E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3E60u;
    // 0x3b3e64: 0xc68c0084  lwc1        $f12, 0x84($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3B3E60u, 0x3B3E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3E68u;
label_3b3e68:
    // 0x3b3e68: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x3b3e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x3b3e6c: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3e70: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3b3e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x3b3e74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3E74u;
    {
        const bool branch_taken_0x3b3e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3e74) {
            ctx->pc = 0x3B3E88u;
            goto label_3b3e88;
        }
    }
    ctx->pc = 0x3B3E7Cu;
    // 0x3b3e7c: 0xc68000e0  lwc1        $f0, 0xE0($s4)
    ctx->pc = 0x3b3e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3e80: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x3b3e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x3b3e84: 0x0  nop
    ctx->pc = 0x3b3e84u;
    // NOP
label_3b3e88:
    // 0x3b3e88: 0x8e830124  lw          $v1, 0x124($s4)
    ctx->pc = 0x3b3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3e8c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3b3e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x3b3e90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b3e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b3e94: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3B3E94u;
    {
        const bool branch_taken_0x3b3e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3e94) {
            ctx->pc = 0x3B3F40u;
            goto label_3b3f40;
        }
    }
    ctx->pc = 0x3B3E9Cu;
    // 0x3b3e9c: 0x8e8500f0  lw          $a1, 0xF0($s4)
    ctx->pc = 0x3b3e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x3b3ea0: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x3b3ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x3b3ea4: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x3B3EA4u;
    SET_GPR_U32(ctx, 31, 0x3B3EACu);
    ctx->pc = 0x3B3EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3EA4u;
    // 0x3b3ea8: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x3B3EA4u, 0x3B3EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3EACu;
label_3b3eac:
    // 0x3b3eac: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3B3EACu;
    {
        const bool branch_taken_0x3b3eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3EACu;
        // 0x3b3eb0: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3eac) {
            ctx->pc = 0x3B3F40u;
            goto label_3b3f40;
        }
    }
    ctx->pc = 0x3B3EB4u;
    // 0x3b3eb4: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3B3EB4u;
    SET_GPR_U32(ctx, 31, 0x3B3EBCu);
    ctx->pc = 0x3B3EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3EB4u;
    // 0x3b3eb8: 0x26850060  addiu       $a1, $s4, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3B3EB4u, 0x3B3EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3EBCu;
label_3b3ebc:
    // 0x3b3ebc: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x3b3ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x3b3ec0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x3b3ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x3b3ec4: 0x8c22ceb8  lw          $v0, -0x3148($at)
    ctx->pc = 0x3b3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x81CEB8u));
    // 0x3b3ec8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x3b3ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x3b3ecc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3B3ECCu;
    {
        const bool branch_taken_0x3b3ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3ECCu;
        // 0x3b3ed0: 0x3c010082  lui         $at, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3ecc) {
            ctx->pc = 0x3B3F40u;
            goto label_3b3f40;
        }
    }
    ctx->pc = 0x3B3ED4u;
    // 0x3b3ed4: 0x8c22cebc  lw          $v0, -0x3144($at)
    ctx->pc = 0x3b3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954684)));
    // 0x3b3ed8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3b3ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3b3edc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3B3EDCu;
    {
        const bool branch_taken_0x3b3edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3edc) {
            ctx->pc = 0x3B3F40u;
            goto label_3b3f40;
        }
    }
    ctx->pc = 0x3B3EE4u;
    // 0x3b3ee4: 0x92820122  lbu         $v0, 0x122($s4)
    ctx->pc = 0x3b3ee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 290)));
    // 0x3b3ee8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3B3EE8u;
    {
        const bool branch_taken_0x3b3ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b3ee8) {
            ctx->pc = 0x3B3F18u;
            goto label_3b3f18;
        }
    }
    ctx->pc = 0x3B3EF0u;
    // 0x3b3ef0: 0xc6820084  lwc1        $f2, 0x84($s4)
    ctx->pc = 0x3b3ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b3ef4: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x3b3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x3b3ef8: 0x3442fa36  ori         $v0, $v0, 0xFA36
    ctx->pc = 0x3b3ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64054);
    // 0x3b3efc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b3efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3f00: 0xc6800118  lwc1        $f0, 0x118($s4)
    ctx->pc = 0x3b3f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3f04: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b3f04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3b3f08: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3B3F08u;
    SET_GPR_U32(ctx, 31, 0x3B3F10u);
    ctx->pc = 0x3B3F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3F08u;
    // 0x3b3f0c: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3B3F08u, 0x3B3F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3F10u;
label_3b3f10:
    // 0x3b3f10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3B3F10u;
    {
        const bool branch_taken_0x3b3f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F10u;
        // 0x3b3f14: 0xe6800084  swc1        $f0, 0x84($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3f10) {
            ctx->pc = 0x3B3F40u;
            goto label_3b3f40;
        }
    }
    ctx->pc = 0x3B3F18u;
label_3b3f18:
    // 0x3b3f18: 0x3c023e0e  lui         $v0, 0x3E0E
    ctx->pc = 0x3b3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15886 << 16));
    // 0x3b3f1c: 0xc6820084  lwc1        $f2, 0x84($s4)
    ctx->pc = 0x3b3f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b3f20: 0x3442fa36  ori         $v0, $v0, 0xFA36
    ctx->pc = 0x3b3f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64054);
    // 0x3b3f24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b3f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b3f28: 0xc6800118  lwc1        $f0, 0x118($s4)
    ctx->pc = 0x3b3f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3f2c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x3b3f2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x3b3f30: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3B3F30u;
    SET_GPR_U32(ctx, 31, 0x3B3F38u);
    ctx->pc = 0x3B3F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3F30u;
    // 0x3b3f34: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3B3F30u, 0x3B3F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3F38u;
label_3b3f38:
    // 0x3b3f38: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x3b3f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
    // 0x3b3f3c: 0x0  nop
    ctx->pc = 0x3b3f3cu;
    // NOP
label_3b3f40:
    // 0x3b3f40: 0x8e830124  lw          $v1, 0x124($s4)
    ctx->pc = 0x3b3f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3f44: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x3b3f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x3b3f48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3b3f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3b3f4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B3F4Cu;
    {
        const bool branch_taken_0x3b3f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F4Cu;
        // 0x3b3f50: 0x26840100  addiu       $a0, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3f4c) {
            ctx->pc = 0x3B3F60u;
            goto label_3b3f60;
        }
    }
    ctx->pc = 0x3B3F54u;
    // 0x3b3f54: 0xc096838  jal         func_25A0E0
    ctx->pc = 0x3B3F54u;
    SET_GPR_U32(ctx, 31, 0x3B3F5Cu);
    ctx->pc = 0x3B3F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3F54u;
    // 0x3b3f58: 0x26850060  addiu       $a1, $s4, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A0E0u, 0x3B3F54u, 0x3B3F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3F5Cu;
label_3b3f5c:
    // 0x3b3f5c: 0xe6800084  swc1        $f0, 0x84($s4)
    ctx->pc = 0x3b3f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 132), bits); }
label_3b3f60:
    // 0x3b3f60: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b3f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b3f64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b3f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b3f68: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B3F68u;
    {
        const bool branch_taken_0x3b3f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3f68) {
            ctx->pc = 0x3B3F88u;
            goto label_3b3f88;
        }
    }
    ctx->pc = 0x3B3F70u;
    // 0x3b3f70: 0xc6800080  lwc1        $f0, 0x80($s4)
    ctx->pc = 0x3b3f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3f74: 0xe6800090  swc1        $f0, 0x90($s4)
    ctx->pc = 0x3b3f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 144), bits); }
    // 0x3b3f78: 0xc6800084  lwc1        $f0, 0x84($s4)
    ctx->pc = 0x3b3f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b3f7c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3B3F7Cu;
    {
        const bool branch_taken_0x3b3f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F7Cu;
        // 0x3b3f80: 0xe6800094  swc1        $f0, 0x94($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3f7c) {
            ctx->pc = 0x3B3FC8u;
            goto label_3b3fc8;
        }
    }
    ctx->pc = 0x3B3F84u;
    // 0x3b3f84: 0x0  nop
    ctx->pc = 0x3b3f84u;
    // NOP
label_3b3f88:
    // 0x3b3f88: 0xc68d0090  lwc1        $f13, 0x90($s4)
    ctx->pc = 0x3b3f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3b3f8c: 0xc68e011c  lwc1        $f14, 0x11C($s4)
    ctx->pc = 0x3b3f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3b3f90: 0xc0ec8f0  jal         func_3B23C0
    ctx->pc = 0x3B3F90u;
    SET_GPR_U32(ctx, 31, 0x3B3F98u);
    ctx->pc = 0x3B3F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3F90u;
    // 0x3b3f94: 0xc68c0080  lwc1        $f12, 0x80($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B23C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B23C0u, 0x3B3F90u, 0x3B3F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3F98u;
label_3b3f98:
    // 0x3b3f98: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3B3F98u;
    SET_GPR_U32(ctx, 31, 0x3B3FA0u);
    ctx->pc = 0x3B3F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3F98u;
    // 0x3b3f9c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3B3F98u, 0x3B3FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FA0u;
label_3b3fa0:
    // 0x3b3fa0: 0xe6800090  swc1        $f0, 0x90($s4)
    ctx->pc = 0x3b3fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 144), bits); }
    // 0x3b3fa4: 0xc68c0084  lwc1        $f12, 0x84($s4)
    ctx->pc = 0x3b3fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b3fa8: 0xc68d0094  lwc1        $f13, 0x94($s4)
    ctx->pc = 0x3b3fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3b3fac: 0xc68e00b0  lwc1        $f14, 0xB0($s4)
    ctx->pc = 0x3b3facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3b3fb0: 0xc68f011c  lwc1        $f15, 0x11C($s4)
    ctx->pc = 0x3b3fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x3b3fb4: 0xc0ec914  jal         func_3B2450
    ctx->pc = 0x3B3FB4u;
    SET_GPR_U32(ctx, 31, 0x3B3FBCu);
    ctx->pc = 0x3B3FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FB4u;
    // 0x3b3fb8: 0x268400a4  addiu       $a0, $s4, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2450u, 0x3B3FB4u, 0x3B3FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FBCu;
label_3b3fbc:
    // 0x3b3fbc: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3B3FBCu;
    SET_GPR_U32(ctx, 31, 0x3B3FC4u);
    ctx->pc = 0x3B3FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FBCu;
    // 0x3b3fc0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3B3FBCu, 0x3B3FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FC4u;
label_3b3fc4:
    // 0x3b3fc4: 0xe6800094  swc1        $f0, 0x94($s4)
    ctx->pc = 0x3b3fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 148), bits); }
label_3b3fc8:
    // 0x3b3fc8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3b3fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3b3fcc: 0xc68c00c0  lwc1        $f12, 0xC0($s4)
    ctx->pc = 0x3b3fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b3fd0: 0xc0ec844  jal         func_3B2110
    ctx->pc = 0x3B3FD0u;
    SET_GPR_U32(ctx, 31, 0x3B3FD8u);
    ctx->pc = 0x3B3FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FD0u;
    // 0x3b3fd4: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2110u, 0x3B3FD0u, 0x3B3FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FD8u;
label_3b3fd8:
    // 0x3b3fd8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3b3fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3b3fdc: 0x26850060  addiu       $a1, $s4, 0x60
    ctx->pc = 0x3b3fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x3b3fe0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3B3FE0u;
    SET_GPR_U32(ctx, 31, 0x3B3FE8u);
    ctx->pc = 0x3B3FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FE0u;
    // 0x3b3fe4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3B3FE0u, 0x3B3FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FE8u;
label_3b3fe8:
    // 0x3b3fe8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3b3fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3b3fec: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3b3fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3b3ff0: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3B3FF0u;
    SET_GPR_U32(ctx, 31, 0x3B3FF8u);
    ctx->pc = 0x3B3FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3FF0u;
    // 0x3b3ff4: 0x26860060  addiu       $a2, $s4, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3B3FF0u, 0x3B3FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3FF8u;
label_3b3ff8:
    // 0x3b3ff8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3b3ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3b3ffc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3b3ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3b4000: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b4000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b4004: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x3B4004u;
    SET_GPR_U32(ctx, 31, 0x3B400Cu);
    ctx->pc = 0x3B4008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4004u;
    // 0x3b4008: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x3B4004u, 0x3B400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B400Cu;
label_3b400c:
    // 0x3b400c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3b400cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3b4010: 0x26860060  addiu       $a2, $s4, 0x60
    ctx->pc = 0x3b4010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x3b4014: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3B4014u;
    SET_GPR_U32(ctx, 31, 0x3B401Cu);
    ctx->pc = 0x3B4018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4014u;
    // 0x3b4018: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3B4014u, 0x3B401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B401Cu;
label_3b401c:
    // 0x3b401c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3b401cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3b4020: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b4020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3b4024: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b4024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4028: 0xc0ec964  jal         func_3B2590
    ctx->pc = 0x3B4028u;
    SET_GPR_U32(ctx, 31, 0x3B4030u);
    ctx->pc = 0x3B402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4028u;
    // 0x3b402c: 0x24072000  addiu       $a3, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2590u, 0x3B4028u, 0x3B4030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4030u;
label_3b4030:
    // 0x3b4030: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4030u;
    {
        const bool branch_taken_0x3b4030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4030u;
        // 0x3b4034: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4030) {
            ctx->pc = 0x3B4048u;
            goto label_3b4048;
        }
    }
    ctx->pc = 0x3B4038u;
    // 0x3b4038: 0xc096988  jal         func_25A620
    ctx->pc = 0x3B4038u;
    SET_GPR_U32(ctx, 31, 0x3B4040u);
    ctx->pc = 0x3B403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4038u;
    // 0x3b403c: 0x26850060  addiu       $a1, $s4, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3B4038u, 0x3B4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4040u;
label_3b4040:
    // 0x3b4040: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4040u;
    {
        const bool branch_taken_0x3b4040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4040u;
        // 0x3b4044: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4040) {
            ctx->pc = 0x3B4050u;
            goto label_3b4050;
        }
    }
    ctx->pc = 0x3B4048u;
label_3b4048:
    // 0x3b4048: 0xc68000c0  lwc1        $f0, 0xC0($s4)
    ctx->pc = 0x3b4048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b404c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3b404cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3b4050:
    // 0x3b4050: 0xc6810084  lwc1        $f1, 0x84($s4)
    ctx->pc = 0x3b4050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b4054: 0xc6800094  lwc1        $f0, 0x94($s4)
    ctx->pc = 0x3b4054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b4058: 0xc09681c  jal         func_25A070
    ctx->pc = 0x3B4058u;
    SET_GPR_U32(ctx, 31, 0x3B4060u);
    ctx->pc = 0x3B405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4058u;
    // 0x3b405c: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x3B4058u, 0x3B4060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4060u;
label_3b4060:
    // 0x3b4060: 0xc047ac4  jal         func_11EB10
    ctx->pc = 0x3B4060u;
    SET_GPR_U32(ctx, 31, 0x3B4068u);
    ctx->pc = 0x3B4064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4060u;
    // 0x3b4064: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB10u, 0x3B4060u, 0x3B4068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4068u;
label_3b4068:
    // 0x3b4068: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x3b4068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x3b406c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3b406cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3b4070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b4070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b4074: 0x0  nop
    ctx->pc = 0x3b4074u;
    // NOP
    // 0x3b4078: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b4078u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b407c: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x3B407Cu;
    {
        const bool branch_taken_0x3b407c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b407c) {
            ctx->pc = 0x3B4110u;
            goto label_3b4110;
        }
    }
    ctx->pc = 0x3B4084u;
    // 0x3b4084: 0xc68c00c0  lwc1        $f12, 0xC0($s4)
    ctx->pc = 0x3b4084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b4088: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3b4088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3b408c: 0xc0ec844  jal         func_3B2110
    ctx->pc = 0x3B408Cu;
    SET_GPR_U32(ctx, 31, 0x3B4094u);
    ctx->pc = 0x3B4090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B408Cu;
    // 0x3b4090: 0x26850090  addiu       $a1, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2110u, 0x3B408Cu, 0x3B4094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4094u;
label_3b4094:
    // 0x3b4094: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3b4094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3b4098: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x3b4098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x3b409c: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3B409Cu;
    SET_GPR_U32(ctx, 31, 0x3B40A4u);
    ctx->pc = 0x3B40A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B409Cu;
    // 0x3b40a0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3B409Cu, 0x3B40A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B40A4u;
label_3b40a4:
    // 0x3b40a4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3b40a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3b40a8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3b40a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3b40ac: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3B40ACu;
    SET_GPR_U32(ctx, 31, 0x3B40B4u);
    ctx->pc = 0x3B40B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B40ACu;
    // 0x3b40b0: 0x26860060  addiu       $a2, $s4, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3B40ACu, 0x3B40B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B40B4u;
label_3b40b4:
    // 0x3b40b4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3b40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x3b40b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3b40b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3b40bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b40bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b40c0: 0xc09693c  jal         func_25A4F0
    ctx->pc = 0x3B40C0u;
    SET_GPR_U32(ctx, 31, 0x3B40C8u);
    ctx->pc = 0x3B40C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B40C0u;
    // 0x3b40c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A4F0u, 0x3B40C0u, 0x3B40C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B40C8u;
label_3b40c8:
    // 0x3b40c8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3b40c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3b40cc: 0x26860060  addiu       $a2, $s4, 0x60
    ctx->pc = 0x3b40ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x3b40d0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x3B40D0u;
    SET_GPR_U32(ctx, 31, 0x3B40D8u);
    ctx->pc = 0x3B40D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B40D0u;
    // 0x3b40d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x3B40D0u, 0x3B40D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B40D8u;
label_3b40d8:
    // 0x3b40d8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3b40d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3b40dc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x3b40dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3b40e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b40e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b40e4: 0xc0ec964  jal         func_3B2590
    ctx->pc = 0x3B40E4u;
    SET_GPR_U32(ctx, 31, 0x3B40ECu);
    ctx->pc = 0x3B40E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B40E4u;
    // 0x3b40e8: 0x24072000  addiu       $a3, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2590u, 0x3B40E4u, 0x3B40ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B40ECu;
label_3b40ec:
    // 0x3b40ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B40ECu;
    {
        const bool branch_taken_0x3b40ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40ECu;
        // 0x3b40f0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b40ec) {
            ctx->pc = 0x3B4108u;
            goto label_3b4108;
        }
    }
    ctx->pc = 0x3B40F4u;
    // 0x3b40f4: 0xc096988  jal         func_25A620
    ctx->pc = 0x3B40F4u;
    SET_GPR_U32(ctx, 31, 0x3B40FCu);
    ctx->pc = 0x3B40F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B40F4u;
    // 0x3b40f8: 0x26850070  addiu       $a1, $s4, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A620u, 0x3B40F4u, 0x3B40FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B40FCu;
label_3b40fc:
    // 0x3b40fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3B40FCu;
    {
        const bool branch_taken_0x3b40fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b40fc) {
            ctx->pc = 0x3B4118u;
            goto label_3b4118;
        }
    }
    ctx->pc = 0x3B4104u;
    // 0x3b4104: 0x0  nop
    ctx->pc = 0x3b4104u;
    // NOP
label_3b4108:
    // 0x3b4108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4108u;
    {
        const bool branch_taken_0x3b4108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4108u;
        // 0x3b410c: 0xc68000c0  lwc1        $f0, 0xC0($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4108) {
            ctx->pc = 0x3B4118u;
            goto label_3b4118;
        }
    }
    ctx->pc = 0x3B4110u;
label_3b4110:
    // 0x3b4110: 0xc68000c0  lwc1        $f0, 0xC0($s4)
    ctx->pc = 0x3b4110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b4114: 0x0  nop
    ctx->pc = 0x3b4114u;
    // NOP
label_3b4118:
    // 0x3b4118: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3b4118u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3b411c: 0xc096964  jal         func_25A590
    ctx->pc = 0x3B411Cu;
    SET_GPR_U32(ctx, 31, 0x3B4124u);
    ctx->pc = 0x3B4120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B411Cu;
    // 0x3b4120: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A590u, 0x3B411Cu, 0x3B4124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4124u;
label_3b4124:
    // 0x3b4124: 0xe68000b8  swc1        $f0, 0xB8($s4)
    ctx->pc = 0x3b4124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
    // 0x3b4128: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x3b4128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x3b412c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3b412cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3b4130: 0xc096968  jal         func_25A5A0
    ctx->pc = 0x3B4130u;
    SET_GPR_U32(ctx, 31, 0x3B4138u);
    ctx->pc = 0x3B4134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4130u;
    // 0x3b4134: 0xc68c00b8  lwc1        $f12, 0xB8($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A5A0u, 0x3B4130u, 0x3B4138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4138u;
label_3b4138:
    // 0x3b4138: 0xe68000b8  swc1        $f0, 0xB8($s4)
    ctx->pc = 0x3b4138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
    // 0x3b413c: 0x928200dd  lbu         $v0, 0xDD($s4)
    ctx->pc = 0x3b413cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 221)));
    // 0x3b4140: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4140u;
    {
        const bool branch_taken_0x3b4140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4140) {
            ctx->pc = 0x3B4158u;
            goto label_3b4158;
        }
    }
    ctx->pc = 0x3B4148u;
    // 0x3b4148: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3b4148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3b414c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3B414Cu;
    {
        const bool branch_taken_0x3b414c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B414Cu;
        // 0x3b4150: 0xa28200dd  sb          $v0, 0xDD($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 221), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b414c) {
            ctx->pc = 0x3B4258u;
            goto label_3b4258;
        }
    }
    ctx->pc = 0x3B4154u;
    // 0x3b4154: 0x0  nop
    ctx->pc = 0x3b4154u;
    // NOP
label_3b4158:
    // 0x3b4158: 0x928200d0  lbu         $v0, 0xD0($s4)
    ctx->pc = 0x3b4158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x3b415c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3B415Cu;
    {
        const bool branch_taken_0x3b415c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b415c) {
            ctx->pc = 0x3B4258u;
            goto label_3b4258;
        }
    }
    ctx->pc = 0x3B4164u;
    // 0x3b4164: 0x8e840030  lw          $a0, 0x30($s4)
    ctx->pc = 0x3b4164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3b4168: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b4168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b416c: 0x9083065c  lbu         $v1, 0x65C($a0)
    ctx->pc = 0x3b416cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1628)));
    // 0x3b4170: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3B4170u;
    {
        const bool branch_taken_0x3b4170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b4170) {
            ctx->pc = 0x3B4258u;
            goto label_3b4258;
        }
    }
    ctx->pc = 0x3B4178u;
    // 0x3b4178: 0xc68100bc  lwc1        $f1, 0xBC($s4)
    ctx->pc = 0x3b4178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b417c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3b417cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x3b4180: 0xc68000b8  lwc1        $f0, 0xB8($s4)
    ctx->pc = 0x3b4180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b4184: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b4184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b4188: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b4188u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b418c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x3b418cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b4190: 0x45010031  bc1t        . + 4 + (0x31 << 2)
    ctx->pc = 0x3B4190u;
    {
        const bool branch_taken_0x3b4190 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B4194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4190u;
        // 0x3b4194: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4190) {
            ctx->pc = 0x3B4258u;
            goto label_3b4258;
        }
    }
    ctx->pc = 0x3B4198u;
    // 0x3b4198: 0xc0ec994  jal         func_3B2650
    ctx->pc = 0x3B4198u;
    SET_GPR_U32(ctx, 31, 0x3B41A0u);
    ctx->pc = 0x3B419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4198u;
    // 0x3b419c: 0x34451100  ori         $a1, $v0, 0x1100 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2650u, 0x3B4198u, 0x3B41A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B41A0u;
label_3b41a0:
    // 0x3b41a0: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3B41A0u;
    {
        const bool branch_taken_0x3b41a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b41a0) {
            ctx->pc = 0x3B4258u;
            goto label_3b4258;
        }
    }
    ctx->pc = 0x3B41A8u;
    // 0x3b41a8: 0xc7818078  lwc1        $f1, -0x7F88($gp)
    ctx->pc = 0x3b41a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b41ac: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x3b41acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x3b41b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3b41b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b41b4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b41b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x3b41b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b41b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b41bc: 0x0  nop
    ctx->pc = 0x3b41bcu;
    // NOP
    // 0x3b41c0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b41c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b41c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3b41c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b41c8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x3B41C8u;
    {
        const bool branch_taken_0x3b41c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b41c8) {
            ctx->pc = 0x3B41E0u;
            goto label_3b41e0;
        }
    }
    ctx->pc = 0x3B41D0u;
    // 0x3b41d0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b41d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b41d4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3b41d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b41d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3B41D8u;
    {
        const bool branch_taken_0x3b41d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B41D8u;
        // 0x3b41dc: 0xa28300dd  sb          $v1, 0xDD($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 221), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b41d8) {
            ctx->pc = 0x3B41FCu;
            goto label_3b41fc;
        }
    }
    ctx->pc = 0x3B41E0u;
label_3b41e0:
    // 0x3b41e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3b41e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b41e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b41e8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b41e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3b41ec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3b41ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3b41f0: 0x0  nop
    ctx->pc = 0x3b41f0u;
    // NOP
    // 0x3b41f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b41f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b41f8: 0xa28300dd  sb          $v1, 0xDD($s4)
    ctx->pc = 0x3b41f8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 221), (uint8_t)GPR_U32(ctx, 3));
label_3b41fc:
    // 0x3b41fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x3b41fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3b4200: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x3b4200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x3b4204: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3b4204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3b4208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b4208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b420c: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3b420cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3b4210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b4210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b4214: 0x846304ec  lh          $v1, 0x4EC($v1)
    ctx->pc = 0x3b4214u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1260)));
    // 0x3b4218: 0x3c023c0e  lui         $v0, 0x3C0E
    ctx->pc = 0x3b4218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15374 << 16));
    // 0x3b421c: 0x3442fa36  ori         $v0, $v0, 0xFA36
    ctx->pc = 0x3b421cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64054);
    // 0x3b4220: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b4220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3b4224: 0x0  nop
    ctx->pc = 0x3b4224u;
    // NOP
    // 0x3b4228: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3b4228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3b422c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b422cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b4230: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3b4230u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3b4234: 0xe68000b4  swc1        $f0, 0xB4($s4)
    ctx->pc = 0x3b4234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 180), bits); }
    // 0x3b4238: 0xae8200b0  sw          $v0, 0xB0($s4)
    ctx->pc = 0x3b4238u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
    // 0x3b423c: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b4240: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3b4240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x3b4244: 0xae820124  sw          $v0, 0x124($s4)
    ctx->pc = 0x3b4244u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 2));
    // 0x3b4248: 0xc68000bc  lwc1        $f0, 0xBC($s4)
    ctx->pc = 0x3b4248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b424c: 0xe68000b8  swc1        $f0, 0xB8($s4)
    ctx->pc = 0x3b424cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
    // 0x3b4250: 0xa28000d1  sb          $zero, 0xD1($s4)
    ctx->pc = 0x3b4250u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 209), (uint8_t)GPR_U32(ctx, 0));
    // 0x3b4254: 0x0  nop
    ctx->pc = 0x3b4254u;
    // NOP
label_3b4258:
    // 0x3b4258: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b4258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b425c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b425cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b4260: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B4260u;
    {
        const bool branch_taken_0x3b4260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4260) {
            ctx->pc = 0x3B4270u;
            goto label_3b4270;
        }
    }
    ctx->pc = 0x3B4268u;
    // 0x3b4268: 0xc68000b8  lwc1        $f0, 0xB8($s4)
    ctx->pc = 0x3b4268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b426c: 0xe68000bc  swc1        $f0, 0xBC($s4)
    ctx->pc = 0x3b426cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 188), bits); }
label_3b4270:
    // 0x3b4270: 0xc68c00b8  lwc1        $f12, 0xB8($s4)
    ctx->pc = 0x3b4270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b4274: 0xc68d00bc  lwc1        $f13, 0xBC($s4)
    ctx->pc = 0x3b4274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3b4278: 0x460c6834  c.lt.s      $f13, $f12
    ctx->pc = 0x3b4278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b427c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x3B427Cu;
    {
        const bool branch_taken_0x3b427c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b427c) {
            ctx->pc = 0x3B42A0u;
            goto label_3b42a0;
        }
    }
    ctx->pc = 0x3B4284u;
    // 0x3b4284: 0xc68f011c  lwc1        $f15, 0x11C($s4)
    ctx->pc = 0x3b4284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x3b4288: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b4288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3b428c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3b428cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3b4290: 0xc0ec8a4  jal         func_3B2290
    ctx->pc = 0x3B4290u;
    SET_GPR_U32(ctx, 31, 0x3B4298u);
    ctx->pc = 0x3B4294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4290u;
    // 0x3b4294: 0x268400c4  addiu       $a0, $s4, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2290u, 0x3B4290u, 0x3B4298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4298u;
label_3b4298:
    // 0x3b4298: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B4298u;
    {
        const bool branch_taken_0x3b4298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4298u;
        // 0x3b429c: 0xe68000bc  swc1        $f0, 0xBC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 188), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4298) {
            ctx->pc = 0x3B42B0u;
            goto label_3b42b0;
        }
    }
    ctx->pc = 0x3B42A0u;
label_3b42a0:
    // 0x3b42a0: 0xc0ec884  jal         func_3B2210
    ctx->pc = 0x3B42A0u;
    SET_GPR_U32(ctx, 31, 0x3B42A8u);
    ctx->pc = 0x3B42A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B42A0u;
    // 0x3b42a4: 0xc68e011c  lwc1        $f14, 0x11C($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2210u, 0x3B42A0u, 0x3B42A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B42A8u;
label_3b42a8:
    // 0x3b42a8: 0xe68000bc  swc1        $f0, 0xBC($s4)
    ctx->pc = 0x3b42a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 188), bits); }
    // 0x3b42ac: 0x0  nop
    ctx->pc = 0x3b42acu;
    // NOP
label_3b42b0:
    // 0x3b42b0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3b42b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3b42b4: 0xc68c00bc  lwc1        $f12, 0xBC($s4)
    ctx->pc = 0x3b42b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3b42b8: 0xc0ec844  jal         func_3B2110
    ctx->pc = 0x3B42B8u;
    SET_GPR_U32(ctx, 31, 0x3B42C0u);
    ctx->pc = 0x3B42BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B42B8u;
    // 0x3b42bc: 0x26850090  addiu       $a1, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2110u, 0x3B42B8u, 0x3B42C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B42C0u;
label_3b42c0:
    // 0x3b42c0: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x3b42c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x3b42c4: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x3b42c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x3b42c8: 0xc0414d0  jal         func_105340
    ctx->pc = 0x3B42C8u;
    SET_GPR_U32(ctx, 31, 0x3B42D0u);
    ctx->pc = 0x3B42CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B42C8u;
    // 0x3b42cc: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105340u, 0x3B42C8u, 0x3B42D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B42D0u;
label_3b42d0:
    // 0x3b42d0: 0x7a840070  lq          $a0, 0x70($s4)
    ctx->pc = 0x3b42d0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x3b42d4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3b42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3b42d8: 0x3443f800  ori         $v1, $v0, 0xF800
    ctx->pc = 0x3b42d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x3b42dc: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x3b42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x3b42e0: 0x7e840020  sq          $a0, 0x20($s4)
    ctx->pc = 0x3b42e0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 4));
    // 0x3b42e4: 0xc68100cc  lwc1        $f1, 0xCC($s4)
    ctx->pc = 0x3b42e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b42e8: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x3b42e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b42ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b42ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b42f0: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x3b42f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x3b42f4: 0x8e840124  lw          $a0, 0x124($s4)
    ctx->pc = 0x3b42f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b42f8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b42f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b42fc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3b42fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b4300: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x3B4300u;
    {
        const bool branch_taken_0x3b4300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b4300) {
            ctx->pc = 0x3B4428u;
            goto label_3b4428;
        }
    }
    ctx->pc = 0x3B4308u;
    // 0x3b4308: 0xc69500c0  lwc1        $f21, 0xC0($s4)
    ctx->pc = 0x3b4308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3b430c: 0xc69400bc  lwc1        $f20, 0xBC($s4)
    ctx->pc = 0x3b430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b4310: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x3b4310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b4314: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x3B4314u;
    {
        const bool branch_taken_0x3b4314 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b4314) {
            ctx->pc = 0x3B4360u;
            goto label_3b4360;
        }
    }
    ctx->pc = 0x3B431Cu;
    // 0x3b431c: 0xc047b2c  jal         func_11ECB0
    ctx->pc = 0x3B431Cu;
    SET_GPR_U32(ctx, 31, 0x3B4324u);
    ctx->pc = 0x3B4320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B431Cu;
    // 0x3b4320: 0xc68c0090  lwc1        $f12, 0x90($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ECB0u, 0x3B431Cu, 0x3B4324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4324u;
label_3b4324:
    // 0x3b4324: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b4324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3b4328: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3b4328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3b432c: 0xc68400c0  lwc1        $f4, 0xC0($s4)
    ctx->pc = 0x3b432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3b4330: 0x46151883  div.s       $f2, $f3, $f21
    ctx->pc = 0x3b4330u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[21]); }
    // 0x3b4334: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3b4334u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3b4338: 0x4602a002  mul.s       $f0, $f20, $f2
    ctx->pc = 0x3b4338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x3b433c: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x3b433cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x3b4340: 0xc6810014  lwc1        $f1, 0x14($s4)
    ctx->pc = 0x3b4340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b4344: 0x46002082  mul.s       $f2, $f4, $f0
    ctx->pc = 0x3b4344u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3b4348: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x3b4348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3b434c: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x3b434cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x3b4350: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x3b4350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b4354: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3b4354u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3b4358: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x3b4358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
    // 0x3b435c: 0x0  nop
    ctx->pc = 0x3b435cu;
    // NOP
label_3b4360:
    // 0x3b4360: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x3b4360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x3b4364: 0xc68200bc  lwc1        $f2, 0xBC($s4)
    ctx->pc = 0x3b4364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b4368: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b4368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b436c: 0x0  nop
    ctx->pc = 0x3b436cu;
    // NOP
    // 0x3b4370: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3b4370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b4374: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x3B4374u;
    {
        const bool branch_taken_0x3b4374 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4374u;
        // 0x3b4378: 0x3c023ba3  lui         $v0, 0x3BA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4374) {
            ctx->pc = 0x3B43C8u;
            goto label_3b43c8;
        }
    }
    ctx->pc = 0x3B437Cu;
    // 0x3b437c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3b437cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3b4380: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3b4380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x3b4384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b4384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b4388: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b4388u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b438c: 0x0  nop
    ctx->pc = 0x3b438cu;
    // NOP
    // 0x3b4390: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3b4390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3b4394: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x3b4394u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3b4398: 0xc68d00c8  lwc1        $f13, 0xC8($s4)
    ctx->pc = 0x3b4398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3b439c: 0xc68e011c  lwc1        $f14, 0x11C($s4)
    ctx->pc = 0x3b439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3b43a0: 0xc0ec884  jal         func_3B2210
    ctx->pc = 0x3B43A0u;
    SET_GPR_U32(ctx, 31, 0x3B43A8u);
    ctx->pc = 0x3B43A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B43A0u;
    // 0x3b43a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2210u, 0x3B43A0u, 0x3B43A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B43A8u;
label_3b43a8:
    // 0x3b43a8: 0xe68000c8  swc1        $f0, 0xC8($s4)
    ctx->pc = 0x3b43a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 200), bits); }
    // 0x3b43ac: 0xe69400c8  swc1        $f20, 0xC8($s4)
    ctx->pc = 0x3b43acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 200), bits); }
    // 0x3b43b0: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b43b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b43b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b43b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b43b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3B43B8u;
    {
        const bool branch_taken_0x3b43b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b43b8) {
            ctx->pc = 0x3B43F8u;
            goto label_3b43f8;
        }
    }
    ctx->pc = 0x3B43C0u;
    // 0x3b43c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B43C0u;
    {
        const bool branch_taken_0x3b43c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B43C0u;
        // 0x3b43c4: 0xe69400c8  swc1        $f20, 0xC8($s4) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 200), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b43c0) {
            ctx->pc = 0x3B43F8u;
            goto label_3b43f8;
        }
    }
    ctx->pc = 0x3B43C8u;
label_3b43c8:
    // 0x3b43c8: 0xc68e011c  lwc1        $f14, 0x11C($s4)
    ctx->pc = 0x3b43c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3b43cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3b43ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3b43d0: 0xc0ec884  jal         func_3B2210
    ctx->pc = 0x3B43D0u;
    SET_GPR_U32(ctx, 31, 0x3B43D8u);
    ctx->pc = 0x3B43D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B43D0u;
    // 0x3b43d4: 0xc68d00c8  lwc1        $f13, 0xC8($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2210u, 0x3B43D0u, 0x3B43D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B43D8u;
label_3b43d8:
    // 0x3b43d8: 0xe68000c8  swc1        $f0, 0xC8($s4)
    ctx->pc = 0x3b43d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 200), bits); }
    // 0x3b43dc: 0xae8000c8  sw          $zero, 0xC8($s4)
    ctx->pc = 0x3b43dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 200), GPR_U32(ctx, 0));
    // 0x3b43e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b43e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b43e4: 0x8e820124  lw          $v0, 0x124($s4)
    ctx->pc = 0x3b43e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b43e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3b43e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3b43ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B43ECu;
    {
        const bool branch_taken_0x3b43ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b43ec) {
            ctx->pc = 0x3B43F8u;
            goto label_3b43f8;
        }
    }
    ctx->pc = 0x3B43F4u;
    // 0x3b43f4: 0xe68000c8  swc1        $f0, 0xC8($s4)
    ctx->pc = 0x3b43f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 200), bits); }
label_3b43f8:
    // 0x3b43f8: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x3b43f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b43fc: 0xc68100c8  lwc1        $f1, 0xC8($s4)
    ctx->pc = 0x3b43fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b4400: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x3b4400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b4404: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b4404u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b4408: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b4408u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b440c: 0xe6800014  swc1        $f0, 0x14($s4)
    ctx->pc = 0x3b440cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x3b4410: 0xc6220010  lwc1        $f2, 0x10($s1)
    ctx->pc = 0x3b4410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b4414: 0xc68100c8  lwc1        $f1, 0xC8($s4)
    ctx->pc = 0x3b4414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b4418: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x3b4418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b441c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3b441cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3b4420: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b4420u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b4424: 0xe6800024  swc1        $f0, 0x24($s4)
    ctx->pc = 0x3b4424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 36), bits); }
label_3b4428:
    // 0x3b4428: 0xc0ec75c  jal         func_3B1D70
    ctx->pc = 0x3B4428u;
    SET_GPR_U32(ctx, 31, 0x3B4430u);
    ctx->pc = 0x3B442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4428u;
    // 0x3b442c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1D70u, 0x3B4428u, 0x3B4430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4430u;
label_3b4430:
    // 0x3b4430: 0x8e850124  lw          $a1, 0x124($s4)
    ctx->pc = 0x3b4430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b4434: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x3b4434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3b4438: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3b4438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x3b443c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x3b443cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x3b4440: 0xae840124  sw          $a0, 0x124($s4)
    ctx->pc = 0x3b4440u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 4));
    // 0x3b4444: 0x8e840124  lw          $a0, 0x124($s4)
    ctx->pc = 0x3b4444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x3b4448: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b4448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b444c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B444Cu;
    {
        const bool branch_taken_0x3b444c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B444Cu;
        // 0x3b4450: 0x3c03fff0  lui         $v1, 0xFFF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b444c) {
            ctx->pc = 0x3B4460u;
            goto label_3b4460;
        }
    }
    ctx->pc = 0x3B4454u;
    // 0x3b4454: 0x346307ff  ori         $v1, $v1, 0x7FF
    ctx->pc = 0x3b4454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2047);
    // 0x3b4458: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3b4458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3b445c: 0xae830124  sw          $v1, 0x124($s4)
    ctx->pc = 0x3b445cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 292), GPR_U32(ctx, 3));
label_3b4460:
    // 0x3b4460: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3b4460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b4464: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b4464u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b4468: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3b4468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3b446c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b446cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b4470: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3b4470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3b4474: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b4474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b4478: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b4478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b447c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b447cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b4480: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b4480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b4484: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b4484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b4488: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4488u;
        // 0x3b448c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4490u;
}
