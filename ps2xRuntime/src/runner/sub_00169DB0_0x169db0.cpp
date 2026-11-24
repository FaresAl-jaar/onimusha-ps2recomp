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

// Function: sub_00169DB0
// Address: 0x169db0 - 0x16a61c
void sub_00169DB0_0x169db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169DB0_0x169db0");
#endif

    switch (ctx->pc) {
        case 0x169e10u: goto label_169e10;
        case 0x169e78u: goto label_169e78;
        case 0x169ea0u: goto label_169ea0;
        case 0x169efcu: goto label_169efc;
        case 0x16a040u: goto label_16a040;
        case 0x16a1c4u: goto label_16a1c4;
        case 0x16a2e8u: goto label_16a2e8;
        case 0x16a328u: goto label_16a328;
        case 0x16a3d0u: goto label_16a3d0;
        case 0x16a5c4u: goto label_16a5c4;
        default: break;
    }

    ctx->pc = 0x169db0u;

    // 0x169db0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x169db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x169db4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x169db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x169db8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x169db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x169dbc: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x169dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x169dc0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x169dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x169dc4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x169dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x169dc8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x169dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x169dcc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x169dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x169dd0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x169dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x169dd4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x169dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x169dd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x169dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x169ddc: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x169ddcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x169de0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x169de0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x169de4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x169de4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x169de8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x169de8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x169dec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x169decu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x169df0: 0x8c970034  lw          $s7, 0x34($a0)
    ctx->pc = 0x169df0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x169df4: 0x92f4000a  lbu         $s4, 0xA($s7)
    ctx->pc = 0x169df4u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 10)));
    // 0x169df8: 0x128001f7  beqz        $s4, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x169DF8u;
    {
        const bool branch_taken_0x169df8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x169DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169DF8u;
        // 0x169dfc: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169df8) {
            ctx->pc = 0x16A5D8u;
            goto label_16a5d8;
        }
    }
    ctx->pc = 0x169E00u;
    // 0x169e00: 0x86c3002c  lh          $v1, 0x2C($s6)
    ctx->pc = 0x169e00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x169e04: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x169e04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e08: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x169E08u;
    {
        const bool branch_taken_0x169e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E08u;
        // 0x169e0c: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169e08) {
            ctx->pc = 0x169E60u;
            goto label_169e60;
        }
    }
    ctx->pc = 0x169E10u;
label_169e10:
    // 0x169e10: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x169e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x169e14: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x169e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x169e18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169e1c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x169e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169e20: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x169e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169e24: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x169e24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169e28: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x169E28u;
    {
        const bool branch_taken_0x169e28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x169e28) {
            ctx->pc = 0x169EB0u;
            goto label_169eb0;
        }
    }
    ctx->pc = 0x169E30u;
    // 0x169e30: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x169e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169e34: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x169e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169e38: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x169e38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169e3c: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x169E3Cu;
    {
        const bool branch_taken_0x169e3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x169e3c) {
            ctx->pc = 0x169EB0u;
            goto label_169eb0;
        }
    }
    ctx->pc = 0x169E44u;
    // 0x169e44: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x169e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169e48: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x169e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169e4c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x169e4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169e50: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x169E50u;
    {
        const bool branch_taken_0x169e50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x169e50) {
            ctx->pc = 0x169EB0u;
            goto label_169eb0;
        }
    }
    ctx->pc = 0x169E58u;
    // 0x169e58: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x169e58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x169e5c: 0x0  nop
    ctx->pc = 0x169e5cu;
    // NOP
label_169e60:
    // 0x169e60: 0x2b4182b  sltu        $v1, $s5, $s4
    ctx->pc = 0x169e60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x169e64: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x169E64u;
    {
        const bool branch_taken_0x169e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169e64) {
            ctx->pc = 0x169E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169e10;
        }
    }
    ctx->pc = 0x169E6Cu;
    // 0x169e6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x169E6Cu;
    {
        const bool branch_taken_0x169e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169e6c) {
            ctx->pc = 0x169EB0u;
            goto label_169eb0;
        }
    }
    ctx->pc = 0x169E74u;
    // 0x169e74: 0x0  nop
    ctx->pc = 0x169e74u;
    // NOP
label_169e78:
    // 0x169e78: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x169e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x169e7c: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x169e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x169e80: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x169e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x169e84: 0x152900  sll         $a1, $s5, 4
    ctx->pc = 0x169e84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x169e88: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x169e88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x169e8c: 0x34440100  ori         $a0, $v0, 0x100
    ctx->pc = 0x169e8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x169e90: 0x344702a0  ori         $a3, $v0, 0x2A0
    ctx->pc = 0x169e90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)672);
    // 0x169e94: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x169e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x169e98: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x169E98u;
    SET_GPR_U32(ctx, 31, 0x169EA0u);
    ctx->pc = 0x169E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169E98u;
    // 0x169e9c: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x169E98u, 0x169EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169EA0u;
label_169ea0:
    // 0x169ea0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x169EA0u;
    {
        const bool branch_taken_0x169ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169ea0) {
            ctx->pc = 0x169EC0u;
            goto label_169ec0;
        }
    }
    ctx->pc = 0x169EA8u;
    // 0x169ea8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x169ea8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x169eac: 0x0  nop
    ctx->pc = 0x169eacu;
    // NOP
label_169eb0:
    // 0x169eb0: 0x2b4182b  sltu        $v1, $s5, $s4
    ctx->pc = 0x169eb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x169eb4: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x169EB4u;
    {
        const bool branch_taken_0x169eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169eb4) {
            ctx->pc = 0x169E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169e78;
        }
    }
    ctx->pc = 0x169EBCu;
    // 0x169ebc: 0x0  nop
    ctx->pc = 0x169ebcu;
    // NOP
label_169ec0:
    // 0x169ec0: 0x2683fffe  addiu       $v1, $s4, -0x2
    ctx->pc = 0x169ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
    // 0x169ec4: 0x75082b  sltu        $at, $v1, $s5
    ctx->pc = 0x169ec4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x169ec8: 0x142001c3  bnez        $at, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x169EC8u;
    {
        const bool branch_taken_0x169ec8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x169ec8) {
            ctx->pc = 0x16A5D8u;
            goto label_16a5d8;
        }
    }
    ctx->pc = 0x169ED0u;
    // 0x169ed0: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x169ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x169ed4: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x169ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x169ed8: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x169ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x169edc: 0x22900  sll         $a1, $v0, 4
    ctx->pc = 0x169edcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x169ee0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x169ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x169ee4: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x169ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x169ee8: 0x34440110  ori         $a0, $v0, 0x110
    ctx->pc = 0x169ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x169eec: 0x344702a4  ori         $a3, $v0, 0x2A4
    ctx->pc = 0x169eecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)676);
    // 0x169ef0: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x169ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x169ef4: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x169EF4u;
    SET_GPR_U32(ctx, 31, 0x169EFCu);
    ctx->pc = 0x169EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169EF4u;
    // 0x169ef8: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x169EF4u, 0x169EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169EFCu;
label_169efc:
    // 0x169efc: 0x104001b6  beqz        $v0, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x169EFCu;
    {
        const bool branch_taken_0x169efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EFCu;
        // 0x169f00: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169efc) {
            ctx->pc = 0x16A5D8u;
            goto label_16a5d8;
        }
    }
    ctx->pc = 0x169F04u;
    // 0x169f04: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x169f04u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 264))); // MMIO: 0x70000108
    // 0x169f08: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x169f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x169f0c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169f10: 0x8c230118  lw          $v1, 0x118($at)
    ctx->pc = 0x169f10u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x169f14: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x169f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x169f18: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x169f18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x169f1c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x169F1Cu;
    {
        const bool branch_taken_0x169f1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x169f1c) {
            ctx->pc = 0x169F30u;
            goto label_169f30;
        }
    }
    ctx->pc = 0x169F24u;
    // 0x169f24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x169F24u;
    {
        const bool branch_taken_0x169f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x169f24) {
            ctx->pc = 0x169F38u;
            goto label_169f38;
        }
    }
    ctx->pc = 0x169F2Cu;
    // 0x169f2c: 0x0  nop
    ctx->pc = 0x169f2cu;
    // NOP
label_169f30:
    // 0x169f30: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x169f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x169f34: 0x0  nop
    ctx->pc = 0x169f34u;
    // NOP
label_169f38:
    // 0x169f38: 0x8ec60018  lw          $a2, 0x18($s6)
    ctx->pc = 0x169f38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x169f3c: 0x8ec3001c  lw          $v1, 0x1C($s6)
    ctx->pc = 0x169f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x169f40: 0x96c20028  lhu         $v0, 0x28($s6)
    ctx->pc = 0x169f40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x169f44: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x169f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x169f48: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x169f48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169f4c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x169f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x169f50: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x169f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x169f54: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x169f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x169f58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169f5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x169f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x169f60: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169F60u;
    {
        const bool branch_taken_0x169f60 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x169F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F60u;
        // 0x169f64: 0xa3f021  addu        $fp, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f60) {
            ctx->pc = 0x169F74u;
            goto label_169f74;
        }
    }
    ctx->pc = 0x169F68u;
    // 0x169f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169f6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x169F6Cu;
    {
        const bool branch_taken_0x169f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F6Cu;
        // 0x169f70: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f6c) {
            ctx->pc = 0x169F90u;
            goto label_169f90;
        }
    }
    ctx->pc = 0x169F74u;
label_169f74:
    // 0x169f74: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x169f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x169f78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x169f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x169f7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x169f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x169f80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x169f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169f84: 0x0  nop
    ctx->pc = 0x169f84u;
    // NOP
    // 0x169f88: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x169f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x169f8c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x169f8cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_169f90:
    // 0x169f90: 0x87c40008  lh          $a0, 0x8($fp)
    ctx->pc = 0x169f90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x169f94: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169f98: 0xc4210340  lwc1        $f1, 0x340($at)
    ctx->pc = 0x169f98u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000340u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169f9c: 0x3c023d80  lui         $v0, 0x3D80
    ctx->pc = 0x169f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15744 << 16));
    // 0x169fa0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x169fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x169fa4: 0x97d30004  lhu         $s3, 0x4($fp)
    ctx->pc = 0x169fa4u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x169fa8: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x169fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x169fac: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x169facu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x169fb0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x169fb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x169fb4: 0x97c20006  lhu         $v0, 0x6($fp)
    ctx->pc = 0x169fb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 6)));
    // 0x169fb8: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x169fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x169fbc: 0x94001b  divu        $zero, $a0, $s4
    ctx->pc = 0x169fbcu;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x169fc0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x169fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x169fc4: 0xc4200354  lwc1        $f0, 0x354($at)
    ctx->pc = 0x169fc4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000354u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169fc8: 0x46020e02  mul.s       $f24, $f1, $f2
    ctx->pc = 0x169fc8u;
    ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x169fcc: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x169fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x169fd0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x169fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x169fd4: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x169fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x169fd8: 0x87c5000a  lh          $a1, 0xA($fp)
    ctx->pc = 0x169fd8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 10)));
    // 0x169fdc: 0x3446011c  ori         $a2, $v0, 0x11C
    ctx->pc = 0x169fdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)284);
    // 0x169fe0: 0x8c29fc90  lw          $t1, -0x370($at)
    ctx->pc = 0x169fe0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x81FC90u));
    // 0x169fe4: 0x92c20023  lbu         $v0, 0x23($s6)
    ctx->pc = 0x169fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 35)));
    // 0x169fe8: 0x460205c2  mul.s       $f23, $f0, $f2
    ctx->pc = 0x169fe8u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x169fec: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x169fecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x169ff0: 0x92e20001  lbu         $v0, 0x1($s7)
    ctx->pc = 0x169ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x169ff4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x169ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x169ff8: 0x8eca0020  lw          $t2, 0x20($s6)
    ctx->pc = 0x169ff8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x169ffc: 0xa923c  dsll32      $s2, $t2, 8
    ctx->pc = 0x169ffcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 10) << (32 + 8));
    // 0x16a000: 0x12923e  dsrl32      $s2, $s2, 8
    ctx->pc = 0x16a000u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 8));
    // 0x16a004: 0x1012  mflo        $v0
    ctx->pc = 0x16a004u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x16a008: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x16a008u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x16a00c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x16a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x16a010: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x16a010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16a014: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16a014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16a018: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x16a018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x16a01c: 0x34850300  ori         $a1, $a0, 0x300
    ctx->pc = 0x16a01cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x16a020: 0x2522000f  addiu       $v0, $t1, 0xF
    ctx->pc = 0x16a020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x16a024: 0x488824  and         $s1, $v0, $t0
    ctx->pc = 0x16a024u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x16a028: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x16a028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
    // 0x16a02c: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x16a02cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x16a030: 0xae260004  sw          $a2, 0x4($s1)
    ctx->pc = 0x16a030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 6));
    // 0x16a034: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x16a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x16a038: 0xc041442  jal         func_105108
    ctx->pc = 0x16A038u;
    SET_GPR_U32(ctx, 31, 0x16A040u);
    ctx->pc = 0x16A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A038u;
    // 0x16a03c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x16A038u, 0x16A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A040u;
label_16a040:
    // 0x16a040: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a044: 0x8c250110  lw          $a1, 0x110($at)
    ctx->pc = 0x16a044u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x16a048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a04c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a050: 0x8c240100  lw          $a0, 0x100($at)
    ctx->pc = 0x16a050u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x16a054: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a058: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x16a058u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16a05c: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x16a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x16a060: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x16a060u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a064: 0x0  nop
    ctx->pc = 0x16a064u;
    // NOP
    // 0x16a068: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x16a068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x16a06c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a06cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a070: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x16a070u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16a074: 0x4615a81a  mula.s      $f21, $f21
    ctx->pc = 0x16a074u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[21], ctx->f[21]));
    // 0x16a078: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16a078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a07c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a07cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a080: 0x0  nop
    ctx->pc = 0x16a080u;
    // NOP
    // 0x16a084: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x16a084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x16a088: 0x4614a05c  madd.s      $f1, $f20, $f20
    ctx->pc = 0x16a088u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x16a08c: 0x46010584  c1          0x10584
    ctx->pc = 0x16a08cu;
    ctx->f[22] = FPU_SQRT_S(ctx->f[1]);
    // 0x16a090: 0x0  nop
    ctx->pc = 0x16a090u;
    // NOP
    // 0x16a094: 0x0  nop
    ctx->pc = 0x16a094u;
    // NOP
    // 0x16a098: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x16a098u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a09c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16A09Cu;
    {
        const bool branch_taken_0x16a09c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A09Cu;
        // 0x16a0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a09c) {
            ctx->pc = 0x16A0B0u;
            goto label_16a0b0;
        }
    }
    ctx->pc = 0x16A0A4u;
    // 0x16a0a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16A0A4u;
    {
        const bool branch_taken_0x16a0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0A4u;
        // 0x16a0a8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0a4) {
            ctx->pc = 0x16A0E8u;
            goto label_16a0e8;
        }
    }
    ctx->pc = 0x16A0ACu;
    // 0x16a0ac: 0x0  nop
    ctx->pc = 0x16a0acu;
    // NOP
label_16a0b0:
    // 0x16a0b0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a0b4: 0xc4220008  lwc1        $f2, 0x8($at)
    ctx->pc = 0x16a0b4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a0b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16a0bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a0bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a0c0: 0x4614c002  mul.s       $f0, $f24, $f20
    ctx->pc = 0x16a0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x16a0c4: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x16a0c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x16a0c8: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x16a0c8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x16a0cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16a0ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a0d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16a0d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16a0d4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16a0d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16a0d8: 0x4615b802  mul.s       $f0, $f23, $f21
    ctx->pc = 0x16a0d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x16a0dc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16a0dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a0e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16a0e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16a0e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16a0e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16a0e8:
    // 0x16a0e8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x16a0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16a0ec: 0x2952823  subu        $a1, $s4, $s5
    ctx->pc = 0x16a0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x16a0f0: 0x12423c  dsll32      $t0, $s2, 8
    ctx->pc = 0x16a0f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) << (32 + 8));
    // 0x16a0f4: 0x8423e  dsrl32      $t0, $t0, 8
    ctx->pc = 0x16a0f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 8));
    // 0x16a0f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a0fc: 0x70853818  mult1       $a3, $a0, $a1
    ctx->pc = 0x16a0fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x16a100: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x16a100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x16a104: 0x953018  mult        $a2, $a0, $s5
    ctx->pc = 0x16a104u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x16a108: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x16a108u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x16a10c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x16a10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x16a110: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x16a110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16a114: 0x34850300  ori         $a1, $a0, 0x300
    ctx->pc = 0x16a114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x16a118: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x16a118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x16a11c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x16a11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x16a120: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x16a120u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x16a124: 0xd4001b  divu        $zero, $a2, $s4
    ctx->pc = 0x16a124u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x16a128: 0x153900  sll         $a3, $s5, 4
    ctx->pc = 0x16a128u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x16a12c: 0x0  nop
    ctx->pc = 0x16a12cu;
    // NOP
    // 0x16a130: 0x3012  mflo        $a2
    ctx->pc = 0x16a130u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x16a134: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x16a134u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x16a138: 0x1069025  or          $s2, $t0, $a2
    ctx->pc = 0x16a138u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x16a13c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x16a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x16a140: 0x8c260100  lw          $a2, 0x100($at)
    ctx->pc = 0x16a140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 256)));
    // 0x16a144: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x16a144u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16a148: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a14c: 0xa6060000  sh          $a2, 0x0($s0)
    ctx->pc = 0x16a14cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x16a150: 0x8c260104  lw          $a2, 0x104($at)
    ctx->pc = 0x16a150u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16a154: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x16a154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16a158: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a15c: 0xa6060002  sh          $a2, 0x2($s0)
    ctx->pc = 0x16a15cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x16a160: 0x8c260108  lw          $a2, 0x108($at)
    ctx->pc = 0x16a160u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16a164: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x16a164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
    // 0x16a168: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a16c: 0xa613000c  sh          $s3, 0xC($s0)
    ctx->pc = 0x16a16cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 19));
    // 0x16a170: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x16a170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16a174: 0xa606000e  sh          $a2, 0xE($s0)
    ctx->pc = 0x16a174u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x16a178: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x16a178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x16a17c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x16a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x16a180: 0x8c260100  lw          $a2, 0x100($at)
    ctx->pc = 0x16a180u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x16a184: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16a184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x16a188: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a18c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x16a18cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a190: 0x8c230104  lw          $v1, 0x104($at)
    ctx->pc = 0x16a190u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16a194: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16a194u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a198: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a19c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x16a19cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16a1a0: 0x8c220108  lw          $v0, 0x108($at)
    ctx->pc = 0x16a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000108u)); // MMIO: 0x70000108
    // 0x16a1a4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16a1a8: 0xa613000c  sh          $s3, 0xC($s0)
    ctx->pc = 0x16a1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 19));
    // 0x16a1ac: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x16a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16a1b0: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x16a1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x16a1b4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x16a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x16a1b8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x16a1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x16a1bc: 0xc041442  jal         func_105108
    ctx->pc = 0x16A1BCu;
    SET_GPR_U32(ctx, 31, 0x16A1C4u);
    ctx->pc = 0x16A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A1BCu;
    // 0x16a1c0: 0x473021  addu        $a2, $v0, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x16A1BCu, 0x16A1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A1C4u;
label_16a1c4:
    // 0x16a1c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a1c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a1c8: 0x0  nop
    ctx->pc = 0x16a1c8u;
    // NOP
    // 0x16a1cc: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x16a1ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a1d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x16A1D0u;
    {
        const bool branch_taken_0x16a1d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1D0u;
        // 0x16a1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1d0) {
            ctx->pc = 0x16A1E0u;
            goto label_16a1e0;
        }
    }
    ctx->pc = 0x16A1D8u;
    // 0x16a1d8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16A1D8u;
    {
        const bool branch_taken_0x16a1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1D8u;
        // 0x16a1dc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1d8) {
            ctx->pc = 0x16A218u;
            goto label_16a218;
        }
    }
    ctx->pc = 0x16A1E0u;
label_16a1e0:
    // 0x16a1e0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a1e4: 0xc4220008  lwc1        $f2, 0x8($at)
    ctx->pc = 0x16a1e4u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a1e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16a1ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a1ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a1f0: 0x4614c002  mul.s       $f0, $f24, $f20
    ctx->pc = 0x16a1f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x16a1f4: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x16a1f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x16a1f8: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x16a1f8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x16a1fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16a1fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a200: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16a200u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16a204: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16a204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16a208: 0x4615b802  mul.s       $f0, $f23, $f21
    ctx->pc = 0x16a208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x16a20c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16a20cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a210: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16a210u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16a214: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16a214u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16a218:
    // 0x16a218: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x16a218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x16a21c: 0x2952823  subu        $a1, $s4, $s5
    ctx->pc = 0x16a21cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x16a220: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a224: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x16a224u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x16a228: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x16a228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16a22c: 0x70953018  mult1       $a2, $a0, $s5
    ctx->pc = 0x16a22cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x16a230: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x16a230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16a234: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x16a234u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x16a238: 0x853818  mult        $a3, $a0, $a1
    ctx->pc = 0x16a238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x16a23c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a240: 0x122a3c  dsll32      $a1, $s2, 8
    ctx->pc = 0x16a240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 8));
    // 0x16a244: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x16a244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x16a248: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x16a248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x16a24c: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x16a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x16a250: 0x94001b  divu        $zero, $a0, $s4
    ctx->pc = 0x16a250u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x16a254: 0x0  nop
    ctx->pc = 0x16a254u;
    // NOP
    // 0x16a258: 0x0  nop
    ctx->pc = 0x16a258u;
    // NOP
    // 0x16a25c: 0x2012  mflo        $a0
    ctx->pc = 0x16a25cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x16a260: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x16a260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x16a264: 0xa49025  or          $s2, $a1, $a0
    ctx->pc = 0x16a264u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x16a268: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x16a268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x16a26c: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x16a26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 272)));
    // 0x16a270: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x16a270u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16a274: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a278: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x16a278u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a27c: 0x8c240114  lw          $a0, 0x114($at)
    ctx->pc = 0x16a27cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x16a280: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16a280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16a284: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a288: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x16a288u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a28c: 0x8c240118  lw          $a0, 0x118($at)
    ctx->pc = 0x16a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16a290: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x16a290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x16a294: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a298: 0xa613000c  sh          $s3, 0xC($s0)
    ctx->pc = 0x16a298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 19));
    // 0x16a29c: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x16a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16a2a0: 0xa604000e  sh          $a0, 0xE($s0)
    ctx->pc = 0x16a2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a2a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x16a2a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x16a2a8: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x16a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x16a2ac: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x16a2acu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x16a2b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16a2b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a2b8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x16a2b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a2bc: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x16a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x16a2c0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a2c4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a2c8: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x16a2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16a2cc: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x16a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16a2d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16a2d4: 0xa613000c  sh          $s3, 0xC($s0)
    ctx->pc = 0x16a2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 19));
    // 0x16a2d8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x16a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16a2dc: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x16a2dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x16a2e0: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x16A2E0u;
    {
        const bool branch_taken_0x16a2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2E0u;
        // 0x16a2e4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2e0) {
            ctx->pc = 0x16A528u;
            goto label_16a528;
        }
    }
    ctx->pc = 0x16A2E8u;
label_16a2e8:
    // 0x16a2e8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16a2ec: 0x34450100  ori         $a1, $v0, 0x100
    ctx->pc = 0x16a2ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x16a2f0: 0x34420110  ori         $v0, $v0, 0x110
    ctx->pc = 0x16a2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x16a2f4: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x16a2f4u;
    SET_GPR_VEC(ctx, 9, runtime->Load128(rdram, ctx, 0x70000110u));
    // 0x16a2f8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x16a2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x16a2fc: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x16a2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16a300: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x16a300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x16a304: 0x24c669a0  addiu       $a2, $a2, 0x69A0
    ctx->pc = 0x16a304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27040));
    // 0x16a308: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16a308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16a30c: 0x34440110  ori         $a0, $v0, 0x110
    ctx->pc = 0x16a30cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)272);
    // 0x16a310: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x16a310u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x16a314: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x16a314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x16a318: 0x344702a4  ori         $a3, $v0, 0x2A4
    ctx->pc = 0x16a318u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)676);
    // 0x16a31c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x16a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x16a320: 0xc04d778  jal         func_135DE0
    ctx->pc = 0x16A320u;
    SET_GPR_U32(ctx, 31, 0x16A328u);
    ctx->pc = 0x16A324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A320u;
    // 0x16a324: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135DE0u, 0x16A320u, 0x16A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A328u;
label_16a328:
    // 0x16a328: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x16A328u;
    {
        const bool branch_taken_0x16a328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A328u;
        // 0x16a32c: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a328) {
            ctx->pc = 0x16A538u;
            goto label_16a538;
        }
    }
    ctx->pc = 0x16A330u;
    // 0x16a330: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x16a330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16a334: 0x8c230118  lw          $v1, 0x118($at)
    ctx->pc = 0x16a334u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 280))); // MMIO: 0x70000118
    // 0x16a338: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x16a338u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16a33c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x16A33Cu;
    {
        const bool branch_taken_0x16a33c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a33c) {
            ctx->pc = 0x16A348u;
            goto label_16a348;
        }
    }
    ctx->pc = 0x16A344u;
    // 0x16a344: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x16a344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_16a348:
    // 0x16a348: 0x16b4000b  bne         $s5, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x16A348u;
    {
        const bool branch_taken_0x16a348 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        if (branch_taken_0x16a348) {
            ctx->pc = 0x16A378u;
            goto label_16a378;
        }
    }
    ctx->pc = 0x16A350u;
    // 0x16a350: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16a350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16a354: 0x121a3c  dsll32      $v1, $s2, 8
    ctx->pc = 0x16a354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 8));
    // 0x16a358: 0x97c50004  lhu         $a1, 0x4($fp)
    ctx->pc = 0x16a358u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x16a35c: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x16a35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x16a360: 0x87c40008  lh          $a0, 0x8($fp)
    ctx->pc = 0x16a360u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x16a364: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x16a364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x16a368: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x16a368u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16a36c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16A36Cu;
    {
        const bool branch_taken_0x16a36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A36Cu;
        // 0x16a370: 0xa49821  addu        $s3, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a36c) {
            ctx->pc = 0x16A3B8u;
            goto label_16a3b8;
        }
    }
    ctx->pc = 0x16A374u;
    // 0x16a374: 0x0  nop
    ctx->pc = 0x16a374u;
    // NOP
label_16a378:
    // 0x16a378: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x16a378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x16a37c: 0x2952023  subu        $a0, $s4, $s5
    ctx->pc = 0x16a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x16a380: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x16a380u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16a384: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x16a384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16a388: 0x70551818  mult1       $v1, $v0, $s5
    ctx->pc = 0x16a388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16a38c: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x16a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16a390: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x16a390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x16a394: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16a394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16a398: 0x12123c  dsll32      $v0, $s2, 8
    ctx->pc = 0x16a398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 8));
    // 0x16a39c: 0x74001b  divu        $zero, $v1, $s4
    ctx->pc = 0x16a39cu;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x16a3a0: 0x2123e  dsrl32      $v0, $v0, 8
    ctx->pc = 0x16a3a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 8));
    // 0x16a3a4: 0x0  nop
    ctx->pc = 0x16a3a4u;
    // NOP
    // 0x16a3a8: 0x1812  mflo        $v1
    ctx->pc = 0x16a3a8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x16a3ac: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x16a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x16a3b0: 0x439025  or          $s2, $v0, $v1
    ctx->pc = 0x16a3b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16a3b4: 0x0  nop
    ctx->pc = 0x16a3b4u;
    // NOP
label_16a3b8:
    // 0x16a3b8: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x16a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x16a3bc: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x16a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x16a3c0: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x16a3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x16a3c4: 0x34850300  ori         $a1, $a0, 0x300
    ctx->pc = 0x16a3c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)768);
    // 0x16a3c8: 0xc041442  jal         func_105108
    ctx->pc = 0x16A3C8u;
    SET_GPR_U32(ctx, 31, 0x16A3D0u);
    ctx->pc = 0x16A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3C8u;
    // 0x16a3cc: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105108u, 0x16A3C8u, 0x16A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3D0u;
label_16a3d0:
    // 0x16a3d0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a3d4: 0x8c260110  lw          $a2, 0x110($at)
    ctx->pc = 0x16a3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x16a3d8: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16a3d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16a3dc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a3e0: 0x8c250100  lw          $a1, 0x100($at)
    ctx->pc = 0x16a3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000100u)); // MMIO: 0x70000100
    // 0x16a3e4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16a3e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16a3e8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16a3e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16a3ec: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a3f0: 0xc52823  subu        $a1, $a2, $a1
    ctx->pc = 0x16a3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x16a3f4: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x16a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x16a3f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16a3fc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a400: 0x8c220104  lw          $v0, 0x104($at)
    ctx->pc = 0x16a400u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000104u)); // MMIO: 0x70000104
    // 0x16a404: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x16a404u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a408: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x16a408u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x16a40c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a40cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a410: 0x0  nop
    ctx->pc = 0x16a410u;
    // NOP
    // 0x16a414: 0x46800d60  cvt.s.w     $f21, $f1
    ctx->pc = 0x16a414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x16a418: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16a418u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16a41c: 0x4615a81a  mula.s      $f21, $f21
    ctx->pc = 0x16a41cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[21], ctx->f[21]));
    // 0x16a420: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a424: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x16a424u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16a428: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a42c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16a42cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a430: 0x0  nop
    ctx->pc = 0x16a430u;
    // NOP
    // 0x16a434: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x16a434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x16a438: 0x4614a05c  madd.s      $f1, $f20, $f20
    ctx->pc = 0x16a438u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x16a43c: 0x46010584  c1          0x10584
    ctx->pc = 0x16a43cu;
    ctx->f[22] = FPU_SQRT_S(ctx->f[1]);
    // 0x16a440: 0x0  nop
    ctx->pc = 0x16a440u;
    // NOP
    // 0x16a444: 0x0  nop
    ctx->pc = 0x16a444u;
    // NOP
    // 0x16a448: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x16a448u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16a44c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x16A44Cu;
    {
        const bool branch_taken_0x16a44c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A44Cu;
        // 0x16a450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a44c) {
            ctx->pc = 0x16A460u;
            goto label_16a460;
        }
    }
    ctx->pc = 0x16A454u;
    // 0x16a454: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16A454u;
    {
        const bool branch_taken_0x16a454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A454u;
        // 0x16a458: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a454) {
            ctx->pc = 0x16A498u;
            goto label_16a498;
        }
    }
    ctx->pc = 0x16A45Cu;
    // 0x16a45c: 0x0  nop
    ctx->pc = 0x16a45cu;
    // NOP
label_16a460:
    // 0x16a460: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a464: 0xc4220008  lwc1        $f2, 0x8($at)
    ctx->pc = 0x16a464u;
    { uint32_t bits = runtime->Load32(rdram, ctx, 0x70000008u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16a468: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16a468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16a46c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16a46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a470: 0x4614c002  mul.s       $f0, $f24, $f20
    ctx->pc = 0x16a470u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x16a474: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x16a474u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x16a478: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x16a478u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x16a47c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16a47cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a480: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16a480u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16a484: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16a484u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16a488: 0x4615b802  mul.s       $f0, $f23, $f21
    ctx->pc = 0x16a488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
    // 0x16a48c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16a48cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16a490: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16a490u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16a494: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16a494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_16a498:
    // 0x16a498: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x16a498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x16a49c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a49cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a4a0: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x16a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16a4a4: 0x8c250110  lw          $a1, 0x110($at)
    ctx->pc = 0x16a4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x16a4a8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x16a4a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x16a4ac: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x16a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x16a4b0: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x16a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x16a4b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a4b8: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x16a4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16a4bc: 0xa6040000  sh          $a0, 0x0($s0)
    ctx->pc = 0x16a4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a4c0: 0x8c240114  lw          $a0, 0x114($at)
    ctx->pc = 0x16a4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 276)));
    // 0x16a4c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16a4c8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a4cc: 0xa6040002  sh          $a0, 0x2($s0)
    ctx->pc = 0x16a4ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a4d0: 0x8c240118  lw          $a0, 0x118($at)
    ctx->pc = 0x16a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16a4d4: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x16a4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x16a4d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a4dc: 0xa613000c  sh          $s3, 0xC($s0)
    ctx->pc = 0x16a4dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 19));
    // 0x16a4e0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x16a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x16a4e4: 0xa604000e  sh          $a0, 0xE($s0)
    ctx->pc = 0x16a4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a4e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x16a4e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x16a4ec: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x16a4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x16a4f0: 0x8c240110  lw          $a0, 0x110($at)
    ctx->pc = 0x16a4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x70000110u)); // MMIO: 0x70000110
    // 0x16a4f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16a4f8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a4fc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x16a4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a500: 0x8c230114  lw          $v1, 0x114($at)
    ctx->pc = 0x16a500u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70000114u)); // MMIO: 0x70000114
    // 0x16a504: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16a504u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16a508: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x16a508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x16a50c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x16a50cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x16a510: 0x8c220118  lw          $v0, 0x118($at)
    ctx->pc = 0x16a510u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70000118u)); // MMIO: 0x70000118
    // 0x16a514: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16a514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16a518: 0xa613000c  sh          $s3, 0xC($s0)
    ctx->pc = 0x16a518u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 19));
    // 0x16a51c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x16a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x16a520: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x16a520u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x16a524: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x16a524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_16a528:
    // 0x16a528: 0x295082b  sltu        $at, $s4, $s5
    ctx->pc = 0x16a528u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x16a52c: 0x1020ff6e  beqz        $at, . + 4 + (-0x92 << 2)
    ctx->pc = 0x16A52Cu;
    {
        const bool branch_taken_0x16a52c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a52c) {
            ctx->pc = 0x16A2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a2e8;
        }
    }
    ctx->pc = 0x16A534u;
    // 0x16a534: 0x0  nop
    ctx->pc = 0x16a534u;
    // NOP
label_16a538:
    // 0x16a538: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x16a538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x16a53c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x16a53cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x16a540: 0x3c040083  lui         $a0, 0x83
    ctx->pc = 0x16a540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)131 << 16));
    // 0x16a544: 0x24e7aed0  addiu       $a3, $a3, -0x5130
    ctx->pc = 0x16a544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946512));
    // 0x16a548: 0x2484cc40  addiu       $a0, $a0, -0x33C0
    ctx->pc = 0x16a548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954048));
    // 0x16a54c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16a54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a550: 0x21d00  sll         $v1, $v0, 20
    ctx->pc = 0x16a550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x16a554: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x16a554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16a558: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x16a558u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
    // 0x16a55c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x16a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x16a560: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x16a560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x16a564: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x16a564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x16a568: 0x3442015c  ori         $v0, $v0, 0x15C
    ctx->pc = 0x16a568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)348);
    // 0x16a56c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x16a56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16a570: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x16a570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x16a574: 0x92c30012  lbu         $v1, 0x12($s6)
    ctx->pc = 0x16a574u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x16a578: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x16a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16a57c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16a580: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x16a580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x16a584: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x16a584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a588: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x16a588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x16a58c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16a58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16a590: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x16a590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x16a594: 0x92c20012  lbu         $v0, 0x12($s6)
    ctx->pc = 0x16a594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 18)));
    // 0x16a598: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a59c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16a5a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a5a4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x16a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x16a5a8: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x16a5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x16a5ac: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x16a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x16a5b0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x16a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x16a5b4: 0xa6200014  sh          $zero, 0x14($s1)
    ctx->pc = 0x16a5b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x16a5b8: 0x92c20013  lbu         $v0, 0x13($s6)
    ctx->pc = 0x16a5b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 19)));
    // 0x16a5bc: 0xc04fb2c  jal         func_13ECB0
    ctx->pc = 0x16A5BCu;
    SET_GPR_U32(ctx, 31, 0x16A5C4u);
    ctx->pc = 0x16A5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A5BCu;
    // 0x16a5c0: 0xa6220016  sh          $v0, 0x16($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ECB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ECB0u, 0x16A5BCu, 0x16A5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A5C4u;
label_16a5c4:
    // 0x16a5c4: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x16a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x16a5c8: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x16a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x16a5cc: 0x838024  and         $s0, $a0, $v1
    ctx->pc = 0x16a5ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x16a5d0: 0x3c010082  lui         $at, 0x82
    ctx->pc = 0x16a5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)130 << 16));
    // 0x16a5d4: 0xac30fc90  sw          $s0, -0x370($at)
    ctx->pc = 0x16a5d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x81FC90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x81FC90u, _value); } while (0);
label_16a5d8:
    // 0x16a5d8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x16a5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16a5dc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x16a5dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a5e0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x16a5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x16a5e4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x16a5e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16a5e8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x16a5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x16a5ec: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x16a5ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16a5f0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16a5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16a5f4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x16a5f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a5f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16a5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x16a5fc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x16a5fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16a600: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16a600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16a604: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x16a604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16a608: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16a608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a60c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16a60cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a610: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16a610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a614: 0x3e00008  jr          $ra
    ctx->pc = 0x16A614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A614u;
        // 0x16a618: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A61Cu;
}
