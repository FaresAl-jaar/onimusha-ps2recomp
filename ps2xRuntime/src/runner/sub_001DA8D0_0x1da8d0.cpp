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

// Function: sub_001DA8D0
// Address: 0x1da8d0 - 0x1dac10
void sub_001DA8D0_0x1da8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA8D0_0x1da8d0");
#endif

    switch (ctx->pc) {
        case 0x1da9a0u: goto label_1da9a0;
        case 0x1da9b0u: goto label_1da9b0;
        case 0x1da9c0u: goto label_1da9c0;
        case 0x1da9d0u: goto label_1da9d0;
        case 0x1da9f8u: goto label_1da9f8;
        case 0x1daa10u: goto label_1daa10;
        case 0x1daa20u: goto label_1daa20;
        case 0x1daa48u: goto label_1daa48;
        case 0x1daa8cu: goto label_1daa8c;
        case 0x1daab0u: goto label_1daab0;
        case 0x1daad0u: goto label_1daad0;
        case 0x1dab20u: goto label_1dab20;
        case 0x1dab30u: goto label_1dab30;
        case 0x1dab64u: goto label_1dab64;
        case 0x1dab74u: goto label_1dab74;
        case 0x1dab90u: goto label_1dab90;
        case 0x1daba0u: goto label_1daba0;
        default: break;
    }

    ctx->pc = 0x1da8d0u;

    // 0x1da8d0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1da8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1da8d4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1da8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1da8d8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1da8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1da8dc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1da8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1da8e0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1da8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1da8e4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1da8e4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8e8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1da8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1da8ec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1da8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1da8f0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1da8f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1da8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1da8f8: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1da8f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1da8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1da900: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1da900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1da904: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1da904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1da908: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1da908u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1da90c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1da90cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1da910: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1da910u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1da914: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1da914u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1da918: 0xafa800e0  sw          $t0, 0xE0($sp)
    ctx->pc = 0x1da918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 8));
    // 0x1da91c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1da91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1da920: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x1da920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
    // 0x1da924: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA924u;
    {
        const bool branch_taken_0x1da924 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x1DA928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA924u;
        // 0x1da928: 0xafa700f8  sw          $a3, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da924) {
            ctx->pc = 0x1DA938u;
            goto label_1da938;
        }
    }
    ctx->pc = 0x1DA92Cu;
    // 0x1da92c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da930: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1da930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1da934: 0x0  nop
    ctx->pc = 0x1da934u;
    // NOP
label_1da938:
    // 0x1da938: 0x1e800003  bgtz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA938u;
    {
        const bool branch_taken_0x1da938 = (GPR_S64(ctx, 20) > 0);
        if (branch_taken_0x1da938) {
            ctx->pc = 0x1DA948u;
            goto label_1da948;
        }
    }
    ctx->pc = 0x1DA940u;
    // 0x1da940: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1da940u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da944: 0x0  nop
    ctx->pc = 0x1da944u;
    // NOP
label_1da948:
    // 0x1da948: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1da948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1da94c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1da94cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1da950: 0x7ae30000  lq          $v1, 0x0($s7)
    ctx->pc = 0x1da950u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1da954: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1da954u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da958: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1da958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1da95c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1da95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1da960: 0x26e50020  addiu       $a1, $s7, 0x20
    ctx->pc = 0x1da960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x1da964: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1da964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1da968: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1da968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da96c: 0x7fa30150  sq          $v1, 0x150($sp)
    ctx->pc = 0x1da96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
    // 0x1da970: 0x7ae30010  lq          $v1, 0x10($s7)
    ctx->pc = 0x1da970u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x1da974: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1da974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da978: 0x0  nop
    ctx->pc = 0x1da978u;
    // NOP
    // 0x1da97c: 0x46001583  div.s       $f22, $f2, $f0
    ctx->pc = 0x1da97cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x1da980: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x1da980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1da984: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1da984u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1da988: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1da988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1da98c: 0x460115c3  div.s       $f23, $f2, $f1
    ctx->pc = 0x1da98cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1da990: 0x0  nop
    ctx->pc = 0x1da990u;
    // NOP
    // 0x1da994: 0x0  nop
    ctx->pc = 0x1da994u;
    // NOP
    // 0x1da998: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1DA998u;
    SET_GPR_U32(ctx, 31, 0x1DA9A0u);
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1DA998u, 0x1DA9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9A0u;
label_1da9a0:
    // 0x1da9a0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1da9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1da9a4: 0x26e50030  addiu       $a1, $s7, 0x30
    ctx->pc = 0x1da9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
    // 0x1da9a8: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1DA9A8u;
    SET_GPR_U32(ctx, 31, 0x1DA9B0u);
    ctx->pc = 0x1DA9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA9A8u;
    // 0x1da9ac: 0x26e60010  addiu       $a2, $s7, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1DA9A8u, 0x1DA9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9B0u;
label_1da9b0:
    // 0x1da9b0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1da9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1da9b4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1da9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1da9b8: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DA9B8u;
    SET_GPR_U32(ctx, 31, 0x1DA9C0u);
    ctx->pc = 0x1DA9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA9B8u;
    // 0x1da9bc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DA9B8u, 0x1DA9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9C0u;
label_1da9c0:
    // 0x1da9c0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1da9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1da9c4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1da9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1da9c8: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DA9C8u;
    SET_GPR_U32(ctx, 31, 0x1DA9D0u);
    ctx->pc = 0x1DA9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA9C8u;
    // 0x1da9cc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DA9C8u, 0x1DA9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA9D0u;
label_1da9d0:
    // 0x1da9d0: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1da9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1da9d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1da9d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9d8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1da9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1da9dc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1da9dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1da9e0: 0x1020007b  beqz        $at, . + 4 + (0x7B << 2)
    ctx->pc = 0x1DA9E0u;
    {
        const bool branch_taken_0x1da9e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9E0u;
        // 0x1da9e4: 0xafa000d0  sw          $zero, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9e0) {
            ctx->pc = 0x1DABD0u;
            goto label_1dabd0;
        }
    }
    ctx->pc = 0x1DA9E8u;
    // 0x1da9e8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1da9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1da9ec: 0x27be0160  addiu       $fp, $sp, 0x160
    ctx->pc = 0x1da9ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1da9f0: 0x4600bd47  neg.s       $f21, $f23
    ctx->pc = 0x1da9f0u;
    ctx->f[21] = FPU_NEG_S(ctx->f[23]);
    // 0x1da9f4: 0x4600b507  neg.s       $f20, $f22
    ctx->pc = 0x1da9f4u;
    ctx->f[20] = FPU_NEG_S(ctx->f[22]);
label_1da9f8:
    // 0x1da9f8: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x1da9f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1da9fc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1da9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1daa00: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1daa00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa04: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x1daa04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1daa08: 0xc0766c0  jal         func_1D9B00
    ctx->pc = 0x1DAA08u;
    SET_GPR_U32(ctx, 31, 0x1DAA10u);
    ctx->pc = 0x1DAA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA08u;
    // 0x1daa0c: 0x7fa20170  sq          $v0, 0x170($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9B00u, 0x1DAA08u, 0x1DAA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA10u;
label_1daa10:
    // 0x1daa10: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1daa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1daa14: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1daa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1daa18: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DAA18u;
    SET_GPR_U32(ctx, 31, 0x1DAA20u);
    ctx->pc = 0x1DAA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA18u;
    // 0x1daa1c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DAA18u, 0x1DAA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA20u;
label_1daa20:
    // 0x1daa20: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x1daa20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1daa24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1daa24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa28: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1daa28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa2c: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x1DAA2Cu;
    {
        const bool branch_taken_0x1daa2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA2Cu;
        // 0x1daa30: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa2c) {
            ctx->pc = 0x1DAAE0u;
            goto label_1daae0;
        }
    }
    ctx->pc = 0x1DAA34u;
    // 0x1daa34: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1daa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1daa38: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1daa38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1daa3c: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1daa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1daa40: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1daa40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1daa44: 0x0  nop
    ctx->pc = 0x1daa44u;
    // NOP
label_1daa48:
    // 0x1daa48: 0x7ba30170  lq          $v1, 0x170($sp)
    ctx->pc = 0x1daa48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1daa4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1daa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1daa50: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1daa50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1daa54: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1daa54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1daa58: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1daa58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1daa5c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1daa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1daa60: 0x56082a  slt         $at, $v0, $s6
    ctx->pc = 0x1daa60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1daa64: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DAA64u;
    {
        const bool branch_taken_0x1daa64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daa64) {
            ctx->pc = 0x1DAAC0u;
            goto label_1daac0;
        }
    }
    ctx->pc = 0x1DAA6Cu;
    // 0x1daa6c: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1DAA6Cu;
    {
        const bool branch_taken_0x1daa6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daa6c) {
            ctx->pc = 0x1DAA98u;
            goto label_1daa98;
        }
    }
    ctx->pc = 0x1DAA74u;
    // 0x1daa74: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x1daa74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1daa78: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1daa78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1daa7c: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1daa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1daa80: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1daa80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1daa84: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DAA84u;
    SET_GPR_U32(ctx, 31, 0x1DAA8Cu);
    ctx->pc = 0x1DAA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA84u;
    // 0x1daa88: 0x7fa20170  sq          $v0, 0x170($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DAA84u, 0x1DAA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA8Cu;
label_1daa8c:
    // 0x1daa8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DAA8Cu;
    {
        const bool branch_taken_0x1daa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA8Cu;
        // 0x1daa90: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa8c) {
            ctx->pc = 0x1DAAB8u;
            goto label_1daab8;
        }
    }
    ctx->pc = 0x1DAA94u;
    // 0x1daa94: 0x0  nop
    ctx->pc = 0x1daa94u;
    // NOP
label_1daa98:
    // 0x1daa98: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x1daa98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1daa9c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1daa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1daaa0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1daaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1daaa4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1daaa4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1daaa8: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DAAA8u;
    SET_GPR_U32(ctx, 31, 0x1DAAB0u);
    ctx->pc = 0x1DAAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAAA8u;
    // 0x1daaac: 0x7fa20170  sq          $v0, 0x170($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DAAA8u, 0x1DAAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAAB0u;
label_1daab0:
    // 0x1daab0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1daab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daab4: 0x0  nop
    ctx->pc = 0x1daab4u;
    // NOP
label_1daab8:
    // 0x1daab8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1daab8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1daabc: 0x0  nop
    ctx->pc = 0x1daabcu;
    // NOP
label_1daac0:
    // 0x1daac0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x1daac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1daac4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1daac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daac8: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1DAAC8u;
    SET_GPR_U32(ctx, 31, 0x1DAAD0u);
    ctx->pc = 0x1DAACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAAC8u;
    // 0x1daacc: 0x27a60180  addiu       $a2, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1DAAC8u, 0x1DAAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAAD0u;
label_1daad0:
    // 0x1daad0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1daad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1daad4: 0x275102a  slt         $v0, $s3, $s5
    ctx->pc = 0x1daad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1daad8: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1DAAD8u;
    {
        const bool branch_taken_0x1daad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAAD8u;
        // 0x1daadc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daad8) {
            ctx->pc = 0x1DAA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1daa48;
        }
    }
    ctx->pc = 0x1DAAE0u;
label_1daae0:
    // 0x1daae0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1daae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1daae4: 0x292082a  slt         $at, $s4, $s2
    ctx->pc = 0x1daae4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1daae8: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x1DAAE8u;
    {
        const bool branch_taken_0x1daae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daae8) {
            ctx->pc = 0x1DAB80u;
            goto label_1dab80;
        }
    }
    ctx->pc = 0x1DAAF0u;
    // 0x1daaf0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1daaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1daaf4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DAAF4u;
    {
        const bool branch_taken_0x1daaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daaf4) {
            ctx->pc = 0x1DAB40u;
            goto label_1dab40;
        }
    }
    ctx->pc = 0x1DAAFCu;
    // 0x1daafc: 0x7ae20020  lq          $v0, 0x20($s7)
    ctx->pc = 0x1daafcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x1dab00: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1dab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1dab04: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1dab04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dab08: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dab08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dab0c: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1dab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x1dab10: 0x7ae30030  lq          $v1, 0x30($s7)
    ctx->pc = 0x1dab10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x1dab14: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x1dab14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1dab18: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DAB18u;
    SET_GPR_U32(ctx, 31, 0x1DAB20u);
    ctx->pc = 0x1DAB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB18u;
    // 0x1dab1c: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DAB18u, 0x1DAB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB20u;
label_1dab20:
    // 0x1dab20: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1dab20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1dab24: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1dab24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1dab28: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DAB28u;
    SET_GPR_U32(ctx, 31, 0x1DAB30u);
    ctx->pc = 0x1DAB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB28u;
    // 0x1dab2c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DAB28u, 0x1DAB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB30u;
label_1dab30:
    // 0x1dab30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dab34: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DAB34u;
    {
        const bool branch_taken_0x1dab34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAB34u;
        // 0x1dab38: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab34) {
            ctx->pc = 0x1DAB78u;
            goto label_1dab78;
        }
    }
    ctx->pc = 0x1DAB3Cu;
    // 0x1dab3c: 0x0  nop
    ctx->pc = 0x1dab3cu;
    // NOP
label_1dab40:
    // 0x1dab40: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x1dab40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1dab44: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x1dab44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1dab48: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x1dab48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1dab4c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1dab4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1dab50: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1dab50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x1dab54: 0x7ae30010  lq          $v1, 0x10($s7)
    ctx->pc = 0x1dab54u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x1dab58: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x1dab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1dab5c: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DAB5Cu;
    SET_GPR_U32(ctx, 31, 0x1DAB64u);
    ctx->pc = 0x1DAB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB5Cu;
    // 0x1dab60: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DAB5Cu, 0x1DAB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB64u;
label_1dab64:
    // 0x1dab64: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x1dab64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x1dab68: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1dab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1dab6c: 0xc076698  jal         func_1D9A60
    ctx->pc = 0x1DAB6Cu;
    SET_GPR_U32(ctx, 31, 0x1DAB74u);
    ctx->pc = 0x1DAB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB6Cu;
    // 0x1dab70: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A60u, 0x1DAB6Cu, 0x1DAB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB74u;
label_1dab74:
    // 0x1dab74: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1dab74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_1dab78:
    // 0x1dab78: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1dab78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dab7c: 0x0  nop
    ctx->pc = 0x1dab7cu;
    // NOP
label_1dab80:
    // 0x1dab80: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1dab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1dab84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1dab84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab88: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1DAB88u;
    SET_GPR_U32(ctx, 31, 0x1DAB90u);
    ctx->pc = 0x1DAB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB88u;
    // 0x1dab8c: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1DAB88u, 0x1DAB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAB90u;
label_1dab90:
    // 0x1dab90: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1dab90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1dab94: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1dab94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab98: 0xc0766b0  jal         func_1D9AC0
    ctx->pc = 0x1DAB98u;
    SET_GPR_U32(ctx, 31, 0x1DABA0u);
    ctx->pc = 0x1DAB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAB98u;
    // 0x1dab9c: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AC0u, 0x1DAB98u, 0x1DABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DABA0u;
label_1daba0:
    // 0x1daba0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1daba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1daba4: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1daba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1daba8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1daba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x1dabac: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1dabacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dabb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dabb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dabb4: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x1dabb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
    // 0x1dabb8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1dabb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dabbc: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1dabbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dabc0: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1dabc0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1dabc4: 0x1460ff8c  bnez        $v1, . + 4 + (-0x74 << 2)
    ctx->pc = 0x1DABC4u;
    {
        const bool branch_taken_0x1dabc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dabc4) {
            ctx->pc = 0x1DA9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da9f8;
        }
    }
    ctx->pc = 0x1DABCCu;
    // 0x1dabcc: 0x0  nop
    ctx->pc = 0x1dabccu;
    // NOP
label_1dabd0:
    // 0x1dabd0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1dabd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dabd4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1dabd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dabd8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1dabd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1dabdc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1dabdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dabe0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1dabe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1dabe4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1dabe4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dabe8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1dabe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1dabec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1dabecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dabf0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1dabf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dabf4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1dabf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dabf8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1dabf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dabfc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1dabfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dac00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dac00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dac04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1dac04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dac08: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAC08u;
        // 0x1dac0c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAC10u;
}
