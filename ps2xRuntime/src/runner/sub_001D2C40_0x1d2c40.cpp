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

// Function: sub_001D2C40
// Address: 0x1d2c40 - 0x1d2f94
void sub_001D2C40_0x1d2c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2C40_0x1d2c40");
#endif

    switch (ctx->pc) {
        case 0x1d2d00u: goto label_1d2d00;
        case 0x1d2d0cu: goto label_1d2d0c;
        case 0x1d2d48u: goto label_1d2d48;
        case 0x1d2d5cu: goto label_1d2d5c;
        default: break;
    }

    ctx->pc = 0x1d2c40u;

    // 0x1d2c40: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d2c40u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d2c44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d2c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2c48: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1d2c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1d2c4c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d2c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1d2c50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d2c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d2c54: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1d2c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1d2c58: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1d2c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1d2c5c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1d2c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1d2c60: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1d2c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1d2c64: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1d2c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1d2c68: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d2c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1d2c6c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d2c6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c70: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d2c70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d2c74: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d2c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d2c78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d2c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1d2c7c: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1d2c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d2c80: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1d2c80u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1d2c84: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d2c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d2c88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d2c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d2c8c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d2c90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d2c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d2c94: 0x59883  sra         $s3, $a1, 2
    ctx->pc = 0x1d2c94u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1d2c98: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d2c98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c9c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d2c9cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d2ca0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d2ca0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d2ca4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d2ca4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d2ca8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d2ca8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d2cac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d2cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2cb0: 0xafa600e8  sw          $a2, 0xE8($sp)
    ctx->pc = 0x1d2cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 6));
    // 0x1d2cb4: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x1d2cb4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x1d2cb8: 0xafa500ec  sw          $a1, 0xEC($sp)
    ctx->pc = 0x1d2cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
    // 0x1d2cbc: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x1d2cbcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x1d2cc0: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1d2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d2cc4: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x1d2cc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d2cc8: 0x0  nop
    ctx->pc = 0x1d2cc8u;
    // NOP
    // 0x1d2ccc: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d2cccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d2cd0: 0x1020009b  beqz        $at, . + 4 + (0x9B << 2)
    ctx->pc = 0x1D2CD0u;
    {
        const bool branch_taken_0x1d2cd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CD0u;
        // 0x1d2cd4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cd0) {
            ctx->pc = 0x1D2F40u;
            goto label_1d2f40;
        }
    }
    ctx->pc = 0x1D2CD8u;
    // 0x1d2cd8: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1d2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1d2cdc: 0x138840  sll         $s1, $s3, 1
    ctx->pc = 0x1d2cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d2ce0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d2ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ce4: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x1d2ce4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ce8: 0x13b880  sll         $s7, $s3, 2
    ctx->pc = 0x1d2ce8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1d2cec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d2cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d2cf0: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1d2cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x1d2cf4: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1d2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1d2cf8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d2cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d2cfc: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d2cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1d2d00:
    // 0x1d2d00: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1d2d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1d2d04: 0xc07637c  jal         func_1D8DF0
    ctx->pc = 0x1D2D04u;
    SET_GPR_U32(ctx, 31, 0x1D2D0Cu);
    ctx->pc = 0x1D2D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D04u;
    // 0x1d2d08: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DF0u, 0x1D2D04u, 0x1D2D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D0Cu;
label_1d2d0c:
    // 0x1d2d0c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d2d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d2d10: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x1d2d10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d2d14: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x1d2d14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2d18: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1d2d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d2d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d20: 0x2f100  sll         $fp, $v0, 4
    ctx->pc = 0x1d2d20u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d2d24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d28: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x1d2d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x1d2d2c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1d2d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1d2d30: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1d2d30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1d2d34: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1d2d34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1d2d38: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x1d2d38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d2d3c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1d2d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d2d40: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D2D40u;
    SET_GPR_U32(ctx, 31, 0x1D2D48u);
    ctx->pc = 0x1D2D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D40u;
    // 0x1d2d44: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D2D40u, 0x1D2D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D48u;
label_1d2d48:
    // 0x1d2d48: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x1d2d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d2d4c: 0x2bef021  addu        $fp, $s5, $fp
    ctx->pc = 0x1d2d4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x1d2d50: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d2d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d54: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D2D54u;
    SET_GPR_U32(ctx, 31, 0x1D2D5Cu);
    ctx->pc = 0x1D2D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D54u;
    // 0x1d2d58: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D2D54u, 0x1D2D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D5Cu;
label_1d2d5c:
    // 0x1d2d5c: 0x14182a  slt         $v1, $zero, $s4
    ctx->pc = 0x1d2d5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1d2d60: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x1d2d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1d2d64: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d2d68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d2d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d2d6c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1D2D6Cu;
    {
        const bool branch_taken_0x1d2d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D6Cu;
        // 0x1d2d70: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d6c) {
            ctx->pc = 0x1D2E40u;
            goto label_1d2e40;
        }
    }
    ctx->pc = 0x1D2D74u;
    // 0x1d2d74: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x1d2d74u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d2d78: 0x2d41023  subu        $v0, $s6, $s4
    ctx->pc = 0x1d2d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x1d2d7c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1d2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d2d80: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1d2d80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d2d84: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d2d88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d2d8c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d2d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2d90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2d90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2d94: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x1d2d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d2d98: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1d2d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d2d9c: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x1d2d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x1d2da0: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x1d2da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1d2da4: 0x7bc60000  lq          $a2, 0x0($fp)
    ctx->pc = 0x1d2da4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1d2da8: 0x2a44821  addu        $t1, $s5, $a0
    ctx->pc = 0x1d2da8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1d2dac: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2db0: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x1d2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d2db4: 0x2f41823  subu        $v1, $s7, $s4
    ctx->pc = 0x1d2db4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x1d2db8: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x1d2db8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d2dbc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1d2dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1d2dc0: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x1d2dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x1d2dc4: 0x2a34021  addu        $t0, $s5, $v1
    ctx->pc = 0x1d2dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d2dc8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d2dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2dcc: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x1d2dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d2dd0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d2dd4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d2dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d2dd8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d2dd8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d2ddc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d2ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d2de0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1d2de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2de4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d2de4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d2de8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1d2de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1d2dec: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d2decu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2df0: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x1d2df0u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x1d2df4: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1d2df4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d2df8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1d2df8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1d2dfc: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x1d2dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2e00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d2e00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d2e04: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x1d2e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x1d2e08: 0xc5200014  lwc1        $f0, 0x14($t1)
    ctx->pc = 0x1d2e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2e0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d2e0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d2e10: 0xe5200014  swc1        $f0, 0x14($t1)
    ctx->pc = 0x1d2e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 20), bits); }
    // 0x1d2e14: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x1d2e14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d2e18: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x1d2e18u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x1d2e1c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1d2e1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d2e20: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1d2e20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1d2e24: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1d2e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2e28: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d2e28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d2e2c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1d2e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1d2e30: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x1d2e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2e34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d2e34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d2e38: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1D2E38u;
    {
        const bool branch_taken_0x1d2e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2E38u;
        // 0x1d2e3c: 0xe5000010  swc1        $f0, 0x10($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2e38) {
            ctx->pc = 0x1D2F20u;
            goto label_1d2f20;
        }
    }
    ctx->pc = 0x1D2E40u;
label_1d2e40:
    // 0x1d2e40: 0x1680001f  bnez        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D2E40u;
    {
        const bool branch_taken_0x1d2e40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2e40) {
            ctx->pc = 0x1D2EC0u;
            goto label_1d2ec0;
        }
    }
    ctx->pc = 0x1D2E48u;
    // 0x1d2e48: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1d2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1d2e4c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D2E4Cu;
    {
        const bool branch_taken_0x1d2e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2e4c) {
            ctx->pc = 0x1D2E80u;
            goto label_1d2e80;
        }
    }
    ctx->pc = 0x1D2E54u;
    // 0x1d2e54: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d2e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d2e58: 0x7aa40000  lq          $a0, 0x0($s5)
    ctx->pc = 0x1d2e58u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d2e5c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d2e60: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x1d2e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2e64: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d2e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d2e68: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d2e68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d2e6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2e70: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x1d2e70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d2e74: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d2e78: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2e7c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d2e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1d2e80:
    // 0x1d2e80: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x1d2e80u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d2e84: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x1d2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1d2e88: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d2e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2e8c: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x1d2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d2e90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d2e94: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d2e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2e98: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1d2e98u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1d2e9c: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x1d2e9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d2ea0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d2ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d2ea4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d2ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2ea8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d2ea8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d2eac: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d2eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d2eb0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1d2eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2eb4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d2eb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d2eb8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D2EB8u;
    {
        const bool branch_taken_0x1d2eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EB8u;
        // 0x1d2ebc: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2eb8) {
            ctx->pc = 0x1D2F20u;
            goto label_1d2f20;
        }
    }
    ctx->pc = 0x1D2EC0u;
label_1d2ec0:
    // 0x1d2ec0: 0x16930017  bne         $s4, $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D2EC0u;
    {
        const bool branch_taken_0x1d2ec0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x1d2ec0) {
            ctx->pc = 0x1D2F20u;
            goto label_1d2f20;
        }
    }
    ctx->pc = 0x1D2EC8u;
    // 0x1d2ec8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d2ecc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d2eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d2ed0: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x1d2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1d2ed4: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x1d2ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d2ed8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2edc: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1d2edcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2ee0: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x1d2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d2ee4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d2ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d2ee8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d2eec: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d2eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d2ef0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1d2ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1d2ef4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2ef8: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1d2ef8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2efc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d2efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d2f00: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d2f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d2f04: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d2f04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d2f08: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1d2f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2f0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d2f0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d2f10: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1d2f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1d2f14: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x1d2f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d2f18: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d2f18u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d2f1c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x1d2f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_1d2f20:
    // 0x1d2f20: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d2f20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d2f24: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1d2f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d2f28: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1d2f28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1d2f2c: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x1d2f2cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x1d2f30: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1d2f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d2f34: 0x1440ff72  bnez        $v0, . + 4 + (-0x8E << 2)
    ctx->pc = 0x1D2F34u;
    {
        const bool branch_taken_0x1d2f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F34u;
        // 0x1d2f38: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f34) {
            ctx->pc = 0x1D2D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2d00;
        }
    }
    ctx->pc = 0x1D2F3Cu;
    // 0x1d2f3c: 0x0  nop
    ctx->pc = 0x1d2f3cu;
    // NOP
label_1d2f40:
    // 0x1d2f40: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1d2f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1d2f44: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1d2f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d2f48: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d2f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d2f4c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1d2f4cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d2f50: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d2f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d2f54: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1d2f54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d2f58: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d2f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d2f5c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1d2f5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d2f60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d2f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d2f64: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1d2f64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d2f68: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1d2f68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d2f6c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d2f6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d2f70: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x1d2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x1d2f74: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d2f74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d2f78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d2f78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2f7c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d2f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d2f80: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d2f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2f84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d2f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2f88: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d2f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d2f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F8Cu;
        // 0x1d2f90: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2F94u;
}
