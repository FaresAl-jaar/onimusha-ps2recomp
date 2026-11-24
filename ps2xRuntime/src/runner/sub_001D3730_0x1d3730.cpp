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

// Function: sub_001D3730
// Address: 0x1d3730 - 0x1d3a84
void sub_001D3730_0x1d3730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3730_0x1d3730");
#endif

    switch (ctx->pc) {
        case 0x1d3808u: goto label_1d3808;
        case 0x1d3814u: goto label_1d3814;
        case 0x1d3830u: goto label_1d3830;
        case 0x1d3840u: goto label_1d3840;
        case 0x1d3860u: goto label_1d3860;
        case 0x1d3870u: goto label_1d3870;
        case 0x1d38b0u: goto label_1d38b0;
        case 0x1d39f0u: goto label_1d39f0;
        default: break;
    }

    ctx->pc = 0x1d3730u;

    // 0x1d3730: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1d3730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1d3734: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d3734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3738: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1d3738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1d373c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1d373cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3740: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1d3740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1d3744: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d3744u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d3748: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1d3748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1d374c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d374cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d3750: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1d3750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1d3754: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d3754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d3758: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d3758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d375c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d375cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1d3760: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d3760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d3764: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d3764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d3768: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d3768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d376c: 0x5b883  sra         $s7, $a1, 2
    ctx->pc = 0x1d376cu;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1d3770: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d3770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d3774: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d3774u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3778: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d3778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d377c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1d377cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3780: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d3780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d3784: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3788: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d3788u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d378c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1d378cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3790: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d3790u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3794: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1d3794u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d3798: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1d3798u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d379c: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d379cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d37a0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d37a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d37a4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d37a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d37a8: 0x46001583  div.s       $f22, $f2, $f0
    ctx->pc = 0x1d37a8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1d37ac: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d37acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d37b0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1d37b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d37b4: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1d37b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1d37b8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d37b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d37bc: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1d37bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d37c0: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x1d37c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d37c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d37c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d37c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d37c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d37cc: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x1d37ccu;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x1d37d0: 0x46006e46  mov.s       $f25, $f13
    ctx->pc = 0x1d37d0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[13]);
    // 0x1d37d4: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x1d37d4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x1d37d8: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x1d37d8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x1d37dc: 0x0  nop
    ctx->pc = 0x1d37dcu;
    // NOP
    // 0x1d37e0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d37e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d37e4: 0x10200090  beqz        $at, . + 4 + (0x90 << 2)
    ctx->pc = 0x1D37E4u;
    {
        const bool branch_taken_0x1d37e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D37E4u;
        // 0x1d37e8: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d37e4) {
            ctx->pc = 0x1D3A28u;
            goto label_1d3a28;
        }
    }
    ctx->pc = 0x1D37ECu;
    // 0x1d37ec: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x1d37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x1d37f0: 0x17b040  sll         $s6, $s7, 1
    ctx->pc = 0x1d37f0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x1d37f4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1d37f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1d37f8: 0x2f61021  addu        $v0, $s7, $s6
    ctx->pc = 0x1d37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x1d37fc: 0xafb6011c  sw          $s6, 0x11C($sp)
    ctx->pc = 0x1d37fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 22));
    // 0x1d3800: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x1d3800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x1d3804: 0x0  nop
    ctx->pc = 0x1d3804u;
    // NOP
label_1d3808:
    // 0x1d3808: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1d3808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1d380c: 0xc07637c  jal         func_1D8DF0
    ctx->pc = 0x1D380Cu;
    SET_GPR_U32(ctx, 31, 0x1D3814u);
    ctx->pc = 0x1D3810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D380Cu;
    // 0x1d3810: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DF0u, 0x1D380Cu, 0x1D3814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3814u;
label_1d3814:
    // 0x1d3814: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x1d3814u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d3818: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1d3818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d381c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d381cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3820: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x1d3820u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x1d3824: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1d3824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x1d3828: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D3828u;
    SET_GPR_U32(ctx, 31, 0x1D3830u);
    ctx->pc = 0x1D382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3828u;
    // 0x1d382c: 0x7fa20140  sq          $v0, 0x140($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D3828u, 0x1D3830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3830u;
label_1d3830:
    // 0x1d3830: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1d3830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d3834: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x1d3834u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x1d3838: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D3838u;
    SET_GPR_U32(ctx, 31, 0x1D3840u);
    ctx->pc = 0x1D383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3838u;
    // 0x1d383c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D3838u, 0x1D3840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3840u;
label_1d3840:
    // 0x1d3840: 0x27a20158  addiu       $v0, $sp, 0x158
    ctx->pc = 0x1d3840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x1d3844: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1d3844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d3848: 0xe4580000  swc1        $f24, 0x0($v0)
    ctx->pc = 0x1d3848u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d384c: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1d384cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1d3850: 0x27a20148  addiu       $v0, $sp, 0x148
    ctx->pc = 0x1d3850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x1d3854: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x1d3854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d3858: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x1D3858u;
    SET_GPR_U32(ctx, 31, 0x1D3860u);
    ctx->pc = 0x1D385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3858u;
    // 0x1d385c: 0xe4570000  swc1        $f23, 0x0($v0) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x1D3858u, 0x1D3860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3860u;
label_1d3860:
    // 0x1d3860: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1d3860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1d3864: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1d3864u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1d3868: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D3868u;
    SET_GPR_U32(ctx, 31, 0x1D3870u);
    ctx->pc = 0x1D386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3868u;
    // 0x1d386c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D3868u, 0x1D3870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3870u;
label_1d3870:
    // 0x1d3870: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x1d3870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d3874: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1d3874u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3878: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d3878u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d387c: 0x10200064  beqz        $at, . + 4 + (0x64 << 2)
    ctx->pc = 0x1D387Cu;
    {
        const bool branch_taken_0x1d387c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D387Cu;
        // 0x1d3880: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d387c) {
            ctx->pc = 0x1D3A10u;
            goto label_1d3a10;
        }
    }
    ctx->pc = 0x1D3884u;
    // 0x1d3884: 0x12182a  slt         $v1, $zero, $s2
    ctx->pc = 0x1d3884u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1d3888: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x1d3888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1d388c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d3890: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1d3890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1d3894: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1d3894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1d3898: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1d3898u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d389c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1d389cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1d38a0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1d38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d38a4: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x1d38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d38a8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d38a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1d38ac: 0x0  nop
    ctx->pc = 0x1d38acu;
    // NOP
label_1d38b0:
    // 0x1d38b0: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x1d38b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1d38b4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1d38b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d38b8: 0x2a41821  addu        $v1, $s5, $a0
    ctx->pc = 0x1d38b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1d38bc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1d38bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1d38c0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d38c4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D38C4u;
    {
        const bool branch_taken_0x1d38c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D38C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D38C4u;
        // 0x1d38c8: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d38c4) {
            ctx->pc = 0x1D3948u;
            goto label_1d3948;
        }
    }
    ctx->pc = 0x1D38CCu;
    // 0x1d38cc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1d38ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d38d0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1d38d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d38d4: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x1d38d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d38d8: 0x72221018  mult1       $v0, $s1, $v0
    ctx->pc = 0x1d38d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d38dc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1d38dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d38e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d38e4: 0x2a22821  addu        $a1, $s5, $v0
    ctx->pc = 0x1d38e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d38e8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d38ec: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1d38ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d38f0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d38f4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d38f8: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1d38f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d38fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d38fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3900: 0x2a43021  addu        $a2, $s5, $a0
    ctx->pc = 0x1d3900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1d3904: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1d3904u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1d3908: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d3908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d390c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1d390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3910: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3910u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3914: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1d3914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1d3918: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1d3918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d391c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1d391cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1d3920: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1d3920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3924: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3924u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3928: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1d3928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1d392c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1d392cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d3930: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1d3930u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1d3934: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d3934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3938: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3938u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d393c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1D393Cu;
    {
        const bool branch_taken_0x1d393c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D393Cu;
        // 0x1d3940: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d393c) {
            ctx->pc = 0x1D39E0u;
            goto label_1d39e0;
        }
    }
    ctx->pc = 0x1D3944u;
    // 0x1d3944: 0x0  nop
    ctx->pc = 0x1d3944u;
    // NOP
label_1d3948:
    // 0x1d3948: 0x16400017  bnez        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D3948u;
    {
        const bool branch_taken_0x1d3948 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3948) {
            ctx->pc = 0x1D39A8u;
            goto label_1d39a8;
        }
    }
    ctx->pc = 0x1D3950u;
    // 0x1d3950: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3950u;
    {
        const bool branch_taken_0x1d3950 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3950) {
            ctx->pc = 0x1D3970u;
            goto label_1d3970;
        }
    }
    ctx->pc = 0x1D3958u;
    // 0x1d3958: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1d3958u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d395c: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x1d395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x1d3960: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3960u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3964: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d3964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3968: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d3968u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d396c: 0x0  nop
    ctx->pc = 0x1d396cu;
    // NOP
label_1d3970:
    // 0x1d3970: 0x2a41021  addu        $v0, $s5, $a0
    ctx->pc = 0x1d3970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1d3974: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1d3974u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3978: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x1d3978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1d397c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1d397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d3980: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x1d3980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d3984: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1d3984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x1d3988: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d3988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d398c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d398cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3990: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d3990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3994: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d3994u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d3998: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d3998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d399c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d399cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d39a0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D39A0u;
    {
        const bool branch_taken_0x1d39a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39A0u;
        // 0x1d39a4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39a0) {
            ctx->pc = 0x1D39E0u;
            goto label_1d39e0;
        }
    }
    ctx->pc = 0x1D39A8u;
label_1d39a8:
    // 0x1d39a8: 0x1657000d  bne         $s2, $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x1D39A8u;
    {
        const bool branch_taken_0x1d39a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        ctx->pc = 0x1D39ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D39A8u;
        // 0x1d39ac: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d39a8) {
            ctx->pc = 0x1D39E0u;
            goto label_1d39e0;
        }
    }
    ctx->pc = 0x1D39B0u;
    // 0x1d39b0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1d39b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d39b4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1d39b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d39b8: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x1d39b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d39bc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x1d39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d39c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d39c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d39c8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d39c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d39cc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d39ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d39d0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1d39d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d39d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d39d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d39d8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1d39d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1d39dc: 0x0  nop
    ctx->pc = 0x1d39dcu;
    // NOP
label_1d39e0:
    // 0x1d39e0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1d39e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1d39e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d39e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d39e8: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1D39E8u;
    SET_GPR_U32(ctx, 31, 0x1D39F0u);
    ctx->pc = 0x1D39ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D39E8u;
    // 0x1d39ec: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1D39E8u, 0x1D39F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D39F0u;
label_1d39f0:
    // 0x1d39f0: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x1d39f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1d39f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d39f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d39f8: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1d39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d39fc: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x1d39fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d3a00: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d3a00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3a04: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
    ctx->pc = 0x1D3A04u;
    {
        const bool branch_taken_0x1d3a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A04u;
        // 0x1d3a08: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a04) {
            ctx->pc = 0x1D38B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d38b0;
        }
    }
    ctx->pc = 0x1D3A0Cu;
    // 0x1d3a0c: 0x0  nop
    ctx->pc = 0x1d3a0cu;
    // NOP
label_1d3a10:
    // 0x1d3a10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d3a10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d3a14: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x1d3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d3a18: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d3a18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d3a1c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d3a1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3a20: 0x1440ff79  bnez        $v0, . + 4 + (-0x87 << 2)
    ctx->pc = 0x1D3A20u;
    {
        const bool branch_taken_0x1d3a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A20u;
        // 0x1d3a24: 0x4614ad40  add.s       $f21, $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3a20) {
            ctx->pc = 0x1D3808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3808;
        }
    }
    ctx->pc = 0x1D3A28u;
label_1d3a28:
    // 0x1d3a28: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x1d3a28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1d3a2c: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1d3a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1d3a30: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1d3a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d3a34: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x1d3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1d3a38: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1d3a38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d3a3c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1d3a3cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d3a40: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1d3a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1d3a44: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1d3a44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d3a48: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1d3a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d3a4c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d3a4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d3a50: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d3a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d3a54: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d3a54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d3a58: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d3a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d3a5c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d3a5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d3a60: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d3a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d3a64: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d3a64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3a68: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d3a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d3a6c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d3a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3a70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d3a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d3a74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d3a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3a78: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1d3a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d3a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3A7Cu;
        // 0x1d3a80: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3A84u;
}
