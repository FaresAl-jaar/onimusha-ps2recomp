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

// Function: sub_00278310
// Address: 0x278310 - 0x278408
void sub_00278310_0x278310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278310_0x278310");
#endif

    switch (ctx->pc) {
        case 0x27835cu: goto label_27835c;
        case 0x2783e0u: goto label_2783e0;
        default: break;
    }

    ctx->pc = 0x278310u;

    // 0x278310: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x278310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x278314: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x278314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x278318: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x278318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x27831c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x27831cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x278320: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x278320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x278324: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x278324u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278328: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x278328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x27832c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x27832cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278330: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x278330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x278334: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x278334u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278338: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x278338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x27833c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x27833cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278340: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x278340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x278344: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x278344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278348: 0x8cc229c0  lw          $v0, 0x29C0($a2)
    ctx->pc = 0x278348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x27834c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x27834cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278350: 0x94560006  lhu         $s6, 0x6($v0)
    ctx->pc = 0x278350u;
    SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x278354: 0xc0a69a8  jal         func_29A6A0
    ctx->pc = 0x278354u;
    SET_GPR_U32(ctx, 31, 0x27835Cu);
    ctx->pc = 0x278358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278354u;
    // 0x278358: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6A0u, 0x278354u, 0x27835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27835Cu;
label_27835c:
    // 0x27835c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27835cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x278360: 0x32c2ffff  andi        $v0, $s6, 0xFFFF
    ctx->pc = 0x278360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x278364: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x278364u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x278368: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x278368u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x27836c: 0x0  nop
    ctx->pc = 0x27836cu;
    // NOP
    // 0x278370: 0x0  nop
    ctx->pc = 0x278370u;
    // NOP
    // 0x278374: 0x1012  mflo        $v0
    ctx->pc = 0x278374u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x278378: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x278378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27837c: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x27837cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x278380: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x278380u;
    {
        const bool branch_taken_0x278380 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x278380) {
            ctx->pc = 0x278390u;
            goto label_278390;
        }
    }
    ctx->pc = 0x278388u;
    // 0x278388: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x278388u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x27838c: 0x0  nop
    ctx->pc = 0x27838cu;
    // NOP
label_278390:
    // 0x278390: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x278390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x278394: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x278394u;
    {
        const bool branch_taken_0x278394 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x278394) {
            ctx->pc = 0x2783A0u;
            goto label_2783a0;
        }
    }
    ctx->pc = 0x27839Cu;
    // 0x27839c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x27839cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2783a0:
    // 0x2783a0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2783a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2783a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2783a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2783a8: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x2783a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x2783ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2783acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2783b0: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x2783b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x2783b4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2783b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2783b8: 0x306b00ff  andi        $t3, $v1, 0xFF
    ctx->pc = 0x2783b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2783bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2783bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2783c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2783c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2783c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2783c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2783c8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2783c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2783cc: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2783ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2783d0: 0x24e75e30  addiu       $a3, $a3, 0x5E30
    ctx->pc = 0x2783d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24112));
    // 0x2783d4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x2783d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x2783d8: 0xc09de7c  jal         func_2779F0
    ctx->pc = 0x2783D8u;
    SET_GPR_U32(ctx, 31, 0x2783E0u);
    ctx->pc = 0x2783DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2783D8u;
    // 0x2783dc: 0x25085e80  addiu       $t0, $t0, 0x5E80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779F0u, 0x2783D8u, 0x2783E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2783E0u;
label_2783e0:
    // 0x2783e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2783e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2783e4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2783e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2783e8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2783e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2783ec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2783ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2783f0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2783f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2783f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2783f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2783f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2783f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2783fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2783fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278400: 0x3e00008  jr          $ra
    ctx->pc = 0x278400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278400u;
        // 0x278404: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278408u;
}
