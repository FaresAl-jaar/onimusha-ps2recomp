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

// Function: sub_001D2A60
// Address: 0x1d2a60 - 0x1d2c34
void sub_001D2A60_0x1d2a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2A60_0x1d2a60");
#endif

    switch (ctx->pc) {
        case 0x1d2b10u: goto label_1d2b10;
        case 0x1d2b24u: goto label_1d2b24;
        case 0x1d2b34u: goto label_1d2b34;
        case 0x1d2b48u: goto label_1d2b48;
        case 0x1d2b60u: goto label_1d2b60;
        case 0x1d2b78u: goto label_1d2b78;
        case 0x1d2b88u: goto label_1d2b88;
        case 0x1d2ba0u: goto label_1d2ba0;
        case 0x1d2bb8u: goto label_1d2bb8;
        case 0x1d2bd8u: goto label_1d2bd8;
        case 0x1d2be8u: goto label_1d2be8;
        default: break;
    }

    ctx->pc = 0x1d2a60u;

    // 0x1d2a60: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1d2a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1d2a64: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1d2a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1d2a68: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1d2a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1d2a6c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1d2a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1d2a70: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d2a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d2a74: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d2a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1d2a78: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1d2a78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d2a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1d2a80: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1d2a80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a84: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d2a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d2a88: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1d2a88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a8c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d2a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d2a90: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x1d2a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1d2a94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d2a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d2a98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d2a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2a9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d2a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d2aa0: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x1d2aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1d2aa4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d2aa4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d2aa8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d2aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2aac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d2aacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d2ab0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1d2ab0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2ab4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1d2ab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d2ab8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d2ab8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2abc: 0x0  nop
    ctx->pc = 0x1d2abcu;
    // NOP
    // 0x1d2ac0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x1d2ac0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1d2ac4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1d2ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1d2ac8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d2ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2acc: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1d2accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x1d2ad0: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x1d2ad0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1d2ad4: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x1d2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d2ad8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d2ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d2adc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d2adcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d2ae0: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x1d2ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1d2ae4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1d2ae4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2ae8: 0xafa700dc  sw          $a3, 0xDC($sp)
    ctx->pc = 0x1d2ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 7));
    // 0x1d2aec: 0xafa700ec  sw          $a3, 0xEC($sp)
    ctx->pc = 0x1d2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 7));
    // 0x1d2af0: 0x46020d43  div.s       $f21, $f1, $f2
    ctx->pc = 0x1d2af0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x1d2af4: 0x0  nop
    ctx->pc = 0x1d2af4u;
    // NOP
    // 0x1d2af8: 0x0  nop
    ctx->pc = 0x1d2af8u;
    // NOP
    // 0x1d2afc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1d2afcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1d2b00: 0x0  nop
    ctx->pc = 0x1d2b00u;
    // NOP
    // 0x1d2b04: 0x0  nop
    ctx->pc = 0x1d2b04u;
    // NOP
    // 0x1d2b08: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x1D2B08u;
    SET_GPR_U32(ctx, 31, 0x1D2B10u);
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x1D2B08u, 0x1D2B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B10u;
label_1d2b10:
    // 0x1d2b10: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x1d2b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d2b14: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x1d2b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1d2b18: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x1d2b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d2b1c: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x1D2B1Cu;
    SET_GPR_U32(ctx, 31, 0x1D2B24u);
    ctx->pc = 0x1D2B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B1Cu;
    // 0x1d2b20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x1D2B1Cu, 0x1D2B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B24u;
label_1d2b24:
    // 0x1d2b24: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1d2b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1d2b28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d2b28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d2b2c: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D2B2Cu;
    SET_GPR_U32(ctx, 31, 0x1D2B34u);
    ctx->pc = 0x1D2B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B2Cu;
    // 0x1d2b30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D2B2Cu, 0x1D2B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B34u;
label_1d2b34:
    // 0x1d2b34: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x1d2b34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d2b3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d2b40: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D2B40u;
    SET_GPR_U32(ctx, 31, 0x1D2B48u);
    ctx->pc = 0x1D2B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B40u;
    // 0x1d2b44: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D2B40u, 0x1D2B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B48u;
label_1d2b48:
    // 0x1d2b48: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x1d2b48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1d2b4c: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x1D2B4Cu;
    {
        const bool branch_taken_0x1d2b4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B4Cu;
        // 0x1d2b50: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b4c) {
            ctx->pc = 0x1D2BF8u;
            goto label_1d2bf8;
        }
    }
    ctx->pc = 0x1D2B54u;
    // 0x1d2b54: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d2b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b58: 0x27b700e0  addiu       $s7, $sp, 0xE0
    ctx->pc = 0x1d2b58u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d2b5c: 0x0  nop
    ctx->pc = 0x1d2b5cu;
    // NOP
label_1d2b60:
    // 0x1d2b60: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1d2b60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d2b64: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1d2b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d2b68: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d2b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b6c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1d2b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d2b70: 0xc0766b8  jal         func_1D9AE0
    ctx->pc = 0x1D2B70u;
    SET_GPR_U32(ctx, 31, 0x1D2B78u);
    ctx->pc = 0x1D2B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B70u;
    // 0x1d2b74: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AE0u, 0x1D2B70u, 0x1D2B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B78u;
label_1d2b78:
    // 0x1d2b78: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1d2b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d2b7c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1d2b7cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1d2b80: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D2B80u;
    SET_GPR_U32(ctx, 31, 0x1D2B88u);
    ctx->pc = 0x1D2B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2B80u;
    // 0x1d2b84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D2B80u, 0x1D2B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2B88u;
label_1d2b88:
    // 0x1d2b88: 0x15082a  slt         $at, $zero, $s5
    ctx->pc = 0x1d2b88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1d2b8c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1D2B8Cu;
    {
        const bool branch_taken_0x1d2b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B8Cu;
        // 0x1d2b90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b8c) {
            ctx->pc = 0x1D2BC8u;
            goto label_1d2bc8;
        }
    }
    ctx->pc = 0x1D2B94u;
    // 0x1d2b94: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1d2b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1d2b98: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x1d2b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1d2b9c: 0x0  nop
    ctx->pc = 0x1d2b9cu;
    // NOP
label_1d2ba0:
    // 0x1d2ba0: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x1d2ba0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d2ba4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1d2ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d2ba8: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x1d2ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d2bac: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d2bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2bb0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1D2BB0u;
    SET_GPR_U32(ctx, 31, 0x1D2BB8u);
    ctx->pc = 0x1D2BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2BB0u;
    // 0x1d2bb4: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1D2BB0u, 0x1D2BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2BB8u;
label_1d2bb8:
    // 0x1d2bb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d2bb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d2bbc: 0x255102a  slt         $v0, $s2, $s5
    ctx->pc = 0x1d2bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1d2bc0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D2BC0u;
    {
        const bool branch_taken_0x1d2bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BC0u;
        // 0x1d2bc4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2bc0) {
            ctx->pc = 0x1D2BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2ba0;
        }
    }
    ctx->pc = 0x1D2BC8u;
label_1d2bc8:
    // 0x1d2bc8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1d2bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1d2bcc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d2bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2bd0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1D2BD0u;
    SET_GPR_U32(ctx, 31, 0x1D2BD8u);
    ctx->pc = 0x1D2BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2BD0u;
    // 0x1d2bd4: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1D2BD0u, 0x1D2BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2BD8u;
label_1d2bd8:
    // 0x1d2bd8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d2bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1d2bdc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d2bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2be0: 0xc0766a8  jal         func_1D9AA0
    ctx->pc = 0x1D2BE0u;
    SET_GPR_U32(ctx, 31, 0x1D2BE8u);
    ctx->pc = 0x1D2BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2BE0u;
    // 0x1d2be4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9AA0u, 0x1D2BE0u, 0x1D2BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2BE8u;
label_1d2be8:
    // 0x1d2be8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2be8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d2bec: 0x274102a  slt         $v0, $s3, $s4
    ctx->pc = 0x1d2becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1d2bf0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1D2BF0u;
    {
        const bool branch_taken_0x1d2bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BF0u;
        // 0x1d2bf4: 0x2358821  addu        $s1, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2bf0) {
            ctx->pc = 0x1D2B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2b60;
        }
    }
    ctx->pc = 0x1D2BF8u;
label_1d2bf8:
    // 0x1d2bf8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1d2bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d2bfc: 0x2b41018  mult        $v0, $s5, $s4
    ctx->pc = 0x1d2bfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d2c00: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1d2c00u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d2c04: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1d2c04u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d2c08: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d2c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d2c0c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d2c0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d2c10: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d2c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d2c14: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d2c14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2c18: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d2c18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d2c1c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d2c1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d2c20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d2c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2c24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d2c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2c28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d2c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C2Cu;
        // 0x1d2c30: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2C34u;
}
