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

// Function: sub_001D3150
// Address: 0x1d3150 - 0x1d34bc
void sub_001D3150_0x1d3150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3150_0x1d3150");
#endif

    switch (ctx->pc) {
        case 0x1d3220u: goto label_1d3220;
        case 0x1d322cu: goto label_1d322c;
        case 0x1d3268u: goto label_1d3268;
        case 0x1d327cu: goto label_1d327c;
        default: break;
    }

    ctx->pc = 0x1d3150u;

    // 0x1d3150: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1d3150u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d3154: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d3154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3158: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1d3158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1d315c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d315cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1d3160: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1d3160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1d3164: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1d3164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1d3168: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1d3168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1d316c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x1d316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x1d3170: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1d3170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1d3174: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1d3174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1d3178: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d3178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d317c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d317cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3180: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d3180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d3184: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1d3184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1d3188: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d3188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d318c: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1d318cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d3190: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1d3190u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1d3194: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d3194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d3198: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d3198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d319c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d31a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d31a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1d31a4: 0x59883  sra         $s3, $a1, 2
    ctx->pc = 0x1d31a4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 2));
    // 0x1d31a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d31a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d31ac: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1d31acu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1d31b0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1d31b0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d31b4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d31b4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d31b8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d31b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d31bc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d31bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d31c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d31c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d31c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d31c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d31c8: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x1d31c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
    // 0x1d31cc: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x1d31ccu;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
    // 0x1d31d0: 0xafa500fc  sw          $a1, 0xFC($sp)
    ctx->pc = 0x1d31d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 5));
    // 0x1d31d4: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x1d31d4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
    // 0x1d31d8: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1d31d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d31dc: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x1d31dcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x1d31e0: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x1d31e0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x1d31e4: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x1d31e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1d31e8: 0x0  nop
    ctx->pc = 0x1d31e8u;
    // NOP
    // 0x1d31ec: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1d31ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d31f0: 0x1020009b  beqz        $at, . + 4 + (0x9B << 2)
    ctx->pc = 0x1D31F0u;
    {
        const bool branch_taken_0x1d31f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31F0u;
        // 0x1d31f4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31f0) {
            ctx->pc = 0x1D3460u;
            goto label_1d3460;
        }
    }
    ctx->pc = 0x1D31F8u;
    // 0x1d31f8: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1d31f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1d31fc: 0x138840  sll         $s1, $s3, 1
    ctx->pc = 0x1d31fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1d3200: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d3200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3204: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x1d3204u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3208: 0x13b880  sll         $s7, $s3, 2
    ctx->pc = 0x1d3208u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1d320c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d320cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d3210: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1d3210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1d3214: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x1d3214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x1d3218: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d3218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d321c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1d321cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1d3220:
    // 0x1d3220: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1d3220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1d3224: 0xc07637c  jal         func_1D8DF0
    ctx->pc = 0x1D3224u;
    SET_GPR_U32(ctx, 31, 0x1D322Cu);
    ctx->pc = 0x1D3228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3224u;
    // 0x1d3228: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8DF0u, 0x1D3224u, 0x1D322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D322Cu;
label_1d322c:
    // 0x1d322c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1d322cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1d3230: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x1d3230u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d3234: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x1d3234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3238: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1d3238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d323c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d323cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3240: 0x2f100  sll         $fp, $v0, 4
    ctx->pc = 0x1d3240u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d3244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3248: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x1d3248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x1d324c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d324cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1d3250: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x1d3250u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x1d3254: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x1d3254u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x1d3258: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x1d3258u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d325c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1d325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d3260: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D3260u;
    SET_GPR_U32(ctx, 31, 0x1D3268u);
    ctx->pc = 0x1D3264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3260u;
    // 0x1d3264: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D3260u, 0x1D3268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3268u;
label_1d3268:
    // 0x1d3268: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1d3268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1d326c: 0x2bef021  addu        $fp, $s5, $fp
    ctx->pc = 0x1d326cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x1d3270: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d3270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3274: 0xc076690  jal         func_1D9A40
    ctx->pc = 0x1D3274u;
    SET_GPR_U32(ctx, 31, 0x1D327Cu);
    ctx->pc = 0x1D3278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3274u;
    // 0x1d3278: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A40u, 0x1D3274u, 0x1D327Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D327Cu;
label_1d327c:
    // 0x1d327c: 0x14182a  slt         $v1, $zero, $s4
    ctx->pc = 0x1d327cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1d3280: 0x293102a  slt         $v0, $s4, $s3
    ctx->pc = 0x1d3280u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1d3284: 0xe6170004  swc1        $f23, 0x4($s0)
    ctx->pc = 0x1d3284u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1d3288: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d3288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d328c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1D328Cu;
    {
        const bool branch_taken_0x1d328c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D328Cu;
        // 0x1d3290: 0xe6160014  swc1        $f22, 0x14($s0) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d328c) {
            ctx->pc = 0x1D3360u;
            goto label_1d3360;
        }
    }
    ctx->pc = 0x1D3294u;
    // 0x1d3294: 0x7a060000  lq          $a2, 0x0($s0)
    ctx->pc = 0x1d3294u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3298: 0x2d41023  subu        $v0, $s6, $s4
    ctx->pc = 0x1d3298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x1d329c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1d329cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d32a0: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1d32a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1d32a4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1d32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1d32a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d32a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d32ac: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d32acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d32b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d32b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d32b4: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x1d32b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d32b8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1d32b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d32bc: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x1d32bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x1d32c0: 0x112140  sll         $a0, $s1, 5
    ctx->pc = 0x1d32c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1d32c4: 0x7bc60000  lq          $a2, 0x0($fp)
    ctx->pc = 0x1d32c4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1d32c8: 0x2a44821  addu        $t1, $s5, $a0
    ctx->pc = 0x1d32c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1d32cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d32ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d32d0: 0x2a32021  addu        $a0, $s5, $v1
    ctx->pc = 0x1d32d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d32d4: 0x2f41823  subu        $v1, $s7, $s4
    ctx->pc = 0x1d32d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x1d32d8: 0x33840  sll         $a3, $v1, 1
    ctx->pc = 0x1d32d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d32dc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1d32dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1d32e0: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x1d32e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x1d32e4: 0x2a34021  addu        $t0, $s5, $v1
    ctx->pc = 0x1d32e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d32e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1d32e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d32ec: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x1d32ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1d32f0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d32f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d32f4: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d32f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d32f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d32f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d32fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d32fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d3300: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1d3300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3304: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3304u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3308: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1d3308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1d330c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1d330cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3310: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x1d3310u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x1d3314: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1d3314u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d3318: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1d3318u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1d331c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x1d331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3320: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3320u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3324: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x1d3324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x1d3328: 0xc5200018  lwc1        $f0, 0x18($t1)
    ctx->pc = 0x1d3328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d332c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d332cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3330: 0xe5200018  swc1        $f0, 0x18($t1)
    ctx->pc = 0x1d3330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 24), bits); }
    // 0x1d3334: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x1d3334u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d3338: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x1d3338u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x1d333c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1d333cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d3340: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1d3340u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1d3344: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1d3344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3348: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3348u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d334c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1d334cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1d3350: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x1d3350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3354: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3354u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3358: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1D3358u;
    {
        const bool branch_taken_0x1d3358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3358u;
        // 0x1d335c: 0xe5000010  swc1        $f0, 0x10($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3358) {
            ctx->pc = 0x1D3440u;
            goto label_1d3440;
        }
    }
    ctx->pc = 0x1D3360u;
label_1d3360:
    // 0x1d3360: 0x1680001f  bnez        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x1D3360u;
    {
        const bool branch_taken_0x1d3360 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3360) {
            ctx->pc = 0x1D33E0u;
            goto label_1d33e0;
        }
    }
    ctx->pc = 0x1D3368u;
    // 0x1d3368: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1d3368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1d336c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D336Cu;
    {
        const bool branch_taken_0x1d336c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d336c) {
            ctx->pc = 0x1D33A0u;
            goto label_1d33a0;
        }
    }
    ctx->pc = 0x1D3374u;
    // 0x1d3374: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d3374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d3378: 0x7aa40000  lq          $a0, 0x0($s5)
    ctx->pc = 0x1d3378u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d337c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d337cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3380: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x1d3380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3384: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1d3384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d3388: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d3388u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x1d338c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d338cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3390: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x1d3390u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d3394: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d3394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3398: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d3398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d339c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d339cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_1d33a0:
    // 0x1d33a0: 0x7aa30000  lq          $v1, 0x0($s5)
    ctx->pc = 0x1d33a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1d33a4: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x1d33a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x1d33a8: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1d33a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d33ac: 0x26e20001  addiu       $v0, $s7, 0x1
    ctx->pc = 0x1d33acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1d33b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d33b4: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d33b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d33b8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1d33b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1d33bc: 0x7aa30010  lq          $v1, 0x10($s5)
    ctx->pc = 0x1d33bcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1d33c0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d33c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d33c4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1d33c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d33c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d33c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d33cc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d33ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d33d0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x1d33d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d33d4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d33d4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d33d8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D33D8u;
    {
        const bool branch_taken_0x1d33d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33D8u;
        // 0x1d33dc: 0xe4800010  swc1        $f0, 0x10($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33d8) {
            ctx->pc = 0x1D3440u;
            goto label_1d3440;
        }
    }
    ctx->pc = 0x1D33E0u;
label_1d33e0:
    // 0x1d33e0: 0x16930017  bne         $s4, $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D33E0u;
    {
        const bool branch_taken_0x1d33e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x1d33e0) {
            ctx->pc = 0x1D3440u;
            goto label_1d3440;
        }
    }
    ctx->pc = 0x1D33E8u;
    // 0x1d33e8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d33e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d33ec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d33ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d33f0: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x1d33f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1d33f4: 0x2a32821  addu        $a1, $s5, $v1
    ctx->pc = 0x1d33f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d33f8: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d33f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d33fc: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1d33fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3400: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x1d3400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1d3404: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1d3404u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3408: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1d3408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d340c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1d340cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1d3410: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x1d3410u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x1d3414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d3414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3418: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1d3418u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d341c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d341cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d3420: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1d3420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1d3424: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1d3424u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1d3428: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1d3428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d342c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d342cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d3430: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1d3430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1d3434: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x1d3434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3438: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1d3438u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1d343c: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x1d343cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_1d3440:
    // 0x1d3440: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d3440u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d3444: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1d3444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1d3448: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1d3448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1d344c: 0x4614ad40  add.s       $f21, $f21, $f20
    ctx->pc = 0x1d344cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x1d3450: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1d3450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d3454: 0x1440ff72  bnez        $v0, . + 4 + (-0x8E << 2)
    ctx->pc = 0x1D3454u;
    {
        const bool branch_taken_0x1d3454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3454u;
        // 0x1d3458: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3454) {
            ctx->pc = 0x1D3220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d3220;
        }
    }
    ctx->pc = 0x1D345Cu;
    // 0x1d345c: 0x0  nop
    ctx->pc = 0x1d345cu;
    // NOP
label_1d3460:
    // 0x1d3460: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1d3460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1d3464: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1d3464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1d3468: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1d3468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1d346c: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1d346cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1d3470: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1d3470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1d3474: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x1d3474u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d3478: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d3478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1d347c: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1d347cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d3480: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d3480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1d3484: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1d3484u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d3488: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d3488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d348c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1d348cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d3490: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d3490u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d3494: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1d3494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x1d3498: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d3498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d349c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1d349cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d34a0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d34a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d34a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1d34a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d34a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d34a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d34ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d34acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d34b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d34b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D34B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D34B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34B4u;
        // 0x1d34b8: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D34B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D34BCu;
}
