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

// Function: sub_001D3DD0
// Address: 0x1d3dd0 - 0x1d4008
void sub_001D3DD0_0x1d3dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3DD0_0x1d3dd0");
#endif

    switch (ctx->pc) {
        case 0x1d3e90u: goto label_1d3e90;
        case 0x1d3e9cu: goto label_1d3e9c;
        case 0x1d3eacu: goto label_1d3eac;
        case 0x1d3ed8u: goto label_1d3ed8;
        case 0x1d3ee4u: goto label_1d3ee4;
        case 0x1d3f08u: goto label_1d3f08;
        default: break;
    }

    ctx->pc = 0x1d3dd0u;

    // 0x1d3dd0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1d3dd0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3dd4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d3dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3dd8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1d3dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1d3ddc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1d3de0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3de4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1d3de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1d3de8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1d3de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1d3dec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d3decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d3df0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1d3df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1d3df4: 0x5f083  sra         $fp, $a1, 2
    ctx->pc = 0x1d3df4u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1d3df8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1d3df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1d3dfc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1d3dfcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e00: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d3e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d3e04: 0x5b043  sra         $s6, $a1, 1
    ctx->pc = 0x1d3e04u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1d3e08: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d3e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d3e0c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d3e0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e10: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d3e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d3e14: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d3e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d3e18: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d3e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d3e1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d3e1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d3e20: 0x0  nop
    ctx->pc = 0x1d3e20u;
    // NOP
    // 0x1d3e24: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1d3e24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1d3e28: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d3e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d3e2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d3e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d3e30: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1d3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1d3e34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d3e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d3e38: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d3e38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e3c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d3e3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e40: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1d3e40u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d3e44: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1d3e44u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d3e48: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d3e48u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d3e4c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d3e4cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d3e50: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x1d3e50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1d3e54: 0x0  nop
    ctx->pc = 0x1d3e54u;
    // NOP
    // 0x1d3e58: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d3e58u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d3e5c: 0x4600bd82  mul.s       $f22, $f23, $f0
    ctx->pc = 0x1d3e5cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x1d3e60: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x1d3e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d3e64: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x1d3e64u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3e68: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d3e68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d3e6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3e70: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x1d3e70u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1d3e74: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d3e74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d3e78: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x1d3e78u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x1d3e7c: 0x0  nop
    ctx->pc = 0x1d3e7cu;
    // NOP
    // 0x1d3e80: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d3e80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3e84: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x1D3E84u;
    {
        const bool branch_taken_0x1d3e84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E84u;
        // 0x1d3e88: 0x46000e02  mul.s       $f24, $f1, $f0 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e84) {
            ctx->pc = 0x1D3FB0u;
            goto label_1d3fb0;
        }
    }
    ctx->pc = 0x1D3E8Cu;
    // 0x1d3e8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d3e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d3e90:
    // 0x1d3e90: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d3e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d3e94: 0xc07637c  jal         func_1D8DF0
    ctx->pc = 0x1D3E94u;
    SET_GPR_U32(ctx, 31, 0x1D3E9Cu);
    ctx->pc = 0x1D3E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E94u;
    // 0x1d3e98: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DF0u, 0x1D3E94u, 0x1D3E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E9Cu;
label_1d3e9c:
    // 0x1d3e9c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d3e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d3ea0: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1d3ea0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x1d3ea4: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1D3EA4u;
    SET_GPR_U32(ctx, 31, 0x1D3EACu);
    ctx->pc = 0x1D3EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3EA4u;
    // 0x1d3ea8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1D3EA4u, 0x1D3EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EACu;
label_1d3eac:
    // 0x1d3eac: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d3eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1d3eb0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1d3eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d3eb4: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x1d3eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x1d3eb8: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x1d3eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d3ebc: 0xc7b500c0  lwc1        $f21, 0xC0($sp)
    ctx->pc = 0x1d3ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d3ec0: 0x4483c800  mtc1        $v1, $f25
    ctx->pc = 0x1d3ec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1d3ec4: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x1d3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d3ec8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d3ec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3ecc: 0x10200030  beqz        $at, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D3ECCu;
    {
        const bool branch_taken_0x1d3ecc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ECCu;
        // 0x1d3ed0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ecc) {
            ctx->pc = 0x1D3F90u;
            goto label_1d3f90;
        }
    }
    ctx->pc = 0x1D3ED4u;
    // 0x1d3ed4: 0x0  nop
    ctx->pc = 0x1d3ed4u;
    // NOP
label_1d3ed8:
    // 0x1d3ed8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d3ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d3edc: 0xc07637c  jal         func_1D8DF0
    ctx->pc = 0x1D3EDCu;
    SET_GPR_U32(ctx, 31, 0x1D3EE4u);
    ctx->pc = 0x1D3EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3EDCu;
    // 0x1d3ee0: 0x4600cb06  mov.s       $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DF0u, 0x1D3EDCu, 0x1D3EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3EE4u;
label_1d3ee4:
    // 0x1d3ee4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1d3ee4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3ee8: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x1d3ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1d3eec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d3eecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d3ef0: 0x2a38021  addu        $s0, $s5, $v1
    ctx->pc = 0x1d3ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d3ef4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d3ef4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d3ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3efc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3f00: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D3F00u;
    SET_GPR_U32(ctx, 31, 0x1D3F08u);
    ctx->pc = 0x1D3F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3F00u;
    // 0x1d3f04: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D3F00u, 0x1D3F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3F08u;
label_1d3f08:
    // 0x1d3f08: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x1d3f08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d3f0c: 0x2d21023  subu        $v0, $s6, $s2
    ctx->pc = 0x1d3f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x1d3f10: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1d3f10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3f14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d3f18: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1d3f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3f1c: 0x2a43021  addu        $a2, $s5, $a0
    ctx->pc = 0x1d3f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1d3f20: 0x2d21021  addu        $v0, $s6, $s2
    ctx->pc = 0x1d3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x1d3f24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d3f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d3f28: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1d3f28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3f2c: 0x2921023  subu        $v0, $s4, $s2
    ctx->pc = 0x1d3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x1d3f30: 0x2a42821  addu        $a1, $s5, $a0
    ctx->pc = 0x1d3f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1d3f34: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1d3f34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1d3f38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d3f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d3f3c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1d3f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3f40: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3f44: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d3f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3f48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d3f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d3f4c: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x1d3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d3f50: 0x4618ce40  add.s       $f25, $f25, $f24
    ctx->pc = 0x1d3f50u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[24]);
    // 0x1d3f54: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d3f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3f58: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3f58u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3f5c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1d3f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1d3f60: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x1d3f60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d3f64: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x1d3f64u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x1d3f68: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1d3f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3f6c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3f6cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3f70: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1d3f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1d3f74: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1d3f74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d3f78: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1d3f78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1d3f7c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d3f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3f80: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3f80u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3f84: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1D3F84u;
    {
        const bool branch_taken_0x1d3f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3F84u;
        // 0x1d3f88: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3f84) {
            ctx->pc = 0x1D3ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3ed8;
        }
    }
    ctx->pc = 0x1D3F8Cu;
    // 0x1d3f8c: 0x0  nop
    ctx->pc = 0x1d3f8cu;
    // NOP
label_1d3f90:
    // 0x1d3f90: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1d3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d3f94: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1d3f94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d3f98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d3f98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d3f9c: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x1d3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d3fa0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1d3fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3fa4: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x1D3FA4u;
    {
        const bool branch_taken_0x1d3fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FA4u;
        // 0x1d3fa8: 0x4616bdc0  add.s       $f23, $f23, $f22 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fa4) {
            ctx->pc = 0x1D3E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3e90;
        }
    }
    ctx->pc = 0x1D3FACu;
    // 0x1d3fac: 0x0  nop
    ctx->pc = 0x1d3facu;
    // NOP
label_1d3fb0:
    // 0x1d3fb0: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1d3fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d3fb4: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x1d3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d3fb8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1d3fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d3fbc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1d3fbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d3fc0: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1d3fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1d3fc4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1d3fc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d3fc8: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1d3fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d3fcc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1d3fccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d3fd0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d3fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d3fd4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d3fd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d3fd8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d3fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d3fdc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d3fdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d3fe0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d3fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d3fe4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d3fe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3fe8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d3fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d3fec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d3fecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3ff0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d3ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d3ff4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d3ff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3ff8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1d3ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d3ffc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d3ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4000: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4000u;
        // 0x1d4004: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4008u;
}
