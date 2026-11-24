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

// Function: sub_00278100
// Address: 0x278100 - 0x278204
void sub_00278100_0x278100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278100_0x278100");
#endif

    switch (ctx->pc) {
        case 0x278154u: goto label_278154;
        case 0x2781d8u: goto label_2781d8;
        default: break;
    }

    ctx->pc = 0x278100u;

    // 0x278100: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x278100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x278104: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x278104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x278108: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x278108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x27810c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x27810cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x278110: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x278110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x278114: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x278114u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278118: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x278118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x27811c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x27811cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278120: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x278120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x278124: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x278124u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278128: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x278128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x27812c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x27812cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278130: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x278130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x278134: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x278134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278138: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x278138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27813c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x27813cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278140: 0x8cc229c0  lw          $v0, 0x29C0($a2)
    ctx->pc = 0x278140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x278144: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x278144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278148: 0x9457000a  lhu         $s7, 0xA($v0)
    ctx->pc = 0x278148u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x27814c: 0xc0a69b8  jal         func_29A6E0
    ctx->pc = 0x27814Cu;
    SET_GPR_U32(ctx, 31, 0x278154u);
    ctx->pc = 0x278150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27814Cu;
    // 0x278150: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6E0u, 0x27814Cu, 0x278154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278154u;
label_278154:
    // 0x278154: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x278154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x278158: 0x32e2ffff  andi        $v0, $s7, 0xFFFF
    ctx->pc = 0x278158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x27815c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27815cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x278160: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x278160u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x278164: 0x0  nop
    ctx->pc = 0x278164u;
    // NOP
    // 0x278168: 0x0  nop
    ctx->pc = 0x278168u;
    // NOP
    // 0x27816c: 0x1012  mflo        $v0
    ctx->pc = 0x27816cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x278170: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x278170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x278174: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x278174u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x278178: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x278178u;
    {
        const bool branch_taken_0x278178 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x278178) {
            ctx->pc = 0x278188u;
            goto label_278188;
        }
    }
    ctx->pc = 0x278180u;
    // 0x278180: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x278180u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x278184: 0x0  nop
    ctx->pc = 0x278184u;
    // NOP
label_278188:
    // 0x278188: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x278188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27818c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27818Cu;
    {
        const bool branch_taken_0x27818c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x27818c) {
            ctx->pc = 0x278198u;
            goto label_278198;
        }
    }
    ctx->pc = 0x278194u;
    // 0x278194: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x278194u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278198:
    // 0x278198: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x278198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x27819c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x27819cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2781a0: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x2781a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x2781a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2781a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2781a8: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x2781a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x2781ac: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2781acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2781b0: 0x306b00ff  andi        $t3, $v1, 0xFF
    ctx->pc = 0x2781b0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2781b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2781b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2781b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2781bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781c0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2781c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781c4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2781c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2781c8: 0x24e75f50  addiu       $a3, $a3, 0x5F50
    ctx->pc = 0x2781c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24400));
    // 0x2781cc: 0x25085fa0  addiu       $t0, $t0, 0x5FA0
    ctx->pc = 0x2781ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24480));
    // 0x2781d0: 0xc09de7c  jal         func_2779F0
    ctx->pc = 0x2781D0u;
    SET_GPR_U32(ctx, 31, 0x2781D8u);
    ctx->pc = 0x2781D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2781D0u;
    // 0x2781d4: 0xffb60010  sd          $s6, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779F0u, 0x2781D0u, 0x2781D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2781D8u;
label_2781d8:
    // 0x2781d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2781d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2781dc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2781dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2781e0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2781e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2781e4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2781e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2781e8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2781e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2781ec: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2781ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2781f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2781f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2781f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2781f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2781f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2781f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2781fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2781FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2781FCu;
        // 0x278200: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2781FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278204u;
}
