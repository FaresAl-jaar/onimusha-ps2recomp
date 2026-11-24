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

// Function: sub_001DADD0
// Address: 0x1dadd0 - 0x1dafa8
void sub_001DADD0_0x1dadd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DADD0_0x1dadd0");
#endif

    switch (ctx->pc) {
        case 0x1dae50u: goto label_1dae50;
        case 0x1dae5cu: goto label_1dae5c;
        case 0x1dae68u: goto label_1dae68;
        case 0x1dae74u: goto label_1dae74;
        case 0x1dae84u: goto label_1dae84;
        case 0x1dae9cu: goto label_1dae9c;
        case 0x1daeacu: goto label_1daeac;
        case 0x1daec0u: goto label_1daec0;
        case 0x1daed0u: goto label_1daed0;
        case 0x1daee8u: goto label_1daee8;
        case 0x1daef8u: goto label_1daef8;
        case 0x1daf10u: goto label_1daf10;
        case 0x1daf1cu: goto label_1daf1c;
        case 0x1daf2cu: goto label_1daf2c;
        case 0x1daf50u: goto label_1daf50;
        case 0x1daf60u: goto label_1daf60;
        default: break;
    }

    ctx->pc = 0x1dadd0u;

    // 0x1dadd0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1dadd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1dadd4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1dadd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1dadd8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1dadd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1daddc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1daddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1dade0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1dade0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1dade4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1dade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1dade8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1dade8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadec: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1dadecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dadf0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1dadf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1dadf4: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x1dadf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1dadf8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1dadf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1dadfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dadfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dae00: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1dae00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1dae04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dae04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dae08: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1dae08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dae0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dae10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dae10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dae14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1dae14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1dae18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dae18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae1c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1dae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1dae20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dae20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dae24: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1dae24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1dae28: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x1dae28u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1dae2c: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x1dae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1dae30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dae30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dae34: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1dae34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1dae38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dae38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dae3c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1dae3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1dae40: 0x0  nop
    ctx->pc = 0x1dae40u;
    // NOP
    // 0x1dae44: 0x0  nop
    ctx->pc = 0x1dae44u;
    // NOP
    // 0x1dae48: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1DAE48u;
    SET_GPR_U32(ctx, 31, 0x1DAE50u);
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1DAE48u, 0x1DAE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE50u;
label_1dae50:
    // 0x1dae50: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1dae50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1dae54: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1DAE54u;
    SET_GPR_U32(ctx, 31, 0x1DAE5Cu);
    ctx->pc = 0x1DAE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE54u;
    // 0x1dae58: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1DAE54u, 0x1DAE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE5Cu;
label_1dae5c:
    // 0x1dae5c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1dae5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dae60: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1DAE60u;
    SET_GPR_U32(ctx, 31, 0x1DAE68u);
    ctx->pc = 0x1DAE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE60u;
    // 0x1dae64: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1DAE60u, 0x1DAE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE68u;
label_1dae68:
    // 0x1dae68: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1dae68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1dae6c: 0xc076650  jal         func_1D9940
    ctx->pc = 0x1DAE6Cu;
    SET_GPR_U32(ctx, 31, 0x1DAE74u);
    ctx->pc = 0x1DAE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE6Cu;
    // 0x1dae70: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9940u, 0x1DAE6Cu, 0x1DAE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE74u;
label_1dae74:
    // 0x1dae74: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1dae74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1dae78: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1dae78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dae7c: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1DAE7Cu;
    SET_GPR_U32(ctx, 31, 0x1DAE84u);
    ctx->pc = 0x1DAE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE7Cu;
    // 0x1dae80: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1DAE7Cu, 0x1DAE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE84u;
label_1dae84:
    // 0x1dae84: 0x27b70100  addiu       $s7, $sp, 0x100
    ctx->pc = 0x1dae84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1dae88: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x1dae88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1dae8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dae8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dae90: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1dae90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1dae94: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1DAE94u;
    SET_GPR_U32(ctx, 31, 0x1DAE9Cu);
    ctx->pc = 0x1DAE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAE94u;
    // 0x1dae98: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1DAE94u, 0x1DAE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAE9Cu;
label_1dae9c:
    // 0x1dae9c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1dae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1daea0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1daea0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1daea4: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DAEA4u;
    SET_GPR_U32(ctx, 31, 0x1DAEACu);
    ctx->pc = 0x1DAEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAEA4u;
    // 0x1daea8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DAEA4u, 0x1DAEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEACu;
label_1daeac:
    // 0x1daeac: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x1daeacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daeb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1daeb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daeb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1daeb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1daeb8: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DAEB8u;
    SET_GPR_U32(ctx, 31, 0x1DAEC0u);
    ctx->pc = 0x1DAEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAEB8u;
    // 0x1daebc: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DAEB8u, 0x1DAEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEC0u;
label_1daec0:
    // 0x1daec0: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x1daec0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1daec4: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x1DAEC4u;
    {
        const bool branch_taken_0x1daec4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEC4u;
        // 0x1daec8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daec4) {
            ctx->pc = 0x1DAF70u;
            goto label_1daf70;
        }
    }
    ctx->pc = 0x1DAECCu;
    // 0x1daecc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1daeccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daed0:
    // 0x1daed0: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x1daed0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1daed4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1daed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1daed8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1daed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daedc: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x1daedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1daee0: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1DAEE0u;
    SET_GPR_U32(ctx, 31, 0x1DAEE8u);
    ctx->pc = 0x1DAEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAEE0u;
    // 0x1daee4: 0x7fa200d0  sq          $v0, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1DAEE0u, 0x1DAEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEE8u;
label_1daee8:
    // 0x1daee8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1daee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1daeec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1daeecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1daef0: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DAEF0u;
    SET_GPR_U32(ctx, 31, 0x1DAEF8u);
    ctx->pc = 0x1DAEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAEF0u;
    // 0x1daef4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DAEF0u, 0x1DAEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAEF8u;
label_1daef8:
    // 0x1daef8: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x1daef8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1daefc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DAEFCu;
    {
        const bool branch_taken_0x1daefc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAEFCu;
        // 0x1daf00: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daefc) {
            ctx->pc = 0x1DAF40u;
            goto label_1daf40;
        }
    }
    ctx->pc = 0x1DAF04u;
    // 0x1daf04: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1daf04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1daf08: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x1daf08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1daf0c: 0x0  nop
    ctx->pc = 0x1daf0cu;
    // NOP
label_1daf10:
    // 0x1daf10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1daf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf14: 0xc07664c  jal         func_1D9930
    ctx->pc = 0x1DAF14u;
    SET_GPR_U32(ctx, 31, 0x1DAF1Cu);
    ctx->pc = 0x1DAF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF14u;
    // 0x1daf18: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9930u, 0x1DAF14u, 0x1DAF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF1Cu;
label_1daf1c:
    // 0x1daf1c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1daf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1daf20: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1daf20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1daf24: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1DAF24u;
    SET_GPR_U32(ctx, 31, 0x1DAF2Cu);
    ctx->pc = 0x1DAF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF24u;
    // 0x1daf28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1DAF24u, 0x1DAF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF2Cu;
label_1daf2c:
    // 0x1daf2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1daf2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1daf30: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x1daf30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1daf34: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DAF34u;
    {
        const bool branch_taken_0x1daf34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF34u;
        // 0x1daf38: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf34) {
            ctx->pc = 0x1DAF10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1daf10;
        }
    }
    ctx->pc = 0x1DAF3Cu;
    // 0x1daf3c: 0x0  nop
    ctx->pc = 0x1daf3cu;
    // NOP
label_1daf40:
    // 0x1daf40: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1daf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1daf44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1daf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf48: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1DAF48u;
    SET_GPR_U32(ctx, 31, 0x1DAF50u);
    ctx->pc = 0x1DAF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF48u;
    // 0x1daf4c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1DAF48u, 0x1DAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF50u;
label_1daf50:
    // 0x1daf50: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1daf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1daf54: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1daf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf58: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1DAF58u;
    SET_GPR_U32(ctx, 31, 0x1DAF60u);
    ctx->pc = 0x1DAF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF58u;
    // 0x1daf5c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1DAF58u, 0x1DAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAF60u;
label_1daf60:
    // 0x1daf60: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1daf60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1daf64: 0x274182a  slt         $v1, $s3, $s4
    ctx->pc = 0x1daf64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1daf68: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1DAF68u;
    {
        const bool branch_taken_0x1daf68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF68u;
        // 0x1daf6c: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf68) {
            ctx->pc = 0x1DAED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1daed0;
        }
    }
    ctx->pc = 0x1DAF70u;
label_1daf70:
    // 0x1daf70: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1daf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1daf74: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1daf74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1daf78: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1daf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1daf7c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1daf7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1daf80: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1daf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1daf84: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1daf84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1daf88: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1daf88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1daf8c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1daf8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1daf90: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1daf90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1daf94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1daf94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1daf98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1daf98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1daf9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1daf9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dafa0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFA0u;
        // 0x1dafa4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAFA8u;
}
