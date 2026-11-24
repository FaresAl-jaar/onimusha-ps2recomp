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

// Function: sub_002E5600
// Address: 0x2e5600 - 0x2e5970
void sub_002E5600_0x2e5600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5600_0x2e5600");
#endif

    switch (ctx->pc) {
        case 0x2e56f4u: goto label_2e56f4;
        case 0x2e5704u: goto label_2e5704;
        case 0x2e5720u: goto label_2e5720;
        case 0x2e57b8u: goto label_2e57b8;
        case 0x2e57c8u: goto label_2e57c8;
        case 0x2e57e4u: goto label_2e57e4;
        case 0x2e5800u: goto label_2e5800;
        case 0x2e5878u: goto label_2e5878;
        case 0x2e5888u: goto label_2e5888;
        case 0x2e58a4u: goto label_2e58a4;
        case 0x2e591cu: goto label_2e591c;
        case 0x2e592cu: goto label_2e592c;
        case 0x2e5948u: goto label_2e5948;
        default: break;
    }

    ctx->pc = 0x2e5600u;

    // 0x2e5600: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e5600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e5604: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e5604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2e5608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e560c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2e560cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2e5610: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2e5610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2e5614: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2e5614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5618: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e5618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e561c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2e561cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5620: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e5620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e5624: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2e5624u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5628: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e5628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e562c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e562cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5630: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e5630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e5634: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2e5634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e5638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e563c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2e563cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5640: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2e5640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5644: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2E5644u;
    {
        const bool branch_taken_0x2e5644 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5644u;
        // 0x2e5648: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5644) {
            ctx->pc = 0x2E5668u;
            goto label_2e5668;
        }
    }
    ctx->pc = 0x2E564Cu;
    // 0x2e564c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e564cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5650: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2e5650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5654: 0x0  nop
    ctx->pc = 0x2e5654u;
    // NOP
    // 0x2e5658: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x2e5658u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e565c: 0x4501006a  bc1t        . + 4 + (0x6A << 2)
    ctx->pc = 0x2E565Cu;
    {
        const bool branch_taken_0x2e565c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e565c) {
            ctx->pc = 0x2E5808u;
            goto label_2e5808;
        }
    }
    ctx->pc = 0x2E5664u;
    // 0x2e5664: 0x0  nop
    ctx->pc = 0x2e5664u;
    // NOP
label_2e5668:
    // 0x2e5668: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e566c: 0x0  nop
    ctx->pc = 0x2e566cu;
    // NOP
    // 0x2e5670: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2e5670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5674: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5674u;
    {
        const bool branch_taken_0x2e5674 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5674u;
        // 0x2e5678: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5674) {
            ctx->pc = 0x2E5690u;
            goto label_2e5690;
        }
    }
    ctx->pc = 0x2E567Cu;
    // 0x2e567c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2e567cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e5680: 0x0  nop
    ctx->pc = 0x2e5680u;
    // NOP
    // 0x2e5684: 0x46026836  c.le.s      $f13, $f2
    ctx->pc = 0x2e5684u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5688: 0x4501005f  bc1t        . + 4 + (0x5F << 2)
    ctx->pc = 0x2E5688u;
    {
        const bool branch_taken_0x2e5688 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5688) {
            ctx->pc = 0x2E5808u;
            goto label_2e5808;
        }
    }
    ctx->pc = 0x2E5690u;
label_2e5690:
    // 0x2e5690: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5694: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5698: 0x0  nop
    ctx->pc = 0x2e5698u;
    // NOP
    // 0x2e569c: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x2e569cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e56a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E56A0u;
    {
        const bool branch_taken_0x2e56a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e56a0) {
            ctx->pc = 0x2E56ACu;
            goto label_2e56ac;
        }
    }
    ctx->pc = 0x2E56A8u;
    // 0x2e56a8: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x2e56a8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
label_2e56ac:
    // 0x2e56ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e56acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e56b0: 0x0  nop
    ctx->pc = 0x2e56b0u;
    // NOP
    // 0x2e56b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e56b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e56b8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E56B8u;
    {
        const bool branch_taken_0x2e56b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E56BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E56B8u;
        // 0x2e56bc: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e56b8) {
            ctx->pc = 0x2E56C8u;
            goto label_2e56c8;
        }
    }
    ctx->pc = 0x2E56C0u;
    // 0x2e56c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E56C0u;
    {
        const bool branch_taken_0x2e56c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E56C0u;
        // 0x2e56c4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e56c0) {
            ctx->pc = 0x2E56E8u;
            goto label_2e56e8;
        }
    }
    ctx->pc = 0x2E56C8u;
label_2e56c8:
    // 0x2e56c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e56c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e56cc: 0x0  nop
    ctx->pc = 0x2e56ccu;
    // NOP
    // 0x2e56d0: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2e56d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e56d4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E56D4u;
    {
        const bool branch_taken_0x2e56d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e56d4) {
            ctx->pc = 0x2E56E4u;
            goto label_2e56e4;
        }
    }
    ctx->pc = 0x2E56DCu;
    // 0x2e56dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E56DCu;
    {
        const bool branch_taken_0x2e56dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e56dc) {
            ctx->pc = 0x2E56E8u;
            goto label_2e56e8;
        }
    }
    ctx->pc = 0x2E56E4u;
label_2e56e4:
    // 0x2e56e4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2e56e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2e56e8:
    // 0x2e56e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e56e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56ec: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E56ECu;
    SET_GPR_U32(ctx, 31, 0x2E56F4u);
    ctx->pc = 0x2E56F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E56ECu;
    // 0x2e56f0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E56ECu, 0x2E56F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E56F4u;
label_2e56f4:
    // 0x2e56f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e56f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e56f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e56fc: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E56FCu;
    SET_GPR_U32(ctx, 31, 0x2E5704u);
    ctx->pc = 0x2E5700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E56FCu;
    // 0x2e5700: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E56FCu, 0x2E5704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5704u;
label_2e5704:
    // 0x2e5704: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e5704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5708: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e5708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e570c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e570cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5710: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e5710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5714: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e5714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5718: 0xc0b94ac  jal         func_2E52B0
    ctx->pc = 0x2E5718u;
    SET_GPR_U32(ctx, 31, 0x2E5720u);
    ctx->pc = 0x2E571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5718u;
    // 0x2e571c: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E52B0u, 0x2E5718u, 0x2E5720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5720u;
label_2e5720:
    // 0x2e5720: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2e5720u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2e5724: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5728: 0x0  nop
    ctx->pc = 0x2e5728u;
    // NOP
    // 0x2e572c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2e572cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5730: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5730u;
    {
        const bool branch_taken_0x2e5730 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5730u;
        // 0x2e5734: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5730) {
            ctx->pc = 0x2E5750u;
            goto label_2e5750;
        }
    }
    ctx->pc = 0x2E5738u;
    // 0x2e5738: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5738u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e573c: 0x0  nop
    ctx->pc = 0x2e573cu;
    // NOP
    // 0x2e5740: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x2e5740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5744: 0x45010080  bc1t        . + 4 + (0x80 << 2)
    ctx->pc = 0x2E5744u;
    {
        const bool branch_taken_0x2e5744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5744) {
            ctx->pc = 0x2E5948u;
            goto label_2e5948;
        }
    }
    ctx->pc = 0x2E574Cu;
    // 0x2e574c: 0x0  nop
    ctx->pc = 0x2e574cu;
    // NOP
label_2e5750:
    // 0x2e5750: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5758: 0x0  nop
    ctx->pc = 0x2e5758u;
    // NOP
    // 0x2e575c: 0x460d0836  c.le.s      $f1, $f13
    ctx->pc = 0x2e575cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5760: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5760u;
    {
        const bool branch_taken_0x2e5760 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5760) {
            ctx->pc = 0x2E576Cu;
            goto label_2e576c;
        }
    }
    ctx->pc = 0x2E5768u;
    // 0x2e5768: 0x46006846  mov.s       $f1, $f13
    ctx->pc = 0x2e5768u;
    ctx->f[1] = FPU_MOV_S(ctx->f[13]);
label_2e576c:
    // 0x2e576c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e576cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5770: 0x0  nop
    ctx->pc = 0x2e5770u;
    // NOP
    // 0x2e5774: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e5774u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5778: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5778u;
    {
        const bool branch_taken_0x2e5778 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5778u;
        // 0x2e577c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5778) {
            ctx->pc = 0x2E5788u;
            goto label_2e5788;
        }
    }
    ctx->pc = 0x2E5780u;
    // 0x2e5780: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5780u;
    {
        const bool branch_taken_0x2e5780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5780u;
        // 0x2e5784: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5780) {
            ctx->pc = 0x2E57A8u;
            goto label_2e57a8;
        }
    }
    ctx->pc = 0x2E5788u;
label_2e5788:
    // 0x2e5788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e578c: 0x0  nop
    ctx->pc = 0x2e578cu;
    // NOP
    // 0x2e5790: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x2e5790u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5794: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5794u;
    {
        const bool branch_taken_0x2e5794 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5794) {
            ctx->pc = 0x2E57A4u;
            goto label_2e57a4;
        }
    }
    ctx->pc = 0x2E579Cu;
    // 0x2e579c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E579Cu;
    {
        const bool branch_taken_0x2e579c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e579c) {
            ctx->pc = 0x2E57A8u;
            goto label_2e57a8;
        }
    }
    ctx->pc = 0x2E57A4u;
label_2e57a4:
    // 0x2e57a4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2e57a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_2e57a8:
    // 0x2e57a8: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x2e57a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x2e57ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e57acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57b0: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E57B0u;
    SET_GPR_U32(ctx, 31, 0x2E57B8u);
    ctx->pc = 0x2E57B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E57B0u;
    // 0x2e57b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E57B0u, 0x2E57B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E57B8u;
label_2e57b8:
    // 0x2e57b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e57b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e57bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57c0: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E57C0u;
    SET_GPR_U32(ctx, 31, 0x2E57C8u);
    ctx->pc = 0x2E57C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E57C0u;
    // 0x2e57c4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E57C0u, 0x2E57C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E57C8u;
label_2e57c8:
    // 0x2e57c8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e57c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57cc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e57ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57d0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e57d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57d4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e57d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e57d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57dc: 0xc0b94ac  jal         func_2E52B0
    ctx->pc = 0x2E57DCu;
    SET_GPR_U32(ctx, 31, 0x2E57E4u);
    ctx->pc = 0x2E57E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E57DCu;
    // 0x2e57e0: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E52B0u, 0x2E57DCu, 0x2E57E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E57E4u;
label_2e57e4:
    // 0x2e57e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e57e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e57e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e57ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e57f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57f4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2e57f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e57f8: 0xc0b94ac  jal         func_2E52B0
    ctx->pc = 0x2E57F8u;
    SET_GPR_U32(ctx, 31, 0x2E5800u);
    ctx->pc = 0x2E57FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E57F8u;
    // 0x2e57fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E52B0u, 0x2E57F8u, 0x2E5800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5800u;
label_2e5800:
    // 0x2e5800: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2E5800u;
    {
        const bool branch_taken_0x2e5800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5800) {
            ctx->pc = 0x2E5948u;
            goto label_2e5948;
        }
    }
    ctx->pc = 0x2E5808u;
label_2e5808:
    // 0x2e5808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e580c: 0x0  nop
    ctx->pc = 0x2e580cu;
    // NOP
    // 0x2e5810: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2e5810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5814: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5814u;
    {
        const bool branch_taken_0x2e5814 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5814) {
            ctx->pc = 0x2E5828u;
            goto label_2e5828;
        }
    }
    ctx->pc = 0x2E581Cu;
    // 0x2e581c: 0x46026036  c.le.s      $f12, $f2
    ctx->pc = 0x2e581cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5820: 0x45010023  bc1t        . + 4 + (0x23 << 2)
    ctx->pc = 0x2E5820u;
    {
        const bool branch_taken_0x2e5820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5820) {
            ctx->pc = 0x2E58B0u;
            goto label_2e58b0;
        }
    }
    ctx->pc = 0x2E5828u;
label_2e5828:
    // 0x2e5828: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x2e5828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e582c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E582Cu;
    {
        const bool branch_taken_0x2e582c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E582Cu;
        // 0x2e5830: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e582c) {
            ctx->pc = 0x2E5838u;
            goto label_2e5838;
        }
    }
    ctx->pc = 0x2E5834u;
    // 0x2e5834: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x2e5834u;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
label_2e5838:
    // 0x2e5838: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5838u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e583c: 0x0  nop
    ctx->pc = 0x2e583cu;
    // NOP
    // 0x2e5840: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e5840u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5844: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5844u;
    {
        const bool branch_taken_0x2e5844 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5844) {
            ctx->pc = 0x2E5854u;
            goto label_2e5854;
        }
    }
    ctx->pc = 0x2E584Cu;
    // 0x2e584c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E584Cu;
    {
        const bool branch_taken_0x2e584c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E584Cu;
        // 0x2e5850: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e584c) {
            ctx->pc = 0x2E586Cu;
            goto label_2e586c;
        }
    }
    ctx->pc = 0x2E5854u;
label_2e5854:
    // 0x2e5854: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x2e5854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5858: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E5858u;
    {
        const bool branch_taken_0x2e5858 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5858) {
            ctx->pc = 0x2E5868u;
            goto label_2e5868;
        }
    }
    ctx->pc = 0x2E5860u;
    // 0x2e5860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5860u;
    {
        const bool branch_taken_0x2e5860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5860) {
            ctx->pc = 0x2E586Cu;
            goto label_2e586c;
        }
    }
    ctx->pc = 0x2E5868u;
label_2e5868:
    // 0x2e5868: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x2e5868u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
label_2e586c:
    // 0x2e586c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e586cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5870: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E5870u;
    SET_GPR_U32(ctx, 31, 0x2E5878u);
    ctx->pc = 0x2E5874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5870u;
    // 0x2e5874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E5870u, 0x2E5878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5878u;
label_2e5878:
    // 0x2e5878: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e5878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e587c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e587cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5880: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E5880u;
    SET_GPR_U32(ctx, 31, 0x2E5888u);
    ctx->pc = 0x2E5884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5880u;
    // 0x2e5884: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E5880u, 0x2E5888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5888u;
label_2e5888:
    // 0x2e5888: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e5888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e588c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e588cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5890: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e5890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5894: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2e5894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5898: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2e5898u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e589c: 0xc0b94ac  jal         func_2E52B0
    ctx->pc = 0x2E589Cu;
    SET_GPR_U32(ctx, 31, 0x2E58A4u);
    ctx->pc = 0x2E58A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E589Cu;
    // 0x2e58a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E52B0u, 0x2E589Cu, 0x2E58A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E58A4u;
label_2e58a4:
    // 0x2e58a4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2E58A4u;
    {
        const bool branch_taken_0x2e58a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e58a4) {
            ctx->pc = 0x2E5948u;
            goto label_2e5948;
        }
    }
    ctx->pc = 0x2E58ACu;
    // 0x2e58ac: 0x0  nop
    ctx->pc = 0x2e58acu;
    // NOP
label_2e58b0:
    // 0x2e58b0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2e58b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e58b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2E58B4u;
    {
        const bool branch_taken_0x2e58b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e58b4) {
            ctx->pc = 0x2E58C8u;
            goto label_2e58c8;
        }
    }
    ctx->pc = 0x2E58BCu;
    // 0x2e58bc: 0x46026836  c.le.s      $f13, $f2
    ctx->pc = 0x2e58bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e58c0: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x2E58C0u;
    {
        const bool branch_taken_0x2e58c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e58c0) {
            ctx->pc = 0x2E5948u;
            goto label_2e5948;
        }
    }
    ctx->pc = 0x2E58C8u;
label_2e58c8:
    // 0x2e58c8: 0x460d1036  c.le.s      $f2, $f13
    ctx->pc = 0x2e58c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e58cc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E58CCu;
    {
        const bool branch_taken_0x2e58cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E58D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E58CCu;
        // 0x2e58d0: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e58cc) {
            ctx->pc = 0x2E58D8u;
            goto label_2e58d8;
        }
    }
    ctx->pc = 0x2E58D4u;
    // 0x2e58d4: 0x46006846  mov.s       $f1, $f13
    ctx->pc = 0x2e58d4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[13]);
label_2e58d8:
    // 0x2e58d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e58d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e58dc: 0x0  nop
    ctx->pc = 0x2e58dcu;
    // NOP
    // 0x2e58e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2e58e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e58e4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E58E4u;
    {
        const bool branch_taken_0x2e58e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e58e4) {
            ctx->pc = 0x2E58F4u;
            goto label_2e58f4;
        }
    }
    ctx->pc = 0x2E58ECu;
    // 0x2e58ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E58ECu;
    {
        const bool branch_taken_0x2e58ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E58ECu;
        // 0x2e58f0: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e58ec) {
            ctx->pc = 0x2E590Cu;
            goto label_2e590c;
        }
    }
    ctx->pc = 0x2E58F4u;
label_2e58f4:
    // 0x2e58f4: 0x460d1036  c.le.s      $f2, $f13
    ctx->pc = 0x2e58f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e58f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E58F8u;
    {
        const bool branch_taken_0x2e58f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e58f8) {
            ctx->pc = 0x2E5908u;
            goto label_2e5908;
        }
    }
    ctx->pc = 0x2E5900u;
    // 0x2e5900: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E5900u;
    {
        const bool branch_taken_0x2e5900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5900) {
            ctx->pc = 0x2E590Cu;
            goto label_2e590c;
        }
    }
    ctx->pc = 0x2E5908u;
label_2e5908:
    // 0x2e5908: 0x46001346  mov.s       $f13, $f2
    ctx->pc = 0x2e5908u;
    ctx->f[13] = FPU_MOV_S(ctx->f[2]);
label_2e590c:
    // 0x2e590c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e590cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5914: 0xc0414dc  jal         func_105370
    ctx->pc = 0x2E5914u;
    SET_GPR_U32(ctx, 31, 0x2E591Cu);
    ctx->pc = 0x2E5918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5914u;
    // 0x2e5918: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105370u, 0x2E5914u, 0x2E591Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E591Cu;
label_2e591c:
    // 0x2e591c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e591cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5924: 0xc0414ca  jal         func_105328
    ctx->pc = 0x2E5924u;
    SET_GPR_U32(ctx, 31, 0x2E592Cu);
    ctx->pc = 0x2E5928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5924u;
    // 0x2e5928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105328u, 0x2E5924u, 0x2E592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E592Cu;
label_2e592c:
    // 0x2e592c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2e592cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5930: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e5930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5934: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2e5934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5938: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e5938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e593c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2e593cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5940: 0xc0b94ac  jal         func_2E52B0
    ctx->pc = 0x2E5940u;
    SET_GPR_U32(ctx, 31, 0x2E5948u);
    ctx->pc = 0x2E5944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5940u;
    // 0x2e5944: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E52B0u, 0x2E5940u, 0x2E5948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5948u;
label_2e5948:
    // 0x2e5948: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e5948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e594c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2e594cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e5950: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e5950u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e5954: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e5954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e5958: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e5958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e595c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e595cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5968: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5968u;
        // 0x2e596c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5970u;
}
