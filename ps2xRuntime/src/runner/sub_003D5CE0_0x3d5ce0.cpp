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

// Function: sub_003D5CE0
// Address: 0x3d5ce0 - 0x3d5e24
void sub_003D5CE0_0x3d5ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5CE0_0x3d5ce0");
#endif

    switch (ctx->pc) {
        case 0x3d5cf8u: goto label_3d5cf8;
        case 0x3d5d08u: goto label_3d5d08;
        case 0x3d5d10u: goto label_3d5d10;
        case 0x3d5d94u: goto label_3d5d94;
        case 0x3d5e0cu: goto label_3d5e0c;
        default: break;
    }

    ctx->pc = 0x3d5ce0u;

label_3d5ce0:
    // 0x3d5ce0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d5ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d5ce4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d5ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d5ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d5ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3d5cec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d5cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d5cf0: 0xc0f56e4  jal         func_3D5B90
    ctx->pc = 0x3D5CF0u;
    SET_GPR_U32(ctx, 31, 0x3D5CF8u);
    ctx->pc = 0x3D5CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5CF0u;
    // 0x3d5cf4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5B90u, 0x3D5CF0u, 0x3D5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5CF8u;
label_3d5cf8:
    // 0x3d5cf8: 0x6210007  bgez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D5CF8u;
    {
        const bool branch_taken_0x3d5cf8 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x3D5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CF8u;
        // 0x3d5cfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5cf8) {
            ctx->pc = 0x3D5D18u;
            goto label_3d5d18;
        }
    }
    ctx->pc = 0x3D5D00u;
    // 0x3d5d00: 0xc0f5738  jal         func_3D5CE0
    ctx->pc = 0x3D5D00u;
    SET_GPR_U32(ctx, 31, 0x3D5D08u);
    ctx->pc = 0x3D5D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5D00u;
    // 0x3d5d04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5CE0u;
    goto label_3d5ce0;
    ctx->pc = 0x3D5D08u;
label_3d5d08:
    // 0x3d5d08: 0xc0f5738  jal         func_3D5CE0
    ctx->pc = 0x3D5D08u;
    SET_GPR_U32(ctx, 31, 0x3D5D10u);
    ctx->pc = 0x3D5D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5D08u;
    // 0x3d5d0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5CE0u;
    goto label_3d5ce0;
    ctx->pc = 0x3D5D10u;
label_3d5d10:
    // 0x3d5d10: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3D5D10u;
    {
        const bool branch_taken_0x3d5d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5d10) {
            ctx->pc = 0x3D5E10u;
            goto label_3d5e10;
        }
    }
    ctx->pc = 0x3D5D18u;
label_3d5d18:
    // 0x3d5d18: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3D5D18u;
    {
        const bool branch_taken_0x3d5d18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5d18) {
            ctx->pc = 0x3D5E10u;
            goto label_3d5e10;
        }
    }
    ctx->pc = 0x3D5D20u;
    // 0x3d5d20: 0x1620001d  bnez        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3D5D20u;
    {
        const bool branch_taken_0x3d5d20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5d20) {
            ctx->pc = 0x3D5D98u;
            goto label_3d5d98;
        }
    }
    ctx->pc = 0x3D5D28u;
    // 0x3d5d28: 0x8f848060  lw          $a0, -0x7FA0($gp)
    ctx->pc = 0x3d5d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934624)));
    // 0x3d5d2c: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D5D2Cu;
    {
        const bool branch_taken_0x3d5d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5d2c) {
            ctx->pc = 0x3D5D98u;
            goto label_3d5d98;
        }
    }
    ctx->pc = 0x3D5D34u;
    // 0x3d5d34: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x3d5d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d5d38: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3d5d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3d5d3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3d5d3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3d5d40: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3d5d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3d5d44: 0xc603000c  lwc1        $f3, 0xC($s0)
    ctx->pc = 0x3d5d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d5d48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3d5d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d5d4c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3d5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x3d5d50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d5d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5d54: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x3d5d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3d5d58: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3d5d58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3d5d5c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3d5d60: 0x2442e4d0  addiu       $v0, $v0, -0x1B30
    ctx->pc = 0x3d5d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960336));
    // 0x3d5d64: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3d5d64u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E4D0u));
    // 0x3d5d68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3d5d68u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3d5d6c: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x3d5d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3d5d70: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d5d70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d5d74: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3d5d74u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3d5d78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3d5d78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3d5d7c: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x3d5d7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3d5d80: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x3d5d80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3d5d84: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x3d5d84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3d5d88: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3d5d88u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3d5d8c: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x3D5D8Cu;
    SET_GPR_U32(ctx, 31, 0x3D5D94u);
    ctx->pc = 0x3D5D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5D8Cu;
    // 0x3d5d90: 0xe7a30048  swc1        $f3, 0x48($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x3D5D8Cu, 0x3D5D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5D94u;
label_3d5d94:
    // 0x3d5d94: 0x0  nop
    ctx->pc = 0x3d5d94u;
    // NOP
label_3d5d98:
    // 0x3d5d98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3d5d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d5d9c: 0x1627001c  bne         $s1, $a3, . + 4 + (0x1C << 2)
    ctx->pc = 0x3D5D9Cu;
    {
        const bool branch_taken_0x3d5d9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 7));
        if (branch_taken_0x3d5d9c) {
            ctx->pc = 0x3D5E10u;
            goto label_3d5e10;
        }
    }
    ctx->pc = 0x3D5DA4u;
    // 0x3d5da4: 0x8f848064  lw          $a0, -0x7F9C($gp)
    ctx->pc = 0x3d5da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934628)));
    // 0x3d5da8: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3D5DA8u;
    {
        const bool branch_taken_0x3d5da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5da8) {
            ctx->pc = 0x3D5E10u;
            goto label_3d5e10;
        }
    }
    ctx->pc = 0x3D5DB0u;
    // 0x3d5db0: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x3d5db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d5db4: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x3d5db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x3d5db8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3d5db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3d5dbc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3d5dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3d5dc0: 0xc603001c  lwc1        $f3, 0x1C($s0)
    ctx->pc = 0x3d5dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d5dc4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3d5dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x3d5dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d5dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5dcc: 0xc6040018  lwc1        $f4, 0x18($s0)
    ctx->pc = 0x3d5dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3d5dd0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3d5dd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3d5dd4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x3d5dd8: 0x2442e4d0  addiu       $v0, $v0, -0x1B30
    ctx->pc = 0x3d5dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960336));
    // 0x3d5ddc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x3d5ddcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x65E4D0u));
    // 0x3d5de0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3d5de0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3d5de4: 0xc6050014  lwc1        $f5, 0x14($s0)
    ctx->pc = 0x3d5de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3d5de8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d5de8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d5dec: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3d5decu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3d5df0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3d5df0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3d5df4: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x3d5df4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3d5df8: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x3d5df8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3d5dfc: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x3d5dfcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3d5e00: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x3d5e00u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x3d5e04: 0xc0a68b8  jal         func_29A2E0
    ctx->pc = 0x3D5E04u;
    SET_GPR_U32(ctx, 31, 0x3D5E0Cu);
    ctx->pc = 0x3D5E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5E04u;
    // 0x3d5e08: 0xe7a30038  swc1        $f3, 0x38($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A2E0u, 0x3D5E04u, 0x3D5E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5E0Cu;
label_3d5e0c:
    // 0x3d5e0c: 0x0  nop
    ctx->pc = 0x3d5e0cu;
    // NOP
label_3d5e10:
    // 0x3d5e10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d5e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d5e14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d5e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d5e18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d5e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d5e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5E1Cu;
        // 0x3d5e20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5E24u;
}
