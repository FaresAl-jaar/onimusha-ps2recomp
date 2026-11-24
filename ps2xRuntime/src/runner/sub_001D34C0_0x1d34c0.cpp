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

// Function: sub_001D34C0
// Address: 0x1d34c0 - 0x1d3728
void sub_001D34C0_0x1d34c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D34C0_0x1d34c0");
#endif

    switch (ctx->pc) {
        case 0x1d3570u: goto label_1d3570;
        case 0x1d357cu: goto label_1d357c;
        case 0x1d35b8u: goto label_1d35b8;
        case 0x1d35f8u: goto label_1d35f8;
        case 0x1d360cu: goto label_1d360c;
        case 0x1d361cu: goto label_1d361c;
        case 0x1d3650u: goto label_1d3650;
        case 0x1d3698u: goto label_1d3698;
        default: break;
    }

    ctx->pc = 0x1d34c0u;

    // 0x1d34c0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1d34c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1d34c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d34c8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1d34c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1d34cc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1d34ccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d34d0: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1d34d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1d34d4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d34d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d34d8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1d34d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1d34dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d34dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d34e0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1d34e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1d34e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d34e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d34e8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d34e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d34ec: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d34ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1d34f0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d34f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d34f4: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1d34f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d34f8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d34f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d34fc: 0x5f043  sra         $fp, $a1, 1
    ctx->pc = 0x1d34fcu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1d3500: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d3500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d3504: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x1d3504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d3508: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d3508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d350c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d350cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3510: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d3510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d3514: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3518: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1d3518u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d351c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1d351cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3520: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d3520u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3524: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1d3524u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d3528: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1d3528u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d352c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d352cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d3530: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d3530u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d3534: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d3534u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d3538: 0x46001583  div.s       $f22, $f2, $f0
    ctx->pc = 0x1d3538u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1d353c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d353cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d3540: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d3540u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d3544: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1d3544u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1d3548: 0xafa400dc  sw          $a0, 0xDC($sp)
    ctx->pc = 0x1d3548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
    // 0x1d354c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d354cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3550: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1d3550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d3554: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x1d3554u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3558: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x1d3558u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x1d355c: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x1d355cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x1d3560: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x1d3560u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x1d3564: 0x1020005a  beqz        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x1D3564u;
    {
        const bool branch_taken_0x1d3564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3564u;
        // 0x1d3568: 0x46007dc6  mov.s       $f23, $f15 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3564) {
            ctx->pc = 0x1D36D0u;
            goto label_1d36d0;
        }
    }
    ctx->pc = 0x1D356Cu;
    // 0x1d356c: 0x0  nop
    ctx->pc = 0x1d356cu;
    // NOP
label_1d3570:
    // 0x1d3570: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d3570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d3574: 0xc07637c  jal         func_1D8DF0
    ctx->pc = 0x1D3574u;
    SET_GPR_U32(ctx, 31, 0x1D357Cu);
    ctx->pc = 0x1D3578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3574u;
    // 0x1d3578: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DF0u, 0x1D3574u, 0x1D357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D357Cu;
label_1d357c:
    // 0x1d357c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x1d357cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x1d3580: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1d3580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1d3584: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d3584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3588: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1d3588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d358c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d358cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3590: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d3590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3594: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1d3594u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x1d3598: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x1d3598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x1d359c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d359cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d35a0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1d35a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d35a4: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x1d35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1d35a8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d35a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d35ac: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x1d35acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1d35b0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D35B0u;
    SET_GPR_U32(ctx, 31, 0x1D35B8u);
    ctx->pc = 0x1D35B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35B0u;
    // 0x1d35b4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D35B0u, 0x1D35B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35B8u;
label_1d35b8:
    // 0x1d35b8: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x1d35b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1d35bc: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1d35bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x1d35c0: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x1d35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x1d35c4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1d35c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d35c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d35c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d35cc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d35ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d35d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d35d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35d4: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x1d35d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x1d35d8: 0x27a20104  addiu       $v0, $sp, 0x104
    ctx->pc = 0x1d35d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x1d35dc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d35dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d35e0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1d35e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d35e4: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1d35e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1d35e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d35e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d35ec: 0x27a2010c  addiu       $v0, $sp, 0x10C
    ctx->pc = 0x1d35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x1d35f0: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D35F0u;
    SET_GPR_U32(ctx, 31, 0x1D35F8u);
    ctx->pc = 0x1D35F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35F0u;
    // 0x1d35f4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D35F0u, 0x1D35F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35F8u;
label_1d35f8:
    // 0x1d35f8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1d35f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d35fc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1d35fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d3600: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x1d3600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d3604: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x1D3604u;
    SET_GPR_U32(ctx, 31, 0x1D360Cu);
    ctx->pc = 0x1D3608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3604u;
    // 0x1d3608: 0xe7b70100  swc1        $f23, 0x100($sp) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x1D3604u, 0x1D360Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D360Cu;
label_1d360c:
    // 0x1d360c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1d360cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d3610: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1d3610u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1d3614: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D3614u;
    SET_GPR_U32(ctx, 31, 0x1D361Cu);
    ctx->pc = 0x1D3618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3614u;
    // 0x1d3618: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D3614u, 0x1D361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D361Cu;
label_1d361c:
    // 0x1d361c: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x1d361cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d3620: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d3620u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3624: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D3624u;
    {
        const bool branch_taken_0x1d3624 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3624u;
        // 0x1d3628: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3624) {
            ctx->pc = 0x1D36B8u;
            goto label_1d36b8;
        }
    }
    ctx->pc = 0x1D362Cu;
    // 0x1d362c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1d362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d3630: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x1d3630u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x1d3634: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x1d3634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d3638: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d3638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d363c: 0x39100  sll         $s2, $v1, 4
    ctx->pc = 0x1d363cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d3640: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x1d3640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d3644: 0x2d51023  subu        $v0, $s6, $s5
    ctx->pc = 0x1d3644u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x1d3648: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1d3648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d364c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d364cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1d3650:
    // 0x1d3650: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x1d3650u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d3654: 0x2be082a  slt         $at, $s5, $fp
    ctx->pc = 0x1d3654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x1d3658: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1D3658u;
    {
        const bool branch_taken_0x1d3658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3658u;
        // 0x1d365c: 0x7e620000  sq          $v0, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3658) {
            ctx->pc = 0x1D3688u;
            goto label_1d3688;
        }
    }
    ctx->pc = 0x1D3660u;
    // 0x1d3660: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d3660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3664: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1d3664u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3668: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1d3668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1d366c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1d366cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3670: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x1d3670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x1d3674: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d3674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d3678: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d3678u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d367c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1d367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3680: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3680u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3684: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1d3684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1d3688:
    // 0x1d3688: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1d3688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1d368c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d368cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3690: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1D3690u;
    SET_GPR_U32(ctx, 31, 0x1D3698u);
    ctx->pc = 0x1D3694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3690u;
    // 0x1d3694: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1D3690u, 0x1D3698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3698u;
label_1d3698:
    // 0x1d3698: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x1d3698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d369c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d369cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d36a0: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1d36a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1d36a4: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x1d36a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x1d36a8: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x1d36a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d36ac: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1d36acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d36b0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1D36B0u;
    {
        const bool branch_taken_0x1d36b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36B0u;
        // 0x1d36b4: 0x2128021  addu        $s0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36b0) {
            ctx->pc = 0x1D3650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3650;
        }
    }
    ctx->pc = 0x1D36B8u;
label_1d36b8:
    // 0x1d36b8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1d36b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1d36bc: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x1d36bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d36c0: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x1d36c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d36c4: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x1D36C4u;
    {
        const bool branch_taken_0x1d36c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D36C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D36C4u;
        // 0x1d36c8: 0x4614ad40  add.s       $f21, $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d36c4) {
            ctx->pc = 0x1D3570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3570;
        }
    }
    ctx->pc = 0x1D36CCu;
    // 0x1d36cc: 0x0  nop
    ctx->pc = 0x1d36ccu;
    // NOP
label_1d36d0:
    // 0x1d36d0: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x1d36d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d36d4: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x1d36d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d36d8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1d36d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d36dc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1d36dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d36e0: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1d36e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1d36e4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1d36e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d36e8: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1d36e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d36ec: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1d36ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d36f0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d36f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d36f4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d36f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d36f8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d36f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d36fc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d36fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d3700: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d3700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d3704: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d3704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3708: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d3708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d370c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d370cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3710: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d3710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d3714: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d3714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3718: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1d3718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d371c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d371cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3720: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3720u;
        // 0x1d3724: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3728u;
}
