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

// Function: sub_002D9DD0
// Address: 0x2d9dd0 - 0x2d9f60
void sub_002D9DD0_0x2d9dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9DD0_0x2d9dd0");
#endif

    switch (ctx->pc) {
        case 0x2d9df8u: goto label_2d9df8;
        case 0x2d9e18u: goto label_2d9e18;
        case 0x2d9e40u: goto label_2d9e40;
        case 0x2d9eb0u: goto label_2d9eb0;
        case 0x2d9f2cu: goto label_2d9f2c;
        default: break;
    }

    ctx->pc = 0x2d9dd0u;

    // 0x2d9dd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d9dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d9dd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d9dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d9dd8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d9dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d9ddc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d9ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d9de0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d9de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9de4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d9de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d9de8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d9de8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9dec: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2D9DECu;
    {
        const bool branch_taken_0x2d9dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9DECu;
        // 0x2d9df0: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9dec) {
            ctx->pc = 0x2D9F38u;
            goto label_2d9f38;
        }
    }
    ctx->pc = 0x2D9DF4u;
    // 0x2d9df4: 0x0  nop
    ctx->pc = 0x2d9df4u;
    // NOP
label_2d9df8:
    // 0x2d9df8: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x2d9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x2d9dfc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2d9dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2d9e00: 0x24420850  addiu       $v0, $v0, 0x850
    ctx->pc = 0x2d9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2128));
    // 0x2d9e04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9e08: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d9e08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d9e0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d9e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9e10: 0xc07cce0  jal         func_1F3380
    ctx->pc = 0x2D9E10u;
    SET_GPR_U32(ctx, 31, 0x2D9E18u);
    ctx->pc = 0x2D9E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9E10u;
    // 0x2d9e14: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3380u, 0x2D9E10u, 0x2D9E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E18u;
label_2d9e18:
    // 0x2d9e18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d9e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e1c: 0x12200044  beqz        $s1, . + 4 + (0x44 << 2)
    ctx->pc = 0x2D9E1Cu;
    {
        const bool branch_taken_0x2d9e1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9e1c) {
            ctx->pc = 0x2D9F30u;
            goto label_2d9f30;
        }
    }
    ctx->pc = 0x2D9E24u;
    // 0x2d9e24: 0x3c02008c  lui         $v0, 0x8C
    ctx->pc = 0x2d9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)140 << 16));
    // 0x2d9e28: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2d9e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2d9e2c: 0x24420850  addiu       $v0, $v0, 0x850
    ctx->pc = 0x2d9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2128));
    // 0x2d9e30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9e34: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2d9e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9e38: 0xc0b67d8  jal         func_2D9F60
    ctx->pc = 0x2D9E38u;
    SET_GPR_U32(ctx, 31, 0x2D9E40u);
    ctx->pc = 0x2D9E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9E38u;
    // 0x2d9e3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F60u, 0x2D9E38u, 0x2D9E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9E40u;
label_2d9e40:
    // 0x2d9e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d9e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9e44: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2D9E44u;
    {
        const bool branch_taken_0x2d9e44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E44u;
        // 0x2d9e48: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9e44) {
            ctx->pc = 0x2D9F30u;
            goto label_2d9f30;
        }
    }
    ctx->pc = 0x2D9E4Cu;
    // 0x2d9e4c: 0x26220770  addiu       $v0, $s1, 0x770
    ctx->pc = 0x2d9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1904));
    // 0x2d9e50: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x2d9e50u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9e54: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2d9e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2d9e58: 0x2463f390  addiu       $v1, $v1, -0xC70
    ctx->pc = 0x2d9e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964112));
    // 0x2d9e5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2d9e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d9e60: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x2d9e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d9e64: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x2d9e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x2d9e68: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2d9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2d9e6c: 0x7ce80000  sq          $t0, 0x0($a3)
    ctx->pc = 0x2d9e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 8));
    // 0x2d9e70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9e74: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2d9e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9e78: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x2d9e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2d9e7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9e80: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2d9e80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9e84: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2d9e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2d9e88: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2d9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2d9e8c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2d9e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2d9e90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d9e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d9e94: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2d9e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d9e98: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d9e98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d9e9c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2d9e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2d9ea0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2d9ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9ea4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d9ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d9ea8: 0xc04d748  jal         func_135D20
    ctx->pc = 0x2D9EA8u;
    SET_GPR_U32(ctx, 31, 0x2D9EB0u);
    ctx->pc = 0x2D9EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9EA8u;
    // 0x2d9eac: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D20u, 0x2D9EA8u, 0x2D9EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9EB0u;
label_2d9eb0:
    // 0x2d9eb0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2D9EB0u;
    {
        const bool branch_taken_0x2d9eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9eb0) {
            ctx->pc = 0x2D9F30u;
            goto label_2d9f30;
        }
    }
    ctx->pc = 0x2D9EB8u;
    // 0x2d9eb8: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x2d9eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x2d9ebc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2d9ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d9ec0: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x2d9ec0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2d9ec4: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x2d9ec4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2d9ec8: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2d9ec8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2d9ecc: 0x2463f870  addiu       $v1, $v1, -0x790
    ctx->pc = 0x2d9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965360));
    // 0x2d9ed0: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x2d9ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x2d9ed4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2d9ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2d9ed8: 0x42c3c  dsll32      $a1, $a0, 16
    ctx->pc = 0x2d9ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 16));
    // 0x2d9edc: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x2d9edcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2d9ee0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x2d9ee0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x2d9ee4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9EE4u;
    {
        const bool branch_taken_0x2d9ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EE4u;
        // 0x2d9ee8: 0x6343f  dsra32      $a2, $a2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ee4) {
            ctx->pc = 0x2D9EF8u;
            goto label_2d9ef8;
        }
    }
    ctx->pc = 0x2D9EECu;
    // 0x2d9eec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9EECu;
    {
        const bool branch_taken_0x2d9eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EECu;
        // 0x2d9ef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9eec) {
            ctx->pc = 0x2D9F00u;
            goto label_2d9f00;
        }
    }
    ctx->pc = 0x2D9EF4u;
    // 0x2d9ef4: 0x0  nop
    ctx->pc = 0x2d9ef4u;
    // NOP
label_2d9ef8:
    // 0x2d9ef8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9ef8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9efc: 0x0  nop
    ctx->pc = 0x2d9efcu;
    // NOP
label_2d9f00:
    // 0x2d9f00: 0x8e2329c0  lw          $v1, 0x29C0($s1)
    ctx->pc = 0x2d9f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10688)));
    // 0x2d9f04: 0x304b00ff  andi        $t3, $v0, 0xFF
    ctx->pc = 0x2d9f04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9f08: 0x3c04008d  lui         $a0, 0x8D
    ctx->pc = 0x2d9f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)141 << 16));
    // 0x2d9f0c: 0x9202000a  lbu         $v0, 0xA($s0)
    ctx->pc = 0x2d9f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2d9f10: 0x24846cc0  addiu       $a0, $a0, 0x6CC0
    ctx->pc = 0x2d9f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27840));
    // 0x2d9f14: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x2d9f14u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d9f18: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2d9f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2d9f1c: 0x86090004  lh          $t1, 0x4($s0)
    ctx->pc = 0x2d9f1cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d9f20: 0x860a0006  lh          $t2, 0x6($s0)
    ctx->pc = 0x2d9f20u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x2d9f24: 0xc0b546c  jal         func_2D51B0
    ctx->pc = 0x2D9F24u;
    SET_GPR_U32(ctx, 31, 0x2D9F2Cu);
    ctx->pc = 0x2D9F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9F24u;
    // 0x2d9f28: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D51B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D51B0u, 0x2D9F24u, 0x2D9F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9F2Cu;
label_2d9f2c:
    // 0x2d9f2c: 0x0  nop
    ctx->pc = 0x2d9f2cu;
    // NOP
label_2d9f30:
    // 0x2d9f30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d9f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d9f34: 0x0  nop
    ctx->pc = 0x2d9f34u;
    // NOP
label_2d9f38:
    // 0x2d9f38: 0x2e430020  sltiu       $v1, $s2, 0x20
    ctx->pc = 0x2d9f38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x2d9f3c: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x2D9F3Cu;
    {
        const bool branch_taken_0x2d9f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9f3c) {
            ctx->pc = 0x2D9DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9df8;
        }
    }
    ctx->pc = 0x2D9F44u;
    // 0x2d9f44: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d9f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d9f48: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d9f48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9f4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d9f4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9f50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d9f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d9f54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d9f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9f58: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F58u;
        // 0x2d9f5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9F60u;
}
