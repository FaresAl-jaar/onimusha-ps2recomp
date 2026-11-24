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

// Function: sub_00277FF0
// Address: 0x277ff0 - 0x2780f4
void sub_00277FF0_0x277ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277FF0_0x277ff0");
#endif

    switch (ctx->pc) {
        case 0x278044u: goto label_278044;
        case 0x2780c8u: goto label_2780c8;
        default: break;
    }

    ctx->pc = 0x277ff0u;

    // 0x277ff0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x277ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x277ff4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x277ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x277ff8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x277ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x277ffc: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x277ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x278000: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x278000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x278004: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x278004u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278008: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x278008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x27800c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x27800cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278010: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x278010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x278014: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x278014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278018: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x278018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x27801c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x27801cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278020: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x278020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x278024: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x278024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278028: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x278028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27802c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x27802cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278030: 0x8cc229c0  lw          $v0, 0x29C0($a2)
    ctx->pc = 0x278030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 10688)));
    // 0x278034: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x278034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278038: 0x94570006  lhu         $s7, 0x6($v0)
    ctx->pc = 0x278038u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x27803c: 0xc0a69a8  jal         func_29A6A0
    ctx->pc = 0x27803Cu;
    SET_GPR_U32(ctx, 31, 0x278044u);
    ctx->pc = 0x278040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27803Cu;
    // 0x278040: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6A0u, 0x27803Cu, 0x278044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278044u;
label_278044:
    // 0x278044: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x278044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x278048: 0x32e2ffff  andi        $v0, $s7, 0xFFFF
    ctx->pc = 0x278048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)65535);
    // 0x27804c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27804cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x278050: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x278050u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x278054: 0x0  nop
    ctx->pc = 0x278054u;
    // NOP
    // 0x278058: 0x0  nop
    ctx->pc = 0x278058u;
    // NOP
    // 0x27805c: 0x1012  mflo        $v0
    ctx->pc = 0x27805cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x278060: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x278060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x278064: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x278064u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x278068: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x278068u;
    {
        const bool branch_taken_0x278068 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x278068) {
            ctx->pc = 0x278078u;
            goto label_278078;
        }
    }
    ctx->pc = 0x278070u;
    // 0x278070: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x278070u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x278074: 0x0  nop
    ctx->pc = 0x278074u;
    // NOP
label_278078:
    // 0x278078: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x278078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27807c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27807Cu;
    {
        const bool branch_taken_0x27807c = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x27807c) {
            ctx->pc = 0x278088u;
            goto label_278088;
        }
    }
    ctx->pc = 0x278084u;
    // 0x278084: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x278084u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278088:
    // 0x278088: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x278088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x27808c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x27808cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x278090: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x278090u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x278094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278098: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x278098u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x27809c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x27809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2780a0: 0x306b00ff  andi        $t3, $v1, 0xFF
    ctx->pc = 0x2780a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2780a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2780a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2780a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2780acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780b0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2780b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780b4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2780b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2780b8: 0x24e75da0  addiu       $a3, $a3, 0x5DA0
    ctx->pc = 0x2780b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23968));
    // 0x2780bc: 0x25085df0  addiu       $t0, $t0, 0x5DF0
    ctx->pc = 0x2780bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24048));
    // 0x2780c0: 0xc09de7c  jal         func_2779F0
    ctx->pc = 0x2780C0u;
    SET_GPR_U32(ctx, 31, 0x2780C8u);
    ctx->pc = 0x2780C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2780C0u;
    // 0x2780c4: 0xffb60010  sd          $s6, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779F0u, 0x2780C0u, 0x2780C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2780C8u;
label_2780c8:
    // 0x2780c8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2780c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2780cc: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2780ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2780d0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2780d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2780d4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2780d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2780d8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2780d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2780dc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2780dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2780e0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2780e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2780e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2780e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2780e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2780e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2780ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2780ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2780F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2780ECu;
        // 0x2780f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2780ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2780F4u;
}
